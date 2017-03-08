
#ifndef JWJK_COMMON_H
#define JWJK_COMMON_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <windows.h>

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdarg.h>


#include <process.h>
#include <direct.h>
#include <OBJBASE.H> 
#define SWAP2(w) (w)
#define SWAP4(w) (w)

/* ����OCIͷ�ļ�*/
#include <oci.h>
/* ����SQLCAͷ�ļ�*/
#include <sqlca.h>
#include <sqlcpr.h>
//����������
//#include <pthread.h>

#define UNIX_LINUX_SYS 0
#define UNIX_LINUX_DEBUG 0

//#ifdef UNIX_LINUX_SYS
//	#include <sys/types.h>
//	#include <sys/time.h>
//	#include <unistd.h> 
//	#include <uuid/uuid.h>
//	#define SWAP2(w) (w)
//	#define SWAP4(w) (w)
	/*#define SWAP2(w) (((w&0xFF00)>>8)|((w&0x00FF)<<8))
	#define SWAP4(w) (((w&0xFF000000)>>24)|((w&0xFF0000)>>8)|((w&0xFF00)<<8)|((w&0xFF)<<24))
	*/
////#else
//	#include <windows.h>
//	#include <process.h>
//	#include <direct.h>
//	#include <OBJBASE.H> 
//	#define SWAP2(w) (w)
//	#define SWAP4(w) (w)
//#endif

#include "hash.h"
#include "dberr.h"
#include "map/c_map.h"
#include "map/c_pair.h"


#define COMMITNUM 100 /*һ���ύ��������*/
typedef struct _tagnode{
	int icx;
	int ich;
	struct _tagnode *next;
} tagnode;
typedef struct _taghead{
	int count;
	struct _tagnode *first;
	struct _tagnode *last;
} taghead;
typedef struct DISPLAY
{
	int a;/*�ܿ���*/
	int e;/*������Ϣ��ʾ����*/
	int t;/*��ʾ������������*/
	int b;/*������ʾ����*/
	int r;/*������ʾ*/
	int s;/*�Ƿ��¼*/
	int g;/*3g��ʾ����*/
	int f;/*������ʾ����*/
	int v;/*�¼���ʾ����*/
} DISP;


//typedef struct{
//	unsigned int num;
//	unsigned int key[50000];
//	unsigned int traintype[50000];
//}trainkey_stu,*ptrainkey_stu;
//
//typedef struct{
//	int num;
//	int traintype[50];
//}updatetraintype_stu,*pupdatetraintype_stu;
//
///*add by guo 20160817 */
//typedef struct{
//    char t_type_id[5];
//    char loco_no[5] ;
//    int datatype;/*��������  1:3G, 2:������3:���ϣ�4:�¼�, 0:����*/
//    int efield;  /*�����ֶ�  1:ʱ�䣬2:�ٶȣ�3:���Σ�4:��γ��, 0:����*/
//    char ereason[2014];/*����ԭ��*/
//    char btsj[21];
//    char rksj[21];
//}AP_PARSE_ERROR_LOG,*pAP_PARSE_ERROR_LOG;
//
//typedef struct{
//	char IDX[33];/*����idx*/
//	char T_TYPE_ID[5];/*����ID	char[5]            */
//	char LOCO_NO[5];/*����ID	char[5]            */
//	int  AB;/*AB��	int                    */
//	char DRIVERBID[5];/*֧���ID	char[5]            */
//	char DRIVERBSNAME[11];/*֧��ּ��	char [11]      */
//	char DRIVERBFNAME[33];/*֧���ȫ��	char[33]       */
//	char DRIVERDID[5];/*֧���ID	char[5]            */
//	char DRIVERDSNAME[11];/*֧��μ��	char[11]       */
//	char DRIVERDFNAME[33];/*֧���ȫ��	char[33]       */
//	char B_ID[5];/*������ID	char[5]            */
//	char BSHORTNAME[11];/*�����ּ��	char [11]      */
//	char BFULLNAME[33];/*������ȫ��	char [33]      */
//	char D_ID[5];/*������ID	char[5]            */
//	char DSHORTNAME[11];/*�����μ��	char [11]      */
//	char DFULLNAME[33];/*������ȫ��	char [33]      */
//	char T_TYPE_NAME[11];/*�����ͺż��	char [11]      */
//	char T_TYPE_F_NAME[33];/*�����ͺ�ȫ��	char [33]      */
//	char EQUIPFACTORY[30];/*�豸����	char [30]          */
//	char IDX_3G[33];/*3G��IDX	char [33]          */
//	char IDX_BD[33];/*BD��IDX	char [33]          */
//	char LASTTIME3G[21];/*3G�������ʱ��	char [21]  */
//	char LASTTIMEBD[21];/*BD�������ʱ��	char [21]  */
//	int  STATUS3G;/*3G����״̬	int            */
//	int  STATUSBD;/*BD����״̬	int            */
//	int  CROSSROADNO;/*��·��	int                */
//	int  STATIONNO;/*��վ��	int                */
//	char STATIONNAME[33];/*��վ��	char [33]          */
//	int  TIMSSTATIONNO;/*TIMS��վ��	int            */
//	char TIMSSTATIONNAME[33];/*TIMS��վ��	char [33]      */
//	int  LINENO;/*��·��	int                */
//	char LINENAME[33];/*��·��	char [33]          */
//	unsigned int  DRIVERNO;/*˾����	int                */
//	char DRIVERNAME[33];/*˾����	char [33]          */
//	char DRIVERTEL[33];/*˾����ϵ��ʽ	char [33]      */
//
//	unsigned int FDRIVERNO;	  /*��˾���� NUMBER(10),*/
//	char FDRIVERNAME[33];    /*��˾���� VARCHAR2(32),*/
//	char FDRIVERTEL[33];    /*��˾����ϵ��ʽ VARCHAR2(32),*/
//
//	double JD;/*����	Double                 */
//	double WD;/*γ��	Double                 */
//	float  HB;/*����	float */
//	// double HB				;/*����	float   edit by guo 20160518 float    */
//	float  BTSD;/*��ͷ�ٶ�	float              */
//	int    KHBB;/*�ͻ�����	int                */
//	int  ZZ;/*����		int                */
//	float  JC;/*�Ƴ�		float                */
//	int  GLB;/*�����	int                */
//	int  LS;/*����		int                */
//	char CC[21];/*����*/
//	int  PROVER6A;/*6A���ݿ�Э��汾	int        */
//	int  PROVERTCMS;/*TCMS���ݿ�Э��汾	int    */
//	int  PROVERLKJ;/*LKJ���ݿ�Э��汾	int    */
//	double BDJD;/*��������	Double             */
//	double BDWD;/*����γ��	Double             */
//	double BDHB;/*��������	float  edit by guo 20160518 float  */
//	float BDSD;/*�����ٶ�	float              */
//	float LKJSD;/*TAX�·��ٶ�	float          */
//	char LKJVER[21];/*LKJ�汾��	char[21]       */
//	char CUR_B_ID[5];/*������ǰ���ھ�*/
//	time_t UNIXTIME3G;/*3G����һ��unixʱ��*/
//	time_t UNIXTIMEBD;/*BD����һ��unixʱ��*/
//	time_t UNIXTIMELAST;/*˫ͨ������һ��unixʱ��*/
//	int  LDPSTATUS;/*NUMBER(2) default 4 not null,*/
//	char LASTTIME[21];/*DATE*/
//	char LASTTIMEBDCT[21];/*DATE*/
//	char LASTTIMEBDNBGD[21];/*DATE*/
//
//	/* add by linw 20160328 */
//	char LKJ_DATA_VER[21];/*LKJ���ݰ汾*/
//	char LKJ_SOFT_VER[21];/*LKJ�汾��(����汾)*/
//	float LDP_CPU_VER;/*LDP������������汾*/
//	float LDP_WXTX_VER;/*LDP����ͨ�Ű�����汾*/
//	float FHJLQ_VER;/*������¼������汾*/
//	float WLJKB_VER;/*����ӿڰ�����汾*/
//	int TCMS_VER1;/*HXD-TCMS���ص�Ԫ�汾1��HXN:΢������汾��*/
//	int TCMS_VER2;/*HXD-TCMS���ص�Ԫ�汾2,HXN:΢������汾������*/
//	int TCMS_VER3;/*HXD-���ص�Ԫ�汾1,HXN:����GWM����汾��*/
//	int TCMS_VER4;/*HXD-���ص�Ԫ�汾2,HXN:����GWM����汾������*/
//	float SIXA_CPUVER;/*�ȵ�-����ƽ̨�汾*/
//	char B_BOUNDARY_NAME[33];/*�ֽ���*/
//	int TMIS_STATION_NO;/*TMIS��վ��*/
//	char PASS_BOUNDARY_TIME[21];/*���ֽ�ʱ��*/
//	char CUR_BID[5];/*��ǰ��*/
//
//	/*modified by zhangjing 20160407*/
//	int PROVERSELFCHECK; /*�Լ���Ϣ���ݿ�汾,NUMBER(5)*/
//	int COMP; /*LDP�Լ쳧��(1:������;2:����˼ά;3:�ɶ��˴�;4:�人��ԭ),NUMBER(1)*/
//	int LKJ_TYPE; /*LKJ����:Bit0=0:LKJ2000;Bit0=1:��һ��LKJ;Bit1=0:˼ά;Bit1=1:������;Bit2=0:LKJ2000����ǰ;Bit2=1:LKJ2000������;Bit3=0:������������Ч;Bit3=1:������������Ч,NUMBER(3)*/
//	int CRK; /*�����״̬:1���⣬2��⣬0δ֪ add by guo 20160530*/
//}bd_stu, *pbd_stu;
//
//typedef struct{
//	char IDX[33];/*����idx*/
//	char T_TYPE_ID[5]		;/*����ID	char[5]            */
//	char LOCO_NO[5]			;/*����ID	char[5]            */
//	int  AB					;/*AB��	int                    */
//	char DRIVERBID[5]			;/*֧���ID	char[5]            */
//	char DRIVERBSNAME[11]		;/*֧��ּ��	char [11]      */
//	char DRIVERBFNAME[33]		;/*֧���ȫ��	char[33]       */
//	char DRIVERDID[5]			;/*֧���ID	char[5]            */
//	char DRIVERDSNAME[11]		;/*֧��μ��	char[11]       */
//	char DRIVERDFNAME[33]		;/*֧���ȫ��	char[33]       */
//	char B_ID[5]			;/*������ID	char[5]            */
//	char BSHORTNAME[11]		;/*�����ּ��	char [11]      */
//	char BFULLNAME[33]		;/*������ȫ��	char [33]      */
//	char D_ID[5]			;/*������ID	char[5]            */
//	char DSHORTNAME[11]		;/*�����μ��	char [11]      */
//	char DFULLNAME[33]		;/*������ȫ��	char [33]      */
//	char T_TYPE_NAME[11]	;/*�����ͺż��	char [11]      */
//	char T_TYPE_F_NAME[33]			;/*�����ͺ�ȫ��	char [33]      */
//	char EQUIPFACTORY[30]			;/*�豸����	char [30]          */
//	char IDX_3G[33]			;/*3G��IDX	char [33]          */
//	char IDX_BD[33]			;/*BD��IDX	char [33]          */
//	char LASTTIME3G[21]		;/*3G�������ʱ��	char [21]  */
//	char LASTTIMEBD[21]		;/*BD�������ʱ��	char [21]  */
//	int  STATUS3G			;/*3G����״̬	int            */
//	int  STATUSBD			;/*BD����״̬	int            */
//	int  CROSSROADNO		;/*��·��	int                */
//	int  STATIONNO			;/*��վ��	int                */
//	char STATIONNAME[33]	;/*��վ��	char [33]          */
//	int  TIMSSTATIONNO		;/*TIMS��վ��	int            */
//	char TIMSSTATIONNAME[33];/*TIMS��վ��	char [33]      */
//	int  LINENO				;/*��·��	int                */
//	char LINENAME[33]		;/*��·��	char [33]          */
//	unsigned int  DRIVERNO			;/*˾����	int                */
//	char DRIVERNAME[33]		;/*˾����	char [33]          */
//	char DRIVERTEL[33]		;/*˾����ϵ��ʽ	char [33]      */
//
//	unsigned int FDRIVERNO        ;	  /*��˾���� NUMBER(10),*/
//	char FDRIVERNAME[33] ;    /*��˾���� VARCHAR2(32),*/
//	char FDRIVERTEL[33]  ;    /*��˾����ϵ��ʽ VARCHAR2(32),*/
//	
//	double JD				;/*����	Double                 */
//	double WD				;/*γ��	Double                 */
//    float  HB				;/*����	float */
//   // double HB				;/*����	float   edit by guo 20160518 float    */
//	float  BTSD				;/*��ͷ�ٶ�	float              */
//	int    KHBB				;/*�ͻ�����	int                */
//	int  ZZ					;/*����		int                */
//	float  JC					;/*�Ƴ�		float                */
//	int  GLB				;/*�����	int                */
//	int  LS					;/*����		int                */
//	char CC[21]             ;/*����*/
//	int  PROVER6A			;/*6A���ݿ�Э��汾	int        */
//	int  PROVERTCMS			;/*TCMS���ݿ�Э��汾	int    */
//	int  PROVERLKJ			;/*LKJ���ݿ�Э��汾	int    */
//	double BDJD				;/*��������	Double             */
//	double BDWD				;/*����γ��	Double             */
//    double BDHB				;/*��������	float  edit by guo 20160518 float  */
//	float BDSD				;/*�����ٶ�	float              */
//	float LKJSD				;/*TAX�·��ٶ�	float          */
//	char LKJVER[21]			;/*LKJ�汾��	char[21]       */
//	char CUR_B_ID[5]        ;/*������ǰ���ھ�*/
//	time_t UNIXTIME3G		;/*3G����һ��unixʱ��*/
//	time_t UNIXTIMEBD		;/*BD����һ��unixʱ��*/	
//	time_t UNIXTIMELAST		;/*˫ͨ������һ��unixʱ��*/
//	int  LDPSTATUS       	;/*NUMBER(2) default 4 not null,*/
//	char LASTTIME[21]       ;/*DATE*/
//	char LASTTIMEBDCT[21]	;/*DATE*/
//	char LASTTIMEBDNBGD[21] ;/*DATE*/
//
//    /* add by linw 20160328 */
//    char LKJ_DATA_VER[21]   ;/*LKJ���ݰ汾*/
//    char LKJ_SOFT_VER[21]   ;/*LKJ�汾��(����汾)*/
//    float LDP_CPU_VER       ;/*LDP������������汾*/
//    float LDP_WXTX_VER      ;/*LDP����ͨ�Ű�����汾*/
//    float FHJLQ_VER         ;/*������¼������汾*/
//    float WLJKB_VER         ;/*����ӿڰ�����汾*/
//    int TCMS_VER1           ;/*HXD-TCMS���ص�Ԫ�汾1��HXN:΢������汾��*/
//    int TCMS_VER2           ;/*HXD-TCMS���ص�Ԫ�汾2,HXN:΢������汾������*/
//    int TCMS_VER3           ;/*HXD-���ص�Ԫ�汾1,HXN:����GWM����汾��*/
//    int TCMS_VER4           ;/*HXD-���ص�Ԫ�汾2,HXN:����GWM����汾������*/
//    float SIXA_CPUVER       ;/*�ȵ�-����ƽ̨�汾*/
//    char B_BOUNDARY_NAME[33];/*�ֽ���*/
//    int TMIS_STATION_NO     ;/*TMIS��վ��*/
//    char PASS_BOUNDARY_TIME[21];/*���ֽ�ʱ��*/
//    char CUR_BID[5]         ;/*��ǰ��*/
//
//    /*modified by zhangjing 20160407*/
//    int PROVERSELFCHECK; /*�Լ���Ϣ���ݿ�汾,NUMBER(5)*/
//    int COMP; /*LDP�Լ쳧��(1:������;2:����˼ά;3:�ɶ��˴�;4:�人��ԭ),NUMBER(1)*/
//    int LKJ_TYPE; /*LKJ����:Bit0=0:LKJ2000;Bit0=1:��һ��LKJ;Bit1=0:˼ά;Bit1=1:������;Bit2=0:LKJ2000����ǰ;Bit2=1:LKJ2000������;Bit3=0:������������Ч;Bit3=1:������������Ч,NUMBER(3)*/
//    int CRK; /*�����״̬:1���⣬2��⣬0δ֪ add by guo 20160530*/
//}traininfo_stu,*ptraininfo_stu;
//
///* add by guo 20160331 */
//typedef struct{
//    char idx[33];/*CHAR(32) not null,*/
//    char t_type_id[5];/*CHAR(3),*/
//    char loco_no[5];/*CHAR(4),*/
//    char rksj[21];/*DATE,*/
//    int tmisno;/*NUMBER(10),*/
//    char tmisname[33];/*VARCHAR2(32),*/
//    char recordtime[21];/*DATE,*/
//    double speed;/*NUMBER(6,2),*/
//    char cc[21];/*VARCHAR2(21),*/
//    int driverno;/*NUMBER(10),*/
//    char drivername[33];/*VARCHAR2(16),*/
//    int direction;/*NUMBER(10)*/
//}boundary_info,*pboundary_info;
//
///* add by guo 20160406 */
//typedef struct{
//    char idx[33];               /*CHAR(32) not null,*/
//    char t_type_id[5];          /*CHAR(3),*/
//    char loco_no[5];            /*CHAR(4),*/
//    char last_cc[21]            ;/*VARCHAR2(10),*/
//    char next_cc[21]            ;/*VARCHAR2(10),*/
//    int last_driverno      ;/*NUMBER(7),*/
//    int next_driverno      ;/*NUMBER(7),*/
//    char last_drivername[33]    ;/*VARCHAR2(20),*/
//    char next_drivername[33]    ;/*VARCHAR2(20),*/
//    char last_boundary_time[21] ;/*DATE,*/
//    char next_boundary_time[21] ;/*DATE,*/
//    double last_sjsd          ;/*NUMBER(8,2),*/
//    double next_sjsd          ;/*NUMBER(8,2),*/
//    int last_tmis_no       ;/*NUMBER(5),*/
//    int next_tmis_no       ;/*NUMBER(5),*/
//    char last_tmis_name[33]     ;/*DATE,*/
//    char next_tmis_name[33]     ;/*DATE,*/
//    char last_bid[5]           ;/*CHAR(2),*/
//    char duration_bid[5]       ;/*CHAR(2),*/
//    char next_bid[5]           ;/*CHAR(2),*/
//    char rksj[21]               ;/*DATE*/
//}boundary_history,*pboundary_history;
//
//typedef struct{
//    char idx[33]                ;/*CHAR(32),*/
//    char t_type_id[5]          ;/*CHAR(3),*/
//    char loco_no[5]            ;/*CHAR(4),*/
//    char cc[21]                 ;/*VARCHAR2(10),*/
//    int driverno           ;/*NUMBER(7),*/
//    char drivername[33]         ;/*VARCHAR2(20),*/
//    char pass_boundary_time[21] ;/*LKJ DATE,*/
//    char update_time[21]        ;/*DATE,*/
//    char last_bid[5]           ;/*CHAR(2),*/
//    char next_bid[5]           ;/*CHAR(2),*/
//    double sjsd               ;/*NUMBER(8,2),*/
//    int tmis_station_no    ;/*NUMBER(5),*/
//    char tmis_station_name[33]  ;/*VARCHAR2(32)*/
//}boundary_cur,*pboundary_cur;
//
//typedef struct{
//	//int	 WORKID;
//	char	B_ID[5];
//	int		CROSS_ROAD_NO;
//	int		TRAIN_STATION_NO;
//	int		TMIS_STATION_NO;
//	char	TRAIN_STATION_NAME[33];
//	char	TMIS_STATION_NAME[33];
//	int		TRAIN_LINE_NO;
//	char	TRAIN_LINE_NAME[33];
//    char    STATION_B_ID[5];
//    int     ISBOUNDARY;
//    char	SSJ[5];
//    char	LJ[5];
//}lineinfo_stu,*plineinfo_stu; 
//
//
//typedef struct{
//	char B_ID[5];
//	char D_ID[5];
//	char NAME[33];
//	char MOBILENUMBER[33];
//	char BSNAME[11];
//	char BFNAME[33];
//	char DSNAME[11];
//	char DFNAME[33];
//}person_stu,*pperson_stu; 
//
//
//typedef struct{
//	int	CODEID ;//NUMBER(5) not null,
//	char SJMS[33];
//	int  SJDJ;
//}lkjevent_stu,*plkjevent_stu; 
//
//
//
//typedef struct{
//	int		CODE        ;//NUMBER(10) not null,
//	int		CODEV2  ;//NUMBER(10) not null,
//	char	T_TYPE_ID[5]   ;//CHAR(3) not null,
//	char	NAME[101]        ;//VARCHAR2(100 CHAR),
//    int		GRADE       ;//NUMBER(2),
//	char CODESHOW[21]		;/*���ϴ����ַ�����ʽ*/
//}tcmsfault_stu,*ptcmsfault_stu; 
//
//
//
//typedef struct{
//	int  CODE;//���ϴ���
//	char NAME[101];//��������
//	int  GRADE;//���ϵȼ�
//	char CODESHOW[21]		;/*���ϴ����ַ�����ʽ*/
//}_6afault_stu,*p_6afault_stu; 
//
//typedef struct{
//	int  CODE;//���ϴ���
//	char NAME[101];//��������
//	int  GRADE;//���ϵȼ�
//}ldpfault_stu,*pldpfault_stu; 



extern char sub_routine[30];        /*����ӽ�������*/ 
extern char configfile[30];         /*ϵͳ�����ļ�*/

/*��������Դ�����־������صı���*/
#define DEBUGBUFSIZE 4096
#define LOGERROR	'E'
#define LOGNORMAL	'I'
#define LOGWARNING	'W'

static FILE	*debugfile = 0;        /*���Դ���*/
/*��־����*/
static FILE	*logfile = 0;		    /*Ĭ���������*/
static char	logfilename[100] = "";		/*��־�ļ���*/
static int	logMaxLen = 1024*1024;	    /*Ĭ�ϴ�С,1M*/


/*�ڳ��������ļ������õı������ɺ���cmn_read_db_config()��ȡ*/
extern char  user[11], pass[21], tname[21]; /*���ݿ����ӱ���*/
extern char  qmname[20];                    /*MQ���й�����*/ 
extern char  revqname[31];	                /*MQ���ն���*/
extern char  sndqname[31];                  /*MQ����Ͷ���*/
extern char  revlaisqname[31];				/*����LAISQ������*/
extern char  sendlaisqname[31];				/*���͵�LAISQ������*/
extern char  historyqname[31];			/*������ʷ���ݶ�����*/
extern char  faultqname[31];				/*���͹������ݶ�����*/
extern char  init_count[11];                /*��MQ����,Ȼ����������MQ*/
extern char  msgid[10];                     /*MQ�ķ���ID*/
extern char  jkcount[10];                   /*Ҫ���������ݴ����������*/
extern taghead* lploco;
extern int ans_framenum;
extern hash_t  engineHash;/*bdȥ��*/
extern hash_t  engineHash_3g;/*3gȥ��*/
extern hash_t  engineHash_fault;/*����ȥ��*/
extern hash_t  engineHash_event;/*�¼�ȥ��*/
extern DISP  disp;

extern  int  dblinkcheck;
extern	int  pre_dblinkcheck;
//extern  pthread_mutex_t mut;
char  bindport[6];
int g_istest;
int g_type;
int g_locono;
unsigned short ipport;
char ipaddr[20];
extern char  mongoqname[31]; 				/*���͵�MongoDB�������*/
extern c_map person_map; /*˾����Ϣmap*/
extern c_map installtrain_map; /*LDPװ����Ϣmap*/
extern c_map tcmsfault_map;    /*TCMS������Ϣv10map*/
extern c_map tcmsfault_map_v2; /*TCMS������Ϣv20map*/
extern c_map _6afault_map;  /*6A����map*/
extern c_map ldpfault_map;  /*LDP����map*/
extern c_map traininfo_map;  /*������Ϣmap*/
extern c_map lkjenvent_map;  /*�����¼�map*/
extern c_map lineinfo_map;  /*��·��Ϣmap*/
extern c_map boundary_map;  /*�ֽ���Ϣmap*/
//extern trainkey_stu trainkey;
//extern updatetraintype_stu updatetraintype;
int	  GetToken(char *buffer, int pos, char *token);
/* ��;: ���ַ���ת��Ϊ��д��*/
char  *UCase(const char *source, char *target);
/*��;: ���ַ���ת��ΪСд��*/
char  *LCase(const char *source, char *target);
/*��;: �����������ļ�*/
int	 cmn_read_db_config(char *path, char *name);
/*�������ļ���Ϣ*/
void  init_read_configfile(char *path, char *name, char *sub_routine);   
/*��;: ����ꡢ�¡��ա�ʱ���֡�����Ϣ*/
void  getDateTime(int *year, int *month,int *day, int *hour, int *minute, int *second);
/*��;: �ж��ꡢ�¡������ݵĺϷ���*/
int checkdate(int yy,int mm, int dd,int hh,int mi,int ss);
/*��;:  ���ֽ����ݸ��ֽ���ǰת��Ϊ�����ͺ���*/
long charTolong_h(unsigned char *buffer, int size, unsigned char mask);

/*��;:  ���ֽ����ݵ��ֽ���ǰת��Ϊ�����ͺ���(����������)*/
long  charTolong(unsigned char *buffer, int size, unsigned char mask);
/*��;:  ���ֽ����ݵ��ֽ���ǰת��Ϊ�����ͺ���*/
long  charToint(unsigned char *buffer, int size);
/*��;:  ���ֽ����ݵ��ֽ���ǰת��Ϊ�����ͺ���(����������)*/
long  charToint_mask(unsigned char *buffer, int size, unsigned char mask);
/*���ܣ��ѳ�����ת��Ϊ���ֽ����ݵ��ֽ���ǰ��ʽ*/
int longTochar(unsigned char *buffer, int buflen, long data);
/*��;: ������ͺ���*/
unsigned char Check_sum(unsigned char *buf, int buflen);
unsigned char Check_sum2(unsigned char *buf, int buflen);
/*��;: ��������Ƿ����Э�飬�������Դ�豸���͡����������롢���ݳ���*/
short getDataTypeLength(unsigned char *buffer, unsigned char *type, unsigned char *data_id, int trade_len);
/*��;: �Զ����ӡ*/
int lprintf(int dis, char* fmt, ...);
/*��;: ȥ���ַ�����0~9��A~z������ַ�*/
char *Trim(char *dst, const char *src);

/*��;: ȥ���ַ�����ǰ����ַ�*/
//char *Trim1(char *dst, const char *src)
void trim1(char *s);

/*���ܣ�������־�ļ���*/
int setLogFile(char *name);
/* ���ܣ�������־�ļ���С*/
void setLogFileSize(int size);
/* ��;: �����־��Ϣ����־�ļ�, ��ʵ���ļ���С�Զ�����*/
void  writeLogInfo(char type, const char *message);
/* ��;: ���������־*/
void  writedebugInfo(char * fname, char *message, char type);
/*���ܣ�����ļ�����·��*/
int extractFilePath(char * path, char * fileName);
/*��;: ��ʼ��MQ���ӺͶ��о��*/
void  init_MQ(char *sub_routine, char *configfile);
//int InitMQ();
/*��;: �ж��Ƿ�ɹ�����Oracle���ݿ�*/
void init_oracle(char *sub_routine, char *configfile);

/*��;: ��ȡĳ��ʱ��UNIXʱ���*/
time_t getUnixTime(char* buf);
/*��;: ��ȡϵͳʱ��UNIXʱ���*/
void getDateTime1(int *year, int *month, int *day, int *hour, int *minute, int *second,time_t *unixtime);

int getGuid(char* guidstr);
//int judgeUpdateTraintype(char *buf,updatetraintype_stu* stu);

void saveTcpdata(unsigned char* data,int len,int tag);
int readTcpdata();


void jktoDate(char *date,long ch);
int getdiffsecond(unsigned int tm_n,unsigned int tm_o);
 
 
char* tcmstoDate(char *date, unsigned char *ch);

 
int s8toint(unsigned char ch);

 
int s16toint(char *ch);

 
int s32toint(char *ch);
 

void getCheci(long checi, char *buf);

long getKilo(long param);

void cclog(char type,char *ch);
//�����������һ�²��Ժ���
void testlog(char type,char *ch);
//��Թ��ϴ����·��Ĳ��Ժ���
void testlogGZ(char type,char *ch);

//ȥ���ַ��������пո�
void VS_StrTrim(char *pStr_from,char *pTmp_to);

#ifdef __cplusplus
}
#endif

#endif
