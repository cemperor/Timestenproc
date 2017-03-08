
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

/* 包含OCI头文件*/
#include <oci.h>
/* 包含SQLCA头文件*/
#include <sqlca.h>
#include <sqlcpr.h>
//包含互斥锁
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


#define COMMITNUM 100 /*一次提交插入条数*/
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
	int a;/*总开关*/
	int e;/*错误信息显示开关*/
	int t;/*显示接收数据类型*/
	int b;/*北斗显示开关*/
	int r;/*接收显示*/
	int s;/*是否记录*/
	int g;/*3g显示开关*/
	int f;/*故障显示开关*/
	int v;/*事件显示开关*/
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
//    int datatype;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/
//    int efield;  /*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/
//    char ereason[2014];/*错误原因*/
//    char btsj[21];
//    char rksj[21];
//}AP_PARSE_ERROR_LOG,*pAP_PARSE_ERROR_LOG;
//
//typedef struct{
//	char IDX[33];/*索引idx*/
//	char T_TYPE_ID[5];/*车型ID	char[5]            */
//	char LOCO_NO[5];/*车号ID	char[5]            */
//	int  AB;/*AB节	int                    */
//	char DRIVERBID[5];/*支配局ID	char[5]            */
//	char DRIVERBSNAME[11];/*支配局简称	char [11]      */
//	char DRIVERBFNAME[33];/*支配局全称	char[33]       */
//	char DRIVERDID[5];/*支配段ID	char[5]            */
//	char DRIVERDSNAME[11];/*支配段简称	char[11]       */
//	char DRIVERDFNAME[33];/*支配段全称	char[33]       */
//	char B_ID[5];/*配属局ID	char[5]            */
//	char BSHORTNAME[11];/*配属局简称	char [11]      */
//	char BFULLNAME[33];/*配属局全称	char [33]      */
//	char D_ID[5];/*配属段ID	char[5]            */
//	char DSHORTNAME[11];/*配属段简称	char [11]      */
//	char DFULLNAME[33];/*配属段全称	char [33]      */
//	char T_TYPE_NAME[11];/*机车型号简称	char [11]      */
//	char T_TYPE_F_NAME[33];/*机车型号全称	char [33]      */
//	char EQUIPFACTORY[30];/*设备厂家	char [30]          */
//	char IDX_3G[33];/*3G的IDX	char [33]          */
//	char IDX_BD[33];/*BD的IDX	char [33]          */
//	char LASTTIME3G[21];/*3G最新入库时间	char [21]  */
//	char LASTTIMEBD[21];/*BD最新入库时间	char [21]  */
//	int  STATUS3G;/*3G在线状态	int            */
//	int  STATUSBD;/*BD在线状态	int            */
//	int  CROSSROADNO;/*交路号	int                */
//	int  STATIONNO;/*车站号	int                */
//	char STATIONNAME[33];/*车站名	char [33]          */
//	int  TIMSSTATIONNO;/*TIMS车站号	int            */
//	char TIMSSTATIONNAME[33];/*TIMS车站名	char [33]      */
//	int  LINENO;/*线路号	int                */
//	char LINENAME[33];/*线路名	char [33]          */
//	unsigned int  DRIVERNO;/*司机号	int                */
//	char DRIVERNAME[33];/*司机名	char [33]          */
//	char DRIVERTEL[33];/*司机联系方式	char [33]      */
//
//	unsigned int FDRIVERNO;	  /*副司机号 NUMBER(10),*/
//	char FDRIVERNAME[33];    /*副司机名 VARCHAR2(32),*/
//	char FDRIVERTEL[33];    /*副司机联系方式 VARCHAR2(32),*/
//
//	double JD;/*经度	Double                 */
//	double WD;/*纬度	Double                 */
//	float  HB;/*海拔	float */
//	// double HB				;/*海拔	float   edit by guo 20160518 float    */
//	float  BTSD;/*包头速度	float              */
//	int    KHBB;/*客货本补	int                */
//	int  ZZ;/*总重		int                */
//	float  JC;/*计长		float                */
//	int  GLB;/*公里标	int                */
//	int  LS;/*辆数		int                */
//	char CC[21];/*车次*/
//	int  PROVER6A;/*6A数据块协议版本	int        */
//	int  PROVERTCMS;/*TCMS数据块协议版本	int    */
//	int  PROVERLKJ;/*LKJ数据块协议版本	int    */
//	double BDJD;/*北斗经度	Double             */
//	double BDWD;/*北斗纬度	Double             */
//	double BDHB;/*北斗海拔	float  edit by guo 20160518 float  */
//	float BDSD;/*北斗速度	float              */
//	float LKJSD;/*TAX下发速度	float          */
//	char LKJVER[21];/*LKJ版本号	char[21]       */
//	char CUR_B_ID[5];/*机车当前所在局*/
//	time_t UNIXTIME3G;/*3G最新一包unix时间*/
//	time_t UNIXTIMEBD;/*BD最新一包unix时间*/
//	time_t UNIXTIMELAST;/*双通道最新一包unix时间*/
//	int  LDPSTATUS;/*NUMBER(2) default 4 not null,*/
//	char LASTTIME[21];/*DATE*/
//	char LASTTIMEBDCT[21];/*DATE*/
//	char LASTTIMEBDNBGD[21];/*DATE*/
//
//	/* add by linw 20160328 */
//	char LKJ_DATA_VER[21];/*LKJ数据版本*/
//	char LKJ_SOFT_VER[21];/*LKJ版本号(软件版本)*/
//	float LDP_CPU_VER;/*LDP主处理器软件版本*/
//	float LDP_WXTX_VER;/*LDP无线通信板软件版本*/
//	float FHJLQ_VER;/*防护记录器软件版本*/
//	float WLJKB_VER;/*网络接口板软件版本*/
//	int TCMS_VER1;/*HXD-TCMS主控单元版本1，HXN:微机软件版本号*/
//	int TCMS_VER2;/*HXD-TCMS主控单元版本2,HXN:微机软件版本号冗余*/
//	int TCMS_VER3;/*HXD-网关单元版本1,HXN:网管GWM软件版本号*/
//	int TCMS_VER4;/*HXD-网关单元版本2,HXN:网管GWM软件版本号冗余*/
//	float SIXA_CPUVER;/*先导-中央平台版本*/
//	char B_BOUNDARY_NAME[33];/*局界名*/
//	int TMIS_STATION_NO;/*TMIS车站号*/
//	char PASS_BOUNDARY_TIME[21];/*过局界时间*/
//	char CUR_BID[5];/*当前局*/
//
//	/*modified by zhangjing 20160407*/
//	int PROVERSELFCHECK; /*自检信息数据库版本,NUMBER(5)*/
//	int COMP; /*LDP自检厂商(1:株洲所;2:河南思维;3:成都运达;4:武汉征原),NUMBER(1)*/
//	int LKJ_TYPE; /*LKJ类型:Bit0=0:LKJ2000;Bit0=1:新一代LKJ;Bit1=0:思维;Bit1=1:株洲所;Bit2=0:LKJ2000升级前;Bit2=1:LKJ2000升级后;Bit3=0:项点分析数据无效;Bit3=1:项点分析数据有效,NUMBER(3)*/
//	int CRK; /*出入库状态:1出库，2入库，0未知 add by guo 20160530*/
//}bd_stu, *pbd_stu;
//
//typedef struct{
//	char IDX[33];/*索引idx*/
//	char T_TYPE_ID[5]		;/*车型ID	char[5]            */
//	char LOCO_NO[5]			;/*车号ID	char[5]            */
//	int  AB					;/*AB节	int                    */
//	char DRIVERBID[5]			;/*支配局ID	char[5]            */
//	char DRIVERBSNAME[11]		;/*支配局简称	char [11]      */
//	char DRIVERBFNAME[33]		;/*支配局全称	char[33]       */
//	char DRIVERDID[5]			;/*支配段ID	char[5]            */
//	char DRIVERDSNAME[11]		;/*支配段简称	char[11]       */
//	char DRIVERDFNAME[33]		;/*支配段全称	char[33]       */
//	char B_ID[5]			;/*配属局ID	char[5]            */
//	char BSHORTNAME[11]		;/*配属局简称	char [11]      */
//	char BFULLNAME[33]		;/*配属局全称	char [33]      */
//	char D_ID[5]			;/*配属段ID	char[5]            */
//	char DSHORTNAME[11]		;/*配属段简称	char [11]      */
//	char DFULLNAME[33]		;/*配属段全称	char [33]      */
//	char T_TYPE_NAME[11]	;/*机车型号简称	char [11]      */
//	char T_TYPE_F_NAME[33]			;/*机车型号全称	char [33]      */
//	char EQUIPFACTORY[30]			;/*设备厂家	char [30]          */
//	char IDX_3G[33]			;/*3G的IDX	char [33]          */
//	char IDX_BD[33]			;/*BD的IDX	char [33]          */
//	char LASTTIME3G[21]		;/*3G最新入库时间	char [21]  */
//	char LASTTIMEBD[21]		;/*BD最新入库时间	char [21]  */
//	int  STATUS3G			;/*3G在线状态	int            */
//	int  STATUSBD			;/*BD在线状态	int            */
//	int  CROSSROADNO		;/*交路号	int                */
//	int  STATIONNO			;/*车站号	int                */
//	char STATIONNAME[33]	;/*车站名	char [33]          */
//	int  TIMSSTATIONNO		;/*TIMS车站号	int            */
//	char TIMSSTATIONNAME[33];/*TIMS车站名	char [33]      */
//	int  LINENO				;/*线路号	int                */
//	char LINENAME[33]		;/*线路名	char [33]          */
//	unsigned int  DRIVERNO			;/*司机号	int                */
//	char DRIVERNAME[33]		;/*司机名	char [33]          */
//	char DRIVERTEL[33]		;/*司机联系方式	char [33]      */
//
//	unsigned int FDRIVERNO        ;	  /*副司机号 NUMBER(10),*/
//	char FDRIVERNAME[33] ;    /*副司机名 VARCHAR2(32),*/
//	char FDRIVERTEL[33]  ;    /*副司机联系方式 VARCHAR2(32),*/
//	
//	double JD				;/*经度	Double                 */
//	double WD				;/*纬度	Double                 */
//    float  HB				;/*海拔	float */
//   // double HB				;/*海拔	float   edit by guo 20160518 float    */
//	float  BTSD				;/*包头速度	float              */
//	int    KHBB				;/*客货本补	int                */
//	int  ZZ					;/*总重		int                */
//	float  JC					;/*计长		float                */
//	int  GLB				;/*公里标	int                */
//	int  LS					;/*辆数		int                */
//	char CC[21]             ;/*车次*/
//	int  PROVER6A			;/*6A数据块协议版本	int        */
//	int  PROVERTCMS			;/*TCMS数据块协议版本	int    */
//	int  PROVERLKJ			;/*LKJ数据块协议版本	int    */
//	double BDJD				;/*北斗经度	Double             */
//	double BDWD				;/*北斗纬度	Double             */
//    double BDHB				;/*北斗海拔	float  edit by guo 20160518 float  */
//	float BDSD				;/*北斗速度	float              */
//	float LKJSD				;/*TAX下发速度	float          */
//	char LKJVER[21]			;/*LKJ版本号	char[21]       */
//	char CUR_B_ID[5]        ;/*机车当前所在局*/
//	time_t UNIXTIME3G		;/*3G最新一包unix时间*/
//	time_t UNIXTIMEBD		;/*BD最新一包unix时间*/	
//	time_t UNIXTIMELAST		;/*双通道最新一包unix时间*/
//	int  LDPSTATUS       	;/*NUMBER(2) default 4 not null,*/
//	char LASTTIME[21]       ;/*DATE*/
//	char LASTTIMEBDCT[21]	;/*DATE*/
//	char LASTTIMEBDNBGD[21] ;/*DATE*/
//
//    /* add by linw 20160328 */
//    char LKJ_DATA_VER[21]   ;/*LKJ数据版本*/
//    char LKJ_SOFT_VER[21]   ;/*LKJ版本号(软件版本)*/
//    float LDP_CPU_VER       ;/*LDP主处理器软件版本*/
//    float LDP_WXTX_VER      ;/*LDP无线通信板软件版本*/
//    float FHJLQ_VER         ;/*防护记录器软件版本*/
//    float WLJKB_VER         ;/*网络接口板软件版本*/
//    int TCMS_VER1           ;/*HXD-TCMS主控单元版本1，HXN:微机软件版本号*/
//    int TCMS_VER2           ;/*HXD-TCMS主控单元版本2,HXN:微机软件版本号冗余*/
//    int TCMS_VER3           ;/*HXD-网关单元版本1,HXN:网管GWM软件版本号*/
//    int TCMS_VER4           ;/*HXD-网关单元版本2,HXN:网管GWM软件版本号冗余*/
//    float SIXA_CPUVER       ;/*先导-中央平台版本*/
//    char B_BOUNDARY_NAME[33];/*局界名*/
//    int TMIS_STATION_NO     ;/*TMIS车站号*/
//    char PASS_BOUNDARY_TIME[21];/*过局界时间*/
//    char CUR_BID[5]         ;/*当前局*/
//
//    /*modified by zhangjing 20160407*/
//    int PROVERSELFCHECK; /*自检信息数据库版本,NUMBER(5)*/
//    int COMP; /*LDP自检厂商(1:株洲所;2:河南思维;3:成都运达;4:武汉征原),NUMBER(1)*/
//    int LKJ_TYPE; /*LKJ类型:Bit0=0:LKJ2000;Bit0=1:新一代LKJ;Bit1=0:思维;Bit1=1:株洲所;Bit2=0:LKJ2000升级前;Bit2=1:LKJ2000升级后;Bit3=0:项点分析数据无效;Bit3=1:项点分析数据有效,NUMBER(3)*/
//    int CRK; /*出入库状态:1出库，2入库，0未知 add by guo 20160530*/
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
//	char CODESHOW[21]		;/*故障代码字符串格式*/
//}tcmsfault_stu,*ptcmsfault_stu; 
//
//
//
//typedef struct{
//	int  CODE;//故障代码
//	char NAME[101];//故障名称
//	int  GRADE;//故障等级
//	char CODESHOW[21]		;/*故障代码字符串格式*/
//}_6afault_stu,*p_6afault_stu; 
//
//typedef struct{
//	int  CODE;//故障代码
//	char NAME[101];//故障名称
//	int  GRADE;//故障等级
//}ldpfault_stu,*pldpfault_stu; 



extern char sub_routine[30];        /*存放子进程名称*/ 
extern char configfile[30];         /*系统配置文件*/

/*定义与调试处理、日志处理相关的变量*/
#define DEBUGBUFSIZE 4096
#define LOGERROR	'E'
#define LOGNORMAL	'I'
#define LOGWARNING	'W'

static FILE	*debugfile = 0;        /*调试处理*/
/*日志处理*/
static FILE	*logfile = 0;		    /*默认输出方向*/
static char	logfilename[100] = "";		/*日志文件名*/
static int	logMaxLen = 1024*1024;	    /*默认大小,1M*/


/*在程序配置文件中设置的变量，由函数cmn_read_db_config()读取*/
extern char  user[11], pass[21], tname[21]; /*数据库连接变量*/
extern char  qmname[20];                    /*MQ队列管理器*/ 
extern char  revqname[31];	                /*MQ接收队列*/
extern char  sndqname[31];                  /*MQ命令发送队列*/
extern char  revlaisqname[31];				/*接收LAISQ队列名*/
extern char  sendlaisqname[31];				/*发送到LAISQ队列名*/
extern char  historyqname[31];			/*发送历史数据队列名*/
extern char  faultqname[31];				/*发送故障数据队列名*/
extern char  init_count[11];                /*读MQ次数,然后重新连接MQ*/
extern char  msgid[10];                     /*MQ的服务ID*/
extern char  jkcount[10];                   /*要启动的数据处理程序数量*/
extern taghead* lploco;
extern int ans_framenum;
extern hash_t  engineHash;/*bd去重*/
extern hash_t  engineHash_3g;/*3g去重*/
extern hash_t  engineHash_fault;/*故障去重*/
extern hash_t  engineHash_event;/*事件去重*/
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
extern char  mongoqname[31]; 				/*发送到MongoDB程序队列*/
extern c_map person_map; /*司机信息map*/
extern c_map installtrain_map; /*LDP装车信息map*/
extern c_map tcmsfault_map;    /*TCMS故障信息v10map*/
extern c_map tcmsfault_map_v2; /*TCMS故障信息v20map*/
extern c_map _6afault_map;  /*6A故障map*/
extern c_map ldpfault_map;  /*LDP故障map*/
extern c_map traininfo_map;  /*机车信息map*/
extern c_map lkjenvent_map;  /*机车事件map*/
extern c_map lineinfo_map;  /*线路信息map*/
extern c_map boundary_map;  /*局界信息map*/
//extern trainkey_stu trainkey;
//extern updatetraintype_stu updatetraintype;
int	  GetToken(char *buffer, int pos, char *token);
/* 用途: 将字符串转换为大写串*/
char  *UCase(const char *source, char *target);
/*用途: 将字符串转换为小写串*/
char  *LCase(const char *source, char *target);
/*用途: 读程序配置文件*/
int	 cmn_read_db_config(char *path, char *name);
/*读配置文件信息*/
void  init_read_configfile(char *path, char *name, char *sub_routine);   
/*用途: 获得年、月、日、时、分、秒信息*/
void  getDateTime(int *year, int *month,int *day, int *hour, int *minute, int *second);
/*用途: 判断年、月、日数据的合法性*/
int checkdate(int yy,int mm, int dd,int hh,int mi,int ss);
/*用途:  多字节数据高字节在前转换为长整型函数*/
long charTolong_h(unsigned char *buffer, int size, unsigned char mask);

/*用途:  多字节数据低字节在前转换为长整型函数(有屏蔽掩码)*/
long  charTolong(unsigned char *buffer, int size, unsigned char mask);
/*用途:  多字节数据低字节在前转换为长整型函数*/
long  charToint(unsigned char *buffer, int size);
/*用途:  多字节数据低字节在前转换为长整型函数(有屏蔽掩码)*/
long  charToint_mask(unsigned char *buffer, int size, unsigned char mask);
/*功能：把长整型转换为多字节数据低字节在前格式*/
int longTochar(unsigned char *buffer, int buflen, long data);
/*用途: 计算检查和函数*/
unsigned char Check_sum(unsigned char *buf, int buflen);
unsigned char Check_sum2(unsigned char *buf, int buflen);
/*用途: 检查数据是否符合协议，获得数据源设备类型、数据特征码、数据长度*/
short getDataTypeLength(unsigned char *buffer, unsigned char *type, unsigned char *data_id, int trade_len);
/*用途: 自定义打印*/
int lprintf(int dis, char* fmt, ...);
/*用途: 去掉字符串非0~9、A~z以外的字符*/
char *Trim(char *dst, const char *src);

/*用途: 去掉字符串的前后空字符*/
//char *Trim1(char *dst, const char *src)
void trim1(char *s);

/*功能：设置日志文件名*/
int setLogFile(char *name);
/* 功能：设置日志文件大小*/
void setLogFileSize(int size);
/* 用途: 输出日志信息到日志文件, 可实现文件大小自动调节*/
void  writeLogInfo(char type, const char *message);
/* 用途: 输出调试日志*/
void  writedebugInfo(char * fname, char *message, char type);
/*功能：获得文件所在路径*/
int extractFilePath(char * path, char * fileName);
/*用途: 初始化MQ连接和队列句柄*/
void  init_MQ(char *sub_routine, char *configfile);
//int InitMQ();
/*用途: 判断是否成功连接Oracle数据库*/
void init_oracle(char *sub_routine, char *configfile);

/*用途: 获取某个时间UNIX时间戳*/
time_t getUnixTime(char* buf);
/*用途: 获取系统时间UNIX时间戳*/
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
//针对内外网不一致测试函数
void testlog(char type,char *ch);
//针对故障代码下发的测试函数
void testlogGZ(char type,char *ch);

//去除字符串中所有空格
void VS_StrTrim(char *pStr_from,char *pTmp_to);

#ifdef __cplusplus
}
#endif

#endif
