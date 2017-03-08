#include <string.h>
#include "mqcmn.h"
//void InitQueue(QUEUE* pQueue);

int InitMQ()
{
	InitQueue(&Queue[MQ_MANAGER]);
	Queue[MQ_MANAGER].LData[3] = 1;
	strcpy(Queue[MQ_MANAGER].Name, qmname);
	InitQueue(&Queue[MQ_FROMJCMDQ]);
	Queue[MQ_FROMJCMDQ].LData[4] = MQOO_INPUT_AS_Q_DEF + MQOO_FAIL_IF_QUIESCING;
	strcpy(Queue[MQ_FROMJCMDQ].Name,revqname);
	InitQueue(&Queue[MQ_TOHISTORYQ]);
	Queue[MQ_TOHISTORYQ].LData[4] = MQOO_OUTPUT + MQOO_FAIL_IF_QUIESCING;
	strcpy(Queue[MQ_TOHISTORYQ].Name, mongoqname);
	InitQueue(&Queue[MQ_TOFAULTQ]);
	Queue[MQ_TOFAULTQ].LData[4] = MQOO_OUTPUT + MQOO_FAIL_IF_QUIESCING;
	strcpy(Queue[MQ_TOFAULTQ].Name, faultqname);
	printf("InitMQ end \n");
	return 0;
}

void InitQueue(QUEUE* pQueue)
{
	pQueue->LData[0]=MQHO_UNUSABLE_HOBJ;
	pQueue->LData[1]=0;
	pQueue->LData[2]=0;
	pQueue->LData[3]=0;
	pQueue->LData[4]=0;
	//memset(pQueue->Name, 0, sizeof(pQueue->Name));
}

int OpenQueue(QUEUE* pQueue)
{
	MQOD     od = {MQOD_DEFAULT};
    unsigned char tmp[100] = {0};
	if(pQueue->LData[3]==1)
	{
		MQCONN(	pQueue->Name,&pQueue->LData[0],&pQueue->LData[1],&pQueue->LData[2]);
		if (pQueue->LData[1] == MQCC_FAILED)
		{
            sprintf(tmp, "Open MQ Manager %s failed! (ErrorCode: %d)\n", pQueue->Name, (int)pQueue->LData[2]);
#ifdef UNIX_LINUX_DEBUG
            printf("%s", tmp);
#endif
            cclog('e', tmp);
			return -1; 
		}
        sprintf(tmp, "MQ Manager %s open\n", pQueue->Name);
#ifdef UNIX_LINUX_DEBUG
        printf("%s", tmp);
#endif
        cclog('i', tmp);
		return 0;
	}	
	strcpy(od.ObjectName, pQueue->Name);
	MQOPEN(Queue[0].LData[0],	

		  &od,

		  pQueue->LData[4],

		  &pQueue->LData[0],

		  &pQueue->LData[1],

		  &pQueue->LData[2]);	

	if ((pQueue->LData[2] != MQRC_NONE) || (pQueue->LData[1] == MQCC_FAILED))

	{

        sprintf(tmp, "Open MQ Queue %s failed! (ErrorCode: %d)\n",

                pQueue->Name, (int)pQueue->LData[2]);

#ifdef UNIX_LINUX_DEBUG

        printf("%s", tmp);

#endif

        cclog('e', tmp);

		CloseQueue(&Queue[MQ_MANAGER]);
		return -1;
	}

    sprintf(tmp, "MQ Queue %s open\n", pQueue->Name);

#ifdef UNIX_LINUX_DEBUG

    printf("%s", tmp);

#endif
    cclog('i', tmp);
	return 0;
}

void CloseQueue(QUEUE* pQueue)
{			
	MQLONG options = MQCO_NONE;

	int idx;

	if(pQueue->LData[0] == MQHO_UNUSABLE_HOBJ) return;
	MQDISC(	&pQueue->LData[0], &pQueue->LData[1], &pQueue->LData[2]);
	pQueue->LData[0]=MQHO_UNUSABLE_HOBJ; 
	// 2015-07-19 添加下面代码，防止队列管理器失效重启后不再打开队列问题 
	for(idx=1; idx<4; idx++)
	{
		Queue[idx].LData[0]=MQHO_UNUSABLE_HOBJ;
	}
}

int ReadQueue(QUEUE* pQueue, char* buf, int bufSize)
{
	MQGMO    gmo = {MQGMO_DEFAULT};
	MQMD     md = { MQMD_DEFAULT };
	MQLONG   readBytes = 0;
	gmo.Options = MQGMO_NO_WAIT;

	memcpy(md.MsgId, MQMI_NONE, sizeof(md.MsgId));

	memcpy(md.CorrelId, MQCI_NONE, sizeof(md.CorrelId));

	md.Encoding = MQENC_NATIVE;

	md.CodedCharSetId = MQCCSI_Q_MGR;

	MQGET(Queue[0].LData[0],	

		pQueue->LData[0],	

		&md, 

		&gmo, 

		bufSize, 

		buf, 

		&readBytes, 

		&pQueue->LData[1], 

		&pQueue->LData[2]);	 	

	

	if(pQueue->LData[2] == MQRC_NONE) return readBytes;

	if(pQueue->LData[2] == MQRC_NO_MSG_AVAILABLE) return 0;

	

	CloseQueue(&Queue[MQ_MANAGER]);



	return -1;	

}

int WriteQueue(QUEUE* pQueue, char* buf, int len)
{

	char strHint[256];



	MQMD     md = { MQMD_DEFAULT };

	MQPMO	 pmo = { MQPMO_DEFAULT };



	memcpy(md.Format, MQFMT_NONE, (size_t)MQ_FORMAT_LENGTH);

	memcpy(md.MsgId, qmname, strlen(qmname));

	memcpy(md.CorrelId, MQCI_NONE, sizeof(md.CorrelId));



	md.Expiry = 72000;



	MQPUT(Queue[0].LData[0],

		pQueue->LData[0],

		&md,

		&pmo,

		len,

		buf,

		&pQueue->LData[1],

		&pQueue->LData[2]);



	//printf("W %s[%d]\n", pQueue->Name, pQueue->LData[2]);

	/*

	if(D.debug && pQueue == &Queue[MQ_TOCMDQ])

	{

	sprintf(strHint, "W %s[%d]", pQueue->Name, pQueue->LData[2]);



	LogData(strHint, buf, len);

	}

	*/

	if (pQueue->LData[2] == MQRC_NONE)

	{

		return 1;

	}



	CloseQueue(&Queue[MQ_MANAGER]);

	return 0;

}

void InitBuffer(BUFFER* pBuffer)

{

	pBuffer->Len=0;

	memset(pBuffer->Buf, 0, MAXBUFSIZE); 

}

void WriteBuffer(BUFFER* pBuffer, char* pData, long lLen)
{

	memcpy(pBuffer->Buf+pBuffer->Len, pData, lLen);	

	pBuffer->Len+=lLen;

}
