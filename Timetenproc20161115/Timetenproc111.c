
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[15];
};
static const struct sqlcxp sqlfpn =
{
    14,
    "Timetenproc.pc"
};


static unsigned int sqlctx = 1296099;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
            void  *sqhstv[4];
   unsigned int   sqhstl[4];
            int   sqhsts[4];
            void  *sqindv[4];
            int   sqinds[4];
   unsigned int   sqharm[4];
   unsigned int   *sqharc[4];
   unsigned short  sqadto[4];
   unsigned short  sqtdso[4];
} sqlstm = {12,4};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4130,1,0,0,
5,0,0,1,91,0,3,26,0,0,0,0,0,1,0,
20,0,0,2,0,0,29,45,0,0,0,0,0,1,0,
35,0,0,3,0,0,30,47,0,0,0,0,0,1,0,
50,0,0,0,0,0,27,83,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,10,0,0,
81,0,0,5,0,0,32,111,0,0,0,0,0,1,0,
};


#include <stdio.h>  
#include <stdlib.h>  
  
#include <process.h>   
#include <errno.h>   

#include <string.h>
#include <windows.h>
#include "common.h"
#include  "mqcmn.h"
//#include "data_analysis.h"

//EXEC SQL INCLUDE SQLCA;  
#include <sqlca.h>  
void sql_error(char *msg);
int connect_Timesten();
void data_analysis();
 
int main(int argc, char* argv[])  
{
	int i;
	char cmd_sub_routine[30];/*存放CMD子进程名称*/
	int year = 2016;
	int month = 3;
	int day = 2;
	int hour = 0;
	int min = 0;
	int sec = 0;
	getDateTime(&year, &month, &day, &hour, &min, &sec);
	strcpy(cmd_sub_routine, "bjcmd2016");	/*数据处理子程序名称*/
	strcpy(configfile, "cmddp.cfg");		/*设置程序配置文件名称*/
	printf("\n\n\n\n");
	printf("\t************************************************************\n");
	printf("\t*                         欢  迎  使  用                   *\n");
	printf("\t*                   中国机车远程监测与诊断系统             *\n");
	printf("\t*                      TIMESTEN入库数据解析                *\n");
	printf("\t*                         version test1.0                  *\n");
	printf("\t*                     %04d-%02d-%02d %02d:%02d:%02d                  *\n",
		year,
		month,
		day,
		hour,
		min,
		sec);
	printf("\t************************************************************\n");
	printf("\n\n\n\n");

	_mkdir("./log");	/*数据处理程序日志文件存放在log目录*/
	chmod("./log", 0x0100 | 0x0080 | 0x0040);
	cclog('i', "\n\n\n\t\t\t\t Timesten入库数据解析程序启动。。。。。。\n");
	sprintf(sub_routine, "%s-%d", cmd_sub_routine, 1);
	init_read_configfile(0, configfile, sub_routine);

	//printf("连接数据库开始.....\n");   	
	//connect_Timesten();

	for(i = 1; i<1;i++)
	{
		int tmp = i;
		printf("id values:%d\n",tmp);
		/* EXEC SQL INSERT INTO timesten_proc(
				id,
				bid,
				did,
				name,
				test)
			VALUES(
				0,
				'232',
				'9999',
				'proc',
				'proc test'); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 0;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into timesten_proc (id,bid,did,name,test) values (0,\
'232','9999','proc','proc test')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )5;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


		if (0 != sqlca.sqlcode) 
		{
			printf("插入timesten_proc失败.[%d],[%s].\n", sqlca.sqlcode,sqlca.sqlerrm.sqlerrmc);
		}
		Sleep(5000);
	}
	//提交
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 0;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )20;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	// 断开连接
    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 0;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )35;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

	InitMQ();
	printf("test\n");

	/*deal_Socketdata(cmd_sub_routine,configfile);*/
	//init_oracle(sub_routine, configfile);

	cclog('i', "数据处理子进程成功启动!\n");

	//getbasicInfo();
	data_analysis();
	Sleep(5000);
    return 0;  
} 

int connect_Timesten()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
  
    char myusername[20], mypassword[20], myserver[20];  
    /* EXEC SQL END DECLARE SECTION; */ 
  
  
	//连接方法一
	/*
    printf( "\n请输入用户名：" ); 
	gets( (char*)myusername );  
    //gets( (char*)myusername.arr );  
    //myusername.len = (unsigned short) strlen( (char*)myusername.arr );  
    printf( "\n请输入口令：" );  
    gets( (char*)mypassword ); 
    //gets( (char*)mypassword.arr );  
    //mypassword.len = (unsigned short) strlen( (char*)mypassword.arr );  
    printf("\n请输入服务器名：");  
    gets( (char*)myserver );  
    //gets( (char*)myserver.arr );  
    //myserver.len = (unsigned short) strlen( (char*)myserver.arr );  
	*/
	
	//连接方法二	
    memset(myusername, 0x00, sizeof(myusername));
    memset(mypassword, 0x00, sizeof(mypassword));
    memset(myserver, 0x00, sizeof(myserver));
	//strcpy(myusername,"bjcmd");
	//strcpy(mypassword,"timesten");
	//strcpy(myserver,"timesten_cli");
	printf("user = %s,pass = %s,tname = %s",user,pass,tname);
	Sleep(1000);
	strcpy(myusername, user);
	strcpy(mypassword, pass);
	strcpy(myserver,tname);
		
    //EXEC SQL WHENEVER SQLERROR DO sql_error("ORACLE error--\n");
    /* EXEC SQL CONNECT :myusername IDENTIFIED BY :mypassword USING :myserver; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )10;
    sqlstm.offset = (unsigned int  )50;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)myusername;
    sqlstm.sqhstl[0] = (unsigned int  )20;
    sqlstm.sqhsts[0] = (         int  )20;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)mypassword;
    sqlstm.sqhstl[1] = (unsigned int  )20;
    sqlstm.sqhsts[1] = (         int  )20;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)myserver;
    sqlstm.sqhstl[2] = (unsigned int  )20;
    sqlstm.sqhsts[2] = (         int  )20;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlstm.sqlcmax = (unsigned int )100;
    sqlstm.sqlcmin = (unsigned int )2;
    sqlstm.sqlcincr = (unsigned int )1;
    sqlstm.sqlctimeout = (unsigned int )0;
    sqlstm.sqlcnowait = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

  
      
    if(sqlca.sqlcode == 0 )  
	{
		printf (" \n用户%s成功地连接到了服务器%s上！\n" , myusername, myserver);
        //printf (" \n用户%s成功地连接到了服务器%s上！\n" , myusername.arr, myserver.arr); 
	}  
    else  
	{
        printf("\n连接数据库失败,退出程序: %ld,%s\n", sqlca.sqlcode,(char *)sqlca.sqlerrm.sqlerrmc);  
	}	

	return 0;
}

void data_analysis()
{
	char chCmd;/*获取键盘字符*/
	time_t preunixtime;
	time_t nowunixtime;
	int tmp_count = 0;                  /*从MQ中读出进行处理的记录数*/
	int indexPos = 0;
	int length = 0;                   /*用来存放每包数据的长度变量*/
	int totallen;                   /*从MQ中读取数据的长度*/
	int buf_len, idx;
	int bStarting = 1;
	unsigned char rcv_data[409600];
	buf_len = sizeof(rcv_data);
	nowunixtime = time(NULL);
	preunixtime = nowunixtime;

	while (1)
	{
		tmp_count = 0;
		indexPos = 0;
		if (_kbhit())
		{
			chCmd = getchar();
			if (('q' == chCmd) || ('Q' == chCmd))
			{
				printf("The data analizer has exited...\n");
				break;
			}
			else
			{
				//setDispSwitch(chCmd);
			}
		}

		if (Queue[0].LData[0] == MQHO_UNUSABLE_HOBJ)
		{
			if (bStarting)
			{
				bStarting = 0;
			}
			else
			{              
				Sleep(1000);
			}

			//连接队列管理器，打开4个队列
			if (0 == OpenQueue(&Queue[MQ_MANAGER]))
			{
				for (idx = 1; idx < 4; idx++)
					OpenQueue(&Queue[idx]);
			}
		}
		else
		{
			memset(rcv_data, 0, buf_len);
			totallen = 0;
			totallen = ReadQueue(&Queue[MQ_FROMJCMDQ], rcv_data, buf_len);
			if (totallen > 0)
			{
				printf("totallen = %d \n", totallen);
				//gloab_3g_usednum = 0;
				//gloab_bd_usednum = 0;
				//gloab_fault_usednum = 0;
				//gloab_event_usednum = 0;

				while (indexPos < (totallen - 40))
				{
					length = charToint(rcv_data + indexPos + 2, 2);
					if (length < 40)
					{
						break;
					}
					else
					{
						printf("parse_start! \n");
						//parse_start(rcv_data + indexPos, length);
					}

					indexPos += length;
					tmp_count++;
				}

				//if (checknum >= CHECKNUM)
				//{
				//	checknum = 0;
				//	thread_conncheck();
				//}
				//else
				//{
				//	checknum++;
				//}

				//if (disp.r)
				//{
				//	printf("已处理<%d>条数据<%d>条实时,<%d>条北斗,<%d>条故障<%d>条事件\n\n",
				//		tmp_count, gloab_3g_usednum, gloab_bd_usednum, gloab_fault_usednum, gloab_event_usednum);
				//}

				//insertFAULTHandle();
				//insertEVENTHandle();
				//insert3GHandle();
				//insertBDHandle();

				//nowunixtime = time(NULL);
				//if ((nowunixtime - preunixtime) >= CHECKTIME)
				//{
				//	updateTrainStatus();
				//	preunixtime = nowunixtime;
				//}
			}
		}
	}
}

//void sql_error(char *msg)
//{
//    char err_msg[128];
//    size_t buf_len, msg_len;
//
//    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 
//
//
//    printf("\nERR msg:%s\n", msg);
//    buf_len = sizeof (err_msg);
//    sqlglm((unsigned char *) err_msg, &buf_len, &msg_len);
//    printf("%.*s\n", (int) msg_len, err_msg);
//
//    /* EXEC SQL ROLLBACK RELEASE; */ 
//
//{
//    struct sqlexd sqlstm;
//    sqlstm.sqlvsn = 12;
//    sqlstm.arrsiz = 4;
//    sqlstm.sqladtp = &sqladt;
//    sqlstm.sqltdsp = &sqltds;
//    sqlstm.iters = (unsigned int  )1;
//    sqlstm.offset = (unsigned int  )81;
//    sqlstm.cud = sqlcud0;
//    sqlstm.sqlest = (unsigned char  *)&sqlca;
//    sqlstm.sqlety = (unsigned short)4352;
//    sqlstm.occurs = (unsigned int  )0;
//    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
//}
//
//
//
//	Sleep(8000);
//    exit(EXIT_FAILURE);
//}