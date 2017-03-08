#ifndef _H_PROTOCOL_STRU
#define _H_PROTOCOL_STRU

#include <stdlib.h>
#include <fcntl.h>
#include <locale.h>

#include  "common.h"
#include  "dbcmn.h"

//#ifdef UNIX_LINUX_SYS
//#include <termios.h>
//#include <sys/dir.h>
//#include <sys/unistd.h>
//#include <sys/socket.h>
//#include <netinet/in.h>

//#else
#include <WINSOCK.H>
#include <windows.h>
#include <conio.h>
//#endif

#pragma pack(1)







/***********数据类型定义***********/



typedef unsigned char  uchar;



typedef unsigned short uint16;



typedef unsigned int   uint32;



typedef signed char    schar;



typedef short		   int16;



/*********************************/







struct STR_F



{



	uint16 c0;



	uchar c2[6];



};







struct STR_BIT 



{	



	uchar b0:1;



	uchar b1:1;



	uchar b2:1;



	uchar b3:1;



	uchar b4:1;



	uchar b5:1;



	uchar b6:1;



	uchar b7:1;



};







/*数据块头*/



struct STR_TOU



{



	uint16 c0;/*数据块长度*/



	uint16 c2;/*信息类别编码，1；2；3*/



	uchar c4;/*协议版本*/



};





/***********************报文头信息*******************************/

struct STR_DATAHEAD

{	

	uint16	c0;/*报文头特征码0xBB55*/

	uint16	c2;/*报文长度*/

	uchar	c4;

	uchar	c5;

	uint16	c6;/*局段号*/

	

	uchar	c8;/*信息类型,0x01实时信息;0x02故障信息*/

	uchar	c9;/*信息等级,0x00=不需应答，0x01=需要应答*/

	uint16	c10;/*帧号*/

	uint16	c12;/*数据区总长*/

	uchar	c14;/*分帧标识符,0 = 无分帧，大于0表示分帧总数*/

	uchar	c15;/*分帧号,分帧时有效，分帧号从1计数*/

	uint16	c16;/*车型*/

	uint16	c18;/*车号*/

	uchar	c20[6];/*时间*/

	uint32	c26;/*经度*/

	uint32	c30;/*纬度*/

	uint16	c34;/*速度*/

    //uint16	c36;/*海拔*/

    int16 c36;

    /*edit by guo 20160719*/

    //float	c36;/*海拔 edit by guo 20160517*/

};

/***********************报文头信息END*******************************/



/***********************机车安全信息*******************************/



/***********************机车安全信息*******************************/



/*机车安全信息*/



struct STR_LKJ_V10



{



	struct STR_TOU s_tou;



	uint32	c5	;/*日期/时间     */ 



	char	c9[4];/*车次字母部分 */ 



	uint32	c13	;/*	车次数字部分 */ 



	uint16	c17	;/*	车站号       */ 



	uint32	c19	;/*	司机号       */ 



	uint32	c23	;/*	副司机号     */ 



	uint16	c27	;/*	机车号       */ 



	uint16	c29	;/*	机车型号     */ 



	uint16	c31	;/*	实际交路号   */ 



	uint16	c33	;/*	客/货、本/补 */ 



	uint16	c35	;/*	实速         */ 



	uint16	c37	;/*	机车信号字   */ 



	uint16	c39	;/*	机车工况字   */ 



	uint16	c41	;/*	信号机编号   */ 



	uint16	c43	;/*	信号机种类字 */ 



	uint32	c45	;/*	公里标       */ 



	uint16	c49	;/*	总重         */ 



	uint16	c51	;/*	计长         */ 



	uint16	c53	;/*	辆数         */ 



	uint16	c55	;/*	列车管压力   */ 



	uint16	c57	;/*	装置状态     */ 





};



/*机车安全信息V2.0版*/



struct STR_LKJ_V20



{



	struct STR_TOU s_tou;



	uint32	c5	;/*日期/时间     */ 



	char	c9[4];/*车次字母部分 */ 



	uint32	c13	;/*	车次数字部分 */ 



	uint16	c17	;/*	车站号       */ 



	uint32	c19	;/*	司机号       */ 



	uint32	c23	;/*	副司机号     */ 



	uint16	c27	;/*	机车号       */ 



	uint16	c29	;/*	机车型号     */ 



	uint16	c31	;/*	实际交路号   */ 



	uchar	c33	;/*	客/货、本/补 */ 



	uint16	c34	;/*	实速         */ 



	uchar	c36	;/*	机车信号字   */ 



	uchar	c37	;/*	机车工况字   */ 



	uint16	c38	;/*	信号机编号   */ 



	uchar	c40	;/*	信号机种类字 */ 



	uint32	c41	;/*	公里标       */ 



	uint16	c45	;/*	总重         */ 



	uint16	c47	;/*	计长         */ 



	uint16	c49	;/*	辆数         */ 



	uint16	c51	;/*	列车管压力   */ 



	uchar	c53	;/*	装置状态     */ 



	uint16  c54 ;/*输入交路号*/



	uint16  c56 ;/*距离*/



	uint16  c58 ;/*限速*/



	uchar	c60 ;/*制动输出*/



	uchar	c61 ;/*当前线路号标志*/



	uint16 c62 ;/*当前线路号*/



	uchar  c64 ;/*前方线路号标志*/



	uint16 c65 ;/*前方线路号*/



	uchar  c67[3] ;/*当前TMIS车站号（本分区所属TMIS 站号）*/



	uchar  c70[3];/*前方TMIS车站号（下一TMIS站号）*/



	uchar  c73 ;/*前方车站交路号(下一分区实际交路号)*/



	uint16 c74 ;/*前方车站站号(下一车站号)*/



	uchar  c76;/*TAX监控状态*/



	uint16 c77;/*累计位移*/



	uchar  c79;



	uchar  c80;



	uchar  c81;



	uchar  c82;



};





/*机车安全信息V2.0版*/



struct STR_LKJ_V21



{



	struct STR_TOU s_tou;



	char    c5   ; /*LKJ类型 Bit0=0：LKJ2000；Bit0=1：新一代LKJ； Bit1=0：思维；Bit1=1：株洲所 */

	

	uint32	c6	;/*日期/时间     */ 



	char	c10[4];/*车次字母部分 */ 



	uint32	c14	;/*	车次数字部分 */ 



	uint16	c18	;/*	车站号       */ 



	uint32	c20	;/*	司机号       */ 



	uint32	c24	;/*	副司机号     */ 



	uint16	c28	;/*	机车号       */ 



	uint16	c30	;/*	机车型号     */ 



	uint16	c32	;/*	实际交路号   */ 



	uchar	c34	;/*	客/货、本/补 */ 



	uint16	c35	;/*	实速         */ 



	uchar	c37	;/*	机车信号字   */ 



	uchar	c38	;/*	机车工况字   */ 



	uint16	c39	;/*	信号机编号   */ 



	uchar	c41	;/*	信号机种类字 */ 



	uint32	c42	;/*	公里标       */ 



	uint16	c46	;/*	总重         */ 



	uint16	c48	;/*	计长         */ 



	uint16	c50	;/*	辆数         */ 



	uint16	c52	;/*	列车管压力   */ 



	uchar	c54	;/*	装置状态     */ 



	uint16  c55 ;/*输入交路号*/



	uint16  c57 ;/*距离*/



	uint16  c59 ;/*限速*/



	uchar	c61 ;/*制动输出*/



	uchar	c62 ;/*当前线路号标志*/



	uint16 c63 ;/*当前线路号*/



	uchar  c65 ;/*前方线路号标志*/



	uint16 c66 ;/*前方线路号*/



	uchar  c68[3] ;/*当前TMIS车站号（本分区所属TMIS 站号）*/



	uchar  c71[3];/*前方TMIS车站号（下一TMIS站号）*/



	uchar  c74 ;/*前方车站交路号(下一分区实际交路号)*/



	uint16 c75 ;/*前方车站站号(下一车站号)*/



	uchar  c77;/*TAX监控状态*/



	uint16 c78;/*累计位移*/



	uchar  c80;/*本分区支线*/



	uchar  c81;/*本分区侧线*/



	uchar  c82;/*前方分区支线*/



	uchar  c83;/*前方分区侧线*/

	



};

/**************************机车安全信息END*************************************/ 





/**********************TCMS系统信息************************************/





/***********基本运行信息数据块****************/

/*基本运行信息*/



struct STR_BASICINFO_V10



{



	struct STR_TOU s_tou;



	



	uchar	c5b0:2	;/*	操作端：00=无操作端01=I端10=II端 11=预留 */



	uchar	c5b2:2	;/*	受电弓状态:00=不升弓 01=升前弓10=升后弓11=预留*/	



	uchar	c5b4:1	;/*	主断合						   */



	uchar	c5b5:1	;/*	空转/滑行					   */	



	uchar	c5b6:2	;/*	撒沙：00=无撒沙 01=自动撒沙10=手动撒沙11=预留	 */	



	



	uchar	c6b0:1	;/*	过分相						   */



	uchar	c6rev1:1	;/*	预留*/	



	uchar	c6b2:2	;/*	机车工况 00=惰行 01=牵引 10=制动 11=预留*/	



	uchar	c6b4:2	;/*机车运行方向: 00=零位 01=向前 10=向后 11=预留	*/	



	uchar	c6rev6:2;/*预留*/	



	



	uchar	c7  ;/*预留                        */



	uchar	c8	;/*预留                        */



	uint16	c9	;/*手柄级位                    */



	uint32	c11	;/*系统时间                    */



	uint16	c15	;/*牵引/制动力设定值           */



	uint16	c17	;/*牵引/制动力实际值           */



	uint16	c19	;/*机车速度设定值              */



	uint16	c21	;/*机车速度实际值              */



	uint16	c23	;/*网压/主发电压               */



	uint16	c25	;/*网流/主发电流               */



	uint16	c27	;/*总风缸压力                  */



	uint16	c29	;/*列车管压力                  */



	uint16	c31	;/*制动缸压力                  */



	uint16	c33	;/*均衡风缸压力                */



	uint16	c35	;/*蓄电池电压                  */



	uint16	c37	;/*柴油机转速                  */



	uint32	c39	;/*总里程                      */



//	uchar	rev43[12];/*	预留		   */



};







/*基本运行信息 2.0版本*/



struct STR_BASICINFO_V20



{



	struct STR_TOU s_tou;



	uchar c5	;



	uchar c6	;



	uchar c7	;



	uchar c8	;



	uchar c9	;



	uchar c10	;



	uchar c11	;	



	uchar	c12  ;/*预留                        */



	uchar	c13	;/*预留                        */



	uchar	c14  ;/*预留                        */



	uchar	c15	;/*预留                        */



	uchar	c16[6];/*时间*/



	uint16  c22;



	uint16  c24;



	uint16  c26;



	uint16  c28;



	uint16  c30;



	uint16  c32;



	uint16  c34;



	uint16  c36;



	uint16  c38;



	uint16  c40;



	uint32  c42;



	uchar   c46;



	uint32  c47;



	uint32  c51;



	uint32  c55;



//	uchar	rev59[12];/*	预留		   */



};







/*基本运行信息2.0版*/



/*内燃机 （N3） 表D.15 基本运行信息数据块 2.0版*/



struct STR_BASICINFO_N_V20



{



    struct STR_TOU s_tou; /* 表头  */



	uchar   c5;



	uchar   c6;



	uchar   c7;



	uchar   c8;



	uchar   c9;



	uchar   c10;



	uchar   c11;



	uchar   c12;



	uchar   c13;



	uchar	c14[6];



	uchar   c20;   /**/



	uint16	c21	;/*	 */ 



	uint16	c23	;/*	 */ 



	uint16	c25	;/*	 */ 



	uint16	c27	;/*	*/ 



	uint16	c29	;/*	 */ 



	uint16	c31	;/*	 */ 



	uint16	c33	;/*	 */ 



	uint16	c35	;/*	 */ 



    //uint16	c37	;/*	 */

    int16 c37;/*基本运行系统-环境温度  1 = 0.1 ℃ INT*/

    /*edit by guo 20160718*/



	uint16	c39	;/*	 */ 



	uint16	c41	;/*	 */ 



	uint16	c43	;/*	 */ 



    //uint16	c45	;/*	 */

    int16   c45;/*基本运行系统-蓄电池充电电流 1 = 1A INT*/

    /*edit by guo 20160718*/



	uint16	c47	;/*	 */ 



	uint16	c49	;/*	 */ 



	uint16	c51	;/*	 */ 



	uint16	c53	;/*	 */ 



	uint16	c55	;/*	 */ 



	uint16	c57	;/*	 */ 



	uint32	c59	;/*	 */ 



//	uchar	rev63[18];/*预留      */ 



};





/***********基本运行信息数据块END****************/



/****************柴油机系统信息数据块************/



/*柴油机系统数据  协议1.0  表D.11*/



struct STR_DIESEL_V10 



{



	struct STR_TOU s_tou;



	uint16	c5;



	uint16	c7;



	uint16 c9;



	uint16 c11;



	uint16 c13;



	uint16 c15;



	uint16 c17;



	uint16 c19;



	uint16 c21;



	uint16 c23;



	uint16 c25;



	uint16 c27;



	uint16 c29;



	uint16 c31;



	uint16 c33;



	uint16 c35;



	uint16 c37;



	uint16 c39;



	uint16 c41;



	uint16 c43;



	uint16 c45;



	uint16 c47;



	uint16 c49;



	uint16 c51;



	uint16 c53;



	uint16 c55;



	uint16 c57;



	uint32 c59;



	uint16 c63;



//	uchar rev65[25];



};



/*内燃机  表D.16 柴油机系统数据块 2.0版*/



struct STR_DIESEL_V20



{



    struct STR_TOU s_tou; /* 表头  */



	uchar   c5;



	uchar   c6;



	uchar   c7;



	uchar   c8;



	uint16	c9	;/*	柴油机转速 */ 



    //uint16	c11	;/*	柴油机曲轴箱压力1 */



    //uint16	c13	;/*	柴油机曲轴箱压力2 */



    /*edit by guo 20160718*/

    int16	c11	;/*	柴油机曲轴箱压力1 */



    int16	c13	;/*	柴油机曲轴箱压力2 */

    /*end */



	uint16	c15	;/*	柴油机空气箱/稳压箱压力1 */ 



	uint16	c17	;/*	柴油机空气箱/稳压箱压力2 */ 



	uint16	c19	;/*	柴油机入口空气温度 */ 



    //uint16	c21	;/*	柴油机空气箱空气温度1 */



    //uint16	c23	;/*	柴油机空气箱空气温度2 */



    int16 c21;



    int16 c23;

    /*edit by guo 20160718*/



	uint16	c25	;/*	增压器机油进口压力1 */ 



	uint16	c27	;/*	增压器机油进口压力2 */ 



	uint16	c29	;/*	柴油机进口燃油压力 */ 



	uint16	c31	;/*	柴油机机油进口压力 */ 



    //uint16	c33	;/*	柴油机机油进口温度 */

    int16 c33;

    /*edit by guo 20160718*/



	uint16	c35	;/*	柴油机机油出口温度 */ 



	uint16	c37	;/*	柴油机冷却水出口压力1  */ 



	uint16	c39	;/*	柴油机冷却水出口压力2 */ 



	uint16	c41	;/*	柴油机冷却水进口压力1  */ 



	uint16	c43	;/*	柴油机冷却水进口压力2  */ 



	uint16	c45	;/*	中冷水泵出口压力  */ 



	uint16	c47	;/*	高温水泵出口压力  */ 



	uint16	c49	;/*	高温水进口温度  */ 



	uint16	c51	;/*	高温水出口温度  */ 



	uint16	c53	;/*	中冷水进口温度  */ 



	uint16	c55	;/*	中冷水出口温度  */ 



	uint16	c57	;/*	柴油机负载反馈信号（ELCS信号）  */ 



	uint16	c59	;/*	电喷控制器供电电源  */ 



	uint16	c61	;/*	喷油驱动电压  */ 



//	uchar	rev63[18];/*预留      */ 



};



/****************柴油机系统信息数据块END*********************/



/***************牵引系统信息数据块**************************/

/*牵引系统信息  1.0版本 表D.12*/



struct STR_QIANYIN_V10



{



	struct STR_TOU s_tou;



	uint16 c5;



	uint16 c7;



	uchar   c9;



	uchar   c10;



	uint16 c11;



	uint16 c13;



	uint16 c15;



	uint16 c17;



	uint16 c19;



	uint16 c21;



	uint16 c23;



	uint16 c25;



	uint16 c27;



	uint16 c29;



	uint16 c31;



	uint16 c33;



	uint16 c35;



	uint16 c37;



	uint16 c39;



	uint16 c41;



	uint16 c43;



	uint16 c45;



	uint16 c47;



	uint16 c49;



	uint16 c51;



	uint16 c53;



	uint16 c55;



	uint16 c57;



	uint16 c59;



	uint16 c61;



	uint16 c63;



	uint16 c65;



	uint16 c67;



	uint16 c69;



	uint16 c71;



	uint16 c73;



	uint16 c75;



	uint16 c77;



	uint16 c79;



	uint16 c81;



	uint16 c83;



	uint16 c85;



	uint16 c87;



	uint16 c89;



	uint16 c91;



	uint16 c93;



	uint16 c95;



	uint16 c97;



	uint16 c99;



	uint16 c101;



	uint16 c103;



	uint16 c105;



	uchar  c107;



	uchar  c108;



	uchar  c109;



	uchar  c110;





};



/*牵引系统信息 2.0版本  */



struct STR_QIANYIN_V20 



{



	struct STR_TOU s_tou;



	



	uchar	  c5	;



	uchar	  c6	;



	uchar	  c7	;







	uchar	c8  ;/*预留                        */



	uchar	c9	;/*预留                        */



	uchar	c10  ;/*预留                        */



	uchar	c11	;/*预留                        */



	uint16  c12;



	uint16  c14;



	uint16  c16;



	uint16  c18;



	uint16  c20;



	uint16  c22;



	uint16  c24;



	uint16  c26;



	uint16  c28;



	uint16  c30;



	uint16  c32;



	uint16  c34;



	uint16  c36;



	uint16  c38;



	uint16  c40;



	uint16  c42;



	uint16  c44;



	uint16  c46;



	uint16  c48;



	uint16  c50;



	uint16  c52;



	uint16  c54;



	uint16  c56;



	uint16  c58;



	uint16  c60;



	uint16  c62;



	uint16  c64;



	uint16  c66;



	uint16  c68;



	uint16  c70;



	uint16  c72;



	uint16  c74;



	uint16  c76;



	uint16  c78;



	uint16  c80;



	uint16  c82;



	uint16  c84;



	uint16  c86;



	uint16  c88;



	uint16  c90;



	uint16  c92;



	uint16  c94;



	uint16  c96;



	uint16  c98;



	uint16  c100;



	uint16  c102;



	uint16  c104;



	uint16  c106;



	uint16  c108;



	uint16  c110;



	uint16  c112;



	uint16  c114;



	uint16  c116;



	uint16  c118;



	uint16  c120;



//	uchar	rev122[19];/*	预留		   */



};





/*内燃机  牵引系统 2.0版 表D.14 信息类别编码0x11*/



struct STR_QIANYIN_N_V20



{



    struct STR_TOU s_tou; /* 表头  */



	uchar   c5;



	uchar   c6;



	uchar   c7;



	uchar   c8;



	uint16	c9	;       



	uint16	c11	;       



	uint16	c13	;       



	uint16	c15	;       



	uint16	c17	;       



	uint16	c19	;       



	uint16	c21	;       



	uint16	c23	;       



	uint16	c25	;       



	uint16	c27	;       



	uint16	c29	;       



	uint16	c31	;       



	uint16	c33	;       



	uint16	c35	;       



	uint16	c37	;       



	uint16	c39	;       



	uint16	c41	;       



	uint16	c43	;       



	uint16	c45	;       



	uint16	c47	;       



	uint16	c49	;       



	uint16	c51	;       



	uint16	c53	;       



	uint16	c55	;       



	uint16	c57	;       



	uint16	c59	;       



	uint16	c61	;       



	uint16	c63	;       



	uint16	c65	;       



	uint16	c67	;       



	uint16	c69	;       



	uint16	c71	;       



	uint16	c73	;       



	uint16	c75	;       



	uint16	c77	;       



	uint16	c79	;       



	uint16	c81	;       



	uint16	c83	;       



	uint16	c85	;       



	uint16	c87	;       



	uint16	c89	;       



	uint16	c91	;       



//	uchar	rev93[18];    



};



/***************牵引系统信息数据块END**********************/





/***************辅助系统信息数据块*************************/





/*内燃机  表D.18 柴油机辅助系统数据块 2.0版*/





/*辅助系统信息  1.0版本协议 0x30*/



struct STR_FUZHU_V10 



{



	struct STR_TOU s_tou;



	uint16 c5;



	uint16 c7;



	uchar   c9;



	uchar   c10;



	uint16 c11;



	uint16 c13;



	uint16 c15;



	uint16 c17;



	uint16 c19;



	uint16 c21;



	uint16 c23;



	uint16 c25;



	uint16 c27;



	uint16 c29;



	uint16 c31;



	uint16 c33;



//	uchar c35[20];



};







/*辅助系统信息 2.0版本*/



struct STR_FUZHU_V20 



{



	struct STR_TOU s_tou;

	

	uchar	  c5	;



	uchar	  c6	;



	uchar	  c7	;	



	uchar	  c8	;



	uchar	  c9	;



	uchar	  c10	;



	



	uchar	c11  ;/*预留                        */



	uchar	c12	;/*预留                        */



	uint16  c13;



	uint16  c15;



	uint16  c17;



	uint16  c19;



	uint16  c21;



	uint16  c23;



	uint16  c25;



	uint16  c27;



	uint16  c29;



	uint16  c31;



	uint16  c33;



	uint16  c35;



	uint16  c37;



	uint16  c39;



	uint16  c41;



	uint16  c43;



//	uchar	rev45[16];/*	预留		   */



};





/*辅助系统信息 2.0版本*/

struct STR_FUZHU_N_V20



{



    struct STR_TOU s_tou; /* 表头  */



	uchar   c5;



	uchar   c6;



	uchar   c7;



	uint16	c8	;                                    



	uint16	c10	;                                    



	uint16	c12	;                                    



	uint16	c14	;                                    



	uint16	c16	;                                    



	uint16	c18	;                                    



	uint16	c20	;                                    



	uint16	c22	;                                    



	uint16	c24	;                                    



	uint16	c26	;                                    



	uint16	c28	;                                    



	uint16	c30	;                                    



	uint16	c32	;                                    



	uint16	c34	;                                    



	uint16	c36	; 



    uint16	c38	;                                    



	uint16	c40	;                                    



	uint16	c42	;                                    



	uint16	c44	;                                    



	uint16	c46	;                                    



	uint16	c48	;                                    



	uint16	c50	;                                    



	uint16	c52	;                                    



//	uchar	rev54[17]; /*预留      */ 



};





/***********************辅助系统信息数据块END**************/





/*****************制动系统信息数据块***********************/



/*制动系统信息 1.0版本*/



struct STR_ZHIDONG_V10



{



	struct STR_TOU s_tou;



	uint16 c5;



	uint16 c7;



	uchar   c9;



	uchar   c10;



	uchar   c11;



	uchar   c12;



	uchar   c13;



	uchar   c14;



	uint16 c15;



	uint16 c17;



	uint16 c19;



	uint16 c21;



	uint16 c23;



	uint16 c25;



	uint16 c27;







};







/*制动系统信息 2.0版本*/



struct STR_ZHIDONG_V20 



{



	struct STR_TOU s_tou;



	uchar	 c5	;



	uchar	 c6	;



	uchar	 c7	;	



	uchar	 c8	;



	uchar	 c9	;



	uchar	c10  ;/*预留                        */



	uchar	c11	;/*预留                        */



	uint16  c12;



	uint16  c14;



	uint16  c16;



	uint16  c18;



	uint16  c20;



	uint16  c22;



	uint16  c24;











};







/*内燃机  表D.19 柴油机制动系统数据块 2.0版*/



struct STR_ZHIDONG_N_V20



{



    struct STR_TOU s_tou; /* 表头  */



	uchar   c5;



	uchar   c6;



	uchar   c7;



	uchar   c8;



	uchar   c9;



	uchar   c10;



	uchar   c11;



	uchar   c12;



	uint16	c13	;/*	总风缸压力*/ 



	uint16	c15	;/*	均衡风缸压力 */ 



	uint16	c17	;/*	列车管压力 */ 



	uint16	c19	;/*	制动风缸1压力 */ 



	uint16	c21	;/*	制动风缸2压力 */ 







};





/*****************制动系统信息数据块END***********************/



/*****************版本与累计信息数据块*********************/



/*累计量与版本信息 2.0版本*/



struct STR_LJLYBBINFO_V20 



{	



	struct STR_TOU s_tou;



	uint32	c5  ;



	uint32	c9	;



	uint32  c13;



	uint32  c17;



	uint32  c21;



	uint32  c25;



	uint32  c29;



	uint32  c33;



//	uchar	rev37[24];/*	预留		   */	



};





/*内燃机  版本与累计信息数据块*/



struct STR_LJLYBBINFO_N_V20



{



    struct STR_TOU s_tou; /* 表头  */



	uint16	c5	;/*	空压机1运行时间*/ 



	uint16	c7	;/*	空压机2运行时间 */ 



	uint32	c9	;/*	机车运行里程 */ 



	uint32	c13	;/*	牵引能量累计量 */ 



	uint32	c17	;/*	自负荷能量累计量 */ 



	uint32	c21	;/*	电阻制动能量累计量 */ 



	uint32	c25	;/*	惰转时间累计量 */ 



	uint32	c29	;/*	牵引时间累计量 */ 



	uint32	c33	;/*	自负荷时间累计量 */ 



	uint32	c37	;/*	电阻制动时间累计量 */ 



	uint32	c41	;/*	微机软件版本号 */ 



	uint32	c45	;/*	微机软件版本号冗余 */ 



	uint32	c49	;/*	网管GWM软件版本号 */ 



	uint32	c53	;/*	网管GWM软件版本号冗余 */



//	uchar	rev57[14]; /*预留      */ 



};



/*****************版本与累计信息数据块END*********************/

 



/**********************TCMS系统信息END************************************/



/************************6A系统数据*******************************/



struct STR_6AXD/*6A先导报文信息*/



{

	struct STR_TOU s_tou;



	char	head;       	/*6A子报文标识*/



	uint16	xhjs;			/* 循环计数*/



	uchar	simno[6];		/* sim卡号*/



	uchar	carno[16];		/* 机车号*/



	uchar   date[6];		/* 日期	*/



	uchar	 gjz;			/* 关键帧	*/



	uchar	 hxbwgs;		/* 后续报文个数	*/



	uint16	 ptbb;			/* 中央平台版本*/	

};





/*6A制动报文信息*/



struct STR_6AZD



{



	struct STR_TOU s_tou;



	char	head;       /*6A子报文标识*/



	uchar	alt;		/* 1表示停放制动异常施加*/



	uchar	cnt;		/* 列车贯通辆数*/



	uint16		lcg;		/* 列车管压力（kPa）	-1为故障*/



	uint16		tfg;		/* 停放缸压力（kPa）	-1为故障*/



	uint16		jhg;		/* 均衡缸压力（kPa）	-1为故障*/



	uint16		llj;		/* 列车管流量（kPa）	-1为故障*/



	uint16		speed;		/* 运行速度（km/h）*/	



};







/*6A防火报文信息*/



struct STR_6AFH



{



	struct STR_TOU s_tou;



	char	head;       /*6A子报文标识*/



	uchar	alt[32];	/* 1-32号探头报警码（1表示报警，2表示故障）*/



	uchar	sen[32];	/* 1-32号探头类型码（1表示烟温，2表示高温，3表示火焰，4-感温电缆，5-表示烟感，6-表示其他）*/



	uchar	zxkl;		/* 1表示防火总线开路*/



	uchar	zxdl;		/* 1表示防火总线短路*/



};







/*6A绝缘报文信息*/



struct STR_6AJY



{



	struct STR_TOU s_tou;



	char	head;       /*6A子报文标识*/



	uint16	jcdy;		/* 检测电压（V）*/



	uint16	bjdy;		/* 门限电压（V）*/



	uchar	alt;		/* 报警状态  1表示报警*/



	uchar	stp;		/* 测试状态  1表示测试完成*/



	uchar	error;		/* 自检故障  1表示自检故障*/

	



};







/*6A列供报文信息*/



struct STR_6ALG



{



	struct STR_TOU s_tou;



	char		head;       /*6A子报文标识*/



	uint32			ldl[2];		/* 两路漏电流（mA）*/



	uint32			ydl[2];		/* 两路用电量（kwh）*/



	uint32			srdy[2];	/* 输入电压（V）*/



	uint32			srdl[2];	/* 输入电流（A）*/



	uint32			scdy[2];	/* 输出电压（V）*/



	uint32			scdl[2];	/* 输出电流（A）*/



	uint32			bdy[2];		/* 半电压（V）*/	

	

	uchar	err[4];		// 故障码

	

	uchar	sta[4];		//状态码

	

	uchar	kgl	;		//开关量



};







/*6A走形1报文信息*/



struct  STR_6AZX1



{



	struct STR_TOU s_tou;



	char    head;       /*6A子报文标识*/



	uchar	axis;		/* 轴号（1~6分别表示1~6轴）*/



	uchar	alt[8];		/* 1-8位报警码*/



	uchar	tmp[8];		/* 1-8位温度值（℃）127-传感器故障*/



	uchar  hw1;/*环温1*/



	uchar  hw2;/*环温2*/



	uchar  qyzdlzt;/*前置处理器状态 0-正常；1故障*/



	uint16   sdmc;/*速度脉冲*/



};





/*6A视频报文信息*/



struct  STR_6ASP



{



	struct STR_TOU s_tou;



	char    head;       /*6A子报文标识*/



	uchar	chn[16];	/* 01-16通道自检故障（1表示故障）*/



	uchar	cjk1;		/* 采集卡1故障（1表示故障）*/



	uchar	cjk2;		/* 采集卡2故障（1表示故障）*/



	uchar	disk;		/* 存储盘故障（1表示故障）*/	



};





/*6A瞭望报文信息*/

struct STR_6ALW

{



	struct STR_TOU s_tou;



	char    head;       /*6A子报文标识*/

	

	char	err;	//故障码

	

    char	sta;	// 状态码

	

};

/*6A电能*/

struct STR_6ADN

{



	struct STR_TOU s_tou;



	char    head;       /*6A子报文标识*/

	

	int	dy;		//电压，单位0.001V 

    int	dl;		//电流，单位0.001A

    int	pl;		//频率，单位0.001Hz

    int	glys;	//功率因数，单位0.001

    int	yggl;	//有功功率，单位0.001kw

    int	wggl;	//无功功率，单位0.001kw

    int	zxyg;	//正向有功，单位0.001kwh

    int	fxyg;	//反向有功，单位0.001kwh

    int	zxwg;	//正向无功，单位0.001kwh

    int	fxwg;	//反向无功，单位0.001kwh	

};



/*6A油位报文*/

struct STR_6AYW

{



	struct STR_TOU s_tou;



	char    head;       /*6A子报文标识*/

	

	 int	yl;	// 油量，单位升

	 

	 int	yw;	// 油位，预留



};



/***************************北斗数据********************************/

struct STR_BD_DATAHEAD



{	



	uint16	c0;/*报文头特征码0xBB55*/



	uint16	c2;/*报文长度*/



	uchar	c4;



	uchar	c5;



	uint16	c6;/*局段号*/



	uchar	c8;/*信息类型,0x01实时信息;0x02故障信息*/



	uchar	c9;/*帧号*/



	uint16	c10;/*车型*/



	uint16	c12;/*车号*/



	uchar	c14[6];/*时间*/



	uint32	c20;/*经度*/



	uint32	c24;/*纬度*/



	uint16	c28;/*速度*/



   // uint16	c30;/*海拔*/

    int16 c30;

    /*edit by guo 20160719*/

    //float	c30;/*海拔 edit by guo 20160517*/



	uint16  c32;/*	故障代码1 */

	

	uint16  c34;/*	故障代码2 */

	

	uint16  c36;/*	故障代码3 */



};











struct STR_BD_CTBW{



	uchar	c0b0:2	;/*	操作端：00=无操作端01=I端10=II端 11=预留 */



	uchar	c0b2:2	;/*	受电弓状态:00=不升弓 01=升前弓10=升后弓11=预留*/	



	uchar	c0b4:1	;/*	主断合						   */	



	uchar	c0b5:1	;/*	空转/滑行					   */		



	uchar	c0b6:2	;/*	撒沙：00=无撒沙 01=自动撒沙10=手动撒沙11=预留	 */		



	



	uchar	c1b0:1	;/*	过分相 */



	uchar	c1rev1:1;/*	预留*/



	uchar	c1b2:2	;/*	机车工况 00=惰行 01=牵引 10=制动 11=预留*/	



	uchar	c1b4:2	;/*机车运行方向: 00=零位 01=向前 10=向后 11=预留	*/	



	uchar	c1rev6:2;/*预留*/	



	



	uint16  c2;		/*手柄级位*/



	uint16  c4      ;/*牵引制动力总和*/



	uint16  c6      ;/*机车速度实际值*/



	uint16  c8      ;/*蓄电池电压*/



	uint16  c10      ;/*网压/主发电压*/



	uint16  c12     ;/*网流/主发电流*/



	uint16  c14     ;/*总风缸压力*/



	uint16  c16     ;/*列车管压力*/



	uint16  c18     ;/*制动缸压力*/



	char   c20[4]  ;/*车次字母部分*/



	uint32  c24     ;/*车次数字部分*/



	uint32  c28     ;/*公里标*/



	uint32  c32     ;/*主司机号*/



};



/**********************北斗通信*************************************/







/**********************LDP自检/状态信息*****************************/



struct STR_LDPINFO_V20 

{

	struct STR_TOU s_tou;

	uchar c5;

	uchar c6;

	char c7[12];

	char c19[12];

	uint16 c31;

	uint16 c33;

	uint16 c35;

	uint16 c37;

	char   c39[6];

	uint16   c45;

	uchar    c47;

	uint16  c48;

	uint16  c50;

	char    c52[20];

	uint16  c72;

	uint16  c74;

	uchar   c76[3];

};



struct STR_LDPINFO_V21 

{

	struct STR_TOU s_tou;

	uchar c5;

	uchar c6;

	char c7[12];

	char c19[12];

	uint16 c31;

	uint16 c33;

	uint16 c35;

	uint16 c37;

	char   c39[6];

	uchar   c45[3];/*预留*/

	uint16  c48;

	uint16  c50;

	char    c52[32];

	uint16  c84;

	uint16  c86;

	uchar   c88[3];

	uchar   c91[3];

	uchar   c94[3];

	uchar   c97;

	uchar   c98;

	uchar   c99;

	uchar   c100;

	uchar   c101;

	uchar   c102;

	uchar   c103;

	uchar   c104;

	uchar   c105;

	uchar   c106;

	uchar   c107;

};



/*add by guo 20160902*/

struct STR_LDPINFO_V22

{

    struct STR_TOU s_tou;

    uchar c5;       /*防护记录器厂家（1：株洲所；2：道麒；3：锦达；）*/

    char c6[16];    /*防护记录器序列号（预留16字节，格式待定）*/

    uchar c22;      /*LDP厂家（1：株洲所；2：河南思维：3：成都运达；4：武汉征原）*/

    char c23[16];   /*LDP型号：用字符串表示，最长不超过16个字符，不足16位在后面补0x00*/

    char c39[16];   /*LDP出厂编号：用字符串表示，最长不超过16个字符，不足16位在后面补0x00*/

    uint16 c55;   /*LDP主处理器软件主版本(V2.0)*/

    char c57[3];   /*LDP主处理器软件时间版本：年（实际年份减2000）,月,日*/

    uint16 c60;   /*LDP无线通信板软件版本(V2.0)*/

    char c62[3];   /*LDP无线通信板软件时间版本：年（实际年份减2000）,月,日*/

    uint16 c65;   /*防护记录器软件版本(V2.0)*/

    char c67[3];   /*防护记录器软件时间版本：年（实际年份减2000),月,日*/

    uint16 c70;   /*网络接口板软件版本(V2.0)*/

    char c72[3];   /*网络接口板软件时间版本：年（实际年份减2000）,月,日*/

    uint16 c75;   /*北斗板软件版本(V2.0)*/

    char c77[3];   /*北斗板软件时间版本：年（实际年份减2000）,月,日*/

    char c80[6];   /*LDP开机时间*/



    char c86[3];    /*Wlan-ssid列表 版本号,年（实际年份减2000）,月,日*/

    uchar c89[3];   /*预留*/

    uchar c92[32];   /*SIM卡ID（预留）,32个字节*/

    uint16 c124;   /*3G使用流量（当月）单位MB*/

    uint16 c126;   /*3G使用流量（当年）单位MB*/

    char c128[3];   /*LKJ软件版本信息*/

    char c131[3];  /*LKJ数据版本*/

    char c134[3];  /*6A 软件版本*/

    uchar c137;   /*在速度为0时，间隔t1秒发送一次；*/

    uchar c138;   /*在速度大于0Km/h小于或等于20Km/h时，间隔T2秒发送一次*/

    uchar c139;   /*在速度大于20Km/h小于或等于40Km/h时，间隔T3秒发送一次；*/

    uchar c140;   /*在速度大于40Km/h小于等于60Km/h时，间隔T4秒发送一次；*/

    uchar c141;   /*在速度大于60Km/h小于等于80Km/h时，间隔T5秒发送一次；*/

    uchar c142;   /*在速度大于80Km/h小于等于100Km/h时，间隔T6秒发送一次；*/

    uchar c143;   /*在速度大于100Km/h小于等于120Km/h时，间隔T7秒发送一次；*/

    uchar c144;   /*在速度大于120Km/h小于等于140Km/h时，间隔T8秒发送一次；*/

    uchar c145;   /*在速度大于140Km/h小于等于160Km/h时，间隔T9秒发送一次；*/

    uchar c146;   /*在速度大于160Km/h小于等于180Km/h时，间隔T10秒发送一次；*/

    uchar c147;   /*在速度大于180Km/h时，间隔T11秒发送一次*/

};



/**********************LDP自检/状态信息END*****************************/





/************************事件信息*******************************/

struct STR_EVENT_BASIC 

{

	struct STR_TOU s_tou;

	uint32 c0;

	uchar  c4;

	char   c5[4];

	uint32 c9;

	uint16 c13;

	uint32 c15;

	uint32 c19;

	uint16 c23;

	uint16 c25;

	uint16 c27;

	uchar  c29;

	uint16 c30;

	uchar  c32;

	uchar  c33;

	uint16 c34;

	uchar  c36;

	uint32 c37;

	uint16 c41;

	uint16 c43;

	uint16 c45;

	uint16 c47;

	uchar  c49;

	uint16 c50;

	uint16 c52;

	uint16 c54;

	uchar  c56;

	uchar  c57;

	uint16 c58;

	uchar  c60;

	uint16 c61;

	uchar  c63[3];

	uchar  c66[3];

	uchar  c69;

	uint16 c70;

	uchar  c72;

	uint16 c73;

	uchar  c75;

	uchar c76;

	uchar  c77;

	uchar  c78;

    //char   c79[21];

};



struct STR_EVENT_G5/*司机号变更事件0x01*/

{

	uint32 c105;

	uint32 c109;

};



struct STR_EVENT_G6/*机外停车结束0x05、区间停车结束事件0x03*/

{

	uint16 c105;

};



struct STR_EVENT_G8/*LKJ版本信息事件0x91*/

{

	char c105[3];

};



struct STR_EVENT_G9/*进站事件0x92*/

{

	uint16 c105;

	uint16 c107;

};



struct STR_EVENT_G10/*车次变更事件0x95*/

{

	char c105[4];

	uint32 c109;

};



struct STR_EVENT_G11/*TCMS时间报警事件0xE0、6A时间报警事件0xE1*/

{

	char c105[6];

	char c111[6];

};



/************************事件信息END*******************************/





/************************故障信息*******************************/

struct STR_FAULT_CODE

{

	uchar   fsrc;/*故障源*/

	uchar   fzt;/*故障状态*/

	uint32	code;/*故障代码*/

	uchar	year;

	uchar	month;

	uchar	day;

	uchar	hour;

	uchar	minute;

	uchar	second;

};

struct STR_FAULT_BASICINFO_V20

{

	char    c5[4];/*车次字母部分*/

	uint32  c9; /*车次数字部分*/

	uint16  c13;/*车站号*/

	uint32  c15;/*司机号*/

	uint32  c19;/*副司机号*/

	uint16  c23;/*实际交路号*/

	uint16  c25;/*实速*/

	uint16  c27;/*机车工况字*/

	uint16  c29;/*信号机编号*/

	uint16  c31;/*信号机种类字*/

	uint32  c33;/*公里标*/

};



struct STR_FAULT_BASICINFO_V21

{

	char    c5[4];/*车次字母部分*/

	uint32  c9; /*车次数字部分*/

	uint16  c13;/*车站号*/

	uint32  c15;/*司机号*/

	uint32  c19;/*副司机号*/

	uint16  c23;/*实际交路号*/

	uint16  c25;/*实速*/

	uchar   c27;/*机车工况字*/

	uchar   c28;/*监控状态*/

	uint16  c29;/*信号机编号*/

	uint16  c31;/*信号机种类字*/

	uint32  c33;/*公里标*/

	uint32  c37;/*预留*/

};



struct STR_FAULT_V20

{

	struct STR_TOU   				s_tou;

	struct STR_FAULT_BASICINFO_V20 	s_lkj;

	uchar	num;					/*故障数量*/

	struct STR_FAULT_CODE fault[10];

};



struct STR_FAULT_V21

{

	struct STR_TOU   				s_tou;

	struct STR_FAULT_BASICINFO_V21 	s_lkj;

	uchar	num;					/*故障数量*/

	struct STR_FAULT_CODE fault[10];

};



/************************故障信息END*******************************/

#endif



