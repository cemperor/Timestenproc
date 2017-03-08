
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
           char  filnam[9];
};
static const struct sqlcxp sqlfpn =
{
    8,
    "dmain.pc"
};


static unsigned int sqlctx = 17915;


static struct sqlexd {
   unsigned long  sqlvsn;
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
   unsigned char  **sqphsv;
   unsigned long  *sqphsl;
            int   *sqphss;
            short **sqpind;
            int   *sqpins;
   unsigned long  *sqparm;
   unsigned long  **sqparc;
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
   unsigned char  *sqhstv[79];
   unsigned long  sqhstl[79];
            int   sqhsts[79];
            short *sqindv[79];
            int   sqinds[79];
   unsigned long  sqharm[79];
   unsigned long  *sqharc[79];
   unsigned short  sqadto[79];
   unsigned short  sqtdso[79];
} sqlstm = {12,79};

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
extern void sqliem(char *, int *);

 static const char *sq0001 = 
"select idx ,trim(t_type_id) ,trim(loco_no) ,cc ,driverno ,trim(drivername) \
,to_char(nvl(pass_boundary_time,to_date('2000-01-01 00:00:00','yyyy-mm-dd hh2\
4:mi:ss')),'yyyy-mm-dd hh24:mi:ss') ,to_char(nvl(update_time,to_date('2000-01\
-01 00:00:00','yyyy-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss') ,trim(last_b\
id) ,trim(next_bid) ,sjsd ,tmis_station_no ,trim(tmis_station_name)  from ap_\
train_cur_boundary            ";

 static const char *sq0002 = 
"select idx ,t_type_id ,loco_no ,cc ,driverno ,drivername ,to_char(nvl(pass_\
boundary_time,to_date('2000-01-01 00:00:00','yyyy-mm-dd hh24:mi:ss')),'yyyy-m\
m-dd hh24:mi:ss') ,to_char(nvl(update_time,to_date('2000-01-01 00:00:00','yyy\
y-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss') ,last_bid ,next_bid ,sjsd ,tmi\
s_station_no ,tmis_station_name  from ap_train_cur_boundary            ";

 static const char *sq0003 = 
"select CODE ,CODEV2 ,T_TYPE_ID ,NAME2 ,GRADE2 ,CODESHOW  from BASIC_TCMSFAU\
LTCODE            ";

 static const char *sq0004 = 
"yy-mm-dd hh24:mi:ss')),'yyyy-mm-dd h\
h24:mi:ss') ,LKJ_DATA_VER ,LKJ_SOFT_VER ,LDP_CPU_VER ,LDP_WXTX_VER ,FHJLQ_VER\
 ,WLJKB_VER ,TCMS_VER1 ,TCMS_VER2 ,TCMS_VER3 ,TCMS_VER4 ,SIXA_CPUVER ,B_BOUND\
ARY_NAME ,TMIS_STATION_NO ,to_char(nvl(PASS_BOUNDARY_TIME,to_date('2000-01-01\
 00:00:01','yyyy-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss') ,CUR_BID ,PROVE\
RSELFCHECK ,COMP  from VIEW_LDPLISTFORPARSE            ";

 static const char *sq0005 = 
"select WORKID ,BID ,BSNAME ,BFNAME ,DID ,DSNAME ,DFNAME ,HNAME ,MOBILENUMBE\
R  from view_persons            ";

 static const char *sq0006 = 
"select CODE ,NAME ,GRADE ,CODESHOW  from BASIC_6AFAULTCODE            ";

 static const char *sq0007 = 
"select CODE ,NAME ,GRADE  from BASIC_LDPFAULTCODE            ";

 static const char *sq0008 = 
"select CODEID ,ENAME ,EGRADE  from basic_event_type            ";

 static const char *sq0009 = 
"select B_ID ,CROSS_ROAD_NO ,TRAIN_STATION_NO ,TMIS_STATION_NO ,TRAIN_STATIO\
N_NAME ,TMIS_STATION_NAME ,TRAIN_LINE_NO ,TRAIN_LINE_NAME ,STATION_B_ID ,ISBO\
UNDARY ,SSJ ,LJ  from VIEW_TRAINSTATIONS            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4274,852,0,0,
5,0,0,1,413,0,9,211,0,0,0,0,0,1,0,
20,0,0,1,0,0,13,214,0,0,13,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,3,0,0,
2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,4,0,0,2,3,0,0,2,97,0,0,
87,0,0,2,377,0,9,300,0,0,0,0,0,1,0,
102,0,0,2,0,0,13,303,0,0,13,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,3,0,
0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,4,0,0,2,3,0,0,2,97,0,0,
169,0,0,3,93,0,9,344,0,0,0,0,0,1,0,
184,0,0,3,0,0,13,347,0,0,6,0,0,1,0,2,3,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,3,0,0,2,
97,0,0,
223,0,0,4,1423,0,9,473,0,0,0,0,0,1,0,
238,0,0,4,0,0,13,476,0,0,79,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,3,0,0,2,97,0,
0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,
0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,
97,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,97,0,0,2,3,0,0,2,97,0,0,2,3,0,0,2,97,
0,0,2,68,0,0,2,97,0,0,2,97,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,3,0,0,2,3,0,0,
2,4,0,0,2,3,0,0,2,3,0,0,2,97,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,4,0,0,2,4,0,0,2,4,0,
0,2,4,0,0,2,4,0,0,2,97,0,0,2,97,0,0,2,68,0,0,2,97,0,0,2,97,0,0,2,3,0,0,2,97,0,
0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,4,0,0,2,3,0,0,
2,3,0,0,2,3,0,0,2,3,0,0,2,4,0,0,2,97,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,3,0,0,2,3,
0,0,
569,0,0,4,0,0,15,612,0,0,0,0,0,1,0,
584,0,0,5,107,0,9,617,0,0,0,0,0,1,0,
599,0,0,5,0,0,13,621,0,0,9,0,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,
2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,
650,0,0,5,0,0,15,643,0,0,0,0,0,1,0,
665,0,0,6,70,0,9,651,0,0,0,0,0,1,0,
680,0,0,6,0,0,13,654,0,0,4,0,0,1,0,2,3,0,0,2,97,0,0,2,3,0,0,2,97,0,0,
711,0,0,6,0,0,15,676,0,0,0,0,0,1,0,
726,0,0,7,61,0,9,680,0,0,0,0,0,1,0,
741,0,0,7,0,0,13,683,0,0,3,0,0,1,0,2,3,0,0,2,97,0,0,2,3,0,0,
768,0,0,7,0,0,15,704,0,0,0,0,0,1,0,
783,0,0,8,63,0,9,709,0,0,0,0,0,1,0,
798,0,0,8,0,0,13,712,0,0,3,0,0,1,0,2,3,0,0,2,97,0,0,2,3,0,0,
825,0,0,8,0,0,15,734,0,0,0,0,0,1,0,
840,0,0,9,204,0,9,752,0,0,0,0,0,1,0,
855,0,0,9,0,0,13,755,0,0,12,0,0,1,0,2,97,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,97,0,0,
2,97,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,3,0,0,2,97,0,0,2,97,0,0,
918,0,0,9,0,0,15,790,0,0,0,0,0,1,0,
933,0,0,10,20,0,4,819,0,0,0,0,0,1,0,
948,0,0,11,0,0,29,823,0,0,0,0,0,1,0,
963,0,0,12,1194,0,5,977,0,0,62,62,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,
3,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,68,0,0,1,97,0,0,1,3,
0,0,1,3,0,0,1,97,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,
1,97,0,0,1,4,0,0,1,97,0,0,1,97,0,0,1,68,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,
1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,
0,1,97,0,0,
1226,0,0,13,0,0,29,1101,0,0,0,0,0,1,0,
};
/*
using MongoDB.Bson;
using MongoDB.Driver;
using MongoDB.Driver.Builders;
using MongoDB.Driver.GridFS;
using MongoDB.Driver.Internal;
using MongoDB.Driver.Linq;
using MongoDB.Driver.Wrappers;
using System.Net;
using System.Threading;
using BrainTechLLC.ThreadSafeObjects;
using System.Web;
using System.IO;

using System.Net.Sockets;
using System.Diagnostics;
using MQUtility;
*/
#include <stdlib.h>
#include <fcntl.h>
#include <locale.h>

#include <WINSOCK.H>
#include <windows.h>
#include <conio.h>

/* 包含OCI头文件*/
#include <oci.h>

/* 包含SQLCA头文件*/
#include <sqlca.h>
#include <sqlcpr.h>

/**/
#include  "common.h"
#include  "mqcmn.h"
#include  "dbcmn.h"
#include "declare.h"
#include "data_analysis.h"
#include "data_insert.h"
#pragma comment (lib, "mqm.lib")

//#ifdef UNIX_LINUX_SYS
//#include <termios.h>
//#include <sys/dir.h>
//#include <sys/unistd.h>
//#include <sys/socket.h>
//#include <netinet/in.h>
//#include<sys/resource.h>
//#else
//
//#include <WINSOCK.H>
//#include <windows.h>
//#include <conio.h>

//#endif



#define CHECKNUM 100 /*校验数据库连接状态用*/

#define CHECKTIME 15 /*更新最新机车状态表用 单位：秒*/

#define CHECKTIME_Boundary (15*60) /*更新最新机车状态表用 单位：秒*/

#define JUDGETIME (5*60)  /*判断机车离线用 单位：秒*/

#define ONE_HOUR_TIME (60*60)  /*判断机车失效用 单位：秒*/



char cmd_sub_routine[30];/*存放CMD子进程名称*/

int precheck_hh=-1;

int precheck_dd=-1;

int checknum = 0;









void creatPersonNode(c_pmap thiz,int tempkey,person_stu* tempstu)/*创建新的司机节点*/

{

	pperson_stu pstu = NULL;

	c_pair	 *pair = NULL;

	int		 *key  = NULL;

	key =(int*)__c_malloc(sizeof(int)); 

	pair = (c_pair*)__c_malloc(sizeof(c_pair));

	pstu = (person_stu*)__c_malloc(sizeof(person_stu));

	

	*key = tempkey;

	memcpy(pstu,tempstu,sizeof(person_stu));

	pair->first = key;

	pair->second = pstu;

	c_map_insert (thiz,pair);

}



void creatTCMSFaultNode(c_pmap thiz,int tempkey,tcmsfault_stu* tempstu)/*创建新的TCMS故障节点*/

{

	ptcmsfault_stu pstu = NULL;

	c_pair	 *pair = NULL;

	int		 *key  = NULL;

	key =(int*)__c_malloc(sizeof(int)); 

	pair = (c_pair*)__c_malloc(sizeof(c_pair));

	pstu = (tcmsfault_stu*)__c_malloc(sizeof(tcmsfault_stu));

	

	*key = tempkey;

	memcpy(pstu,tempstu,sizeof(tcmsfault_stu));

	pair->first = key;

	pair->second = pstu;

	c_map_insert (thiz,pair);

}



/*add by guo 20160406*/

void creatBoundaryNode(c_pmap thiz,int tempkey,boundary_cur* tempstu)/*创建新的局界节点*/

{

    pboundary_cur pstu = NULL;

    c_pair	 *pair = NULL;

    int		 *key  = NULL;

    key =(int*)__c_malloc(sizeof(int));

    pair = (c_pair*)__c_malloc(sizeof(c_pair));

    pstu = (boundary_cur*)__c_malloc(sizeof(boundary_cur));



    *key = tempkey;

    memcpy(pstu,tempstu,sizeof(boundary_cur));

    pair->first = key;

    pair->second = pstu;

    c_map_insert (thiz,pair);

}



void creat6AFaultNode(c_pmap thiz,int tempkey,_6afault_stu* tempstu)/*创建新的LDP故障节点*/

{

	p_6afault_stu pstu = NULL;

	c_pair	 *pair = NULL;

	int		 *key  = NULL;

	key =(int*)__c_malloc(sizeof(int)); 

	pair = (c_pair*)__c_malloc(sizeof(c_pair));

	pstu = (_6afault_stu*)__c_malloc(sizeof(_6afault_stu));

	

	*key = tempkey;

	memcpy(pstu,tempstu,sizeof(_6afault_stu));

	pair->first = key;

	pair->second = pstu;

	c_map_insert (thiz,pair);

}



void creatLDPFaultNode(c_pmap thiz,int tempkey,ldpfault_stu* tempstu)/*创建新的TCMS故障节点*/

{

	pldpfault_stu pstu = NULL;

	c_pair	 *pair = NULL;

	int		 *key  = NULL;

	key =(int*)__c_malloc(sizeof(int)); 

	pair = (c_pair*)__c_malloc(sizeof(c_pair));

	pstu = (ldpfault_stu*)__c_malloc(sizeof(ldpfault_stu));

	

	*key = tempkey;

	memcpy(pstu,tempstu,sizeof(ldpfault_stu));

	pair->first = key;

	pair->second = pstu;

	c_map_insert (thiz,pair);

}



void creatTraininfoNode(c_pmap thiz,int tempkey,traininfo_stu* tempstu)/*创建新的TCMS故障节点*/

{

	ptraininfo_stu pstu = NULL;

	c_pair	 *pair = NULL;

	int		 *key  = NULL;

	key =(int*)__c_malloc(sizeof(int)); 

	pair = (c_pair*)__c_malloc(sizeof(c_pair));

	pstu = (traininfo_stu*)__c_malloc(sizeof(traininfo_stu));

	

	*key = tempkey;

	memcpy(pstu,tempstu,sizeof(traininfo_stu));

	pair->first = key;

	pair->second = pstu;

	c_map_insert (thiz,pair);

}



void creatLkjevnetNode(c_pmap thiz,int tempkey,lkjevent_stu* tempstu)/*创建新的TCMS故障节点*/

{

	plkjevent_stu pstu = NULL;

	c_pair	 *pair = NULL;

	int		 *key  = NULL;

	key =(int*)__c_malloc(sizeof(int)); 

	pair = (c_pair*)__c_malloc(sizeof(c_pair));

	pstu = (lkjevent_stu*)__c_malloc(sizeof(lkjevent_stu));

	

	*key = tempkey;

	memcpy(pstu,tempstu,sizeof(lkjevent_stu));

	pair->first = key;

	pair->second = pstu;

	c_map_insert (thiz,pair);

}


void creatLineinfoNode(c_pmap thiz,int tempkey,lineinfo_stu* tempstu)/*创建新的TCMS故障节点*/
{
	plineinfo_stu pstu = NULL;
	c_pair	 *pair = NULL;
	int		 *key  = NULL;
	key =(int*)__c_malloc(sizeof(int)); 
	pair = (c_pair*)__c_malloc(sizeof(c_pair));
	pstu = (lineinfo_stu*)__c_malloc(sizeof(lineinfo_stu));	

	*key = tempkey;
	memcpy(pstu,tempstu,sizeof(lineinfo_stu));
	pair->first = key;
	pair->second = pstu;
	c_map_insert (thiz,pair);
}

/*Map容器内联函数*/
static _inline int int_comparer(void * x, void * y)
{
    return *(int *)(x) - *(int *)(y);
}

void getboundaryInfo()
{
    int key;
    int chex,cheh;
    int num = 0;
    char tmp[256] = {0x00};

    /*add by guo 20160406*/
    boundary_cur boundaryinfo;

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


/* EXEC SQL DECLARE boundary_cursor_temp CURSOR FOR SELECT

        idx,                /oCHAR(32),o/

         trim(t_type_id),          /oCHAR(3),o/

         trim(loco_no),            /oCHAR(4),o/

         cc,                 /oVARCHAR2(10),o/

         driverno,           /oNUMBER(7),o/

         trim(drivername),         /oVARCHAR2(20),o/

         to_char(nvl(pass_boundary_time,to_date('2000-01-01 00:00:00','yyyy-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss'),

         to_char(nvl(update_time,to_date('2000-01-01 00:00:00','yyyy-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss'),

        /opass_boundary_time, LKJ DATE,o/

        /oupdate_time,        DATE,o/

         trim(last_bid),           /oCHAR(2),o/

         trim(next_bid),           /oCHAR(2),o/

         sjsd,               /oNUMBER(8,2),o/

         tmis_station_no,    /oNUMBER(5),o/

         trim(tmis_station_name)  /oVARCHAR2(32)o/

         FROM ap_train_cur_boundary; */ 


        /* EXEC SQL OPEN boundary_cursor_temp; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 0;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = sq0001;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )5;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqcmod = (unsigned int )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



        while(1)

        {

            /* EXEC SQL FETCH boundary_cursor_temp into

                    :boundaryinfo.idx,                /oCHAR(32),o/

                    :boundaryinfo.t_type_id,          /oCHAR(3),o/

                    :boundaryinfo.loco_no,            /oCHAR(4),o/

                    :boundaryinfo.cc,                 /oVARCHAR2(10),o/

                    :boundaryinfo.driverno,           /oNUMBER(7),o/

                    :boundaryinfo.drivername,         /oVARCHAR2(20),o/

                    :boundaryinfo.pass_boundary_time, /oLKJ DATE,o/

                    :boundaryinfo.update_time,        /oDATE,o/

                    :boundaryinfo.last_bid,           /oCHAR(2),o/

                    :boundaryinfo.next_bid,           /oCHAR(2),o/

                    :boundaryinfo.sjsd,               /oNUMBER(8,2),o/

                    :boundaryinfo.tmis_station_no,    /oNUMBER(5),o/

                    :boundaryinfo.tmis_station_name; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 12;
            sqlstm.arrsiz = 13;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )20;
            sqlstm.selerr = (unsigned short)1;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)256;
            sqlstm.occurs = (unsigned int  )0;
            sqlstm.sqfoff = (         int )0;
            sqlstm.sqfmod = (unsigned int )2;
            sqlstm.sqhstv[0] = (unsigned char  *)(boundaryinfo.idx);
            sqlstm.sqhstl[0] = (unsigned long )33;
            sqlstm.sqhsts[0] = (         int  )0;
            sqlstm.sqindv[0] = (         short *)0;
            sqlstm.sqinds[0] = (         int  )0;
            sqlstm.sqharm[0] = (unsigned long )0;
            sqlstm.sqadto[0] = (unsigned short )0;
            sqlstm.sqtdso[0] = (unsigned short )0;
            sqlstm.sqhstv[1] = (unsigned char  *)(boundaryinfo.t_type_id);
            sqlstm.sqhstl[1] = (unsigned long )5;
            sqlstm.sqhsts[1] = (         int  )0;
            sqlstm.sqindv[1] = (         short *)0;
            sqlstm.sqinds[1] = (         int  )0;
            sqlstm.sqharm[1] = (unsigned long )0;
            sqlstm.sqadto[1] = (unsigned short )0;
            sqlstm.sqtdso[1] = (unsigned short )0;
            sqlstm.sqhstv[2] = (unsigned char  *)(boundaryinfo.loco_no);
            sqlstm.sqhstl[2] = (unsigned long )5;
            sqlstm.sqhsts[2] = (         int  )0;
            sqlstm.sqindv[2] = (         short *)0;
            sqlstm.sqinds[2] = (         int  )0;
            sqlstm.sqharm[2] = (unsigned long )0;
            sqlstm.sqadto[2] = (unsigned short )0;
            sqlstm.sqtdso[2] = (unsigned short )0;
            sqlstm.sqhstv[3] = (unsigned char  *)(boundaryinfo.cc);
            sqlstm.sqhstl[3] = (unsigned long )21;
            sqlstm.sqhsts[3] = (         int  )0;
            sqlstm.sqindv[3] = (         short *)0;
            sqlstm.sqinds[3] = (         int  )0;
            sqlstm.sqharm[3] = (unsigned long )0;
            sqlstm.sqadto[3] = (unsigned short )0;
            sqlstm.sqtdso[3] = (unsigned short )0;
            sqlstm.sqhstv[4] = (unsigned char  *)&(boundaryinfo.driverno);
            sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
            sqlstm.sqhsts[4] = (         int  )0;
            sqlstm.sqindv[4] = (         short *)0;
            sqlstm.sqinds[4] = (         int  )0;
            sqlstm.sqharm[4] = (unsigned long )0;
            sqlstm.sqadto[4] = (unsigned short )0;
            sqlstm.sqtdso[4] = (unsigned short )0;
            sqlstm.sqhstv[5] = (unsigned char  *)(boundaryinfo.drivername);
            sqlstm.sqhstl[5] = (unsigned long )33;
            sqlstm.sqhsts[5] = (         int  )0;
            sqlstm.sqindv[5] = (         short *)0;
            sqlstm.sqinds[5] = (         int  )0;
            sqlstm.sqharm[5] = (unsigned long )0;
            sqlstm.sqadto[5] = (unsigned short )0;
            sqlstm.sqtdso[5] = (unsigned short )0;
            sqlstm.sqhstv[6] = (unsigned char  *)(boundaryinfo.pass_boundary_time);
            sqlstm.sqhstl[6] = (unsigned long )21;
            sqlstm.sqhsts[6] = (         int  )0;
            sqlstm.sqindv[6] = (         short *)0;
            sqlstm.sqinds[6] = (         int  )0;
            sqlstm.sqharm[6] = (unsigned long )0;
            sqlstm.sqadto[6] = (unsigned short )0;
            sqlstm.sqtdso[6] = (unsigned short )0;
            sqlstm.sqhstv[7] = (unsigned char  *)(boundaryinfo.update_time);
            sqlstm.sqhstl[7] = (unsigned long )21;
            sqlstm.sqhsts[7] = (         int  )0;
            sqlstm.sqindv[7] = (         short *)0;
            sqlstm.sqinds[7] = (         int  )0;
            sqlstm.sqharm[7] = (unsigned long )0;
            sqlstm.sqadto[7] = (unsigned short )0;
            sqlstm.sqtdso[7] = (unsigned short )0;
            sqlstm.sqhstv[8] = (unsigned char  *)(boundaryinfo.last_bid);
            sqlstm.sqhstl[8] = (unsigned long )5;
            sqlstm.sqhsts[8] = (         int  )0;
            sqlstm.sqindv[8] = (         short *)0;
            sqlstm.sqinds[8] = (         int  )0;
            sqlstm.sqharm[8] = (unsigned long )0;
            sqlstm.sqadto[8] = (unsigned short )0;
            sqlstm.sqtdso[8] = (unsigned short )0;
            sqlstm.sqhstv[9] = (unsigned char  *)(boundaryinfo.next_bid);
            sqlstm.sqhstl[9] = (unsigned long )5;
            sqlstm.sqhsts[9] = (         int  )0;
            sqlstm.sqindv[9] = (         short *)0;
            sqlstm.sqinds[9] = (         int  )0;
            sqlstm.sqharm[9] = (unsigned long )0;
            sqlstm.sqadto[9] = (unsigned short )0;
            sqlstm.sqtdso[9] = (unsigned short )0;
            sqlstm.sqhstv[10] = (unsigned char  *)&(boundaryinfo.sjsd);
            sqlstm.sqhstl[10] = (unsigned long )sizeof(double);
            sqlstm.sqhsts[10] = (         int  )0;
            sqlstm.sqindv[10] = (         short *)0;
            sqlstm.sqinds[10] = (         int  )0;
            sqlstm.sqharm[10] = (unsigned long )0;
            sqlstm.sqadto[10] = (unsigned short )0;
            sqlstm.sqtdso[10] = (unsigned short )0;
            sqlstm.sqhstv[11] = (unsigned char  *)&(boundaryinfo.tmis_station_no);
            sqlstm.sqhstl[11] = (unsigned long )sizeof(int);
            sqlstm.sqhsts[11] = (         int  )0;
            sqlstm.sqindv[11] = (         short *)0;
            sqlstm.sqinds[11] = (         int  )0;
            sqlstm.sqharm[11] = (unsigned long )0;
            sqlstm.sqadto[11] = (unsigned short )0;
            sqlstm.sqtdso[11] = (unsigned short )0;
            sqlstm.sqhstv[12] = (unsigned char  *)(boundaryinfo.tmis_station_name);
            sqlstm.sqhstl[12] = (unsigned long )33;
            sqlstm.sqhsts[12] = (         int  )0;
            sqlstm.sqindv[12] = (         short *)0;
            sqlstm.sqinds[12] = (         int  )0;
            sqlstm.sqharm[12] = (unsigned long )0;
            sqlstm.sqadto[12] = (unsigned short )0;
            sqlstm.sqtdso[12] = (unsigned short )0;
            sqlstm.sqphsv = sqlstm.sqhstv;
            sqlstm.sqphsl = sqlstm.sqhstl;
            sqlstm.sqphss = sqlstm.sqhsts;
            sqlstm.sqpind = sqlstm.sqindv;
            sqlstm.sqpins = sqlstm.sqinds;
            sqlstm.sqparm = sqlstm.sqharm;
            sqlstm.sqparc = sqlstm.sqharc;
            sqlstm.sqpadto = sqlstm.sqadto;
            sqlstm.sqptdso = sqlstm.sqtdso;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

  /*VARCHAR2(32)*/



            if(sqlca.sqlcode == 0)

            {

                chex = atoi(boundaryinfo.t_type_id);

                cheh = atoi(boundaryinfo.loco_no);

                //key = ((chex<<16)&0xffff0000) + cheh;

                key = ((chex<<16)&0xc0ff0000) + (cheh&0x3FFF);

                creatBoundaryNode(&boundary_map, key,&boundaryinfo);

            }

            else

            {

                break;

            }

        }



    num = c_map_size(&boundary_map);



    sprintf(tmp, "getboundaryInfo 局界历史数据总计存入数目：%d\n", num);

    #ifdef UNIX_LINUX_DEBUG

    //printf("%s", tmp);

    #endif

}


void getbasicInfo()
{

	int key;

	int chex,cheh,ab;

	int num = 0;

    char tmp[256] = {0x00};

	

	person_stu peson;//司机信息map用

	//pperson_stu pperson;

	

	tcmsfault_stu tcmsfault;//TCMS故障mapV10协议

	//ptcmsfault_stu ptcmsfault; 

	

	_6afault_stu  _6afault;

	//p_6afault_stu p_6afault;

	

	ldpfault_stu  ldpfault;

	//pldpfault_stu pldpfault;

	

	lkjevent_stu  lkjevent;

//	plkjevent_stu plkjevent;



	traininfo_stu  traininfo;

    //ptraininfo_stu ptraininfo;

	

	lineinfo_stu   lineinfo;

    //plineinfo_stu  plineinfo;



    /*add by guo 20160406*/

    boundary_cur boundaryinfo;

	

        /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL DECLARE boundary_cursor CURSOR FOR SELECT

            idx,                /oCHAR(32),o/

             t_type_id,          /oCHAR(3),o/

             loco_no,            /oCHAR(4),o/

             cc,                 /oVARCHAR2(10),o/

             driverno,           /oNUMBER(7),o/

             drivername,         /oVARCHAR2(20),o/

             to_char(nvl(pass_boundary_time,to_date('2000-01-01 00:00:00','yyyy-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss'),

             to_char(nvl(update_time,to_date('2000-01-01 00:00:00','yyyy-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss'),

             /opass_boundary_time, LKJ DATE,o/

             /oupdate_time,        DATE,o/

             last_bid,           /oCHAR(2),o/

             next_bid,           /oCHAR(2),o/

             sjsd,               /oNUMBER(8,2),o/

             tmis_station_no,    /oNUMBER(5),o/

             tmis_station_name  /oVARCHAR2(32)o/

             FROM ap_train_cur_boundary; */ 


    /* EXEC SQL OPEN boundary_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 13;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0002;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )87;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    while(1)

    {

        /* EXEC SQL FETCH boundary_cursor into

                :boundaryinfo.idx,                /oCHAR(32),o/

                :boundaryinfo.t_type_id,          /oCHAR(3),o/

                :boundaryinfo.loco_no,            /oCHAR(4),o/

                :boundaryinfo.cc,                 /oVARCHAR2(10),o/

                :boundaryinfo.driverno,           /oNUMBER(7),o/

                :boundaryinfo.drivername,         /oVARCHAR2(20),o/

                :boundaryinfo.pass_boundary_time, /oLKJ DATE,o/

                :boundaryinfo.update_time,        /oDATE,o/

                :boundaryinfo.last_bid,           /oCHAR(2),o/

                :boundaryinfo.next_bid,           /oCHAR(2),o/

                :boundaryinfo.sjsd,               /oNUMBER(8,2),o/

                :boundaryinfo.tmis_station_no,    /oNUMBER(5),o/

                :boundaryinfo.tmis_station_name; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 13;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )102;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (         int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (unsigned char  *)(boundaryinfo.idx);
        sqlstm.sqhstl[0] = (unsigned long )33;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (unsigned char  *)(boundaryinfo.t_type_id);
        sqlstm.sqhstl[1] = (unsigned long )5;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (unsigned char  *)(boundaryinfo.loco_no);
        sqlstm.sqhstl[2] = (unsigned long )5;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (unsigned char  *)(boundaryinfo.cc);
        sqlstm.sqhstl[3] = (unsigned long )21;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&(boundaryinfo.driverno);
        sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         short *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned long )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (unsigned char  *)(boundaryinfo.drivername);
        sqlstm.sqhstl[5] = (unsigned long )33;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         short *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned long )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (unsigned char  *)(boundaryinfo.pass_boundary_time);
        sqlstm.sqhstl[6] = (unsigned long )21;
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         short *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned long )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqhstv[7] = (unsigned char  *)(boundaryinfo.update_time);
        sqlstm.sqhstl[7] = (unsigned long )21;
        sqlstm.sqhsts[7] = (         int  )0;
        sqlstm.sqindv[7] = (         short *)0;
        sqlstm.sqinds[7] = (         int  )0;
        sqlstm.sqharm[7] = (unsigned long )0;
        sqlstm.sqadto[7] = (unsigned short )0;
        sqlstm.sqtdso[7] = (unsigned short )0;
        sqlstm.sqhstv[8] = (unsigned char  *)(boundaryinfo.last_bid);
        sqlstm.sqhstl[8] = (unsigned long )5;
        sqlstm.sqhsts[8] = (         int  )0;
        sqlstm.sqindv[8] = (         short *)0;
        sqlstm.sqinds[8] = (         int  )0;
        sqlstm.sqharm[8] = (unsigned long )0;
        sqlstm.sqadto[8] = (unsigned short )0;
        sqlstm.sqtdso[8] = (unsigned short )0;
        sqlstm.sqhstv[9] = (unsigned char  *)(boundaryinfo.next_bid);
        sqlstm.sqhstl[9] = (unsigned long )5;
        sqlstm.sqhsts[9] = (         int  )0;
        sqlstm.sqindv[9] = (         short *)0;
        sqlstm.sqinds[9] = (         int  )0;
        sqlstm.sqharm[9] = (unsigned long )0;
        sqlstm.sqadto[9] = (unsigned short )0;
        sqlstm.sqtdso[9] = (unsigned short )0;
        sqlstm.sqhstv[10] = (unsigned char  *)&(boundaryinfo.sjsd);
        sqlstm.sqhstl[10] = (unsigned long )sizeof(double);
        sqlstm.sqhsts[10] = (         int  )0;
        sqlstm.sqindv[10] = (         short *)0;
        sqlstm.sqinds[10] = (         int  )0;
        sqlstm.sqharm[10] = (unsigned long )0;
        sqlstm.sqadto[10] = (unsigned short )0;
        sqlstm.sqtdso[10] = (unsigned short )0;
        sqlstm.sqhstv[11] = (unsigned char  *)&(boundaryinfo.tmis_station_no);
        sqlstm.sqhstl[11] = (unsigned long )sizeof(int);
        sqlstm.sqhsts[11] = (         int  )0;
        sqlstm.sqindv[11] = (         short *)0;
        sqlstm.sqinds[11] = (         int  )0;
        sqlstm.sqharm[11] = (unsigned long )0;
        sqlstm.sqadto[11] = (unsigned short )0;
        sqlstm.sqtdso[11] = (unsigned short )0;
        sqlstm.sqhstv[12] = (unsigned char  *)(boundaryinfo.tmis_station_name);
        sqlstm.sqhstl[12] = (unsigned long )33;
        sqlstm.sqhsts[12] = (         int  )0;
        sqlstm.sqindv[12] = (         short *)0;
        sqlstm.sqinds[12] = (         int  )0;
        sqlstm.sqharm[12] = (unsigned long )0;
        sqlstm.sqadto[12] = (unsigned short )0;
        sqlstm.sqtdso[12] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

  /*VARCHAR2(32)*/



        if(sqlca.sqlcode == 0)

        {

            chex = atoi(boundaryinfo.t_type_id);

            cheh = atoi(boundaryinfo.loco_no);

            key = ((chex<<16)&0xffff0000) + cheh;

            creatBoundaryNode(&boundary_map, key,&boundaryinfo);

        }

        else

        {

            break;

        }

    }



    num = c_map_size(&boundary_map);



    sprintf(tmp, "局界历史数据总计存入数目：%d\n", num);

    #ifdef UNIX_LINUX_DEBUG

    printf("%s", tmp);

    #endif





	int i = 0;

	trainkey.num = 0;

	

        /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 
/*name--->name2 edit by guo 20160712;grade-->grade2 edit by guo 20160815*/

    /* EXEC SQL DECLARE tcmsfaultv10_cursor CURSOR FOR SELECT CODE,CODEV2,T_TYPE_ID,NAME2,GRADE2,CODESHOW FROM BASIC_TCMSFAULTCODE; */ 


	/* EXEC SQL OPEN tcmsfaultv10_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0003;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )169;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	while(1)

	{

		/* EXEC SQL FETCH tcmsfaultv10_cursor INTO 

		:tcmsfault.CODE,

		:tcmsfault.CODEV2,

		:tcmsfault.T_TYPE_ID ,

		:tcmsfault.NAME,

		:tcmsfault.GRADE,

		:tcmsfault.CODESHOW; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 13;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )184;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)&(tcmsfault.CODE);
  sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&(tcmsfault.CODEV2);
  sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (unsigned char  *)(tcmsfault.T_TYPE_ID);
  sqlstm.sqhstl[2] = (unsigned long )5;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (unsigned char  *)(tcmsfault.NAME);
  sqlstm.sqhstl[3] = (unsigned long )101;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&(tcmsfault.GRADE);
  sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (unsigned char  *)(tcmsfault.CODESHOW);
  sqlstm.sqhstl[5] = (unsigned long )21;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		

		if(sqlca.sqlcode == 0)

		{

			//EXEC SQL COMMIT;

			chex = atoi(tcmsfault.T_TYPE_ID);

			key = chex*10000+tcmsfault.CODE;

			creatTCMSFaultNode(&tcmsfault_map, key,&tcmsfault);

			key = chex*10000+tcmsfault.CODEV2;

			creatTCMSFaultNode(&tcmsfault_map_v2, key,&tcmsfault);

			//printf("codeshow:%s\n",tcmsfault.CODESHOW);

			

		}

		else

		{

			break;

		}

	}

	

	num = c_map_size(&tcmsfault_map);



    sprintf(tmp, "故障V10版本总计存入数目：%d\n", num);

#ifdef UNIX_LINUX_DEBUG

    //printf("%s", tmp);

#endif



    cclog('i', tmp);



	num = c_map_size(&tcmsfault_map_v2);

    sprintf(tmp, "故障V20版本总计存入数目：%d\n", num);

#ifdef UNIX_LINUX_DEBUG

    //printf("%s", tmp);

#endif



    cclog('i', tmp);

	

	/* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


	/* EXEC SQL DECLARE traininfo_cursor CURSOR FOR SELECT 

			IDX,

			T_TYPE_ID,

			LOCO_NO,

			AB,

			DRIVERBID,

			DRIVERBSNAME,

			DRIVERBFNAME,

			DRIVERDID,

			DRIVERDSNAME,

			DRIVERDFNAME,

			B_ID,

			BSHORTNAME,

			BFULLNAME,

			D_ID,

			DSHORTNAME,

			DFULLNAME,

			T_TYPE_NAME,

			T_TYPE_F_NAME,

			EQUIPFACTORY,

			IDX_3G,

			IDX_BD,

			to_char(nvl(LASTTIME3G,to_date('2000-01-01 00:00:00','yyyy-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss'),

			to_char(nvl(LASTTIMEBD,to_date('2000-01-01 00:00:00','yyyy-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss'),

			/oto_char(LASTTIME3G,'yyyy-mm-dd hh24:mi:ss'),

			to_char(LASTTIMEBD,'yyyy-mm-dd hh24:mi:ss'),o/

			STATUS3G,

			STATUSBD,

			CROSSROADNO,

			STATIONNO,

			STATIONNAME,

			TIMSSTATIONNO,

			TIMSSTATIONNAME,

			LINENO,

			LINENAME,

			DRIVERNO,

			DRIVERNAME,

			DRIVERTEL,

			JD,

			WD,

			HB,

			BTSD,

			KHBB,

			ZZ,

			JC,

			GLB,

			LS,

			CC,

			PROVER6A,

			PROVERTCMS,

			PROVERLKJ,

			BDJD,

			BDWD,

			BDHB,

			BDSD,

			LKJSD,

			LKJVER,

			CUR_B_ID,

			FDRIVERNO,

			FDRIVERNAME,

			FDRIVERTEL ,

			LDPSTATUS,

			/oto_char(LASTTIME,'yyyy-mm-dd hh24:mi:ss') FROM VIEW_LDPLISTFORPARSEo/

			to_char(nvl(LASTTIME,to_date('2000-01-01 00:00:01','yyyy-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss') ,

			to_char(nvl(LASTTIMEBDCT,to_date('2000-01-01 00:00:01','yyyy-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss') ,

            to_char(nvl(LASTTIMEBDNBGD,to_date('2000-01-01 00:00:01','yyyy-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss'),

            LKJ_DATA_VER,

            LKJ_SOFT_VER,

            LDP_CPU_VER,

            LDP_WXTX_VER,

            FHJLQ_VER,

            WLJKB_VER,

            TCMS_VER1,

            TCMS_VER2,

            TCMS_VER3,

            TCMS_VER4,

            SIXA_CPUVER,

            B_BOUNDARY_NAME,

            TMIS_STATION_NO,

            to_char(nvl(PASS_BOUNDARY_TIME,to_date('2000-01-01 00:00:01','yyyy-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss'),

            CUR_BID ,

            PROVERSELFCHECK,

            COMP FROM VIEW_LDPLISTFORPARSE; */ 


	/* EXEC SQL OPEN traininfo_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft((void **)0,
   "select IDX ,T_TYPE_ID ,LOCO_NO ,AB ,DRIVERBID ,DRIVERBSNAME ,DRIVERBFNAM\
E ,DRIVERDID ,DRIVERDSNAME ,DRIVERDFNAME ,B_ID ,BSHORTNAME ,BFULLNAME ,D_ID \
,DSHORTNAME ,DFULLNAME ,T_TYPE_NAME ,T_TYPE_F_NAME ,EQUIPFACTORY ,IDX_3G ,ID\
X_BD ,to_char(nvl(LASTTIME3G,to_date('2000-01-01 00:00:00','yyyy-mm-dd hh24:\
mi:ss')),'yyyy-mm-dd hh24:mi:ss') ,to_char(nvl(LASTTIMEBD,to_date('2000-01-0\
1 00:00:00','yyyy-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss') ,STATUS3G ,ST\
ATUSBD ,CROSSROADNO ,STATIONNO ,STATIONNAME ,TIMSSTATIONNO ,TIMSSTATIONNAME \
,LINENO ,LINENAME ,DRIVERNO ,DRIVERNAME ,DRIVERTEL ,JD ,WD ,HB ,BTSD ,KHBB ,\
ZZ ,JC ,GLB ,LS ,CC ,PROVER6A ,PROVERTCMS ,PROVERLKJ ,BDJD ,BDWD ,BDHB ,BDSD\
 ,LKJSD ,LKJVER ,CUR_B_ID ,FDRIVERNO ,FDRIVERNAME ,FDRIVERTEL ,LDPSTATUS ,to\
_char(nvl(LASTTIME,to_date('2000-01-01 00:00:01','yyyy-mm-dd hh24:mi:ss')),'\
yyyy-mm-dd hh24:mi:ss') ,to_char(nvl(LASTTIMEBDCT,to_date('2000-01-01 00:00:\
01','yyyy-mm-dd hh24:mi:ss')),'yyyy-mm-dd hh24:mi:ss') ,to_char(nvl(LASTTIME\
BDNBGD,to_date('2000-01-01 00:00:01','yy");
 sqlstm.stmt = sq0004;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )223;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	while(1)

	{

		/* EXEC SQL FETCH traininfo_cursor INTO 

			:traininfo.IDX,

			:traininfo.T_TYPE_ID,

			:traininfo.LOCO_NO,

			:traininfo.AB,

		    :traininfo.DRIVERBID,

			:traininfo.DRIVERBSNAME,

			:traininfo.DRIVERBFNAME,

			:traininfo.DRIVERDID,

			:traininfo.DRIVERDSNAME,

			:traininfo.DRIVERDFNAME,

			:traininfo.B_ID,

			:traininfo.BSHORTNAME,

			:traininfo.BFULLNAME,

			:traininfo.D_ID,

			:traininfo.DSHORTNAME,

			:traininfo.DFULLNAME,

			:traininfo.T_TYPE_NAME,

			:traininfo.T_TYPE_F_NAME,

			:traininfo.EQUIPFACTORY,

			:traininfo.IDX_3G,

			:traininfo.IDX_BD,

			:traininfo.LASTTIME3G,

			:traininfo.LASTTIMEBD,

			:traininfo.STATUS3G,

			:traininfo.STATUSBD,

			:traininfo.CROSSROADNO,

			:traininfo.STATIONNO,

			:traininfo.STATIONNAME,

			:traininfo.TIMSSTATIONNO,

			:traininfo.TIMSSTATIONNAME,

			:traininfo.LINENO,

			:traininfo.LINENAME,

			:traininfo.DRIVERNO,

			:traininfo.DRIVERNAME,

			:traininfo.DRIVERTEL,

			:traininfo.JD,

			:traininfo.WD,

			:traininfo.HB,

			:traininfo.BTSD,

			:traininfo.KHBB,

			:traininfo.ZZ,

			:traininfo.JC,

			:traininfo.GLB,

			:traininfo.LS,

			:traininfo.CC,

			:traininfo.PROVER6A,

			:traininfo.PROVERTCMS,

			:traininfo.PROVERLKJ,

			:traininfo.BDJD,

			:traininfo.BDWD,

			:traininfo.BDHB,

			:traininfo.BDSD,

			:traininfo.LKJSD,

			:traininfo.LKJVER,

			:traininfo.CUR_B_ID,

			:traininfo.FDRIVERNO ,

			:traininfo.FDRIVERNAME ,

			:traininfo.FDRIVERTEL,

			:traininfo.LDPSTATUS,

			:traininfo.LASTTIME,

			:traininfo.LASTTIMEBDCT,

            :traininfo.LASTTIMEBDNBGD,

            :traininfo.LKJ_DATA_VER,

             :traininfo.LKJ_SOFT_VER,

             :traininfo.LDP_CPU_VER,

             :traininfo.LDP_WXTX_VER,

             :traininfo.FHJLQ_VER,

             :traininfo.WLJKB_VER,

             :traininfo.TCMS_VER1,

             :traininfo.TCMS_VER2,

             :traininfo.TCMS_VER3,

             :traininfo.TCMS_VER4,

             :traininfo.SIXA_CPUVER,

             :traininfo.B_BOUNDARY_NAME,

             :traininfo.TMIS_STATION_NO,

             :traininfo.PASS_BOUNDARY_TIME,

             :traininfo.CUR_BID,

             :traininfo.PROVERSELFCHECK,

             :traininfo.COMP; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 79;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )238;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)(traininfo.IDX);
  sqlstm.sqhstl[0] = (unsigned long )33;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)(traininfo.T_TYPE_ID);
  sqlstm.sqhstl[1] = (unsigned long )5;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (unsigned char  *)(traininfo.LOCO_NO);
  sqlstm.sqhstl[2] = (unsigned long )5;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&(traininfo.AB);
  sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (unsigned char  *)(traininfo.DRIVERBID);
  sqlstm.sqhstl[4] = (unsigned long )5;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (unsigned char  *)(traininfo.DRIVERBSNAME);
  sqlstm.sqhstl[5] = (unsigned long )11;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (unsigned char  *)(traininfo.DRIVERBFNAME);
  sqlstm.sqhstl[6] = (unsigned long )33;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         short *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned long )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (unsigned char  *)(traininfo.DRIVERDID);
  sqlstm.sqhstl[7] = (unsigned long )5;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         short *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned long )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (unsigned char  *)(traininfo.DRIVERDSNAME);
  sqlstm.sqhstl[8] = (unsigned long )11;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         short *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned long )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (unsigned char  *)(traininfo.DRIVERDFNAME);
  sqlstm.sqhstl[9] = (unsigned long )33;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         short *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned long )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (unsigned char  *)(traininfo.B_ID);
  sqlstm.sqhstl[10] = (unsigned long )5;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         short *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned long )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (unsigned char  *)(traininfo.BSHORTNAME);
  sqlstm.sqhstl[11] = (unsigned long )11;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         short *)0;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned long )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (unsigned char  *)(traininfo.BFULLNAME);
  sqlstm.sqhstl[12] = (unsigned long )33;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         short *)0;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned long )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (unsigned char  *)(traininfo.D_ID);
  sqlstm.sqhstl[13] = (unsigned long )5;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         short *)0;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned long )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
  sqlstm.sqhstv[14] = (unsigned char  *)(traininfo.DSHORTNAME);
  sqlstm.sqhstl[14] = (unsigned long )11;
  sqlstm.sqhsts[14] = (         int  )0;
  sqlstm.sqindv[14] = (         short *)0;
  sqlstm.sqinds[14] = (         int  )0;
  sqlstm.sqharm[14] = (unsigned long )0;
  sqlstm.sqadto[14] = (unsigned short )0;
  sqlstm.sqtdso[14] = (unsigned short )0;
  sqlstm.sqhstv[15] = (unsigned char  *)(traininfo.DFULLNAME);
  sqlstm.sqhstl[15] = (unsigned long )33;
  sqlstm.sqhsts[15] = (         int  )0;
  sqlstm.sqindv[15] = (         short *)0;
  sqlstm.sqinds[15] = (         int  )0;
  sqlstm.sqharm[15] = (unsigned long )0;
  sqlstm.sqadto[15] = (unsigned short )0;
  sqlstm.sqtdso[15] = (unsigned short )0;
  sqlstm.sqhstv[16] = (unsigned char  *)(traininfo.T_TYPE_NAME);
  sqlstm.sqhstl[16] = (unsigned long )11;
  sqlstm.sqhsts[16] = (         int  )0;
  sqlstm.sqindv[16] = (         short *)0;
  sqlstm.sqinds[16] = (         int  )0;
  sqlstm.sqharm[16] = (unsigned long )0;
  sqlstm.sqadto[16] = (unsigned short )0;
  sqlstm.sqtdso[16] = (unsigned short )0;
  sqlstm.sqhstv[17] = (unsigned char  *)(traininfo.T_TYPE_F_NAME);
  sqlstm.sqhstl[17] = (unsigned long )33;
  sqlstm.sqhsts[17] = (         int  )0;
  sqlstm.sqindv[17] = (         short *)0;
  sqlstm.sqinds[17] = (         int  )0;
  sqlstm.sqharm[17] = (unsigned long )0;
  sqlstm.sqadto[17] = (unsigned short )0;
  sqlstm.sqtdso[17] = (unsigned short )0;
  sqlstm.sqhstv[18] = (unsigned char  *)(traininfo.EQUIPFACTORY);
  sqlstm.sqhstl[18] = (unsigned long )30;
  sqlstm.sqhsts[18] = (         int  )0;
  sqlstm.sqindv[18] = (         short *)0;
  sqlstm.sqinds[18] = (         int  )0;
  sqlstm.sqharm[18] = (unsigned long )0;
  sqlstm.sqadto[18] = (unsigned short )0;
  sqlstm.sqtdso[18] = (unsigned short )0;
  sqlstm.sqhstv[19] = (unsigned char  *)(traininfo.IDX_3G);
  sqlstm.sqhstl[19] = (unsigned long )33;
  sqlstm.sqhsts[19] = (         int  )0;
  sqlstm.sqindv[19] = (         short *)0;
  sqlstm.sqinds[19] = (         int  )0;
  sqlstm.sqharm[19] = (unsigned long )0;
  sqlstm.sqadto[19] = (unsigned short )0;
  sqlstm.sqtdso[19] = (unsigned short )0;
  sqlstm.sqhstv[20] = (unsigned char  *)(traininfo.IDX_BD);
  sqlstm.sqhstl[20] = (unsigned long )33;
  sqlstm.sqhsts[20] = (         int  )0;
  sqlstm.sqindv[20] = (         short *)0;
  sqlstm.sqinds[20] = (         int  )0;
  sqlstm.sqharm[20] = (unsigned long )0;
  sqlstm.sqadto[20] = (unsigned short )0;
  sqlstm.sqtdso[20] = (unsigned short )0;
  sqlstm.sqhstv[21] = (unsigned char  *)(traininfo.LASTTIME3G);
  sqlstm.sqhstl[21] = (unsigned long )21;
  sqlstm.sqhsts[21] = (         int  )0;
  sqlstm.sqindv[21] = (         short *)0;
  sqlstm.sqinds[21] = (         int  )0;
  sqlstm.sqharm[21] = (unsigned long )0;
  sqlstm.sqadto[21] = (unsigned short )0;
  sqlstm.sqtdso[21] = (unsigned short )0;
  sqlstm.sqhstv[22] = (unsigned char  *)(traininfo.LASTTIMEBD);
  sqlstm.sqhstl[22] = (unsigned long )21;
  sqlstm.sqhsts[22] = (         int  )0;
  sqlstm.sqindv[22] = (         short *)0;
  sqlstm.sqinds[22] = (         int  )0;
  sqlstm.sqharm[22] = (unsigned long )0;
  sqlstm.sqadto[22] = (unsigned short )0;
  sqlstm.sqtdso[22] = (unsigned short )0;
  sqlstm.sqhstv[23] = (unsigned char  *)&(traininfo.STATUS3G);
  sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[23] = (         int  )0;
  sqlstm.sqindv[23] = (         short *)0;
  sqlstm.sqinds[23] = (         int  )0;
  sqlstm.sqharm[23] = (unsigned long )0;
  sqlstm.sqadto[23] = (unsigned short )0;
  sqlstm.sqtdso[23] = (unsigned short )0;
  sqlstm.sqhstv[24] = (unsigned char  *)&(traininfo.STATUSBD);
  sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[24] = (         int  )0;
  sqlstm.sqindv[24] = (         short *)0;
  sqlstm.sqinds[24] = (         int  )0;
  sqlstm.sqharm[24] = (unsigned long )0;
  sqlstm.sqadto[24] = (unsigned short )0;
  sqlstm.sqtdso[24] = (unsigned short )0;
  sqlstm.sqhstv[25] = (unsigned char  *)&(traininfo.CROSSROADNO);
  sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[25] = (         int  )0;
  sqlstm.sqindv[25] = (         short *)0;
  sqlstm.sqinds[25] = (         int  )0;
  sqlstm.sqharm[25] = (unsigned long )0;
  sqlstm.sqadto[25] = (unsigned short )0;
  sqlstm.sqtdso[25] = (unsigned short )0;
  sqlstm.sqhstv[26] = (unsigned char  *)&(traininfo.STATIONNO);
  sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[26] = (         int  )0;
  sqlstm.sqindv[26] = (         short *)0;
  sqlstm.sqinds[26] = (         int  )0;
  sqlstm.sqharm[26] = (unsigned long )0;
  sqlstm.sqadto[26] = (unsigned short )0;
  sqlstm.sqtdso[26] = (unsigned short )0;
  sqlstm.sqhstv[27] = (unsigned char  *)(traininfo.STATIONNAME);
  sqlstm.sqhstl[27] = (unsigned long )33;
  sqlstm.sqhsts[27] = (         int  )0;
  sqlstm.sqindv[27] = (         short *)0;
  sqlstm.sqinds[27] = (         int  )0;
  sqlstm.sqharm[27] = (unsigned long )0;
  sqlstm.sqadto[27] = (unsigned short )0;
  sqlstm.sqtdso[27] = (unsigned short )0;
  sqlstm.sqhstv[28] = (unsigned char  *)&(traininfo.TIMSSTATIONNO);
  sqlstm.sqhstl[28] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[28] = (         int  )0;
  sqlstm.sqindv[28] = (         short *)0;
  sqlstm.sqinds[28] = (         int  )0;
  sqlstm.sqharm[28] = (unsigned long )0;
  sqlstm.sqadto[28] = (unsigned short )0;
  sqlstm.sqtdso[28] = (unsigned short )0;
  sqlstm.sqhstv[29] = (unsigned char  *)(traininfo.TIMSSTATIONNAME);
  sqlstm.sqhstl[29] = (unsigned long )33;
  sqlstm.sqhsts[29] = (         int  )0;
  sqlstm.sqindv[29] = (         short *)0;
  sqlstm.sqinds[29] = (         int  )0;
  sqlstm.sqharm[29] = (unsigned long )0;
  sqlstm.sqadto[29] = (unsigned short )0;
  sqlstm.sqtdso[29] = (unsigned short )0;
  sqlstm.sqhstv[30] = (unsigned char  *)&(traininfo.LINENO);
  sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[30] = (         int  )0;
  sqlstm.sqindv[30] = (         short *)0;
  sqlstm.sqinds[30] = (         int  )0;
  sqlstm.sqharm[30] = (unsigned long )0;
  sqlstm.sqadto[30] = (unsigned short )0;
  sqlstm.sqtdso[30] = (unsigned short )0;
  sqlstm.sqhstv[31] = (unsigned char  *)(traininfo.LINENAME);
  sqlstm.sqhstl[31] = (unsigned long )33;
  sqlstm.sqhsts[31] = (         int  )0;
  sqlstm.sqindv[31] = (         short *)0;
  sqlstm.sqinds[31] = (         int  )0;
  sqlstm.sqharm[31] = (unsigned long )0;
  sqlstm.sqadto[31] = (unsigned short )0;
  sqlstm.sqtdso[31] = (unsigned short )0;
  sqlstm.sqhstv[32] = (unsigned char  *)&(traininfo.DRIVERNO);
  sqlstm.sqhstl[32] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[32] = (         int  )0;
  sqlstm.sqindv[32] = (         short *)0;
  sqlstm.sqinds[32] = (         int  )0;
  sqlstm.sqharm[32] = (unsigned long )0;
  sqlstm.sqadto[32] = (unsigned short )0;
  sqlstm.sqtdso[32] = (unsigned short )0;
  sqlstm.sqhstv[33] = (unsigned char  *)(traininfo.DRIVERNAME);
  sqlstm.sqhstl[33] = (unsigned long )33;
  sqlstm.sqhsts[33] = (         int  )0;
  sqlstm.sqindv[33] = (         short *)0;
  sqlstm.sqinds[33] = (         int  )0;
  sqlstm.sqharm[33] = (unsigned long )0;
  sqlstm.sqadto[33] = (unsigned short )0;
  sqlstm.sqtdso[33] = (unsigned short )0;
  sqlstm.sqhstv[34] = (unsigned char  *)(traininfo.DRIVERTEL);
  sqlstm.sqhstl[34] = (unsigned long )33;
  sqlstm.sqhsts[34] = (         int  )0;
  sqlstm.sqindv[34] = (         short *)0;
  sqlstm.sqinds[34] = (         int  )0;
  sqlstm.sqharm[34] = (unsigned long )0;
  sqlstm.sqadto[34] = (unsigned short )0;
  sqlstm.sqtdso[34] = (unsigned short )0;
  sqlstm.sqhstv[35] = (unsigned char  *)&(traininfo.JD);
  sqlstm.sqhstl[35] = (unsigned long )sizeof(double);
  sqlstm.sqhsts[35] = (         int  )0;
  sqlstm.sqindv[35] = (         short *)0;
  sqlstm.sqinds[35] = (         int  )0;
  sqlstm.sqharm[35] = (unsigned long )0;
  sqlstm.sqadto[35] = (unsigned short )0;
  sqlstm.sqtdso[35] = (unsigned short )0;
  sqlstm.sqhstv[36] = (unsigned char  *)&(traininfo.WD);
  sqlstm.sqhstl[36] = (unsigned long )sizeof(double);
  sqlstm.sqhsts[36] = (         int  )0;
  sqlstm.sqindv[36] = (         short *)0;
  sqlstm.sqinds[36] = (         int  )0;
  sqlstm.sqharm[36] = (unsigned long )0;
  sqlstm.sqadto[36] = (unsigned short )0;
  sqlstm.sqtdso[36] = (unsigned short )0;
  sqlstm.sqhstv[37] = (unsigned char  *)&(traininfo.HB);
  sqlstm.sqhstl[37] = (unsigned long )sizeof(float);
  sqlstm.sqhsts[37] = (         int  )0;
  sqlstm.sqindv[37] = (         short *)0;
  sqlstm.sqinds[37] = (         int  )0;
  sqlstm.sqharm[37] = (unsigned long )0;
  sqlstm.sqadto[37] = (unsigned short )0;
  sqlstm.sqtdso[37] = (unsigned short )0;
  sqlstm.sqhstv[38] = (unsigned char  *)&(traininfo.BTSD);
  sqlstm.sqhstl[38] = (unsigned long )sizeof(float);
  sqlstm.sqhsts[38] = (         int  )0;
  sqlstm.sqindv[38] = (         short *)0;
  sqlstm.sqinds[38] = (         int  )0;
  sqlstm.sqharm[38] = (unsigned long )0;
  sqlstm.sqadto[38] = (unsigned short )0;
  sqlstm.sqtdso[38] = (unsigned short )0;
  sqlstm.sqhstv[39] = (unsigned char  *)&(traininfo.KHBB);
  sqlstm.sqhstl[39] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[39] = (         int  )0;
  sqlstm.sqindv[39] = (         short *)0;
  sqlstm.sqinds[39] = (         int  )0;
  sqlstm.sqharm[39] = (unsigned long )0;
  sqlstm.sqadto[39] = (unsigned short )0;
  sqlstm.sqtdso[39] = (unsigned short )0;
  sqlstm.sqhstv[40] = (unsigned char  *)&(traininfo.ZZ);
  sqlstm.sqhstl[40] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[40] = (         int  )0;
  sqlstm.sqindv[40] = (         short *)0;
  sqlstm.sqinds[40] = (         int  )0;
  sqlstm.sqharm[40] = (unsigned long )0;
  sqlstm.sqadto[40] = (unsigned short )0;
  sqlstm.sqtdso[40] = (unsigned short )0;
  sqlstm.sqhstv[41] = (unsigned char  *)&(traininfo.JC);
  sqlstm.sqhstl[41] = (unsigned long )sizeof(float);
  sqlstm.sqhsts[41] = (         int  )0;
  sqlstm.sqindv[41] = (         short *)0;
  sqlstm.sqinds[41] = (         int  )0;
  sqlstm.sqharm[41] = (unsigned long )0;
  sqlstm.sqadto[41] = (unsigned short )0;
  sqlstm.sqtdso[41] = (unsigned short )0;
  sqlstm.sqhstv[42] = (unsigned char  *)&(traininfo.GLB);
  sqlstm.sqhstl[42] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[42] = (         int  )0;
  sqlstm.sqindv[42] = (         short *)0;
  sqlstm.sqinds[42] = (         int  )0;
  sqlstm.sqharm[42] = (unsigned long )0;
  sqlstm.sqadto[42] = (unsigned short )0;
  sqlstm.sqtdso[42] = (unsigned short )0;
  sqlstm.sqhstv[43] = (unsigned char  *)&(traininfo.LS);
  sqlstm.sqhstl[43] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[43] = (         int  )0;
  sqlstm.sqindv[43] = (         short *)0;
  sqlstm.sqinds[43] = (         int  )0;
  sqlstm.sqharm[43] = (unsigned long )0;
  sqlstm.sqadto[43] = (unsigned short )0;
  sqlstm.sqtdso[43] = (unsigned short )0;
  sqlstm.sqhstv[44] = (unsigned char  *)(traininfo.CC);
  sqlstm.sqhstl[44] = (unsigned long )21;
  sqlstm.sqhsts[44] = (         int  )0;
  sqlstm.sqindv[44] = (         short *)0;
  sqlstm.sqinds[44] = (         int  )0;
  sqlstm.sqharm[44] = (unsigned long )0;
  sqlstm.sqadto[44] = (unsigned short )0;
  sqlstm.sqtdso[44] = (unsigned short )0;
  sqlstm.sqhstv[45] = (unsigned char  *)&(traininfo.PROVER6A);
  sqlstm.sqhstl[45] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[45] = (         int  )0;
  sqlstm.sqindv[45] = (         short *)0;
  sqlstm.sqinds[45] = (         int  )0;
  sqlstm.sqharm[45] = (unsigned long )0;
  sqlstm.sqadto[45] = (unsigned short )0;
  sqlstm.sqtdso[45] = (unsigned short )0;
  sqlstm.sqhstv[46] = (unsigned char  *)&(traininfo.PROVERTCMS);
  sqlstm.sqhstl[46] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[46] = (         int  )0;
  sqlstm.sqindv[46] = (         short *)0;
  sqlstm.sqinds[46] = (         int  )0;
  sqlstm.sqharm[46] = (unsigned long )0;
  sqlstm.sqadto[46] = (unsigned short )0;
  sqlstm.sqtdso[46] = (unsigned short )0;
  sqlstm.sqhstv[47] = (unsigned char  *)&(traininfo.PROVERLKJ);
  sqlstm.sqhstl[47] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[47] = (         int  )0;
  sqlstm.sqindv[47] = (         short *)0;
  sqlstm.sqinds[47] = (         int  )0;
  sqlstm.sqharm[47] = (unsigned long )0;
  sqlstm.sqadto[47] = (unsigned short )0;
  sqlstm.sqtdso[47] = (unsigned short )0;
  sqlstm.sqhstv[48] = (unsigned char  *)&(traininfo.BDJD);
  sqlstm.sqhstl[48] = (unsigned long )sizeof(double);
  sqlstm.sqhsts[48] = (         int  )0;
  sqlstm.sqindv[48] = (         short *)0;
  sqlstm.sqinds[48] = (         int  )0;
  sqlstm.sqharm[48] = (unsigned long )0;
  sqlstm.sqadto[48] = (unsigned short )0;
  sqlstm.sqtdso[48] = (unsigned short )0;
  sqlstm.sqhstv[49] = (unsigned char  *)&(traininfo.BDWD);
  sqlstm.sqhstl[49] = (unsigned long )sizeof(double);
  sqlstm.sqhsts[49] = (         int  )0;
  sqlstm.sqindv[49] = (         short *)0;
  sqlstm.sqinds[49] = (         int  )0;
  sqlstm.sqharm[49] = (unsigned long )0;
  sqlstm.sqadto[49] = (unsigned short )0;
  sqlstm.sqtdso[49] = (unsigned short )0;
  sqlstm.sqhstv[50] = (unsigned char  *)&(traininfo.BDHB);
  sqlstm.sqhstl[50] = (unsigned long )sizeof(double);
  sqlstm.sqhsts[50] = (         int  )0;
  sqlstm.sqindv[50] = (         short *)0;
  sqlstm.sqinds[50] = (         int  )0;
  sqlstm.sqharm[50] = (unsigned long )0;
  sqlstm.sqadto[50] = (unsigned short )0;
  sqlstm.sqtdso[50] = (unsigned short )0;
  sqlstm.sqhstv[51] = (unsigned char  *)&(traininfo.BDSD);
  sqlstm.sqhstl[51] = (unsigned long )sizeof(float);
  sqlstm.sqhsts[51] = (         int  )0;
  sqlstm.sqindv[51] = (         short *)0;
  sqlstm.sqinds[51] = (         int  )0;
  sqlstm.sqharm[51] = (unsigned long )0;
  sqlstm.sqadto[51] = (unsigned short )0;
  sqlstm.sqtdso[51] = (unsigned short )0;
  sqlstm.sqhstv[52] = (unsigned char  *)&(traininfo.LKJSD);
  sqlstm.sqhstl[52] = (unsigned long )sizeof(float);
  sqlstm.sqhsts[52] = (         int  )0;
  sqlstm.sqindv[52] = (         short *)0;
  sqlstm.sqinds[52] = (         int  )0;
  sqlstm.sqharm[52] = (unsigned long )0;
  sqlstm.sqadto[52] = (unsigned short )0;
  sqlstm.sqtdso[52] = (unsigned short )0;
  sqlstm.sqhstv[53] = (unsigned char  *)(traininfo.LKJVER);
  sqlstm.sqhstl[53] = (unsigned long )21;
  sqlstm.sqhsts[53] = (         int  )0;
  sqlstm.sqindv[53] = (         short *)0;
  sqlstm.sqinds[53] = (         int  )0;
  sqlstm.sqharm[53] = (unsigned long )0;
  sqlstm.sqadto[53] = (unsigned short )0;
  sqlstm.sqtdso[53] = (unsigned short )0;
  sqlstm.sqhstv[54] = (unsigned char  *)(traininfo.CUR_B_ID);
  sqlstm.sqhstl[54] = (unsigned long )5;
  sqlstm.sqhsts[54] = (         int  )0;
  sqlstm.sqindv[54] = (         short *)0;
  sqlstm.sqinds[54] = (         int  )0;
  sqlstm.sqharm[54] = (unsigned long )0;
  sqlstm.sqadto[54] = (unsigned short )0;
  sqlstm.sqtdso[54] = (unsigned short )0;
  sqlstm.sqhstv[55] = (unsigned char  *)&(traininfo.FDRIVERNO);
  sqlstm.sqhstl[55] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[55] = (         int  )0;
  sqlstm.sqindv[55] = (         short *)0;
  sqlstm.sqinds[55] = (         int  )0;
  sqlstm.sqharm[55] = (unsigned long )0;
  sqlstm.sqadto[55] = (unsigned short )0;
  sqlstm.sqtdso[55] = (unsigned short )0;
  sqlstm.sqhstv[56] = (unsigned char  *)(traininfo.FDRIVERNAME);
  sqlstm.sqhstl[56] = (unsigned long )33;
  sqlstm.sqhsts[56] = (         int  )0;
  sqlstm.sqindv[56] = (         short *)0;
  sqlstm.sqinds[56] = (         int  )0;
  sqlstm.sqharm[56] = (unsigned long )0;
  sqlstm.sqadto[56] = (unsigned short )0;
  sqlstm.sqtdso[56] = (unsigned short )0;
  sqlstm.sqhstv[57] = (unsigned char  *)(traininfo.FDRIVERTEL);
  sqlstm.sqhstl[57] = (unsigned long )33;
  sqlstm.sqhsts[57] = (         int  )0;
  sqlstm.sqindv[57] = (         short *)0;
  sqlstm.sqinds[57] = (         int  )0;
  sqlstm.sqharm[57] = (unsigned long )0;
  sqlstm.sqadto[57] = (unsigned short )0;
  sqlstm.sqtdso[57] = (unsigned short )0;
  sqlstm.sqhstv[58] = (unsigned char  *)&(traininfo.LDPSTATUS);
  sqlstm.sqhstl[58] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[58] = (         int  )0;
  sqlstm.sqindv[58] = (         short *)0;
  sqlstm.sqinds[58] = (         int  )0;
  sqlstm.sqharm[58] = (unsigned long )0;
  sqlstm.sqadto[58] = (unsigned short )0;
  sqlstm.sqtdso[58] = (unsigned short )0;
  sqlstm.sqhstv[59] = (unsigned char  *)(traininfo.LASTTIME);
  sqlstm.sqhstl[59] = (unsigned long )21;
  sqlstm.sqhsts[59] = (         int  )0;
  sqlstm.sqindv[59] = (         short *)0;
  sqlstm.sqinds[59] = (         int  )0;
  sqlstm.sqharm[59] = (unsigned long )0;
  sqlstm.sqadto[59] = (unsigned short )0;
  sqlstm.sqtdso[59] = (unsigned short )0;
  sqlstm.sqhstv[60] = (unsigned char  *)(traininfo.LASTTIMEBDCT);
  sqlstm.sqhstl[60] = (unsigned long )21;
  sqlstm.sqhsts[60] = (         int  )0;
  sqlstm.sqindv[60] = (         short *)0;
  sqlstm.sqinds[60] = (         int  )0;
  sqlstm.sqharm[60] = (unsigned long )0;
  sqlstm.sqadto[60] = (unsigned short )0;
  sqlstm.sqtdso[60] = (unsigned short )0;
  sqlstm.sqhstv[61] = (unsigned char  *)(traininfo.LASTTIMEBDNBGD);
  sqlstm.sqhstl[61] = (unsigned long )21;
  sqlstm.sqhsts[61] = (         int  )0;
  sqlstm.sqindv[61] = (         short *)0;
  sqlstm.sqinds[61] = (         int  )0;
  sqlstm.sqharm[61] = (unsigned long )0;
  sqlstm.sqadto[61] = (unsigned short )0;
  sqlstm.sqtdso[61] = (unsigned short )0;
  sqlstm.sqhstv[62] = (unsigned char  *)(traininfo.LKJ_DATA_VER);
  sqlstm.sqhstl[62] = (unsigned long )21;
  sqlstm.sqhsts[62] = (         int  )0;
  sqlstm.sqindv[62] = (         short *)0;
  sqlstm.sqinds[62] = (         int  )0;
  sqlstm.sqharm[62] = (unsigned long )0;
  sqlstm.sqadto[62] = (unsigned short )0;
  sqlstm.sqtdso[62] = (unsigned short )0;
  sqlstm.sqhstv[63] = (unsigned char  *)(traininfo.LKJ_SOFT_VER);
  sqlstm.sqhstl[63] = (unsigned long )21;
  sqlstm.sqhsts[63] = (         int  )0;
  sqlstm.sqindv[63] = (         short *)0;
  sqlstm.sqinds[63] = (         int  )0;
  sqlstm.sqharm[63] = (unsigned long )0;
  sqlstm.sqadto[63] = (unsigned short )0;
  sqlstm.sqtdso[63] = (unsigned short )0;
  sqlstm.sqhstv[64] = (unsigned char  *)&(traininfo.LDP_CPU_VER);
  sqlstm.sqhstl[64] = (unsigned long )sizeof(float);
  sqlstm.sqhsts[64] = (         int  )0;
  sqlstm.sqindv[64] = (         short *)0;
  sqlstm.sqinds[64] = (         int  )0;
  sqlstm.sqharm[64] = (unsigned long )0;
  sqlstm.sqadto[64] = (unsigned short )0;
  sqlstm.sqtdso[64] = (unsigned short )0;
  sqlstm.sqhstv[65] = (unsigned char  *)&(traininfo.LDP_WXTX_VER);
  sqlstm.sqhstl[65] = (unsigned long )sizeof(float);
  sqlstm.sqhsts[65] = (         int  )0;
  sqlstm.sqindv[65] = (         short *)0;
  sqlstm.sqinds[65] = (         int  )0;
  sqlstm.sqharm[65] = (unsigned long )0;
  sqlstm.sqadto[65] = (unsigned short )0;
  sqlstm.sqtdso[65] = (unsigned short )0;
  sqlstm.sqhstv[66] = (unsigned char  *)&(traininfo.FHJLQ_VER);
  sqlstm.sqhstl[66] = (unsigned long )sizeof(float);
  sqlstm.sqhsts[66] = (         int  )0;
  sqlstm.sqindv[66] = (         short *)0;
  sqlstm.sqinds[66] = (         int  )0;
  sqlstm.sqharm[66] = (unsigned long )0;
  sqlstm.sqadto[66] = (unsigned short )0;
  sqlstm.sqtdso[66] = (unsigned short )0;
  sqlstm.sqhstv[67] = (unsigned char  *)&(traininfo.WLJKB_VER);
  sqlstm.sqhstl[67] = (unsigned long )sizeof(float);
  sqlstm.sqhsts[67] = (         int  )0;
  sqlstm.sqindv[67] = (         short *)0;
  sqlstm.sqinds[67] = (         int  )0;
  sqlstm.sqharm[67] = (unsigned long )0;
  sqlstm.sqadto[67] = (unsigned short )0;
  sqlstm.sqtdso[67] = (unsigned short )0;
  sqlstm.sqhstv[68] = (unsigned char  *)&(traininfo.TCMS_VER1);
  sqlstm.sqhstl[68] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[68] = (         int  )0;
  sqlstm.sqindv[68] = (         short *)0;
  sqlstm.sqinds[68] = (         int  )0;
  sqlstm.sqharm[68] = (unsigned long )0;
  sqlstm.sqadto[68] = (unsigned short )0;
  sqlstm.sqtdso[68] = (unsigned short )0;
  sqlstm.sqhstv[69] = (unsigned char  *)&(traininfo.TCMS_VER2);
  sqlstm.sqhstl[69] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[69] = (         int  )0;
  sqlstm.sqindv[69] = (         short *)0;
  sqlstm.sqinds[69] = (         int  )0;
  sqlstm.sqharm[69] = (unsigned long )0;
  sqlstm.sqadto[69] = (unsigned short )0;
  sqlstm.sqtdso[69] = (unsigned short )0;
  sqlstm.sqhstv[70] = (unsigned char  *)&(traininfo.TCMS_VER3);
  sqlstm.sqhstl[70] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[70] = (         int  )0;
  sqlstm.sqindv[70] = (         short *)0;
  sqlstm.sqinds[70] = (         int  )0;
  sqlstm.sqharm[70] = (unsigned long )0;
  sqlstm.sqadto[70] = (unsigned short )0;
  sqlstm.sqtdso[70] = (unsigned short )0;
  sqlstm.sqhstv[71] = (unsigned char  *)&(traininfo.TCMS_VER4);
  sqlstm.sqhstl[71] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[71] = (         int  )0;
  sqlstm.sqindv[71] = (         short *)0;
  sqlstm.sqinds[71] = (         int  )0;
  sqlstm.sqharm[71] = (unsigned long )0;
  sqlstm.sqadto[71] = (unsigned short )0;
  sqlstm.sqtdso[71] = (unsigned short )0;
  sqlstm.sqhstv[72] = (unsigned char  *)&(traininfo.SIXA_CPUVER);
  sqlstm.sqhstl[72] = (unsigned long )sizeof(float);
  sqlstm.sqhsts[72] = (         int  )0;
  sqlstm.sqindv[72] = (         short *)0;
  sqlstm.sqinds[72] = (         int  )0;
  sqlstm.sqharm[72] = (unsigned long )0;
  sqlstm.sqadto[72] = (unsigned short )0;
  sqlstm.sqtdso[72] = (unsigned short )0;
  sqlstm.sqhstv[73] = (unsigned char  *)(traininfo.B_BOUNDARY_NAME);
  sqlstm.sqhstl[73] = (unsigned long )33;
  sqlstm.sqhsts[73] = (         int  )0;
  sqlstm.sqindv[73] = (         short *)0;
  sqlstm.sqinds[73] = (         int  )0;
  sqlstm.sqharm[73] = (unsigned long )0;
  sqlstm.sqadto[73] = (unsigned short )0;
  sqlstm.sqtdso[73] = (unsigned short )0;
  sqlstm.sqhstv[74] = (unsigned char  *)&(traininfo.TMIS_STATION_NO);
  sqlstm.sqhstl[74] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[74] = (         int  )0;
  sqlstm.sqindv[74] = (         short *)0;
  sqlstm.sqinds[74] = (         int  )0;
  sqlstm.sqharm[74] = (unsigned long )0;
  sqlstm.sqadto[74] = (unsigned short )0;
  sqlstm.sqtdso[74] = (unsigned short )0;
  sqlstm.sqhstv[75] = (unsigned char  *)(traininfo.PASS_BOUNDARY_TIME);
  sqlstm.sqhstl[75] = (unsigned long )21;
  sqlstm.sqhsts[75] = (         int  )0;
  sqlstm.sqindv[75] = (         short *)0;
  sqlstm.sqinds[75] = (         int  )0;
  sqlstm.sqharm[75] = (unsigned long )0;
  sqlstm.sqadto[75] = (unsigned short )0;
  sqlstm.sqtdso[75] = (unsigned short )0;
  sqlstm.sqhstv[76] = (unsigned char  *)(traininfo.CUR_BID);
  sqlstm.sqhstl[76] = (unsigned long )5;
  sqlstm.sqhsts[76] = (         int  )0;
  sqlstm.sqindv[76] = (         short *)0;
  sqlstm.sqinds[76] = (         int  )0;
  sqlstm.sqharm[76] = (unsigned long )0;
  sqlstm.sqadto[76] = (unsigned short )0;
  sqlstm.sqtdso[76] = (unsigned short )0;
  sqlstm.sqhstv[77] = (unsigned char  *)&(traininfo.PROVERSELFCHECK);
  sqlstm.sqhstl[77] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[77] = (         int  )0;
  sqlstm.sqindv[77] = (         short *)0;
  sqlstm.sqinds[77] = (         int  )0;
  sqlstm.sqharm[77] = (unsigned long )0;
  sqlstm.sqadto[77] = (unsigned short )0;
  sqlstm.sqtdso[77] = (unsigned short )0;
  sqlstm.sqhstv[78] = (unsigned char  *)&(traininfo.COMP);
  sqlstm.sqhstl[78] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[78] = (         int  )0;
  sqlstm.sqindv[78] = (         short *)0;
  sqlstm.sqinds[78] = (         int  )0;
  sqlstm.sqharm[78] = (unsigned long )0;
  sqlstm.sqadto[78] = (unsigned short )0;
  sqlstm.sqtdso[78] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	

		if(sqlca.sqlcode == 0)

		{

			//EXEC SQL COMMIT;

			chex = atoi(traininfo.T_TYPE_ID);

			cheh = atoi(traininfo.LOCO_NO);

			ab   = traininfo.AB;

			if (ab == 1)

			{

			  	key = (((chex|0x8000)<<16)&0xffff0000) +cheh;

			} 

			else if (ab == 2)

			{

				key = (((chex|0x4000)<<16)&0xffff0000) +cheh;

			}

			else

			{

				key = ((chex<<16)&0xffff0000) + cheh;

			}

			

			//if((chex==237)&&(cheh==597))

			//{

			//	printf("key=%d\n",key);

			//}

			trainkey.num += 1;

			trainkey.key[i] = key;

			trainkey.traintype[i] = chex;

			traininfo.UNIXTIME3G = getUnixTime(traininfo.LASTTIME3G);

			traininfo.UNIXTIMEBD = getUnixTime(traininfo.LASTTIMEBD);

            traininfo.UNIXTIMELAST = getUnixTime(traininfo.LASTTIME);

			

			creatTraininfoNode(&traininfo_map, key,&traininfo);

			//printf("LASTTIME3G = %s,LASTTIMEBD=%s,LASTTIME=%s\n",traininfo.LASTTIME3G,

			//traininfo.LASTTIMEBD,traininfo.LASTTIME);

			//printf("%s-%s,车型=%d\n",traininfo.T_TYPE_ID,traininfo.LOCO_NO,trainkey.traintype[i]);

			//printf("UNIXTIME3G=%d,UNIXTIMEBD=%d,\n",

			//       key,traininfo.UNIXTIME3G,traininfo.UNIXTIMEBD,traininfo.T_TYPE_ID,traininfo.LOCO_NO);

			i++;

		}

		else

		{

            sprintf(tmp, "注册机车数ORACLE返回值：%d\n",sqlca.sqlcode);

            cclog('e', tmp);



			break;

		}

	}



	num = c_map_size(&traininfo_map);

    sprintf(tmp, "注册机车数目：%d  trainkey.num = %d\n", num, trainkey.num);

#ifdef UNIX_LINUX_DEBUG

    //printf("%s", tmp);

#endif



    cclog('i', tmp);



	/* EXEC SQL CLOSE traininfo_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 79;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )569;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

	

	

	

	/* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


	/* EXEC SQL DECLARE person_cursor CURSOR FOR SELECT WORKID,BID,BSNAME,BFNAME,DID,DSNAME,DFNAME,HNAME,MOBILENUMBER FROM view_persons; */ 


	/* EXEC SQL OPEN person_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 79;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0005;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )584;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	

	while(1)

	{

		/* EXEC SQL FETCH person_cursor INTO 

		:key ,

		:peson.B_ID,

		:peson.BSNAME,

		:peson.BFNAME,

		:peson.D_ID,

		:peson.DSNAME,

		:peson.DFNAME,

		:peson.NAME,

		:peson.MOBILENUMBER; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 79;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )599;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)&key;
  sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)(peson.B_ID);
  sqlstm.sqhstl[1] = (unsigned long )5;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (unsigned char  *)(peson.BSNAME);
  sqlstm.sqhstl[2] = (unsigned long )11;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (unsigned char  *)(peson.BFNAME);
  sqlstm.sqhstl[3] = (unsigned long )33;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (unsigned char  *)(peson.D_ID);
  sqlstm.sqhstl[4] = (unsigned long )5;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (unsigned char  *)(peson.DSNAME);
  sqlstm.sqhstl[5] = (unsigned long )11;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (unsigned char  *)(peson.DFNAME);
  sqlstm.sqhstl[6] = (unsigned long )33;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         short *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned long )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (unsigned char  *)(peson.NAME);
  sqlstm.sqhstl[7] = (unsigned long )33;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         short *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned long )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (unsigned char  *)(peson.MOBILENUMBER);
  sqlstm.sqhstl[8] = (unsigned long )33;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         short *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned long )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		if(sqlca.sqlcode == 0)

		{

			//EXEC SQL COMMIT;

			creatPersonNode(&person_map, key,&peson);

		}

		else 

		{

            sprintf(tmp, "fetch cursor person_cursor fail,sqlcode=%ld,sqlserr=%s\n",sqlca.sqlcode,sqlca.sqlerrm.sqlerrmc);

            cclog('e', tmp);

			break;

		}

	}	

	/* EXEC SQL CLOSE person_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 79;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )650;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	num = c_map_size(&person_map);

    sprintf(tmp, "总计存入司机数目：%d\n", num);

    cclog('i', tmp);



	

	/* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


	/* EXEC SQL DECLARE _6afault_cursor CURSOR FOR SELECT CODE,NAME,GRADE,CODESHOW FROM BASIC_6AFAULTCODE ; */ 


	/* EXEC SQL OPEN _6afault_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 79;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0006;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )665;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	while(1)

	{

		/* EXEC SQL FETCH _6afault_cursor INTO 

		:_6afault.CODE,

		:_6afault.NAME ,

		:_6afault.GRADE,

		:_6afault.CODESHOW; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 79;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )680;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)&(_6afault.CODE);
  sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)(_6afault.NAME);
  sqlstm.sqhstl[1] = (unsigned long )101;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&(_6afault.GRADE);
  sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (unsigned char  *)(_6afault.CODESHOW);
  sqlstm.sqhstl[3] = (unsigned long )21;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		

		if(sqlca.sqlcode == 0)

		{

			//EXEC SQL COMMIT;

			key = _6afault.CODE;

			creat6AFaultNode(&_6afault_map, key,&_6afault);

		}

		else

		{

            cclog('e', "fetch cursor _6afault_cursor fail\n");

			break;

		}

	}

	num = c_map_size(&_6afault_map);

    sprintf(tmp, "6A故障存入数目：%d\n",num);

    cclog('i', tmp);



	/* EXEC SQL CLOSE _6afault_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 79;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )711;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	

	/* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


	/* EXEC SQL DECLARE ldpfault_cursor CURSOR FOR SELECT CODE,NAME,GRADE FROM BASIC_LDPFAULTCODE ; */ 


	/* EXEC SQL OPEN ldpfault_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 79;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0007;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )726;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	while(1)

	{

		/* EXEC SQL FETCH ldpfault_cursor INTO 

		:ldpfault.CODE,

		:ldpfault.NAME ,

		:ldpfault.GRADE; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 79;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )741;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)&(ldpfault.CODE);
  sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)(ldpfault.NAME);
  sqlstm.sqhstl[1] = (unsigned long )101;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&(ldpfault.GRADE);
  sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned long )0;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		

		if(sqlca.sqlcode == 0)

		{

			//EXEC SQL COMMIT;

			key = ldpfault.CODE;

			creatLDPFaultNode(&ldpfault_map, key,&ldpfault);

		}

		else

		{

            cclog('e', "fetch cursor ldpfault_cursor fail\n");

			break;

		}

	}

	num = c_map_size(&ldpfault_map);

    sprintf(tmp, "LDP故障存入数目：%d\n",num);

    cclog('i', tmp);



	/* EXEC SQL CLOSE ldpfault_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 79;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )768;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	

	

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


	/* EXEC SQL DECLARE lkjevent_cursor CURSOR FOR SELECT CODEID,ENAME,EGRADE FROM basic_event_type; */ 


	/* EXEC SQL OPEN lkjevent_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 79;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0008;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )783;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	while(1)

	{

		/* EXEC SQL FETCH lkjevent_cursor INTO 

			:lkjevent.CODEID,

			:lkjevent.SJMS,

			:lkjevent.SJDJ; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 79;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )798;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)&(lkjevent.CODEID);
  sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)(lkjevent.SJMS);
  sqlstm.sqhstl[1] = (unsigned long )33;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&(lkjevent.SJDJ);
  sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned long )0;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		

		if(sqlca.sqlcode == 0)

		{

			//EXEC SQL COMMIT;

			key = lkjevent.CODEID;

			creatLkjevnetNode(&lkjenvent_map, key,&lkjevent);

			//printf("%s\n",lkjevent.SJMS);

		}

		else

		{

            cclog('e', "fetch cursor lkjevent_cursor fail\n");

			break;

		}

	}

	num = c_map_size(&lkjenvent_map);

    sprintf(tmp, "LKJ事件项点存入数目：%d\n",num);

    cclog('i', tmp);



	/* EXEC SQL CLOSE lkjevent_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 79;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )825;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}





	

	

	/* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


	/* EXEC SQL DECLARE lineinfo_cursor CURSOR FOR SELECT 

		B_ID,

		CROSS_ROAD_NO,

		TRAIN_STATION_NO, 

		TMIS_STATION_NO,

		TRAIN_STATION_NAME,

		TMIS_STATION_NAME,

		TRAIN_LINE_NO,

		TRAIN_LINE_NAME,

        STATION_B_ID,

        ISBOUNDARY,

        SSJ,

        LJ FROM  VIEW_TRAINSTATIONS; */ 
/*edit by guo 20160607 view_trainstations-->view_trainstation_boundary*/

	/* EXEC SQL OPEN lineinfo_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 79;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0009;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )840;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	while(1)

	{

		/* EXEC SQL FETCH lineinfo_cursor INTO

		    :lineinfo.B_ID,

			:lineinfo.CROSS_ROAD_NO,

			:lineinfo.TRAIN_STATION_NO,

			:lineinfo.TMIS_STATION_NO,

			:lineinfo.TRAIN_STATION_NAME,

			:lineinfo.TMIS_STATION_NAME,

			:lineinfo.TRAIN_LINE_NO,

			:lineinfo.TRAIN_LINE_NAME,

            :lineinfo.STATION_B_ID,

            :lineinfo.ISBOUNDARY,

            :lineinfo.SSJ,

            :lineinfo.LJ; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 79;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )855;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)(lineinfo.B_ID);
  sqlstm.sqhstl[0] = (unsigned long )5;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&(lineinfo.CROSS_ROAD_NO);
  sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (unsigned char  *)&(lineinfo.TRAIN_STATION_NO);
  sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&(lineinfo.TMIS_STATION_NO);
  sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (unsigned char  *)(lineinfo.TRAIN_STATION_NAME);
  sqlstm.sqhstl[4] = (unsigned long )33;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (unsigned char  *)(lineinfo.TMIS_STATION_NAME);
  sqlstm.sqhstl[5] = (unsigned long )33;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (unsigned char  *)&(lineinfo.TRAIN_LINE_NO);
  sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         short *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned long )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (unsigned char  *)(lineinfo.TRAIN_LINE_NAME);
  sqlstm.sqhstl[7] = (unsigned long )33;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         short *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned long )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (unsigned char  *)(lineinfo.STATION_B_ID);
  sqlstm.sqhstl[8] = (unsigned long )5;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         short *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned long )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (unsigned char  *)&(lineinfo.ISBOUNDARY);
  sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         short *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned long )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (unsigned char  *)(lineinfo.SSJ);
  sqlstm.sqhstl[10] = (unsigned long )5;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         short *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned long )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (unsigned char  *)(lineinfo.LJ);
  sqlstm.sqhstl[11] = (unsigned long )5;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         short *)0;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned long )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		

		if(sqlca.sqlcode == 0)

		{

			chex = atoi(lineinfo.B_ID);

			key  = ((chex &0x000000ff)<<24) 

				+ ((lineinfo.CROSS_ROAD_NO &0x000000ff)<<16)

				+lineinfo.TRAIN_STATION_NO;

			creatLineinfoNode(&lineinfo_map, key,&lineinfo);

		//	printf("key:%d,B_ID =%s,CROSS_ROAD_NO=%d,TRAIN_STATION_NO=%d\n",key,lineinfo.B_ID,lineinfo.CROSS_ROAD_NO,

		//	lineinfo.TRAIN_STATION_NO);



		}

		else

		{

            cclog('e', "fetch cursor lineinfo_cursor fail\n");

			break;

		}

	}

	num = c_map_size(&lineinfo_map);

    sprintf(tmp, "线路信息存入数目：%d\n",num);

    cclog('i', tmp);



	/* EXEC SQL CLOSE lineinfo_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 79;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )918;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    printf(tmp, "线路信息存入数目：%d\n",num);

    getboundaryInfo();

}


void exithook(void)

{

    oradisConnect();

    printf("程序结束，释放对应资源\n");

}



void thread_conncheck()

{

	char temp[100];

	int yy,MM,dd,hh,mm,ss;

	int nowcheck_hh=0;

	int nowcheck_dd =0;

	getDateTime(&yy, &MM, &dd, &hh, &mm, &ss);

	nowcheck_hh = hh;

	nowcheck_dd = dd;

	

	if(precheck_hh == -1)

	{

		precheck_hh = nowcheck_hh;

	}

	else

	{

     	if(precheck_hh != nowcheck_hh)

		{

			/* EXEC SQL 

			SELECT 1 FROM DUAL; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 79;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select 1  from DUAL ";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )933;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



			if (sqlca.sqlcode == 0)

			{

				/* EXEC SQL COMMIT; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 79;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )948;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



				memset(temp,0,sizeof(temp));

                sprintf(temp,"连接测试：%d-%2d-%2d hh时，数据库连接无异常\n",yy,MM,dd,hh);

				cclog('e',temp);

			}

			else

			{

				init_oracle(sub_routine,configfile);

				memset(temp,0,sizeof(temp));

                sprintf(temp,"连接测试：%d-%2d-%2d hh时，数据库异常，重新连接数据库\n",yy,MM,dd,hh);

				cclog('e',temp);

			}	

		}

		precheck_hh = nowcheck_hh;		

	}

	

	if(precheck_dd == -1)

	{

		precheck_dd = nowcheck_dd;

	}

	else

	{

     	if(precheck_dd != nowcheck_dd)

		{

			c_map_clear(&person_map);

			c_map_clear(&installtrain_map);

			c_map_clear(&tcmsfault_map);

			c_map_clear(&tcmsfault_map_v2);

			c_map_clear(&_6afault_map);

			c_map_clear(&traininfo_map);

			c_map_clear(&lkjenvent_map);

			c_map_clear(&lineinfo_map);

			c_map_clear(&ldpfault_map);

            c_map_clear(&boundary_map);

     //       c_map_clear(&boundary_map);



			getbasicInfo(); 

			precheck_dd = nowcheck_dd;

		}	

	}

}



void insert3GHandle(){

	int i;

	lprintf(disp.g,"3G入库数目为：%d\n",gloab_3g_usednum);

	for (i=0;i<gloab_3g_usednum;i++)

	{

		insert_3G(gloab_3g[i]);	

	}	

	gloab_3g_usednum = 0;

}



void insertBDHandle(){

	int i;

	lprintf(disp.b,"北斗入库数目为：%d\n",gloab_bd_usednum);

	for (i=0;i<gloab_bd_usednum;i++)

	{

		insert_BD(gloab_bd[i]);

	}

	gloab_bd_usednum = 0;

}



void insertFAULTHandle()

{

	int i;

	lprintf(disp.f,"故障入库数目为：%d\n",gloab_fault_usednum);

	for (i=0;i<gloab_fault_usednum;i++)

	{

		insert_FAULT(gloab_fault[i]);								   

	}	 

	gloab_fault_usednum = 0;	

}



void insertEVENTHandle()

{

	int i;	

	lprintf(disp.v,"事件入库数目为：%d\n",gloab_event_usednum);

	for (i=0;i<gloab_event_usednum;i++)

	{

		insert_EVENT(gloab_event[i]);

	}

    gloab_event_usednum = 0;

}



void updateTrainStatus()

{

	char temp[1024];

    char temp2[2048];

	int num =0;

    int yy,mm,dd,hh,mi,ss;

	int flag = 0;

	int i,j;

	time_t curtime;

    time_t tmptime;

	ptraininfo_stu ptraininfo = NULL;



	curtime = time(NULL);

    for(i = 0; i < trainkey.num; i ++)

	{

        ptraininfo = (traininfo_stu*)c_map_at(&traininfo_map, &trainkey.key[i]);

        if(NULL != ptraininfo)

		{			

			flag = 0;

            for(j = 0; j < updatetraintype.num; j ++)

			{

				if(trainkey.traintype[i] == updatetraintype.traintype[j])

				{

					flag = 1;

					break;

				}

			}



            if(1 == flag)

			{

                tmptime = curtime - ptraininfo->UNIXTIME3G;

                if(tmptime > JUDGETIME)

				{

					ptraininfo->STATUS3G = 0; 

				}



                tmptime = curtime - ptraininfo->UNIXTIMEBD;

                if(tmptime > JUDGETIME)

				{

					ptraininfo->STATUSBD = 0; 

				}

#if 1

                if(2 == ptraininfo->STATUSBD)

                {

                    ptraininfo->STATUS3G = 0;

                    ptraininfo->LDPSTATUS = 2;

                } else

                {

                    if((0 == ptraininfo->STATUS3G) && (0 == ptraininfo->STATUSBD))

                    {

                        tmptime = curtime - ptraininfo->UNIXTIMELAST;

                        if(tmptime <= JUDGETIME)

                        {

                            ptraininfo->LDPSTATUS = 1;

                        } else if((tmptime > JUDGETIME) && (tmptime <= ONE_HOUR_TIME))

                        {

                            ptraininfo->LDPSTATUS = 3;

                        } else

                        {

                            ptraininfo->LDPSTATUS = 4;

                        }

                    } else

                    {

                        ptraininfo->LDPSTATUS = 1;

                    }

                }

#else				

#endif



                /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


				/* EXEC SQL 

				UPDATE AP_TRAIN_LASTSTATUS

				SET   IDX_BD          = :ptraininfo->IDX_BD,

					IDX_3G          = :ptraininfo->IDX_3G,

					LASTTIME3G      = to_date(:ptraininfo->LASTTIME3G ,'yyyy-mm-dd hh24:mi:ss'),

					LASTTIMEBD      = to_date(:ptraininfo->LASTTIMEBD ,'yyyy-mm-dd hh24:mi:ss'),

					CROSSROADNO     = :ptraininfo->CROSSROADNO     ,

					STATIONNAME     = trim(:ptraininfo->STATIONNAME)     ,

					STATIONNO       = :ptraininfo->STATIONNO       ,

					TIMSSTATIONNO   = :ptraininfo->TIMSSTATIONNO     ,

					TIMSSTATIONNAME = trim(:ptraininfo->TIMSSTATIONNAME)     ,

					LINENO          = :ptraininfo->LINENO     ,

					LINENAME        = trim(:ptraininfo->LINENAME)     ,

					DRIVERNO        = :ptraininfo->DRIVERNO     ,

					DRIVERNAME      = trim(:ptraininfo->DRIVERNAME)  ,   

					STATUSBD        = :ptraininfo->STATUSBD     ,

					STATUS3G        = :ptraininfo->STATUS3G     ,

					CC              = trim(:ptraininfo->CC)     ,

					JD              = :ptraininfo->JD     ,

					WD              = :ptraininfo->WD     ,

                    HB              = :ptraininfo->HB     ,

					BTSD            = :ptraininfo->BTSD     ,

					KHBB            = :ptraininfo->KHBB     ,

					ZZ              = :ptraininfo->ZZ     ,

					JC              = :ptraininfo->JC     ,

					GLB             = :ptraininfo->GLB     ,

					LS              = :ptraininfo->LS     ,

					PROVER6A        = :ptraininfo->PROVER6A     ,

					PROVERTCMS      = :ptraininfo->PROVERTCMS     ,

					PROVERLKJ       = :ptraininfo->PROVERLKJ     ,

					DRIVERBID       = trim(:ptraininfo->DRIVERBID) ,   

					BDJD            = :ptraininfo->BDJD     ,

					BDWD            = :ptraininfo->BDWD     ,

                    BDHB            = :ptraininfo->BDHB     ,

					BDSD            = :ptraininfo->BDSD     ,

					DRIVERTEL       = trim(:ptraininfo->DRIVERTEL)     ,

					LKJSD           = :ptraininfo->LKJSD     ,

					DRIVERDID       = trim(:ptraininfo->DRIVERDID)     ,

					LKJVER          = trim(:ptraininfo->LKJVER)  ,

					FDRIVERNO		= :ptraininfo->FDRIVERNO ,

					FDRIVERNAME		= trim(:ptraininfo->FDRIVERNAME) ,

					FDRIVERTEL		= trim(:ptraininfo->FDRIVERTEL),

					LDPSTATUS		= :ptraininfo->LDPSTATUS,

					LASTTIME		= to_date(:ptraininfo->LASTTIME ,'yyyy-mm-dd hh24:mi:ss'),

					LASTTIMEBDCT	= to_date(:ptraininfo->LASTTIMEBDCT ,'yyyy-mm-dd hh24:mi:ss'),

                    LASTTIMEBDNBGD	= to_date(:ptraininfo->LASTTIMEBDNBGD ,'yyyy-mm-dd hh24:mi:ss'),

                    LKJ_DATA_VER    = trim(:ptraininfo->LKJ_DATA_VER),

                    LKJ_SOFT_VER    = trim(:ptraininfo->LKJ_SOFT_VER),

                    LDP_CPU_VER     = :ptraininfo->LDP_CPU_VER,

                    LDP_WXTX_VER    = :ptraininfo->LDP_WXTX_VER,

                    FHJLQ_VER       = :ptraininfo->FHJLQ_VER,

                    WLJKB_VER       = :ptraininfo->WLJKB_VER,

                    TCMS_VER1       = :ptraininfo->TCMS_VER1,

                    TCMS_VER2       = :ptraininfo->TCMS_VER2,

                    TCMS_VER3       = :ptraininfo->TCMS_VER3,

                    TCMS_VER4       = :ptraininfo->TCMS_VER4,

                    SIXA_CPUVER     = :ptraininfo->SIXA_CPUVER,

                    B_BOUNDARY_NAME = trim(:ptraininfo->B_BOUNDARY_NAME),

                    TMIS_STATION_NO = :ptraininfo->TMIS_STATION_NO,

                    PASS_BOUNDARY_TIME = to_date(:ptraininfo->PASS_BOUNDARY_TIME ,'yyyy-mm-dd hh24:mi:ss'),

                    CUR_BID         = trim(:ptraininfo->CUR_BID),

                    PROVERSELFCHECK = :ptraininfo->PROVERSELFCHECK,

                    COMP            = :ptraininfo->COMP

                    WHERE IDX = :ptraininfo->IDX; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 79;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlbuft((void **)0,
      "update AP_TRAIN_LASTSTATUS  set IDX_BD=:b0,IDX_3G=:b1,LASTTIME3G=to_d\
ate(:b2,'yyyy-mm-dd hh24:mi:ss'),LASTTIMEBD=to_date(:b3,'yyyy-mm-dd hh24:mi:\
ss'),CROSSROADNO=:b4,STATIONNAME=trim(:b5),STATIONNO=:b6,TIMSSTATIONNO=:b7,T\
IMSSTATIONNAME=trim(:b8),LINENO=:b9,LINENAME=trim(:b10),DRIVERNO=:b11,DRIVER\
NAME=trim(:b12),STATUSBD=:b13,STATUS3G=:b14,CC=trim(:b15),JD=:b16,WD=:b17,HB\
=:b18,BTSD=:b19,KHBB=:b20,ZZ=:b21,JC=:b22,GLB=:b23,LS=:b24,PROVER6A=:b25,PRO\
VERTCMS=:b26,PROVERLKJ=:b27,DRIVERBID=trim(:b28),BDJD=:b29,BDWD=:b30,BDHB=:b\
31,BDSD=:b32,DRIVERTEL=trim(:b33),LKJSD=:b34,DRIVERDID=trim(:b35),LKJVER=tri\
m(:b36),FDRIVERNO=:b37,FDRIVERNAME=trim(:b38),FDRIVERTEL=trim(:b39),LDPSTATU\
S=:b40,LASTTIME=to_date(:b41,'yyyy-mm-dd hh24:mi:ss'),LASTTIMEBDCT=to_date(:\
b42,'yyyy-mm-dd hh24:mi:ss'),LASTTIMEBDNBGD=to_date(:b43,'yyyy-mm-dd hh24:mi\
:ss'),LKJ_DATA_VER=trim(:b44),LKJ_SOFT_VER=trim(:b45),LDP_CPU_VER=:b46,LDP_W\
XTX_VER=:b47,FHJLQ_VER=:b48,WLJKB_VER=:b49,TCMS_VER1=:b50,TCMS_VER2=:b51,TCM\
S_VER3=:b52,TCMS_VER4=:b53,SIXA_CPUVER=:b54");
    sqlstm.stmt = ",B_BOUNDARY_NAME=trim(:b55),TMIS_STATION_NO=:b56,PASS_BO\
UNDARY_TIME=to_date(:b57,'yyyy-mm-dd hh24:mi:ss'),CUR_BID=trim(:b58),PROVERSE\
LFCHECK=:b59,COMP=:b60 where IDX=:b61";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )963;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)(ptraininfo->IDX_BD);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(ptraininfo->IDX_3G);
    sqlstm.sqhstl[1] = (unsigned long )33;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(ptraininfo->LASTTIME3G);
    sqlstm.sqhstl[2] = (unsigned long )21;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)(ptraininfo->LASTTIMEBD);
    sqlstm.sqhstl[3] = (unsigned long )21;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&(ptraininfo->CROSSROADNO);
    sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(ptraininfo->STATIONNAME);
    sqlstm.sqhstl[5] = (unsigned long )33;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&(ptraininfo->STATIONNO);
    sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&(ptraininfo->TIMSSTATIONNO);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)(ptraininfo->TIMSSTATIONNAME);
    sqlstm.sqhstl[8] = (unsigned long )33;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&(ptraininfo->LINENO);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)(ptraininfo->LINENAME);
    sqlstm.sqhstl[10] = (unsigned long )33;
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(ptraininfo->DRIVERNO);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)(ptraininfo->DRIVERNAME);
    sqlstm.sqhstl[12] = (unsigned long )33;
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(ptraininfo->STATUSBD);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(ptraininfo->STATUS3G);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)(ptraininfo->CC);
    sqlstm.sqhstl[15] = (unsigned long )21;
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(ptraininfo->JD);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(ptraininfo->WD);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(ptraininfo->HB);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&(ptraininfo->BTSD);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&(ptraininfo->KHBB);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(ptraininfo->ZZ);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(ptraininfo->JC);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(ptraininfo->GLB);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&(ptraininfo->LS);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&(ptraininfo->PROVER6A);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&(ptraininfo->PROVERTCMS);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&(ptraininfo->PROVERLKJ);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)(ptraininfo->DRIVERBID);
    sqlstm.sqhstl[28] = (unsigned long )5;
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&(ptraininfo->BDJD);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(ptraininfo->BDWD);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&(ptraininfo->BDHB);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&(ptraininfo->BDSD);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)(ptraininfo->DRIVERTEL);
    sqlstm.sqhstl[33] = (unsigned long )33;
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&(ptraininfo->LKJSD);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)(ptraininfo->DRIVERDID);
    sqlstm.sqhstl[35] = (unsigned long )5;
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)(ptraininfo->LKJVER);
    sqlstm.sqhstl[36] = (unsigned long )21;
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&(ptraininfo->FDRIVERNO);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)(ptraininfo->FDRIVERNAME);
    sqlstm.sqhstl[38] = (unsigned long )33;
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)(ptraininfo->FDRIVERTEL);
    sqlstm.sqhstl[39] = (unsigned long )33;
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&(ptraininfo->LDPSTATUS);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)(ptraininfo->LASTTIME);
    sqlstm.sqhstl[41] = (unsigned long )21;
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)(ptraininfo->LASTTIMEBDCT);
    sqlstm.sqhstl[42] = (unsigned long )21;
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)(ptraininfo->LASTTIMEBDNBGD);
    sqlstm.sqhstl[43] = (unsigned long )21;
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)(ptraininfo->LKJ_DATA_VER);
    sqlstm.sqhstl[44] = (unsigned long )21;
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)(ptraininfo->LKJ_SOFT_VER);
    sqlstm.sqhstl[45] = (unsigned long )21;
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)&(ptraininfo->LDP_CPU_VER);
    sqlstm.sqhstl[46] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&(ptraininfo->LDP_WXTX_VER);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
    sqlstm.sqhstv[48] = (unsigned char  *)&(ptraininfo->FHJLQ_VER);
    sqlstm.sqhstl[48] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[48] = (         int  )0;
    sqlstm.sqindv[48] = (         short *)0;
    sqlstm.sqinds[48] = (         int  )0;
    sqlstm.sqharm[48] = (unsigned long )0;
    sqlstm.sqadto[48] = (unsigned short )0;
    sqlstm.sqtdso[48] = (unsigned short )0;
    sqlstm.sqhstv[49] = (unsigned char  *)&(ptraininfo->WLJKB_VER);
    sqlstm.sqhstl[49] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[49] = (         int  )0;
    sqlstm.sqindv[49] = (         short *)0;
    sqlstm.sqinds[49] = (         int  )0;
    sqlstm.sqharm[49] = (unsigned long )0;
    sqlstm.sqadto[49] = (unsigned short )0;
    sqlstm.sqtdso[49] = (unsigned short )0;
    sqlstm.sqhstv[50] = (unsigned char  *)&(ptraininfo->TCMS_VER1);
    sqlstm.sqhstl[50] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[50] = (         int  )0;
    sqlstm.sqindv[50] = (         short *)0;
    sqlstm.sqinds[50] = (         int  )0;
    sqlstm.sqharm[50] = (unsigned long )0;
    sqlstm.sqadto[50] = (unsigned short )0;
    sqlstm.sqtdso[50] = (unsigned short )0;
    sqlstm.sqhstv[51] = (unsigned char  *)&(ptraininfo->TCMS_VER2);
    sqlstm.sqhstl[51] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[51] = (         int  )0;
    sqlstm.sqindv[51] = (         short *)0;
    sqlstm.sqinds[51] = (         int  )0;
    sqlstm.sqharm[51] = (unsigned long )0;
    sqlstm.sqadto[51] = (unsigned short )0;
    sqlstm.sqtdso[51] = (unsigned short )0;
    sqlstm.sqhstv[52] = (unsigned char  *)&(ptraininfo->TCMS_VER3);
    sqlstm.sqhstl[52] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[52] = (         int  )0;
    sqlstm.sqindv[52] = (         short *)0;
    sqlstm.sqinds[52] = (         int  )0;
    sqlstm.sqharm[52] = (unsigned long )0;
    sqlstm.sqadto[52] = (unsigned short )0;
    sqlstm.sqtdso[52] = (unsigned short )0;
    sqlstm.sqhstv[53] = (unsigned char  *)&(ptraininfo->TCMS_VER4);
    sqlstm.sqhstl[53] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[53] = (         int  )0;
    sqlstm.sqindv[53] = (         short *)0;
    sqlstm.sqinds[53] = (         int  )0;
    sqlstm.sqharm[53] = (unsigned long )0;
    sqlstm.sqadto[53] = (unsigned short )0;
    sqlstm.sqtdso[53] = (unsigned short )0;
    sqlstm.sqhstv[54] = (unsigned char  *)&(ptraininfo->SIXA_CPUVER);
    sqlstm.sqhstl[54] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[54] = (         int  )0;
    sqlstm.sqindv[54] = (         short *)0;
    sqlstm.sqinds[54] = (         int  )0;
    sqlstm.sqharm[54] = (unsigned long )0;
    sqlstm.sqadto[54] = (unsigned short )0;
    sqlstm.sqtdso[54] = (unsigned short )0;
    sqlstm.sqhstv[55] = (unsigned char  *)(ptraininfo->B_BOUNDARY_NAME);
    sqlstm.sqhstl[55] = (unsigned long )33;
    sqlstm.sqhsts[55] = (         int  )0;
    sqlstm.sqindv[55] = (         short *)0;
    sqlstm.sqinds[55] = (         int  )0;
    sqlstm.sqharm[55] = (unsigned long )0;
    sqlstm.sqadto[55] = (unsigned short )0;
    sqlstm.sqtdso[55] = (unsigned short )0;
    sqlstm.sqhstv[56] = (unsigned char  *)&(ptraininfo->TMIS_STATION_NO);
    sqlstm.sqhstl[56] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[56] = (         int  )0;
    sqlstm.sqindv[56] = (         short *)0;
    sqlstm.sqinds[56] = (         int  )0;
    sqlstm.sqharm[56] = (unsigned long )0;
    sqlstm.sqadto[56] = (unsigned short )0;
    sqlstm.sqtdso[56] = (unsigned short )0;
    sqlstm.sqhstv[57] = (unsigned char  *)(ptraininfo->PASS_BOUNDARY_TIME);
    sqlstm.sqhstl[57] = (unsigned long )21;
    sqlstm.sqhsts[57] = (         int  )0;
    sqlstm.sqindv[57] = (         short *)0;
    sqlstm.sqinds[57] = (         int  )0;
    sqlstm.sqharm[57] = (unsigned long )0;
    sqlstm.sqadto[57] = (unsigned short )0;
    sqlstm.sqtdso[57] = (unsigned short )0;
    sqlstm.sqhstv[58] = (unsigned char  *)(ptraininfo->CUR_BID);
    sqlstm.sqhstl[58] = (unsigned long )5;
    sqlstm.sqhsts[58] = (         int  )0;
    sqlstm.sqindv[58] = (         short *)0;
    sqlstm.sqinds[58] = (         int  )0;
    sqlstm.sqharm[58] = (unsigned long )0;
    sqlstm.sqadto[58] = (unsigned short )0;
    sqlstm.sqtdso[58] = (unsigned short )0;
    sqlstm.sqhstv[59] = (unsigned char  *)&(ptraininfo->PROVERSELFCHECK);
    sqlstm.sqhstl[59] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[59] = (         int  )0;
    sqlstm.sqindv[59] = (         short *)0;
    sqlstm.sqinds[59] = (         int  )0;
    sqlstm.sqharm[59] = (unsigned long )0;
    sqlstm.sqadto[59] = (unsigned short )0;
    sqlstm.sqtdso[59] = (unsigned short )0;
    sqlstm.sqhstv[60] = (unsigned char  *)&(ptraininfo->COMP);
    sqlstm.sqhstl[60] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[60] = (         int  )0;
    sqlstm.sqindv[60] = (         short *)0;
    sqlstm.sqinds[60] = (         int  )0;
    sqlstm.sqharm[60] = (unsigned long )0;
    sqlstm.sqadto[60] = (unsigned short )0;
    sqlstm.sqtdso[60] = (unsigned short )0;
    sqlstm.sqhstv[61] = (unsigned char  *)(ptraininfo->IDX);
    sqlstm.sqhstl[61] = (unsigned long )33;
    sqlstm.sqhsts[61] = (         int  )0;
    sqlstm.sqindv[61] = (         short *)0;
    sqlstm.sqinds[61] = (         int  )0;
    sqlstm.sqharm[61] = (unsigned long )0;
    sqlstm.sqadto[61] = (unsigned short )0;
    sqlstm.sqtdso[61] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



					if (sqlca.sqlcode != 0)

					{

                        printf("更新TRAINLASTSTATUS表失败%s-%s,ORACLE返回值：%d\n",ptraininfo->T_TYPE_ID,ptraininfo->LOCO_NO,sqlca.sqlcode);

						memset(temp,0,1024);

                        sprintf(temp,"更新TRAINLASTSTATUS表失败%s-%s,ORACLE返回值：%d\n",ptraininfo->T_TYPE_ID,ptraininfo->LOCO_NO,sqlca.sqlcode);

                        //sprintf(temp,"更新TRAINLASTSTATUS表失败,ORACLE返回值：%d\n",sqlca.sqlcode);

						lprintf(disp.e,temp);

						cclog('e',temp);





                        memset(temp2,0,1024);

                        sprintf(temp2,"CROSSROADNO=%d,STATIONNO=%d,TIMSSTATIONNO=%d,LINENO=%d,DRIVERNO=%d,STATUSBD=%d,STATUS3G=%d,JD=%f,WD=%f,HB=%f,BTSD=%f,KHBB=%d,ZZ=%d,GLB=%d,LS=%d,PROVER6A=%d,PROVERTCMS=%d,PROVERLKJ=%d,BDJD=%f,BDWD=%f,BDHB=%f,BDSD=%f,LKJSD=%f,FDRIVERNO=%d,LDPSTATUS=%d,LDP_CPU_VER=%f,LDP_WXTX_VER=%f,FHJLQ_VER=%f,WLJKB_VER=%f,TCMS_VER1=%d,TCMS_VER2=%d,TCMS_VER3=%d,TCMS_VER4=%d,SIXA_CPUVER=%f,JC=%f,TMIS_STATION_NO=%d,PROVERSELFCHECK=%d,COMP=%d,LKJ_TYPE=%d,CRK=%d\n",

                                ptraininfo->CROSSROADNO,

                                ptraininfo->STATIONNO,

                                ptraininfo->TIMSSTATIONNO,

                                ptraininfo->LINENO,

                                ptraininfo->DRIVERNO,

                                ptraininfo->STATUSBD,

                                ptraininfo->STATUS3G,

                                ptraininfo->JD,

                                ptraininfo->WD,

                                ptraininfo->HB,

                                ptraininfo->BTSD,

                                ptraininfo->KHBB,

                                ptraininfo->ZZ,

                                ptraininfo->GLB,

                                ptraininfo->LS,

                                ptraininfo->PROVER6A,

                                ptraininfo->PROVERTCMS,

                                ptraininfo->PROVERLKJ,

                                ptraininfo->BDJD,

                                ptraininfo->BDWD,

                                ptraininfo->BDHB,

                                ptraininfo->BDSD,

                                ptraininfo->LKJSD,

                                ptraininfo->FDRIVERNO,

                                ptraininfo->LDPSTATUS,

                                ptraininfo->LDP_CPU_VER,

                                ptraininfo->LDP_WXTX_VER,

                                ptraininfo->FHJLQ_VER,

                                ptraininfo->WLJKB_VER,

                                ptraininfo->TCMS_VER1,

                                ptraininfo->TCMS_VER2,

                                ptraininfo->TCMS_VER3,

                                ptraininfo->TCMS_VER4,

                                ptraininfo->SIXA_CPUVER,

                                ptraininfo->JC,

                                ptraininfo->TMIS_STATION_NO,

                                ptraininfo->PROVERSELFCHECK,

                                ptraininfo->COMP,

                                ptraininfo->LKJ_TYPE,

                                ptraininfo->CRK);

                        lprintf(disp.e,temp2);

                        cclog('e',temp2);

                    }

				num++;	

			}	

		}

	}	

	

	/* EXEC SQL COMMIT; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 79;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1226;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}





    /*  add by linw 20160226  */

//	time2 = time(NULL);

//	getDateTime(&yy, &mm, &dd, &hh, &mi, &ss);

//	//printf("更新TRAINLASTSTATUS表成功 %d,curtime=%d\n",num,curtime);

//	lprintf(disp.r,"%d-%2d-%2d %2d:%2d:%2d:总数目<%d>3G在线<%d>,无火回电<%d>,离线<%d>,失效<%d>\n",yy,mm,dd,hh,mi,ss,num,num1,num2,num3,num4);

}


void data_analysis()

{

	char chCmd;/*获取键盘字符*/

	time_t preunixtime;

	time_t nowunixtime;

    /*  add by linw 20160226  */

//	int g_year=0, g_month=0, g_day=0, g_hour=0, g_minute=0, g_second=0;



	int tmp_count= 0;                  /*从MQ中读出进行处理的记录数*/

	int indexPos=0;

	int length= 0;                   /*用来存放每包数据的长度变量*/

	int totallen;                   /*从MQ中读取数据的长度*/

	int buf_len,idx;

	int bStarting = 1;

	unsigned char rcv_data[409600];



	buf_len = sizeof(rcv_data);



    /* add by linw 20160226 */

//	preunixtime = nowunixtime = time(NULL);

    nowunixtime = time(NULL);

    preunixtime = nowunixtime;



	while(1)

	{

		tmp_count=0;

		indexPos=0;



		if(_kbhit())

		{

			chCmd = getchar();

            if(('q' == chCmd) || ('Q' == chCmd))

			{

				printf("The data analizer has exited...\n");

				break;

            } else

			{

				setDispSwitch(chCmd);

			}

		}



		if(Queue[0].LData[0] == MQHO_UNUSABLE_HOBJ)

		{

			if(bStarting)

			{

				bStarting=0;

            } else

			{

				//#ifdef UNIX_LINUX_SYS     

					//sleep(10);               

				//#else

					//_sleep(1000);  
				Sleep(1000);

				//#endif               

		    

			}

			

			//连接队列管理器，打开4个队列

            if(0 == OpenQueue(&Queue[MQ_MANAGER]))

			{

                for(idx = 1; idx < 4; idx ++)

                    OpenQueue(&Queue[idx]);

			}

        } else

		{

			memset(rcv_data, 0, buf_len);

			totallen = 0;

            totallen = ReadQueue(&Queue[MQ_FROMJCMDQ], rcv_data, buf_len);

			if(totallen > 0)

			{	

				//#ifdef UNIX_LINUX_SYS		

				//MQSend(mongoqname, rcv_data, totallen, msgid);  

				//lprintf(disp.r,"发送数据总长度为%d字节\n",totallen);

                //#endif



                /* add by linw 20160226 */

//				gloab_3g_usednum = gloab_bd_usednum =gloab_fault_usednum =gloab_event_usednum =0;

                gloab_3g_usednum = 0;

                gloab_bd_usednum = 0;

                gloab_fault_usednum = 0;

                gloab_event_usednum = 0;



                while(indexPos < (totallen - 40))

				{

                    length = charToint(rcv_data + indexPos + 2, 2);

                    if(length < 40)

					{

						break;

                    } else

					{

                        parse_start(rcv_data + indexPos, length);

					}



					indexPos += length;

                    tmp_count ++;

				}



				if(checknum >= CHECKNUM)

				{

					checknum = 0;

					thread_conncheck();

                } else

				{

					checknum++;

				}



				if(disp.r)

				{

					printf("已处理<%d>条数据<%d>条实时,<%d>条北斗,<%d>条故障<%d>条事件\n\n",

						tmp_count,gloab_3g_usednum,gloab_bd_usednum,gloab_fault_usednum,gloab_event_usednum);

				}



				insertFAULTHandle();

				insertEVENTHandle();

				insert3GHandle();

				insertBDHandle();



				nowunixtime = time(NULL);

				if((nowunixtime - preunixtime) >= CHECKTIME)

				{

					updateTrainStatus();

					preunixtime = nowunixtime;

                }

//                if((nowunixtime - preunixtime) >= CHECKTIME_Boundary)

//                {

//                    c_map_clear(&boundary_map);

//                    getboundaryInfo();

//                }

            }

        }

	}



	exit(0);



	return;

}



int main(int argc, char *argv[])
{
    /*  add by linw 20160226 */
//	int sum=0,i=0;
//	int g_year = 0, g_month = 0, g_day = 0, g_hour = 0, g_minute = 0, g_second = 0, s = 0;

    int year = 2016;
    int month = 3;
    int day = 2;
    int hour = 0;
    int min = 0;
    int sec = 0;

    int  sys_flag;							/*系统标志，1代表LAIS系统*/
    int  n;									/*子程序调用序号*/

	atexit(exithook);
    strcpy(cmd_sub_routine, "bjcmd2016");	/*数据处理子程序名称*/
	strcpy(configfile, "cmddp.cfg");		/*设置程序配置文件名称*/
	hash_init(&engineHash, 1);				/*故障，事件去重*/
    hash_init(&engineHash_3g, 1);				/*故障，事件去重*/
    hash_init(&engineHash_fault, 1);				/*故障，事件去重*/
    hash_init(&engineHash_event, 1);				/*故障，事件去重*/



	c_map_create(&person_map, int_comparer);/*司机相关信息*/
	c_map_create(&installtrain_map, int_comparer);/*未用*/
	c_map_create(&tcmsfault_map, int_comparer);
	c_map_create(&tcmsfault_map_v2, int_comparer);
	c_map_create(&_6afault_map, int_comparer);
	c_map_create(&ldpfault_map, int_comparer);
	c_map_create(&traininfo_map, int_comparer);
	c_map_create(&lkjenvent_map, int_comparer);
	c_map_create(&lineinfo_map, int_comparer);
    c_map_create(&boundary_map, int_comparer);	

	sys_flag = 1;	/*CMD系统标志*/		

	if (argc > 1) 
	{
		n = atoi(argv[1]);
    } else
	{
		n = 1;
	}

    memset(&disp, 0, sizeof(DISP));

    getDateTime(&year, &month, &day, &hour, &min, &sec);

#ifdef UNIX_LINUX_DEBUG

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
#endif
	
    _mkdir("./log");	/*数据处理程序日志文件存放在log目录*/
    chmod("./log", 0x0100 | 0x0080 | 0x0040);

    cclog('i', "\n\n\n\t\t\t\t Timesten入库数据解析程序启动。。。。。。\n");	

	/*系统设定环境变量：Export NLS_LANG=AMERICAN_AMERICA.ZHS16GBK */

	setlocale(LC_ALL,"SIMPLIFIED CHINESE_CHINA.ZHS16GBK");

    sprintf(sub_routine, "%s-%d", cmd_sub_routine, n);
    init_read_configfile(0, configfile, sub_routine);    

    InitMQ();

	/*deal_Socketdata(cmd_sub_routine,configfile);*/
	init_oracle(sub_routine, configfile);

    cclog('i', "数据处理子进程成功启动!\n");

    getbasicInfo();
	data_analysis();

	return 0;
}

