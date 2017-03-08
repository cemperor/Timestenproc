#ifndef _ZENDO_IMQ_H_

#define _ZENDO_IMQ_H_

#include <stdio.h>
#include <time.h>
#include  "common.h"
//#include "cmqc.h"
#include "cmqc.h"

struct MQQUEUE{
	long	LData[5];	//0: Handle, 1: CompleteCode, 2: Reason, 3: Type(1=manager, 0=Queue), 4: Open Options

	char	Name[32];
};

#define MQ_MANAGER		0x00

#define MQ_FROMJCMDQ	0x01

#define MQ_TOHISTORYQ	0x02

#define MQ_TOFAULTQ		0x03

typedef struct MQQUEUE QUEUE;

QUEUE Queue[4];

void InitQueue(QUEUE* pQueue);

int OpenQueue(QUEUE* pQueue);

void CloseQueue(QUEUE* pQueue);

int ReadQueue(QUEUE* pQueue, char* buf, int bufSize);

int WriteQueue(QUEUE* pQueue, char* buf, int len);

int InitMQ();

#define MAXBUFSIZE	256*1024

time_t gWriteToCmdQTime, gWriteToGprsQTime;

struct MQBUFFER
{

	long	Len;

	char	Buf[MAXBUFSIZE];

};

typedef struct MQBUFFER BUFFER;

BUFFER	ToGprsBuf, ToCmdBuf, ToCmdtestBuf, ToHXD3CBuf,ToHXD3DBuf, ToCMDQTBuf, ToCMDZZBuf;

time_t gWriteToCmdQTime, gWriteToGprsQTime;

time_t gWriteTOHXD3CQTime,gWriteTOHXD3DQTime, gWriteTCMDQTQTime, gWriteTCMDZZQTime;

void InitBuffer(BUFFER* pBuffer);

void WriteBuffer(BUFFER* pBuffer, char* pData, long lLen);

#endif	//_ZENDO_IMQ_H_

