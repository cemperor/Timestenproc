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







/***********�������Ͷ���***********/



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







/*���ݿ�ͷ*/



struct STR_TOU



{



	uint16 c0;/*���ݿ鳤��*/



	uint16 c2;/*��Ϣ�����룬1��2��3*/



	uchar c4;/*Э��汾*/



};





/***********************����ͷ��Ϣ*******************************/

struct STR_DATAHEAD

{	

	uint16	c0;/*����ͷ������0xBB55*/

	uint16	c2;/*���ĳ���*/

	uchar	c4;

	uchar	c5;

	uint16	c6;/*�ֶκ�*/

	

	uchar	c8;/*��Ϣ����,0x01ʵʱ��Ϣ;0x02������Ϣ*/

	uchar	c9;/*��Ϣ�ȼ�,0x00=����Ӧ��0x01=��ҪӦ��*/

	uint16	c10;/*֡��*/

	uint16	c12;/*�������ܳ�*/

	uchar	c14;/*��֡��ʶ��,0 = �޷�֡������0��ʾ��֡����*/

	uchar	c15;/*��֡��,��֡ʱ��Ч����֡�Ŵ�1����*/

	uint16	c16;/*����*/

	uint16	c18;/*����*/

	uchar	c20[6];/*ʱ��*/

	uint32	c26;/*����*/

	uint32	c30;/*γ��*/

	uint16	c34;/*�ٶ�*/

    //uint16	c36;/*����*/

    int16 c36;

    /*edit by guo 20160719*/

    //float	c36;/*���� edit by guo 20160517*/

};

/***********************����ͷ��ϢEND*******************************/



/***********************������ȫ��Ϣ*******************************/



/***********************������ȫ��Ϣ*******************************/



/*������ȫ��Ϣ*/



struct STR_LKJ_V10



{



	struct STR_TOU s_tou;



	uint32	c5	;/*����/ʱ��     */ 



	char	c9[4];/*������ĸ���� */ 



	uint32	c13	;/*	�������ֲ��� */ 



	uint16	c17	;/*	��վ��       */ 



	uint32	c19	;/*	˾����       */ 



	uint32	c23	;/*	��˾����     */ 



	uint16	c27	;/*	������       */ 



	uint16	c29	;/*	�����ͺ�     */ 



	uint16	c31	;/*	ʵ�ʽ�·��   */ 



	uint16	c33	;/*	��/������/�� */ 



	uint16	c35	;/*	ʵ��         */ 



	uint16	c37	;/*	�����ź���   */ 



	uint16	c39	;/*	����������   */ 



	uint16	c41	;/*	�źŻ����   */ 



	uint16	c43	;/*	�źŻ������� */ 



	uint32	c45	;/*	�����       */ 



	uint16	c49	;/*	����         */ 



	uint16	c51	;/*	�Ƴ�         */ 



	uint16	c53	;/*	����         */ 



	uint16	c55	;/*	�г���ѹ��   */ 



	uint16	c57	;/*	װ��״̬     */ 





};



/*������ȫ��ϢV2.0��*/



struct STR_LKJ_V20



{



	struct STR_TOU s_tou;



	uint32	c5	;/*����/ʱ��     */ 



	char	c9[4];/*������ĸ���� */ 



	uint32	c13	;/*	�������ֲ��� */ 



	uint16	c17	;/*	��վ��       */ 



	uint32	c19	;/*	˾����       */ 



	uint32	c23	;/*	��˾����     */ 



	uint16	c27	;/*	������       */ 



	uint16	c29	;/*	�����ͺ�     */ 



	uint16	c31	;/*	ʵ�ʽ�·��   */ 



	uchar	c33	;/*	��/������/�� */ 



	uint16	c34	;/*	ʵ��         */ 



	uchar	c36	;/*	�����ź���   */ 



	uchar	c37	;/*	����������   */ 



	uint16	c38	;/*	�źŻ����   */ 



	uchar	c40	;/*	�źŻ������� */ 



	uint32	c41	;/*	�����       */ 



	uint16	c45	;/*	����         */ 



	uint16	c47	;/*	�Ƴ�         */ 



	uint16	c49	;/*	����         */ 



	uint16	c51	;/*	�г���ѹ��   */ 



	uchar	c53	;/*	װ��״̬     */ 



	uint16  c54 ;/*���뽻·��*/



	uint16  c56 ;/*����*/



	uint16  c58 ;/*����*/



	uchar	c60 ;/*�ƶ����*/



	uchar	c61 ;/*��ǰ��·�ű�־*/



	uint16 c62 ;/*��ǰ��·��*/



	uchar  c64 ;/*ǰ����·�ű�־*/



	uint16 c65 ;/*ǰ����·��*/



	uchar  c67[3] ;/*��ǰTMIS��վ�ţ�����������TMIS վ�ţ�*/



	uchar  c70[3];/*ǰ��TMIS��վ�ţ���һTMISվ�ţ�*/



	uchar  c73 ;/*ǰ����վ��·��(��һ����ʵ�ʽ�·��)*/



	uint16 c74 ;/*ǰ����վվ��(��һ��վ��)*/



	uchar  c76;/*TAX���״̬*/



	uint16 c77;/*�ۼ�λ��*/



	uchar  c79;



	uchar  c80;



	uchar  c81;



	uchar  c82;



};





/*������ȫ��ϢV2.0��*/



struct STR_LKJ_V21



{



	struct STR_TOU s_tou;



	char    c5   ; /*LKJ���� Bit0=0��LKJ2000��Bit0=1����һ��LKJ�� Bit1=0��˼ά��Bit1=1�������� */

	

	uint32	c6	;/*����/ʱ��     */ 



	char	c10[4];/*������ĸ���� */ 



	uint32	c14	;/*	�������ֲ��� */ 



	uint16	c18	;/*	��վ��       */ 



	uint32	c20	;/*	˾����       */ 



	uint32	c24	;/*	��˾����     */ 



	uint16	c28	;/*	������       */ 



	uint16	c30	;/*	�����ͺ�     */ 



	uint16	c32	;/*	ʵ�ʽ�·��   */ 



	uchar	c34	;/*	��/������/�� */ 



	uint16	c35	;/*	ʵ��         */ 



	uchar	c37	;/*	�����ź���   */ 



	uchar	c38	;/*	����������   */ 



	uint16	c39	;/*	�źŻ����   */ 



	uchar	c41	;/*	�źŻ������� */ 



	uint32	c42	;/*	�����       */ 



	uint16	c46	;/*	����         */ 



	uint16	c48	;/*	�Ƴ�         */ 



	uint16	c50	;/*	����         */ 



	uint16	c52	;/*	�г���ѹ��   */ 



	uchar	c54	;/*	װ��״̬     */ 



	uint16  c55 ;/*���뽻·��*/



	uint16  c57 ;/*����*/



	uint16  c59 ;/*����*/



	uchar	c61 ;/*�ƶ����*/



	uchar	c62 ;/*��ǰ��·�ű�־*/



	uint16 c63 ;/*��ǰ��·��*/



	uchar  c65 ;/*ǰ����·�ű�־*/



	uint16 c66 ;/*ǰ����·��*/



	uchar  c68[3] ;/*��ǰTMIS��վ�ţ�����������TMIS վ�ţ�*/



	uchar  c71[3];/*ǰ��TMIS��վ�ţ���һTMISվ�ţ�*/



	uchar  c74 ;/*ǰ����վ��·��(��һ����ʵ�ʽ�·��)*/



	uint16 c75 ;/*ǰ����վվ��(��һ��վ��)*/



	uchar  c77;/*TAX���״̬*/



	uint16 c78;/*�ۼ�λ��*/



	uchar  c80;/*������֧��*/



	uchar  c81;/*����������*/



	uchar  c82;/*ǰ������֧��*/



	uchar  c83;/*ǰ����������*/

	



};

/**************************������ȫ��ϢEND*************************************/ 





/**********************TCMSϵͳ��Ϣ************************************/





/***********����������Ϣ���ݿ�****************/

/*����������Ϣ*/



struct STR_BASICINFO_V10



{



	struct STR_TOU s_tou;



	



	uchar	c5b0:2	;/*	�����ˣ�00=�޲�����01=I��10=II�� 11=Ԥ�� */



	uchar	c5b2:2	;/*	�ܵ繭״̬:00=������ 01=��ǰ��10=����11=Ԥ��*/	



	uchar	c5b4:1	;/*	���Ϻ�						   */



	uchar	c5b5:1	;/*	��ת/����					   */	



	uchar	c5b6:2	;/*	��ɳ��00=����ɳ 01=�Զ���ɳ10=�ֶ���ɳ11=Ԥ��	 */	



	



	uchar	c6b0:1	;/*	������						   */



	uchar	c6rev1:1	;/*	Ԥ��*/	



	uchar	c6b2:2	;/*	�������� 00=���� 01=ǣ�� 10=�ƶ� 11=Ԥ��*/	



	uchar	c6b4:2	;/*�������з���: 00=��λ 01=��ǰ 10=��� 11=Ԥ��	*/	



	uchar	c6rev6:2;/*Ԥ��*/	



	



	uchar	c7  ;/*Ԥ��                        */



	uchar	c8	;/*Ԥ��                        */



	uint16	c9	;/*�ֱ���λ                    */



	uint32	c11	;/*ϵͳʱ��                    */



	uint16	c15	;/*ǣ��/�ƶ����趨ֵ           */



	uint16	c17	;/*ǣ��/�ƶ���ʵ��ֵ           */



	uint16	c19	;/*�����ٶ��趨ֵ              */



	uint16	c21	;/*�����ٶ�ʵ��ֵ              */



	uint16	c23	;/*��ѹ/������ѹ               */



	uint16	c25	;/*����/��������               */



	uint16	c27	;/*�ܷ��ѹ��                  */



	uint16	c29	;/*�г���ѹ��                  */



	uint16	c31	;/*�ƶ���ѹ��                  */



	uint16	c33	;/*������ѹ��                */



	uint16	c35	;/*���ص�ѹ                  */



	uint16	c37	;/*���ͻ�ת��                  */



	uint32	c39	;/*�����                      */



//	uchar	rev43[12];/*	Ԥ��		   */



};







/*����������Ϣ 2.0�汾*/



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



	uchar	c12  ;/*Ԥ��                        */



	uchar	c13	;/*Ԥ��                        */



	uchar	c14  ;/*Ԥ��                        */



	uchar	c15	;/*Ԥ��                        */



	uchar	c16[6];/*ʱ��*/



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



//	uchar	rev59[12];/*	Ԥ��		   */



};







/*����������Ϣ2.0��*/



/*��ȼ�� ��N3�� ��D.15 ����������Ϣ���ݿ� 2.0��*/



struct STR_BASICINFO_N_V20



{



    struct STR_TOU s_tou; /* ��ͷ  */



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

    int16 c37;/*��������ϵͳ-�����¶�  1 = 0.1 �� INT*/

    /*edit by guo 20160718*/



	uint16	c39	;/*	 */ 



	uint16	c41	;/*	 */ 



	uint16	c43	;/*	 */ 



    //uint16	c45	;/*	 */

    int16   c45;/*��������ϵͳ-���س����� 1 = 1A INT*/

    /*edit by guo 20160718*/



	uint16	c47	;/*	 */ 



	uint16	c49	;/*	 */ 



	uint16	c51	;/*	 */ 



	uint16	c53	;/*	 */ 



	uint16	c55	;/*	 */ 



	uint16	c57	;/*	 */ 



	uint32	c59	;/*	 */ 



//	uchar	rev63[18];/*Ԥ��      */ 



};





/***********����������Ϣ���ݿ�END****************/



/****************���ͻ�ϵͳ��Ϣ���ݿ�************/



/*���ͻ�ϵͳ����  Э��1.0  ��D.11*/



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



/*��ȼ��  ��D.16 ���ͻ�ϵͳ���ݿ� 2.0��*/



struct STR_DIESEL_V20



{



    struct STR_TOU s_tou; /* ��ͷ  */



	uchar   c5;



	uchar   c6;



	uchar   c7;



	uchar   c8;



	uint16	c9	;/*	���ͻ�ת�� */ 



    //uint16	c11	;/*	���ͻ�������ѹ��1 */



    //uint16	c13	;/*	���ͻ�������ѹ��2 */



    /*edit by guo 20160718*/

    int16	c11	;/*	���ͻ�������ѹ��1 */



    int16	c13	;/*	���ͻ�������ѹ��2 */

    /*end */



	uint16	c15	;/*	���ͻ�������/��ѹ��ѹ��1 */ 



	uint16	c17	;/*	���ͻ�������/��ѹ��ѹ��2 */ 



	uint16	c19	;/*	���ͻ���ڿ����¶� */ 



    //uint16	c21	;/*	���ͻ�����������¶�1 */



    //uint16	c23	;/*	���ͻ�����������¶�2 */



    int16 c21;



    int16 c23;

    /*edit by guo 20160718*/



	uint16	c25	;/*	��ѹ�����ͽ���ѹ��1 */ 



	uint16	c27	;/*	��ѹ�����ͽ���ѹ��2 */ 



	uint16	c29	;/*	���ͻ�����ȼ��ѹ�� */ 



	uint16	c31	;/*	���ͻ����ͽ���ѹ�� */ 



    //uint16	c33	;/*	���ͻ����ͽ����¶� */

    int16 c33;

    /*edit by guo 20160718*/



	uint16	c35	;/*	���ͻ����ͳ����¶� */ 



	uint16	c37	;/*	���ͻ���ȴˮ����ѹ��1  */ 



	uint16	c39	;/*	���ͻ���ȴˮ����ѹ��2 */ 



	uint16	c41	;/*	���ͻ���ȴˮ����ѹ��1  */ 



	uint16	c43	;/*	���ͻ���ȴˮ����ѹ��2  */ 



	uint16	c45	;/*	����ˮ�ó���ѹ��  */ 



	uint16	c47	;/*	����ˮ�ó���ѹ��  */ 



	uint16	c49	;/*	����ˮ�����¶�  */ 



	uint16	c51	;/*	����ˮ�����¶�  */ 



	uint16	c53	;/*	����ˮ�����¶�  */ 



	uint16	c55	;/*	����ˮ�����¶�  */ 



	uint16	c57	;/*	���ͻ����ط����źţ�ELCS�źţ�  */ 



	uint16	c59	;/*	��������������Դ  */ 



	uint16	c61	;/*	����������ѹ  */ 



//	uchar	rev63[18];/*Ԥ��      */ 



};



/****************���ͻ�ϵͳ��Ϣ���ݿ�END*********************/



/***************ǣ��ϵͳ��Ϣ���ݿ�**************************/

/*ǣ��ϵͳ��Ϣ  1.0�汾 ��D.12*/



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



/*ǣ��ϵͳ��Ϣ 2.0�汾  */



struct STR_QIANYIN_V20 



{



	struct STR_TOU s_tou;



	



	uchar	  c5	;



	uchar	  c6	;



	uchar	  c7	;







	uchar	c8  ;/*Ԥ��                        */



	uchar	c9	;/*Ԥ��                        */



	uchar	c10  ;/*Ԥ��                        */



	uchar	c11	;/*Ԥ��                        */



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



//	uchar	rev122[19];/*	Ԥ��		   */



};





/*��ȼ��  ǣ��ϵͳ 2.0�� ��D.14 ��Ϣ������0x11*/



struct STR_QIANYIN_N_V20



{



    struct STR_TOU s_tou; /* ��ͷ  */



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



/***************ǣ��ϵͳ��Ϣ���ݿ�END**********************/





/***************����ϵͳ��Ϣ���ݿ�*************************/





/*��ȼ��  ��D.18 ���ͻ�����ϵͳ���ݿ� 2.0��*/





/*����ϵͳ��Ϣ  1.0�汾Э�� 0x30*/



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







/*����ϵͳ��Ϣ 2.0�汾*/



struct STR_FUZHU_V20 



{



	struct STR_TOU s_tou;

	

	uchar	  c5	;



	uchar	  c6	;



	uchar	  c7	;	



	uchar	  c8	;



	uchar	  c9	;



	uchar	  c10	;



	



	uchar	c11  ;/*Ԥ��                        */



	uchar	c12	;/*Ԥ��                        */



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



//	uchar	rev45[16];/*	Ԥ��		   */



};





/*����ϵͳ��Ϣ 2.0�汾*/

struct STR_FUZHU_N_V20



{



    struct STR_TOU s_tou; /* ��ͷ  */



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



//	uchar	rev54[17]; /*Ԥ��      */ 



};





/***********************����ϵͳ��Ϣ���ݿ�END**************/





/*****************�ƶ�ϵͳ��Ϣ���ݿ�***********************/



/*�ƶ�ϵͳ��Ϣ 1.0�汾*/



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







/*�ƶ�ϵͳ��Ϣ 2.0�汾*/



struct STR_ZHIDONG_V20 



{



	struct STR_TOU s_tou;



	uchar	 c5	;



	uchar	 c6	;



	uchar	 c7	;	



	uchar	 c8	;



	uchar	 c9	;



	uchar	c10  ;/*Ԥ��                        */



	uchar	c11	;/*Ԥ��                        */



	uint16  c12;



	uint16  c14;



	uint16  c16;



	uint16  c18;



	uint16  c20;



	uint16  c22;



	uint16  c24;











};







/*��ȼ��  ��D.19 ���ͻ��ƶ�ϵͳ���ݿ� 2.0��*/



struct STR_ZHIDONG_N_V20



{



    struct STR_TOU s_tou; /* ��ͷ  */



	uchar   c5;



	uchar   c6;



	uchar   c7;



	uchar   c8;



	uchar   c9;



	uchar   c10;



	uchar   c11;



	uchar   c12;



	uint16	c13	;/*	�ܷ��ѹ��*/ 



	uint16	c15	;/*	������ѹ�� */ 



	uint16	c17	;/*	�г���ѹ�� */ 



	uint16	c19	;/*	�ƶ����1ѹ�� */ 



	uint16	c21	;/*	�ƶ����2ѹ�� */ 







};





/*****************�ƶ�ϵͳ��Ϣ���ݿ�END***********************/



/*****************�汾���ۼ���Ϣ���ݿ�*********************/



/*�ۼ�����汾��Ϣ 2.0�汾*/



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



//	uchar	rev37[24];/*	Ԥ��		   */	



};





/*��ȼ��  �汾���ۼ���Ϣ���ݿ�*/



struct STR_LJLYBBINFO_N_V20



{



    struct STR_TOU s_tou; /* ��ͷ  */



	uint16	c5	;/*	��ѹ��1����ʱ��*/ 



	uint16	c7	;/*	��ѹ��2����ʱ�� */ 



	uint32	c9	;/*	����������� */ 



	uint32	c13	;/*	ǣ�������ۼ��� */ 



	uint32	c17	;/*	�Ը��������ۼ��� */ 



	uint32	c21	;/*	�����ƶ������ۼ��� */ 



	uint32	c25	;/*	��תʱ���ۼ��� */ 



	uint32	c29	;/*	ǣ��ʱ���ۼ��� */ 



	uint32	c33	;/*	�Ը���ʱ���ۼ��� */ 



	uint32	c37	;/*	�����ƶ�ʱ���ۼ��� */ 



	uint32	c41	;/*	΢������汾�� */ 



	uint32	c45	;/*	΢������汾������ */ 



	uint32	c49	;/*	����GWM����汾�� */ 



	uint32	c53	;/*	����GWM����汾������ */



//	uchar	rev57[14]; /*Ԥ��      */ 



};



/*****************�汾���ۼ���Ϣ���ݿ�END*********************/

 



/**********************TCMSϵͳ��ϢEND************************************/



/************************6Aϵͳ����*******************************/



struct STR_6AXD/*6A�ȵ�������Ϣ*/



{

	struct STR_TOU s_tou;



	char	head;       	/*6A�ӱ��ı�ʶ*/



	uint16	xhjs;			/* ѭ������*/



	uchar	simno[6];		/* sim����*/



	uchar	carno[16];		/* ������*/



	uchar   date[6];		/* ����	*/



	uchar	 gjz;			/* �ؼ�֡	*/



	uchar	 hxbwgs;		/* �������ĸ���	*/



	uint16	 ptbb;			/* ����ƽ̨�汾*/	

};





/*6A�ƶ�������Ϣ*/



struct STR_6AZD



{



	struct STR_TOU s_tou;



	char	head;       /*6A�ӱ��ı�ʶ*/



	uchar	alt;		/* 1��ʾͣ���ƶ��쳣ʩ��*/



	uchar	cnt;		/* �г���ͨ����*/



	uint16		lcg;		/* �г���ѹ����kPa��	-1Ϊ����*/



	uint16		tfg;		/* ͣ�Ÿ�ѹ����kPa��	-1Ϊ����*/



	uint16		jhg;		/* �����ѹ����kPa��	-1Ϊ����*/



	uint16		llj;		/* �г���������kPa��	-1Ϊ����*/



	uint16		speed;		/* �����ٶȣ�km/h��*/	



};







/*6A��������Ϣ*/



struct STR_6AFH



{



	struct STR_TOU s_tou;



	char	head;       /*6A�ӱ��ı�ʶ*/



	uchar	alt[32];	/* 1-32��̽ͷ�����루1��ʾ������2��ʾ���ϣ�*/



	uchar	sen[32];	/* 1-32��̽ͷ�����루1��ʾ���£�2��ʾ���£�3��ʾ���棬4-���µ��£�5-��ʾ�̸У�6-��ʾ������*/



	uchar	zxkl;		/* 1��ʾ�������߿�·*/



	uchar	zxdl;		/* 1��ʾ�������߶�·*/



};







/*6A��Ե������Ϣ*/



struct STR_6AJY



{



	struct STR_TOU s_tou;



	char	head;       /*6A�ӱ��ı�ʶ*/



	uint16	jcdy;		/* ����ѹ��V��*/



	uint16	bjdy;		/* ���޵�ѹ��V��*/



	uchar	alt;		/* ����״̬  1��ʾ����*/



	uchar	stp;		/* ����״̬  1��ʾ�������*/



	uchar	error;		/* �Լ����  1��ʾ�Լ����*/

	



};







/*6A�й�������Ϣ*/



struct STR_6ALG



{



	struct STR_TOU s_tou;



	char		head;       /*6A�ӱ��ı�ʶ*/



	uint32			ldl[2];		/* ��·©������mA��*/



	uint32			ydl[2];		/* ��·�õ�����kwh��*/



	uint32			srdy[2];	/* �����ѹ��V��*/



	uint32			srdl[2];	/* ���������A��*/



	uint32			scdy[2];	/* �����ѹ��V��*/



	uint32			scdl[2];	/* ���������A��*/



	uint32			bdy[2];		/* ���ѹ��V��*/	

	

	uchar	err[4];		// ������

	

	uchar	sta[4];		//״̬��

	

	uchar	kgl	;		//������



};







/*6A����1������Ϣ*/



struct  STR_6AZX1



{



	struct STR_TOU s_tou;



	char    head;       /*6A�ӱ��ı�ʶ*/



	uchar	axis;		/* ��ţ�1~6�ֱ��ʾ1~6�ᣩ*/



	uchar	alt[8];		/* 1-8λ������*/



	uchar	tmp[8];		/* 1-8λ�¶�ֵ���棩127-����������*/



	uchar  hw1;/*����1*/



	uchar  hw2;/*����2*/



	uchar  qyzdlzt;/*ǰ�ô�����״̬ 0-������1����*/



	uint16   sdmc;/*�ٶ�����*/



};





/*6A��Ƶ������Ϣ*/



struct  STR_6ASP



{



	struct STR_TOU s_tou;



	char    head;       /*6A�ӱ��ı�ʶ*/



	uchar	chn[16];	/* 01-16ͨ���Լ���ϣ�1��ʾ���ϣ�*/



	uchar	cjk1;		/* �ɼ���1���ϣ�1��ʾ���ϣ�*/



	uchar	cjk2;		/* �ɼ���2���ϣ�1��ʾ���ϣ�*/



	uchar	disk;		/* �洢�̹��ϣ�1��ʾ���ϣ�*/	



};





/*6A�t��������Ϣ*/

struct STR_6ALW

{



	struct STR_TOU s_tou;



	char    head;       /*6A�ӱ��ı�ʶ*/

	

	char	err;	//������

	

    char	sta;	// ״̬��

	

};

/*6A����*/

struct STR_6ADN

{



	struct STR_TOU s_tou;



	char    head;       /*6A�ӱ��ı�ʶ*/

	

	int	dy;		//��ѹ����λ0.001V 

    int	dl;		//��������λ0.001A

    int	pl;		//Ƶ�ʣ���λ0.001Hz

    int	glys;	//������������λ0.001

    int	yggl;	//�й����ʣ���λ0.001kw

    int	wggl;	//�޹����ʣ���λ0.001kw

    int	zxyg;	//�����й�����λ0.001kwh

    int	fxyg;	//�����й�����λ0.001kwh

    int	zxwg;	//�����޹�����λ0.001kwh

    int	fxwg;	//�����޹�����λ0.001kwh	

};



/*6A��λ����*/

struct STR_6AYW

{



	struct STR_TOU s_tou;



	char    head;       /*6A�ӱ��ı�ʶ*/

	

	 int	yl;	// ��������λ��

	 

	 int	yw;	// ��λ��Ԥ��



};



/***************************��������********************************/

struct STR_BD_DATAHEAD



{	



	uint16	c0;/*����ͷ������0xBB55*/



	uint16	c2;/*���ĳ���*/



	uchar	c4;



	uchar	c5;



	uint16	c6;/*�ֶκ�*/



	uchar	c8;/*��Ϣ����,0x01ʵʱ��Ϣ;0x02������Ϣ*/



	uchar	c9;/*֡��*/



	uint16	c10;/*����*/



	uint16	c12;/*����*/



	uchar	c14[6];/*ʱ��*/



	uint32	c20;/*����*/



	uint32	c24;/*γ��*/



	uint16	c28;/*�ٶ�*/



   // uint16	c30;/*����*/

    int16 c30;

    /*edit by guo 20160719*/

    //float	c30;/*���� edit by guo 20160517*/



	uint16  c32;/*	���ϴ���1 */

	

	uint16  c34;/*	���ϴ���2 */

	

	uint16  c36;/*	���ϴ���3 */



};











struct STR_BD_CTBW{



	uchar	c0b0:2	;/*	�����ˣ�00=�޲�����01=I��10=II�� 11=Ԥ�� */



	uchar	c0b2:2	;/*	�ܵ繭״̬:00=������ 01=��ǰ��10=����11=Ԥ��*/	



	uchar	c0b4:1	;/*	���Ϻ�						   */	



	uchar	c0b5:1	;/*	��ת/����					   */		



	uchar	c0b6:2	;/*	��ɳ��00=����ɳ 01=�Զ���ɳ10=�ֶ���ɳ11=Ԥ��	 */		



	



	uchar	c1b0:1	;/*	������ */



	uchar	c1rev1:1;/*	Ԥ��*/



	uchar	c1b2:2	;/*	�������� 00=���� 01=ǣ�� 10=�ƶ� 11=Ԥ��*/	



	uchar	c1b4:2	;/*�������з���: 00=��λ 01=��ǰ 10=��� 11=Ԥ��	*/	



	uchar	c1rev6:2;/*Ԥ��*/	



	



	uint16  c2;		/*�ֱ���λ*/



	uint16  c4      ;/*ǣ���ƶ����ܺ�*/



	uint16  c6      ;/*�����ٶ�ʵ��ֵ*/



	uint16  c8      ;/*���ص�ѹ*/



	uint16  c10      ;/*��ѹ/������ѹ*/



	uint16  c12     ;/*����/��������*/



	uint16  c14     ;/*�ܷ��ѹ��*/



	uint16  c16     ;/*�г���ѹ��*/



	uint16  c18     ;/*�ƶ���ѹ��*/



	char   c20[4]  ;/*������ĸ����*/



	uint32  c24     ;/*�������ֲ���*/



	uint32  c28     ;/*�����*/



	uint32  c32     ;/*��˾����*/



};



/**********************����ͨ��*************************************/







/**********************LDP�Լ�/״̬��Ϣ*****************************/



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

	uchar   c45[3];/*Ԥ��*/

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

    uchar c5;       /*������¼�����ң�1����������2�����裻3�������*/

    char c6[16];    /*������¼�����кţ�Ԥ��16�ֽڣ���ʽ������*/

    uchar c22;      /*LDP���ң�1����������2������˼ά��3���ɶ��˴4���人��ԭ��*/

    char c23[16];   /*LDP�ͺţ����ַ�����ʾ���������16���ַ�������16λ�ں��油0x00*/

    char c39[16];   /*LDP������ţ����ַ�����ʾ���������16���ַ�������16λ�ں��油0x00*/

    uint16 c55;   /*LDP��������������汾(V2.0)*/

    char c57[3];   /*LDP�����������ʱ��汾���꣨ʵ����ݼ�2000��,��,��*/

    uint16 c60;   /*LDP����ͨ�Ű�����汾(V2.0)*/

    char c62[3];   /*LDP����ͨ�Ű����ʱ��汾���꣨ʵ����ݼ�2000��,��,��*/

    uint16 c65;   /*������¼������汾(V2.0)*/

    char c67[3];   /*������¼�����ʱ��汾���꣨ʵ����ݼ�2000),��,��*/

    uint16 c70;   /*����ӿڰ�����汾(V2.0)*/

    char c72[3];   /*����ӿڰ����ʱ��汾���꣨ʵ����ݼ�2000��,��,��*/

    uint16 c75;   /*����������汾(V2.0)*/

    char c77[3];   /*���������ʱ��汾���꣨ʵ����ݼ�2000��,��,��*/

    char c80[6];   /*LDP����ʱ��*/



    char c86[3];    /*Wlan-ssid�б� �汾��,�꣨ʵ����ݼ�2000��,��,��*/

    uchar c89[3];   /*Ԥ��*/

    uchar c92[32];   /*SIM��ID��Ԥ����,32���ֽ�*/

    uint16 c124;   /*3Gʹ�����������£���λMB*/

    uint16 c126;   /*3Gʹ�����������꣩��λMB*/

    char c128[3];   /*LKJ����汾��Ϣ*/

    char c131[3];  /*LKJ���ݰ汾*/

    char c134[3];  /*6A ����汾*/

    uchar c137;   /*���ٶ�Ϊ0ʱ�����t1�뷢��һ�Σ�*/

    uchar c138;   /*���ٶȴ���0Km/hС�ڻ����20Km/hʱ�����T2�뷢��һ��*/

    uchar c139;   /*���ٶȴ���20Km/hС�ڻ����40Km/hʱ�����T3�뷢��һ�Σ�*/

    uchar c140;   /*���ٶȴ���40Km/hС�ڵ���60Km/hʱ�����T4�뷢��һ�Σ�*/

    uchar c141;   /*���ٶȴ���60Km/hС�ڵ���80Km/hʱ�����T5�뷢��һ�Σ�*/

    uchar c142;   /*���ٶȴ���80Km/hС�ڵ���100Km/hʱ�����T6�뷢��һ�Σ�*/

    uchar c143;   /*���ٶȴ���100Km/hС�ڵ���120Km/hʱ�����T7�뷢��һ�Σ�*/

    uchar c144;   /*���ٶȴ���120Km/hС�ڵ���140Km/hʱ�����T8�뷢��һ�Σ�*/

    uchar c145;   /*���ٶȴ���140Km/hС�ڵ���160Km/hʱ�����T9�뷢��һ�Σ�*/

    uchar c146;   /*���ٶȴ���160Km/hС�ڵ���180Km/hʱ�����T10�뷢��һ�Σ�*/

    uchar c147;   /*���ٶȴ���180Km/hʱ�����T11�뷢��һ��*/

};



/**********************LDP�Լ�/״̬��ϢEND*****************************/





/************************�¼���Ϣ*******************************/

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



struct STR_EVENT_G5/*˾���ű���¼�0x01*/

{

	uint32 c105;

	uint32 c109;

};



struct STR_EVENT_G6/*����ͣ������0x05������ͣ�������¼�0x03*/

{

	uint16 c105;

};



struct STR_EVENT_G8/*LKJ�汾��Ϣ�¼�0x91*/

{

	char c105[3];

};



struct STR_EVENT_G9/*��վ�¼�0x92*/

{

	uint16 c105;

	uint16 c107;

};



struct STR_EVENT_G10/*���α���¼�0x95*/

{

	char c105[4];

	uint32 c109;

};



struct STR_EVENT_G11/*TCMSʱ�䱨���¼�0xE0��6Aʱ�䱨���¼�0xE1*/

{

	char c105[6];

	char c111[6];

};



/************************�¼���ϢEND*******************************/





/************************������Ϣ*******************************/

struct STR_FAULT_CODE

{

	uchar   fsrc;/*����Դ*/

	uchar   fzt;/*����״̬*/

	uint32	code;/*���ϴ���*/

	uchar	year;

	uchar	month;

	uchar	day;

	uchar	hour;

	uchar	minute;

	uchar	second;

};

struct STR_FAULT_BASICINFO_V20

{

	char    c5[4];/*������ĸ����*/

	uint32  c9; /*�������ֲ���*/

	uint16  c13;/*��վ��*/

	uint32  c15;/*˾����*/

	uint32  c19;/*��˾����*/

	uint16  c23;/*ʵ�ʽ�·��*/

	uint16  c25;/*ʵ��*/

	uint16  c27;/*����������*/

	uint16  c29;/*�źŻ����*/

	uint16  c31;/*�źŻ�������*/

	uint32  c33;/*�����*/

};



struct STR_FAULT_BASICINFO_V21

{

	char    c5[4];/*������ĸ����*/

	uint32  c9; /*�������ֲ���*/

	uint16  c13;/*��վ��*/

	uint32  c15;/*˾����*/

	uint32  c19;/*��˾����*/

	uint16  c23;/*ʵ�ʽ�·��*/

	uint16  c25;/*ʵ��*/

	uchar   c27;/*����������*/

	uchar   c28;/*���״̬*/

	uint16  c29;/*�źŻ����*/

	uint16  c31;/*�źŻ�������*/

	uint32  c33;/*�����*/

	uint32  c37;/*Ԥ��*/

};



struct STR_FAULT_V20

{

	struct STR_TOU   				s_tou;

	struct STR_FAULT_BASICINFO_V20 	s_lkj;

	uchar	num;					/*��������*/

	struct STR_FAULT_CODE fault[10];

};



struct STR_FAULT_V21

{

	struct STR_TOU   				s_tou;

	struct STR_FAULT_BASICINFO_V21 	s_lkj;

	uchar	num;					/*��������*/

	struct STR_FAULT_CODE fault[10];

};



/************************������ϢEND*******************************/

#endif



