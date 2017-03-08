#ifndef _H_INSERTSTRUCT_STRU

#define _H_INSERTSTRUCT_STRU

/* add by guo20160902  AP_DEFENDER_MGR*/

struct AP_DEFENDER_MGR{

    char idx[33];/*索引idx*/

    char t_type_id[5];

    char loco_no[5] ;

    int ab                  ;//NUMBER(1) not null,

    char serious_no[17]     ;//VARCHAR2(16),

    char software_no[33]    ;//VARCHAR2(32),

    int factory_no          ;//NUMBER(1),

    char factory_name[33]   ;//VARCHAR2(32)

};

/* add by guo20160825  itf_train_boundary_track*/

struct ITF_TRAIN_BOUNDARY_TRACK{

    char idx[33];/*索引idx*/

    char t_type_id[5];

    char loco_no[5] ;

    int tmis_no;/*分界口TMIS车站号*/

    char tmis_trainname[33];  /*分界口TMIS车站名*/

    char jzsj[21];/*进站时间*/

    double jd;/*经度	Double*/

    double wd;/*纬度	Double*/

};

/* add by guo20160823  解析错误日志*/
struct PARSE_ERROR_LOG{

    char t_type_id[5];

    char loco_no[5] ;

    int datatype;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

    int efield;  /*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

    char ereason[2014];/*错误原因*/

    char btsj[21];

    char rksj[21];

};

/**********************6A系统数据END*************************************/

/******************6A系统子结构体信息****************************/

struct REC_6AZDINFO//6a制动结构体
{
	int zd_alt     ;/*     NUMBER(3),*/
	int zd_cnt     ;/*     NUMBER(3),*/
	int zd_lcg     ;/*     NUMBER(6),*/
	int zd_tfg     ;/*     NUMBER(6),*/
	int zd_jhg     ;/*     NUMBER(6),*/
	int zd_llj     ;/*     NUMBER(6),*/
	int zd_speed   ;/*     NUMBER(6),*/
}; 

struct REC_6AJYINFO//6a绝缘结构体
{
	int jy_jcdy     ;/*    NUMBER(5),*/
	int jy_mxdy     ;/*    NUMBER(5),*/
	int jy_bjzt     ;/*    NUMBER(3),*/
	int jy_cszt     ;/*    NUMBER(3),*/
	int jy_zjgz     ;/*    NUMBER(3),*/
}; 

struct REC_6ASPINFO//6a视频结构体
{
	int sp_cjkgz_1  ;/*    NUMBER(3),*/
	int sp_cjkgz_2  ;/*    NUMBER(3),*/
	int sp_ccbgz    ;/*    NUMBER(3),*/
	char sp_tdzjgz[33]   ;/*    RAW(16),  */
}; 

struct REC_6AZXINFO//6a走行结构体
{
	char zx_wd[17]          ;/*RAW(8),     */
	char zx_bj[17]          ;/*RAW(8),     */
	int zx_hw1         ;/*NUMBER(4),  */
	int zx_hw2         ;/*NUMBER(4),  */
	int zx_qzclqstate  ;/*NUMBER(3),  */
	int zx_sdmc        ;/*NUMBER(5),  */
};

struct REC_6ALGINFO//6a列供结构体
{
	int lg_ldl_1  ;     /* NUMBER(11), */
	int lg_ydl_1  ;     /* NUMBER(11), */
	int lg_srdy_1 ;     /* NUMBER(11), */
	int lg_srdl_1 ;     /* NUMBER(11), */
	int lg_scdy_1 ;     /* NUMBER(11), */
	int lg_scdl_1 ;     /* NUMBER(11), */
	int lg_bdy_1  ;     /* NUMBER(11), */
	int lg_ldl_2  ;     /* NUMBER(11), */
	int lg_ydl_2  ;     /* NUMBER(11), */
	int lg_srdy_2 ;     /* NUMBER(11), */
	int lg_srdl_2 ;     /* NUMBER(11), */
	int lg_scdy_2 ;     /* NUMBER(11), */
	int lg_scdl_2 ;     /* NUMBER(11), */
	int lg_bdy_2  ;     /* NUMBER(11), */
	char lg_err[9]    ;     /* RAW(4),     */
	char lg_sta[9]    ;     /* RAW(4),     */
	int lg_kgl    ;     /* NUMBER(3),  */
}; 

struct REC_6AFHINFO//6a防火结构体
{
	int fh_zxkl  ; /*       NUMBER(3), */
	int fh_zxdl  ; /*       NUMBER(3), */
	char fh_ttzt[65]  ; /*       RAW(32),   */
	char fh_ttlx[65]  ; /*       RAW(32),   */
};  


struct REC_6ALWINFO

{

	char  ERRLW  ;/*     NUMBER(3), */

	char  STA  ;/*     NUMBER(3)  */

};

struct REC_6ADNINFO

{

	double DY        ;/*NUMBER(10,3), */

	double DL        ;/*NUMBER(10,3), */

	double PL        ;/*NUMBER(10,3), */

	double GLYS      ;/*NUMBER(10,3), */

	double YGGL      ;/*NUMBER(10,3), */

	double WGGL      ;/*NUMBER(10,3), */

	double ZXYG      ;/*NUMBER(10,3), */

	double FXYG      ;/*NUMBER(10,3), */

	double ZXWG      ;/*NUMBER(10,3), */

	double FXWG      ;/*NUMBER(10,3)  */

} ;

struct  REC_6AYWINFO

{

	int YL        ;/*NUMBER(10),*/

	int YW        ;/*NUMBER(10)*/

};

/******************6A信息子结构体信息END****************************/

/**************6A数据主结构体******************/
struct REC_3G_6A
{
	char xtsj[21];
    int xd_flag;
    char xd_simno[13];
	char xd_carno[17];
	float xd_cenver;
	int  zd_flag;
	struct REC_6AZDINFO				str_6azd;
	int  jy_flag;
	struct REC_6AJYINFO				str_6ajy;
	int  sp_flag;
	struct REC_6ASPINFO				str_6asp;
	int  zx_flag;
	struct REC_6AZXINFO				str_6azx[6];
	int  lg_flag;
	struct REC_6ALGINFO				str_6alg;
	int  fh_flag;
	struct REC_6AFHINFO				str_6afh;
};

/**************6A数据主结构体END***************/


/**********************机车安全信息结构体*********************************/
struct REC_3G_TAX

{



	char xtsj[21];

    char cc[21]          ;  /*VARCHAR2(20 CHAR),*/

    int czh         ;  /*NUMBER(5),        */

    int sjh         ;  /*NUMBER(10),       */

    unsigned int fsjh        ;  /*NUMBER(10),       */

    unsigned int sjjlh       ;  /*NUMBER(5),        */

    int kh          ;  /*NUMBER(1),        */

    int bb          ;  /*NUMBER(1),        */

    double sjsu        ;  /*NUMBER(5,2),      */

    int jcxh        ;  /*NUMBER(3),        */

    int gk          ;  /*NUMBER(3),        */

    int xhjbh       ;  /*NUMBER(5),        */

    int xhjlb       ;  /*NUMBER(3),        */

    int glb         ;  /*NUMBER(10),       */

    int zz          ;  /*NUMBER(5),        */

    double jc          ;  /*NUMBER(6,2),      */

    int ls          ;  /*NUMBER(5),        */

    int lcgyl       ;  /*NUMBER(5),        */

    int zzzt        ;  /*NUMBER(5),        */

    int srjlh       ;  /*NUMBER(5),        */

    int jlqfxhjjl   ;  /*NUMBER(5),        */

    int xs          ;  /*NUMBER(5),        */

    int zdsc        ;  /*NUMBER(3),        */

    int dqxlhbz     ;  /*NUMBER(3),        */

    int dqxlh       ;  /*NUMBER(5),        */

    int qfxlhbz     ;  /*NUMBER(3),        */

    int qfxlh       ;  /*NUMBER(5),        */

    int dq_tmis     ;  /*NUMBER(8),        */

    int qf_time     ;  /*NUMBER(8),        */

    int qfczjlh     ;  /*NUMBER(3),        */

    int qfchzh      ;  /*NUMBER(5),        */

    int jkzt        ;  /*NUMBER(3),        */

    int ljwy        ;  /*NUMBER(5),        */

    int bfqzx       ;  /*NUMBER(3),        */

    int bfqcx       ;  /*NUMBER(3),        */

    int qffqzx      ;  /*NUMBER(3),        */

    int qffqcx      ;  /*NUMBER(3),        */

	int lkj_type	;

    char stationname[33] ;  /*VARCHAR2(32),     */

    char drivername[33]  ;  /*VARCHAR2(32)      */

	char fdrivername[33]  ;  /*VARCHAR2(32)      */



};
/**************机车安全信息结构体END***************/


/**********************TCMS_HXD_V20信息*********************************/


/*************TCMS_HXD_V20子系统信息结构体***************************/
 struct REC_BASICINFO_HXD_V20

{

  int yx_st5        ; /*    NUMBER(3),    */ 

  int yx_st6        ; /*    NUMBER(3),    */

  int yx_st7        ; /*    NUMBER(3),    */

  int yx_st8        ; /*    NUMBER(3),    */

  int yx_st9        ; /*    NUMBER(3),    */

  int yx_st10       ; /*    NUMBER(3),    */

  int yx_st11       ; /*    NUMBER(3),    */

  float yx_sbjw     ;   /*    NUMBER(6,1),  */

  float yx_sd_jh    ;   /*    NUMBER(6,1),  */

  float yx_sd_sj    ;   /*    NUMBER(6,1),  */

  int yx_ybdy       ; /*    NUMBER(5),    */

  int yx_ybdl       ; /*    NUMBER(5),    */

  int yx_zfgyl      ; /*    NUMBER(5),    */

  int yx_jhfgyl     ; /*    NUMBER(5),    */

  int yx_lcgyl      ; /*    NUMBER(5),    */

  int yx_zdfg1yl    ; /*    NUMBER(4),    */

  int yx_zdfg2yl    ; /*    NUMBER(4),    */

  int yx_zlc        ; /*    NUMBER(10),   */

  int yx_xdcyl      ; /*    NUMBER(3),    */

  int yx_zdlqdzcs   ; /*    NUMBER(10),   */

  float yx_ysj1yxsj ;   /*    NUMBER(10,1), */

  float yx_ysj2yxsj ;   /*    NUMBER(10,1), */



};
 
struct REC_QIANYININFO_HXD_V20

{

  int qy_cdjcq             ;/*NUMBER(3),     */

  int qy_djjcq             ;/*NUMBER(3),     */

  int qy_zgl               ;/*NUMBER(3),     */

  float qy_sdsd              ;/*NUMBER(5,1),   */

  float qy_sjsd              ;/*NUMBER(5,1),   */

  float qy_qyzdlsdz_1bg1mt   ;/*NUMBER(5,1),   */

  float qy_qyzdlsdz_1bg2mt   ;/*NUMBER(5,1),   */

  float qy_qyzdlsdz_1bg3mt   ;/*NUMBER(5,1),   */

  float qy_qyzdlsdz_2bg1mt   ;/*NUMBER(5,1),   */

  float qy_qyzdlsdz_2bg2mt   ;/*NUMBER(5,1),   */

  float qy_qyzdlsdz_2bg3mt   ;/*NUMBER(5,1),   */

  float qy_qyzdlsjz_1bg1mt   ;/*NUMBER(5,1),   */

  float qy_qyzdlsjz_1bg2mt   ;/*NUMBER(5,1),   */

  float qy_qyzdlsjz_1bg3mt   ;/*NUMBER(5,1),   */

  float qy_qyzdlsjz_2bg1mt   ;/*NUMBER(5,1),   */

  float qy_qyzdlsjz_2bg2mt   ;/*NUMBER(5,1),   */

  float qy_qyzdlsjz_2bg3mt   ;/*NUMBER(5,1),   */

  float qy_sjsd_1bg1mt       ;/*NUMBER(5,1),   */

  float qy_sjsd_1bg2mt       ;/*NUMBER(5,1),   */

  float qy_sjsd_1bg3mt       ;/*NUMBER(5,1),   */

  float qy_sjsd_2bg1mt       ;/*NUMBER(5,1),   */

  float qy_sjsd_2bg2mt       ;/*NUMBER(5,1),   */

  float qy_sjsd_2bg3mt       ;/*NUMBER(5,1),   */

  int qy_djdl_1bg1mt       ;/*NUMBER(5),     */

  int qy_djdl_1bg2mt       ;/*NUMBER(5),     */

  int qy_djdl_1bg3mt       ;/*NUMBER(5),     */

  int qy_djdl_2bg1mt       ;/*NUMBER(5),     */

  int qy_djdl_2bg2mt       ;/*NUMBER(5),     */

  int qy_djdl_2bg3mt       ;/*NUMBER(5),     */

  int qy_djwd_1bg1mt       ;/*NUMBER(4),     */

  int qy_djwd_1bg2mt       ;/*NUMBER(4),     */

  int qy_djwd_1bg3mt       ;/*NUMBER(4),     */

  int qy_djwd_2bg1mt       ;/*NUMBER(4),     */

  int qy_djwd_2bg2mt       ;/*NUMBER(4),     */

  int qy_djwd_2bg3mt       ;/*NUMBER(4),     */

  int qy_fdjdy             ;/*NUMBER(5),     */

  int qy_fdjdl             ;/*NUMBER(5),     */

  int qy_jlqzlmx1dy        ;/*NUMBER(5),     */

  int qy_jlqzlmx2dy        ;/*NUMBER(5),     */

  int qy_jlqzlmx3dy        ;/*NUMBER(5),     */

  int qy_jlqzlmx4dy        ;/*NUMBER(5),     */

  int qy_jlqzlmx5dy        ;/*NUMBER(5),     */

  int qy_jlqzlmx6dy        ;/*NUMBER(5),     */

  float qy_qyblqlqsyl1       ;/*NUMBER(5,2),   */

  float qy_qyblqlqsyl2       ;/*NUMBER(5,2),   */

  float qy_qyblqlqsyl3       ;/*NUMBER(5,2),   */

  float qy_qyblqlqsyl4       ;/*NUMBER(5,2),   */

  float qy_qyblqlqsyl5       ;/*NUMBER(5,2),   */

  float qy_qyblqlqsyl6       ;/*NUMBER(5,2),   */

  int qy_qyblqlqswd1       ;/*NUMBER(6),     */

  int qy_qyblqlqswd2       ;/*NUMBER(6),     */

  int qy_qyblqlqswd3       ;/*NUMBER(6),     */

  int qy_qyblqlqswd4       ;/*NUMBER(6),     */

  int qy_qyblqlqswd5       ;/*NUMBER(6),     */

  int qy_qyblqlqswd6       ;/*NUMBER(6),     */

  int qy_qybyqyw1      	   ;/*NUMBER(6),     */

  int qy_qybyqyw2          ;/*NUMBER(6),     */

  int qy_qybyqyw3          ;/*NUMBER(6),     */

}; 

struct REC_FUZHUINFO_HXD_V20



{

  int fz_fzblqzczt      ;/* NUMBER(3),  */

  int fz_qyfjsxdlqjqqzt ;/* NUMBER(3),  */

  int fz_st7            ;/* NUMBER(3),  */

  int fz_ybsxdlqzt      ;/* NUMBER(3),  */

  int fz_blqsbsxdlqzt   ;/* NUMBER(3),  */

  int fz_ysjgz          ;/* NUMBER(3),  */

  int fz_fzblq1_scdy    ;/* NUMBER(5),  */

  int fz_fzblq1_scdl    ;/* NUMBER(5),  */

  int fz_fzblq1_scpl    ;/* NUMBER(5),  */

  int fz_fzblq2_scdy    ;/* NUMBER(5),  */

  int fz_fzblq2_scdl    ;/* NUMBER(5),  */

  int fz_fzblq2_scpl    ;/* NUMBER(5),  */

  int fz_fzblq3_scdy    ;/* NUMBER(5),  */

  int fz_fzblq3_scdl    ;/* NUMBER(5),  */

  int fz_fzblq3_scpl    ;/* NUMBER(5),  */

  int fz_fzblq4_scdy    ;/* NUMBER(5),  */

  int fz_fzblq4_scdl    ;/* NUMBER(5),  */

  int fz_fzblq4_scpl    ;/* NUMBER(5),  */

  int fz_lg1_scdy       ;/* NUMBER(5),  */

  int fz_lg1_scdl       ;/* NUMBER(5),  */

  int fz_lg2_scdy       ;/* NUMBER(5),  */

  int fz_lg2_scdl       ;/* NUMBER(5),  */

};  

struct REC_ZHIDONGINFO_HXD_V20

{

  float zd_sdsd      ;/*      NUMBER(6,1),  */

  float zd_sjsd      ;/*      NUMBER(6,1),  */

  int zd_abh       ;/*      NUMBER(3),    */

  int zd_ibh       ;/*      NUMBER(3),    */

  int zd_zdsj      ;/*      NUMBER(3),    */

  int zd_zdj       ;/*      NUMBER(3),    */

  int zd_st9       ;/*      NUMBER(3),    */

  int zd_zfgyl     ;/*      NUMBER(5),    */

  int zd_jhfgyl    ;/*      NUMBER(5),    */

  int zd_lcgyl     ;/*      NUMBER(5),    */

  int zd_zdfg1yl   ;/*      NUMBER(5),    */

  int zd_zdfg2yl   ;/*      NUMBER(5),    */

};  

struct REC_LJLYBBXX_HXD_V20

{



  int bbxx_jcyxlc       ;/*NUMBER(10),     */

  int bbxx_zdlqdzcs     ;/*NUMBER(10),     */

  float bbxx_ysj1_yxljsj  ;/*NUMBER(10,1),   */

  float bbxx_ysj2_yxljsj  ;/*NUMBER(10,1),   */

  int bbxx_tcms_zkdybb1 ;/*NUMBER(10),     */

  int bbxx_tcms_zkdybb2 ;/*NUMBER(10),     */

  int bbxx_wgdybb1      ;/*NUMBER(10),     */

  int bbxx_wgdybb2      ;/*NUMBER(10)      */

};  

/*************TCMS_HXD_V20子系统信息结构体END***************************/

/**************TCMS_HXD_V20结构体******************/
struct REC_3G_TCMS_HXD_V20

{

	

	struct REC_BASICINFO_HXD_V20				str_basic;

	

	struct REC_QIANYININFO_HXD_V20				str_qianyin;

	

	struct REC_FUZHUINFO_HXD_V20				str_fuzhu;

	

	struct REC_ZHIDONGINFO_HXD_V20				str_zhidong;	

	

	struct REC_LJLYBBXX_HXD_V20				str_ljlybbxx;

	

	

};
/**********************TCMS_HXD_V20信息END**************************************/

/**********************TCMS_HXN_V20信息*********************************/

/**************TCMS_HXN_V20结构体******************/



/*************TCMS_HXN_V20子系统信息结构体***************************/
struct REC_ZHIDONGINFO_HXN_V20

{

  int zd_st5          ;/*     NUMBER(3),  */

  int zd_zdsbwz       ;/*     NUMBER(3),  */

  int zd_ddsbwz       ;/*     NUMBER(3),  */

  int zd_zdjzdsj      ;/*     NUMBER(3),  */

  int zd_st9          ;/*     NUMBER(3),  */

  int zd_tfzd         ;/*     NUMBER(3),  */

  int zd_zfgyl        ;/*     NUMBER(5),  */

  int zd_jhfgyl       ;/*     NUMBER(5),  */

  int zd_lcgyl        ;/*     NUMBER(5),  */

  int zd_zdfg1yl      ;/*     NUMBER(5),  */

  int zd_zdfg2yl      ;/*     NUMBER(5),  */



};  

struct REC_BASICINFO_HXN_V20

{

  int yx_czd         ;/*      NUMBER(3),   */

  int yx_fxsb        ;/*      NUMBER(3),   */

  int yx_jcgk        ;/*      NUMBER(3),   */

  int yx_xsqjm       ;/*      NUMBER(3),   */

  int yx_st9         ;/*      NUMBER(3),   */

  int yx_wrjt        ;/*      NUMBER(3),   */

  int yx_st11        ;/*      NUMBER(3),   */

  int yx_skqsbdw     ;/*      NUMBER(3),   */

  int yx_cyjsczgl    ;/*      NUMBER(5),   */

  int yx_zfgl        ;/*      NUMBER(5),   */

  int yx_fzfdjgl     ;/*      NUMBER(5),   */

  int yx_zfhgl       ;/*      NUMBER(5),   */

  float yx_jcyxsd      ;/*      NUMBER(5,1), */

  int yx_jcqyl       ;/*      NUMBER(5),   */

  int yx_jczdl       ;/*      NUMBER(5),   */

  int yx_dqyl        ;/*      NUMBER(5),   */

  float yx_hjwd        ;/*      NUMBER(5,1), */

  int yx_ryyl        ;/*      NUMBER(5),   */

  int yx_ryyw        ;/*      NUMBER(5),   */

  float yx_xdcdy       ;/*      NUMBER(5,1), */

  int yx_xdccddl     ;/*      NUMBER(5),   */

  int yx_zfgyl       ;/*      NUMBER(5),   */

  int yx_jhfgyl      ;/*      NUMBER(5),   */

  int yx_lcgyl       ;/*      NUMBER(5),   */

  int yx_zdfg1yl     ;/*      NUMBER(5),   */

  int yx_zdfg2yl     ;/*      NUMBER(5),   */

  int yx_cyjzs       ;/*      NUMBER(5),   */

  int yx_jcyxlc      ;/*      NUMBER(10),  */

};

struct REC_DIESEL_HXN_V20



{

  int cyj_st5           ;/*   NUMBER(3),    */

  int cyj_st6           ;/*   NUMBER(3),    */

  int cyj_st7           ;/*   NUMBER(3),    */

  int cyj_st8           ;/*   NUMBER(3),    */

  int cyj_zs            ;/*   NUMBER(5),    */

  float cyj_qzxyl1        ;/*   NUMBER(5,1),  */

  float cyj_qzxyl2        ;/*   NUMBER(5,1),  */

  int cyj_kqxwyxly1     ;/*   NUMBER(5),    */

  int cyj_kqxwyxly2     ;/*   NUMBER(5),    */

  int cyj_rkkqwd        ;/*   NUMBER(5),    */

  int cyj_kqxkqwd1      ;/*   NUMBER(5),    */

  int cyj_kqxkqwd2      ;/*   NUMBER(5),    */

  int cyj_zyqjyjkyl1    ;/*   NUMBER(5),    */

  int cyj_zyqjyjkyl2    ;/*   NUMBER(5),    */

  int cyj_jkryyl        ;/*   NUMBER(5),    */

  int cyj_jyjkyl        ;/*   NUMBER(5),    */

  int cyj_jyjkwd        ;/*   NUMBER(5),    */

  int cyj_jyckwd        ;/*   NUMBER(5),    */

  int cyj_lqsckyl1      ;/*   NUMBER(5),    */

  int cyj_lqsckyl2      ;/*   NUMBER(5),    */

  int cyj_lqsjkyl1      ;/*   NUMBER(5),    */

  int cyj_lqsjkyl2      ;/*   NUMBER(5),    */

  int cyj_zlsbckyl      ;/*   NUMBER(5),    */

  int cyj_gwsbckyl      ;/*   NUMBER(5),    */

  int cyj_gwsjkwd       ;/*   NUMBER(5),    */

  int cyj_gwsckwd       ;/*   NUMBER(5),    */

  int cyj_zlsjkwd       ;/*   NUMBER(5),    */

  int cyj_zlsckwd       ;/*   NUMBER(5),    */

  float cyj_cyjfzfkxh     ;/*   NUMBER(5,1),  */

  float cyj_dbkzqgddy     ;/*   NUMBER(5,2),  */

  float cyj_pyqddy        ;/*   NUMBER(5,2),  */

};  

struct REC_QIANYININFO_HXN_V20

{

  int qy_zf           ;/*     NUMBER(3),   */

  int qy_gl           ;/*     NUMBER(3),   */

  int qy_skqsbdw      ;/*     NUMBER(3),   */

  int qy_zflcdl       ;/*     NUMBER(5),   */

  int qy_zfdjdl       ;/*     NUMBER(5),   */

  int qy_yjzjzlhldy   ;/*     NUMBER(5),   */

  int qy_ejzjzlhldy   ;/*     NUMBER(5),   */

  int qy_yjsdlj       ;/*     NUMBER(5),   */

  int qy_ejsdlj       ;/*     NUMBER(5),   */

  int qy_yjsjlj       ;/*     NUMBER(5),   */

  int qy_ejsjlj       ;/*     NUMBER(5),   */

  int qy_dj1_sdlj     ;/*     NUMBER(5),   */

  int qy_dj2_sdlj     ;/*     NUMBER(5),   */

  int qy_dj3_sdlj     ;/*     NUMBER(5),   */

  int qy_dj4_sdlj     ;/*     NUMBER(5),   */

  int qy_dj5_sdlj     ;/*     NUMBER(5),   */

  int qy_dj6_sdlj     ;/*     NUMBER(5),   */

  int qy_dj1_sjlj     ;/*     NUMBER(5),   */

  int qy_dj2_sjlj     ;/*     NUMBER(5),   */

  int qy_dj3_sjlj     ;/*     NUMBER(5),   */

  int qy_dj4_sjlj     ;/*     NUMBER(5),   */

  int qy_dj5_sjlj     ;/*     NUMBER(5),   */

  int qy_dj6_sjlj      ;/*     NUMBER(5),   */

  int qy_yjdl         ;/*     NUMBER(5),   */

  int qy_ejdl         ;/*     NUMBER(5),   */

  int qy_dj1_dl       ;/*     NUMBER(5),   */

  int qy_dj2_dl       ;/*     NUMBER(5),   */

  int qy_dj3_dl       ;/*     NUMBER(5),   */

  int qy_dj4_dl       ;/*     NUMBER(5),   */

  int qy_dj5_dl       ;/*     NUMBER(5),   */

  int qy_dj6_dl       ;/*     NUMBER(5),   */

  float qy_dj1_sjzs     ;/*     NUMBER(5,1), */

  float qy_dj2_sjzs     ;/*     NUMBER(5,1), */

  float qy_dj3_sjzs     ;/*     NUMBER(5,1), */

  float qy_dj4_sjzs     ;/*     NUMBER(5,1), */

  float qy_dj5_sjzs     ;/*     NUMBER(5,1), */

  float qy_dj6_sjzs     ;/*     NUMBER(5,1), */

  int qy_dj1_wd       ;/*     NUMBER(5),   */

  int qy_dj2_wd       ;/*     NUMBER(5),   */

  int qy_dj3_wd       ;/*     NUMBER(5),   */

  int qy_dj4_wd       ;/*     NUMBER(5),   */

  int qy_dj5_wd       ;/*     NUMBER(5),   */

  int qy_dj6_wd       ;/*     NUMBER(5),   */

  float qy_jdldl        ;/*     NUMBER(5,2), */

}; 

struct REC_FUZHUINFO_HXN_V20



{

  int fz_st5            ; /*  NUMBER(3),    */

  int fz_ffdjdy         ; /*  NUMBER(5),    */

  float fz_kyj1_bpqscpl   ; /*  NUMBER(5,1),  */

  int fz_kyj1_bpqscyl   ; /*  NUMBER(5),    */

  float fz_kyj2_bpqscpl   ; /*  NUMBER(5,1),  */

  int fz_kyj2_bpqscdy   ; /*  NUMBER(5),    */

  float fz_lqfs1_bpqscpl  ; /*  NUMBER(5,1),  */

  int fz_lqfs1_bpqscdy  ; /*  NUMBER(5),    */

  float fz_lqfs2_bpqscpl  ; /*  NUMBER(5,1),  */

  int fz_lqfs2_bpqscdy  ; /*  NUMBER(5),    */

  float fz_qytfjbpqscpl   ; /*  NUMBER(5,1),  */

  int fz_qytfjbpqscxdy  ; /*  NUMBER(5),    */

  int fz_lg1_scdy       ; /*  NUMBER(5),    */

  int fz_lg1_scdl       ; /*  NUMBER(5),    */

  int fz_lg2_scdy       ; /*  NUMBER(5),    */

  int fz_lg2_scdl       ; /*  NUMBER(5),    */

  int fz_lqfs1_pl       ; /*  NUMBER(5),    */

  int fz_lqfs2_pl       ; /*  NUMBER(5),    */

  int fz_lqfs3_pl       ; /*  NUMBER(5),    */

  int fz_yhzddztfjzs    ; /*  NUMBER(5),    */

  int fz_eyhzddztfjzs   ; /*  NUMBER(5),    */

  int fz_qytfj1_pl      ; /*  NUMBER(5),    */

  int fz_qytfj2_pl      ; /*  NUMBER(5),    */

  int fz_zftfjgl        ; /*  NUMBER(5),	*/



};  

struct REC_LJLYBBXX_HXN_V20

{

  int bbxx_kyj1_yxsj       ;  /*NUMBER(5),   */

  int bbxx_kyj2_yxsj       ;  /*NUMBER(5),   */

  int bbxx_jcyxlc          ;  /*NUMBER(10),  */

  int bbxx_qynlljl         ;  /*NUMBER(10),  */

  int bbxx_zfhnlljl        ;  /*NUMBER(10),  */

  int bbxx_dzzdnlljl       ;  /*NUMBER(10),  */

  int bbxx_dzsjljl         ;  /*NUMBER(10),  */

  int bbxx_qysjljl         ;  /*NUMBER(10),  */

  int bbxx_zfhsjljl        ;  /*NUMBER(10),  */

  int bbxx_dzzdsjljl       ;  /*NUMBER(10),  */

  int bbxx_wjrjbbh         ;  /*NUMBER(10),  */

  int bbxx_wjrjbbhry       ;  /*NUMBER(10),  */

  int bbxx_wg_gwm_rjbbh    ;  /*NUMBER(10),  */

  int bbxx_wg_gwm_rjbbh_ry ;  /*NUMBER(10)   */

};  

struct REC_3G_TCMS_HXN_V20

{

	

	struct REC_BASICINFO_HXN_V20				str_basic;

	

	struct REC_QIANYININFO_HXN_V20				str_qianyin;

	

	struct  REC_DIESEL_HXN_V20                  str_desel;

	

	struct REC_FUZHUINFO_HXN_V20				str_fuzhu;

	

	struct REC_ZHIDONGINFO_HXN_V20				str_zhidong;

	

	struct REC_LJLYBBXX_HXN_V20				    str_ljlybbxx;

};

/*************TCMS_HXN_V20子系统信息结构体END***************************/

/**********************TCMS_HXN_V20信息END**************************************/


/**********************TCMS_HXN3_V10信息*********************************/


/**************TCMS_HXN3_V10结构体******************/
/*************TCMS_HXN3_V10子系统信息结构体***************************/
 struct REC_BASICINFO_HXN3_V10

{

  int jb_ss         ; /*    NUMBER(1),   */

  int jb_kzhx       ; /*    NUMBER(1),   */

  int jb_zdh        ; /*    NUMBER(1),   */

  int jb_sdg        ; /*    NUMBER(1),   */

  int jb_czd        ; /*    NUMBER(1),   */

  int jb_yxfx       ; /*    NUMBER(1),   */

  int jb_gk         ; /*    NUMBER(1),   */

  int jb_gfx        ; /*    NUMBER(1),   */

  float jb_sbjw       ; /*    NUMBER(6,1), */

  float jb_qyzdl_jh   ; /*    NUMBER(6,1), */

  float jb_qyzdl_sj   ; /*    NUMBER(6,1), */

  float jb_sdsdz      ; /*    NUMBER(6,1), */

  float jb_sdsjz      ; /*    NUMBER(6,1), */

  int jb_wyzfdy     ; /*    NUMBER(5),   */

  int jb_wyzfdl     ; /*    NUMBER(5),   */

  int jb_zfgyl      ; /*    NUMBER(5),   */

  int jb_lcgyl      ; /*    NUMBER(5),   */

  int jb_zdgyl      ; /*    NUMBER(5),   */

  int jb_jhfgyl     ; /*    NUMBER(5),   */

  float jb_xdcyl      ; /*    NUMBER(5,1), */

  int jb_cyjzs      ; /*    NUMBER(5),   */

  int jb_zlc        ; /*    NUMBER(5),   */

};

struct REC_DIESEL_HXN3_V10



{

  float cyj_jcsd         ;/*  NUMBER(5,1),  */

  int   cyj_hlqfjwd      ;/*  NUMBER(5),    */

  float cyj_zcqzxyl      ;/*  NUMBER(5,2),  */

  float cyj_ycqzxyl      ;/*  NUMBER(5,2),  */

  int cyj_zcjfkkqyl    ;/*  NUMBER(5),    */

  int cyj_ycjfkkqyl    ;/*  NUMBER(5),    */

  int cyj_jfkkqwd      ;/*  NUMBER(5),    */

  int cyj_zcjfkkqwd    ;/*  NUMBER(5),    */

  int cyj_ycjfkkqwd    ;/*  NUMBER(5),    */

  int cyj_kqjkwd       ;/*  NUMBER(5),    */

  int cyj_jywd         ;/*  NUMBER(5),    */

  int cyj_jkryyl       ;/*  NUMBER(5),    */

  int cyj_jyjkyl       ;/*  NUMBER(5),    */

  int cyj_zyq_zcjyjkyl ;/*  NUMBER(5),    */

  int cyj_zyq_ycjyjkyl ;/*  NUMBER(5),    */

  int cyj_jkjywd       ;/*  NUMBER(5),    */

  int cyj_zclqsckyl    ;/*  NUMBER(5),    */

  int cyj_yclqsckyl    ;/*  NUMBER(5),    */

  int cyj_zclqsjkyl    ;/*  NUMBER(5),    */

  int cyj_yclqsjkyl    ;/*  NUMBER(5),    */

  int cyj_cksyl        ;/*  NUMBER(5),    */

  float cyj_dqyl         ;/*  NUMBER(5,3),  */

  int cyj_ryyl         ;/*  NUMBER(5),    */

  int cyj_ryyw         ;/*  NUMBER(5),    */

  float cyj_fzfkxh       ;/*  NUMBER(5,3),  */

  int cyj_zfglsc       ;/*  NUMBER(5),    */

  int cyj_glsczs       ;/*  NUMBER(9),    */

  int cyj_qyl          ;/*  NUMBER(5),    */

};  

struct REC_QIANYININFO_HXN3_V10

{

  float qy_sdsd            ; /*NUMBER(6,1),  */

  float qy_sjsd            ; /*NUMBER(6,1),  */

  int qy_fx              ; /*NUMBER(3),    */

  int qy_zgl             ; /*NUMBER(3),    */

  float qy_qyzdlsdz_1bg1mt ; /*NUMBER(5,1),  */

  float qy_qyzdlsdz_1bg2mt ; /*NUMBER(5,1),  */

  float qy_qyzdlsdz_1bg3mt ; /*NUMBER(5,1),  */

  float qy_qyzdlsdz_2bg1mt ; /*NUMBER(5,1),  */

  float qy_qyzdlsdz_2bg2mt ; /*NUMBER(5,1),  */

  float qy_qyzdlsdz_2bg3mt ; /*NUMBER(5,1),  */

  float qy_sjsd_1bg1mt     ; /*NUMBER(5,1),  */

  float qy_sjsd_1bg2mt     ; /*NUMBER(5,1),  */

  float qy_sjsd_1bg3mt     ; /*NUMBER(5,1),  */

  float qy_sjsd_2bg1mt     ; /*NUMBER(5,1),  */

  float qy_sjsd_2bg2mt     ; /*NUMBER(5,1),  */

  float qy_sjsd_2bg3mt     ; /*NUMBER(5,1),  */

  int qy_fdjdy           ; /*NUMBER(5),    */

  int qy_fdjdl           ; /*NUMBER(5),    */

  int qy_qyblq1_zjdy     ; /*NUMBER(5),    */

  int qy_qyblq1_zjdl     ; /*NUMBER(5),    */

  int qy_qyblq2_zjdy     ; /*NUMBER(5),    */

  int qy_qyblq2_zjdl     ; /*NUMBER(5),    */

  float qy_qyblq1_lqsyl    ; /*NUMBER(5,2),  */

  int qy_qyblq1_lqswd    ; /*NUMBER(5),    */

  float qy_qyblq2_lqsyl    ; /*NUMBER(5,2),  */

  int qy_qyblq2_lqswd    ; /*NUMBER(5),    */

  int qy_qybyqyw1        ; /*NUMBER(5),    */

  int qy_qybyqyw2        ; /*NUMBER(5),    */

  float qy_qyzdlsjz_1bg1mt ; /*NUMBER(5,1),  */

  float qy_qyzdlsjz_1bg2mt ; /*NUMBER(5,1),  */

  float qy_qyzdlsjz_1bg3mt ; /*NUMBER(5,1),  */

  float qy_qyzdlsjz_2bg1mt ; /*NUMBER(5,1),  */

  float qy_qyzdlsjz_2bg2mt ; /*NUMBER(5,1),  */

  float qy_qyzdlsjz_2bg3mt ; /*NUMBER(5,1),  */

  int qy_djwd_1bg1mt     ; /*NUMBER(5),    */

  int qy_djwd_1bg2mt     ; /*NUMBER(5),    */

  int qy_djwd_1bg3mt     ; /*NUMBER(5),    */

  int qy_djwd_2bg1mt     ; /*NUMBER(5),    */

  int qy_djwd_2bg2mt     ; /*NUMBER(5),    */

  int qy_djwd_2bg3mt     ; /*NUMBER(5),    */

  int qy_djdl_1bg1mt     ; /*NUMBER(5),    */

  int qy_djdl_1bg2mt     ; /*NUMBER(5),    */

  int qy_djdl_1bg3mt     ; /*NUMBER(5),    */

  int qy_djdl_2bg1mt     ; /*NUMBER(5),    */

  int qy_djdl_2bg2mt     ; /*NUMBER(5),    */

  int qy_djdl_2bg3mt     ; /*NUMBER(5),    */

  int qy_djdy_1bg1mt     ; /*NUMBER(5),    */

  int qy_djdy_1bg2mt     ; /*NUMBER(5),    */

  int qy_djdy_1bg3mt     ; /*NUMBER(5),    */

  int qy_djdy_2bg1mt     ; /*NUMBER(5),    */

  int qy_djdy_2bg2mt     ; /*NUMBER(5),    */

  int qy_djdy_2bg3mt     ; /*NUMBER(5),    */

  int qy_cdjcq           ; /*NUMBER(3),    */

  int qy_djjcq           ; /*NUMBER(3),    */

  int qy_djgl            ; /*NUMBER(3),    */

  int qy_kz              ; /*NUMBER(3),    */

}; 

struct REC_FUZHUINFO_HXN3_V10



{

  int fz_bppvsdz      ;/*   NUMBER(5),  */

  int fz_dppvsdz      ;/*   NUMBER(5),  */

  int fz_fb1zt        ;/*   NUMBER(3),  */

  int fz_fb2zt        ;/*   NUMBER(3),  */

  int fz_fb1_zlqsrdy  ;/*   NUMBER(5),  */

  int fz_fb1_zlqsrdl  ;/*   NUMBER(5),  */

  int fz_fb1_zjzldy   ;/*   NUMBER(5),  */

  int fz_fb1_nbqscdy  ;/*   NUMBER(5),  */

  int fz_fb1_nbqscdl  ;/*   NUMBER(5),  */

  int fz_fb1_nbqscpl  ;/*   NUMBER(5),  */

  int fz_fb2_zlqsrdy  ;/*   NUMBER(5),  */

  int fz_fb2_zlqsrdl  ;/*   NUMBER(5),  */

  int fz_fb2_zjzldy   ;/*   NUMBER(5),  */

  int fz_fb2_nbqscdy  ;/*   NUMBER(5),  */

  int fz_fb2_nbqscdl  ;/*   NUMBER(5),  */

  int fz_fb2_nbqscpl  ;/*   NUMBER(5),  */



};  

struct REC_ZHIDONGINFO_HXN3_V10

{

  float zd_sdsd       ;/*     NUMBER(5,1), */ 

  float zd_sjsd       ;/*     NUMBER(5,1), */

  int zd_fxzd       ;/*     NUMBER(3),   */

  int zd_abh        ;/*     NUMBER(3),   */

  int zd_ibh        ;/*     NUMBER(3),   */

  int zd_zdqq       ;/*     NUMBER(3),   */

  int zd_bcu        ;/*     NUMBER(3),   */

  int zd_dzdsdz     ;/*     NUMBER(5),   */

  int zd_zfgyl      ;/*     NUMBER(5),   */

  int zd_jhfgyl     ;/*     NUMBER(5),   */

  int zd_lcgyl      ;/*     NUMBER(5),   */

  int zd_zdfg1yl    ;/*     NUMBER(5),   */

  int zd_zdfg2yl    ;/*     NUMBER(5),   */

  int zd_zdjzt      ;/*     NUMBER(5)    */

};  

struct REC_3G_TCMS_HXN3_V10

{

	

	struct REC_BASICINFO_HXN3_V10				str_basic;

	

	struct REC_DIESEL_HXN3_V10                  str_desel;

	

	struct REC_QIANYININFO_HXN3_V10				str_qianyin;

	

	struct REC_FUZHUINFO_HXN3_V10				str_fuzhu;

	

	struct REC_ZHIDONGINFO_HXN3_V10				str_zhidong;

};
/*************TCMS_HXN3_V10子系统信息结构体END***************************/
/**********************TCMS_HXN3_V10信息END**************************************/


/**********************TCMS_V10信息*********************************/
/**************TCMS系统信息结构体******************/
/*************TCMS_V10子系统信息结构体***************************/
struct REC_BASICINFO_V10



{

  int jb_ss          ;/*    NUMBER(1),    */

  int jb_kzhx        ;/*    NUMBER(1),    */

  int jb_zdh         ;/*    NUMBER(1),    */

  int jb_sdg         ;/*    NUMBER(1),    */

  int jb_czd         ;/*    NUMBER(1),    */

  int jb_yxfx        ;/*    NUMBER(1),    */

  int jb_gk          ;/*    NUMBER(1),    */

  int jb_gfx         ;/*    NUMBER(1),    */

  float jb_sbjw        ;/*    NUMBER(6,1),  */

  float jb_qyzdl_jh    ;/*    NUMBER(6,1),  */

  float jb_qyzdl_sj    ;/*    NUMBER(6,1),  */

  float jb_sdsdz       ;/*    NUMBER(6,1),  */

  float jb_sdsjz       ;/*    NUMBER(6,1),  */

  int jb_wyzfdy      ;/*    NUMBER(5),    */

  int jb_wyzfdl      ;/*    NUMBER(5),    */

  int jb_zfgyl       ;/*    NUMBER(5),    */

  int jb_lcgyl       ;/*    NUMBER(5),    */

  int jb_zdgyl       ;/*    NUMBER(5),    */

  int jb_jhfgyl      ;/*    NUMBER(5),    */

  float jb_xdcyl       ;/*    NUMBER(5,1),  */

  int jb_cyjzs       ;/*    NUMBER(5),    */

  int jb_zlc         ;/*    NUMBER(5),    */

}; 

struct REC_QIANYININFO_V10



{

  float qy_sdsd              ;/*NUMBER(6,1),  */

  float qy_sjsd              ;/*NUMBER(6,1),  */

  int qy_fx                ;/*NUMBER(3),    */

  int qy_zgl               ;/*NUMBER(3),    */

  float qy_qyzdlsdz_1bg1mt   ;/*NUMBER(5,1),  */

  float qy_qyzdlsdz_1bg2mt   ;/*NUMBER(5,1),  */

  float qy_qyzdlsdz_1bg3mt   ;/*NUMBER(5,1),  */

  float qy_qyzdlsdz_2bg1mt   ;/*NUMBER(5,1),  */

  float qy_qyzdlsdz_2bg2mt   ;/*NUMBER(5,1),  */

  float qy_qyzdlsdz_2bg3mt   ;/*NUMBER(5,1),  */

  float qy_sjsd_1bg1mt       ;/*NUMBER(5,1),  */

  float qy_sjsd_1bg2mt       ;/*NUMBER(5,1),  */

  float qy_sjsd_1bg3mt       ;/*NUMBER(5,1),  */

  float qy_sjsd_2bg1mt       ;/*NUMBER(5,1),  */

  float qy_sjsd_2bg2mt       ;/*NUMBER(5,1),  */

  float qy_sjsd_2bg3mt       ;/*NUMBER(5,1),  */

  int qy_fdjdy             ;/*NUMBER(5),    */

  int qy_fdjdl             ;/*NUMBER(5),    */

  int qy_qyblq1_zjdy       ;/*NUMBER(5),    */

  int qy_qyblq1_zjdl       ;/*NUMBER(5),    */

  int qy_qyblq2_zjdy       ;/*NUMBER(5),    */

  int qy_qyblq2_zjdl       ;/*NUMBER(5),    */

  float qy_qyblq1_lqsyl      ;/*NUMBER(5,2),  */

  int qy_qyblq1_lqswd      ;/*NUMBER(5),    */

  float qy_qyblq2_lqsyl      ;/*NUMBER(5,2),  */

  int qy_qyblq2_lqswd      ;/*NUMBER(5),    */

  int qy_qybyqyw1          ;/*NUMBER(5),    */

  int qy_qybyqyw2          ;/*NUMBER(5),    */

  float qy_qyzdlsjz_1bg1mt   ;/*NUMBER(5,1),  */

  float qy_qyzdlsjz_1bg2mt   ;/*NUMBER(5,1),  */

  float qy_qyzdlsjz_1bg3mt   ;/*NUMBER(5,1),  */

  float qy_qyzdlsjz_2bg1mt   ;/*NUMBER(5,1),  */

  float qy_qyzdlsjz_2bg2mt   ;/*NUMBER(5,1),  */

  float qy_qyzdlsjz_2bg3mt   ;/*NUMBER(5,1),  */

  int qy_djwd_1bg1mt       ;/*NUMBER(5),    */

  int qy_djwd_1bg2mt       ;/*NUMBER(5),    */

  int qy_djwd_1bg3mt       ;/*NUMBER(5),    */

  int qy_djwd_2bg1mt       ;/*NUMBER(5),    */

  int qy_djwd_2bg2mt       ;/*NUMBER(5),    */

  int qy_djwd_2bg3mt       ;/*NUMBER(5),    */

  int qy_djdl_1bg1mt       ;/*NUMBER(5),    */

  int qy_djdl_1bg2mt       ;/*NUMBER(5),    */

  int qy_djdl_1bg3mt       ;/*NUMBER(5),    */

  int qy_djdl_2bg1mt       ;/*NUMBER(5),    */

  int qy_djdl_2bg2mt       ;/*NUMBER(5),    */

  int qy_djdl_2bg3mt       ;/*NUMBER(5),    */

  int qy_djdy_1bg1mt       ;/*NUMBER(5),    */

  int qy_djdy_1bg2mt       ;/*NUMBER(5),    */

  int qy_djdy_1bg3mt       ;/*NUMBER(5),    */

  int qy_djdy_2bg1mt       ;/*NUMBER(5),    */

  int qy_djdy_2bg2mt       ;/*NUMBER(5),    */

  int qy_djdy_2bg3mt       ;/*NUMBER(5),    */

  int qy_cdjcq             ;/*NUMBER(3),    */

  int qy_djjcq             ;/*NUMBER(3),    */

  int qy_djgl              ;/*NUMBER(3),    */

  int qy_kz                ;/*NUMBER(3),    */

}; 

struct REC_FUZHUINFO_V10



{

  int fz_bppvsdz       ;/*  NUMBER(5),  */

  int fz_dppvsdz       ;/*  NUMBER(5),  */

  int fz_fb1zt         ;/*  NUMBER(3),  */

  int fz_fb2zt         ;/*  NUMBER(3),  */

  int fz_fb1_zlqsrdy   ;/*  NUMBER(5),  */

  int fz_fb1_zlqsrdl   ;/*  NUMBER(5),  */

  int fz_fb1_zjzldy    ;/*  NUMBER(5),  */

  int fz_fb1_nbqscdy   ;/*  NUMBER(5),  */

  int fz_fb1_nbqscdl   ;/*  NUMBER(5),  */

  int fz_fb1_nbqscpl   ;/*  NUMBER(5),  */

  int fz_fb2_zlqsrdy   ;/*  NUMBER(5),  */

  int fz_fb2_zlqsrdl   ;/*  NUMBER(5),  */

  int fz_fb2_zjzldy    ;/*  NUMBER(5),  */

  int fz_fb2_nbqscdy   ;/*  NUMBER(5),  */

  int fz_fb2_nbqscdl   ;/*  NUMBER(5),  */

  int fz_fb2_nbqscpl   ;/*  NUMBER(5),  */

};  

struct REC_ZHIDONGINFO_V10

{

  float zd_sdsd      ;/*      NUMBER(5,1),  */

  float zd_sjsd      ;/*      NUMBER(5,1),  */

  int zd_fxzd      ;/*      NUMBER(3),    */

  int zd_abh       ;/*      NUMBER(3),    */

  int zd_ibh       ;/*      NUMBER(3),    */

  int zd_zdqq      ;/*      NUMBER(3),    */

  int zd_bcu       ;/*      NUMBER(3),    */

  int zd_dzdsdz    ;/*      NUMBER(5),    */

  int zd_zfgyl     ;/*      NUMBER(5),    */

  int zd_jhfgyl    ;/*      NUMBER(5),    */

  int zd_lcgyl     ;/*      NUMBER(5),    */

  int zd_zdfg1yl   ;/*      NUMBER(5),    */

  int zd_zdfg2yl   ;/*      NUMBER(5),    */

  int zd_zdjzt     ;/*      NUMBER(5)     */

}; 
/*************TCMS_V10子系统信息结构体END***************************/
struct REC_3G_TCMS_V10

{

	

	char xtsj[21];

	

	int  ver;

	

	unsigned char  flag_basic;

	

	struct REC_BASICINFO_V10				str_basic;

	

	unsigned char  flag_qianyin;

	

	struct REC_QIANYININFO_V10				str_qianyin;

	

	unsigned char  flag_fuzhu;

	

	struct REC_FUZHUINFO_V10				str_fuzhu;

	

    unsigned char  flag_zhidong;

	

	struct REC_ZHIDONGINFO_V10				str_zhidong;

	



	

};
/**********************TCMS_V10信息END**************************************/

/*************实时信息结构体***************************/
struct REC_DATAHEAD

{	

	int   		XXLX           ;/*  VARCHAR2(20 CHAR),  */

	int   		XXDJ           ;/*  VARCHAR2(20 CHAR),  */

	int   		ZH                 ;/*  NUMBER(5),          */

	int   		SJCD               ;/*  NUMBER(5),          */

	int   		FZBSH              ;/*  NUMBER(3),          */

	int   		FZH                ;/*  NUMBER(3),          */

	double  	JD                 ;/*  NUMBER(12,6),       */

	double  	WD                 ;/*  NUMBER(12,6),       */

	float  	    SD                 ;/*  NUMBER(5,2),        */

    double  	HB                 ;/*  NUMBER(8,2),     */

	int         LINENO             ;/* NUMBER(5),*/

    char        LINENAME[65]       ; /*VARCHAR2(64)*/

}; 

struct REC_SELFCHECK

{

    int VER                ;/*NUMBER(3),        */

	char LDP_SJ[21]        ;/*DATE,             */

    int COMP               ;/*NUMBER(3),        */

    int FHJLQCJ            ;/*NUMBER(3),        */

	char LDP_XH[13]        ;/*VARCHAR2(12),     */

	char LDP_CCBH[13]      ;/*VARCHAR2(12),     */

    float LDP_CPU_VER       ;/*NUMBER(5,3),      */

    float LDP_WXTX_VER      ;/*NUMBER(5,3),      */

    float FHJLQ_VER         ;/*NUMBER(5,3),      */

    float WLJKB_VER         ;/*NUMBER(5,3),      */

    float BDB_SOFT_VER      ;/*NUMBER(5,3),      */

    int BK_STATUS           ;/*NUMBER(5),        */

    int TXZT                ;/*NUMBER(3),        */

    int FLJLQZRL            ;/*NUMBER(5),        */

    int FHJLQKYRL           ;/*NUMBER(5),        */

    char WLANSSIDBB[21];    /*Wlan-ssid列表 版本号*/

	char SIMID[33]         ;/*VARCHAR2(32),     */

    int LL3GSY_M            ;/*NUMBER(5),        */

    int LL3GSY_Y            ;/*NUMBER(5),        */

	char LKJVER[21]        ;/*VARCHAR2(20),     */

    char LKJDATAVER[21]     ;/*VARCHAR2(20),     */

    int VER6A               ;/*NUMBER(9),        */

	int INTERVAL0     ;/*NUMBER(3),        */

	int INTERVAL20    ;/*NUMBER(3),        */

	int INTERVAL40    ;/*NUMBER(3),        */

	int INTERVAL60    ;/*NUMBER(3),        */

	int INTERVAL80    ;/*NUMBER(3),        */

	int INTERVAL100   ;/*NUMBER(3),        */

	int INTERVAL120   ;/*NUMBER(3),        */

	int INTERVAL140   ;/*NUMBER(3),        */

	int INTERVAL160   ;/*NUMBER(3),        */

	int INTERVAL180   ;/*NUMBER(3),        */

	int INTERVALOTHER ;/*NUMBER(3)         */



    /*add by guoyj 20160907*/

    char LKJ_DATA_VER[21];/*LKJ数据版本*/

    char FHJLQXLH[16];  /*防护记录器序列号*/

    char LDPZCLQRJSJBB[21];/*LDP主处理器软件时间版本*/

    char LDPWXTXBRJSJBB[21];/*LDP无线通信板软件时间版本*/

    char FHJLQRJSJBB[21];/*防护记录器软件时间版本*/

    char WLJKBRJSJBB[21];/*网络接口板软件时间版本*/

    float BDBRJBB;/*北斗板软件版本*/

    char BDBRJSJBB[21];/*北斗板软件时间版本*/



};

struct REC_SELFCHECKV22

{

    int VER           ;/*NUMBER(3),        */

    char LDP_SJ[21]        ;/*DATE,             */

    int COMP          ;/*NUMBER(3),        */

    int FHJLQCJ       ;/*NUMBER(3),        */

    char LDP_XH[13]        ;/*VARCHAR2(12),     */

    char LDP_CCBH[13]      ;/*VARCHAR2(12),     */

    float LDP_CPU_VER   ;/*NUMBER(5,3),      */

    float LDP_WXTX_VER  ;/*NUMBER(5,3),      */

    float FHJLQ_VER     ;/*NUMBER(5,3),      */

    float WLJKB_VER     ;/*NUMBER(5,3),      */

    int BK_STATUS     ;/*NUMBER(5),        */

    int TXZT          ;/*NUMBER(3),        */

    int FLJLQZRL      ;/*NUMBER(5),        */

    int FHJLQKYRL     ;/*NUMBER(5),        */

    char SIMID[33]         ;/*VARCHAR2(32),     */

    int LL3GSY_M      ;/*NUMBER(5),        */

    int LL3GSY_Y      ;/*NUMBER(5),        */

    char LKJVER[21]        ;/*VARCHAR2(20),     */

    char LKJDATAVER[21]        ;/*VARCHAR2(20),     */

    int VER6A         ;/*NUMBER(9),        */

    int INTERVAL0     ;/*NUMBER(3),        */

    int INTERVAL20    ;/*NUMBER(3),        */

    int INTERVAL40    ;/*NUMBER(3),        */

    int INTERVAL60    ;/*NUMBER(3),        */

    int INTERVAL80    ;/*NUMBER(3),        */

    int INTERVAL100   ;/*NUMBER(3),        */

    int INTERVAL120   ;/*NUMBER(3),        */

    int INTERVAL140   ;/*NUMBER(3),        */

    int INTERVAL160   ;/*NUMBER(3),        */

    int INTERVAL180   ;/*NUMBER(3),        */

    int INTERVALOTHER ;/*NUMBER(3)         */

};

struct STR_TRAIN_DATA_3G

{

	int  key;

	char idx[33]	;/*VARCHAR2(50 CHAR)	Y			数据头主键*/

	char t_type_id[5];

	char loco_no[5];

	int  ab;

	char rksj[21];

	char btsj[21];

	time_t unixsj;

	int    flag_datahead;

	struct REC_DATAHEAD		str_datahead; 

	

	char tcms_xtsj[21];

	int  tcms_ver;

	int  flag_tcms;/*0=无TCMS数据 1=V1.0电力TCMS 2=V1.0内燃 TCMS 3=V2.0电力TCMS 4=V2.0内燃TCMS*/

	struct REC_3G_TCMS_HXD_V20  str_tcms_dl_v20;

	struct REC_3G_TCMS_HXN_V20  str_tcms_nr_v20;

	struct REC_3G_TCMS_HXN3_V10 str_tcms_v10;



	int flag_6a;

	int _6a_ver;

	struct REC_3G_6A            str_6A;

	

	int flag_tax;

	int tax_ver;

	struct REC_3G_TAX           str_tax;



	int	flag_selfcheck;

	struct REC_SELFCHECK    str_self_check;

	

	int	flag_6a_lw;

	struct REC_6ALWINFO str_6a_lw;

	

	int	flag_6a_dn;

	struct REC_6ADNINFO str_6a_dn;

	

	unsigned char	flag_6a_yw;

	struct REC_6AYWINFO str_6a_yw;

	

};

/*************实时信息结构体END***************************/

/**********************北斗信息END********************************/
struct STR_TRAIN_DATA_BD{  

	char     idx[33]        ;  /*CHAR(32) not null,              */ 

	int      key;

	char     t_type_id[5]  ;  /*CHAR(3),                        */  

	char     loco_no[5]    ;  /*CHAR(4 CHAR),                   */  

	int      ab         ;  /*NUMBER(1),                      */  

	char     btsj[21]       ;  /*DATE,                           */  

	char     rksj[21]       ;  /*DATE default SYSDATE,           */

	time_t unixsj;	

	int      xxlx      ;  /*NUMBER(3),                      */  

	int      zh         ;  /*NUMBER(5),                      */  

	int      sjcd       ;  /*NUMBER(5),                      */  

	double   jd         ;  /*NUMBER(12,6),                   */  

	double   wd         ;  /*NUMBER(12,6),                   */  

	double   sd         ;  /*NUMBER(8,2),                    */  

	double   hb         ;  /*NUMBER(8,2),                    */  

	int      ver        ;  /*NUMBER(3) default 10 not null,  */  

	int      gzdm1      ;  /*NUMBER(10),                     */  

	int      gzdm2      ;  /*NUMBER(10),                     */  

	int      gzdm3      ;  /*NUMBER(10),                     */  

	int      ss         ;  /*NUMBER(1),                      */  

	int      kzhx       ;  /*NUMBER(1),                      */  

	int      zdh        ;  /*NUMBER(1),                      */  

	int      sdgzt      ;  /*NUMBER(1),                      */  

	int      czd        ;  /*NUMBER(1),                      */  

	int      jcyxfx     ;  /*NUMBER(1),                      */  

	int      jcgk       ;  /*NUMBER(1),                      */  

	int      gfx        ;  /*NUMBER(1),                      */  

	double   sbjw       ;  /*NUMBER(5,1),                    */  

	int      qyzdl      ;  /*NUMBER(5),                      */  

	double   sjsd       ;  /*NUMBER(5,2),                    */  

	double   xdcdy      ;  /*NUMBER(5,1),                    */  

	int      wyzfdy     ;  /*NUMBER(5),                      */  

	int      wlzfdl     ;  /*NUMBER(5),                      */  

	int      zfgyl      ;  /*NUMBER(5),                      */  

	int      lcgyl      ;  /*NUMBER(5),                      */  

	int      zdgyl      ;  /*NUMBER(5),                      */  

	char      cc[21]         ;  /*VARCHAR2(20),                   */  

	int      glb        ;  /*NUMBER(11),                     */  

	int      zsjh       ;  /*NUMBER(10)                      */

};
/**************北斗信息END**************/

/**************故障信息**************/

struct REC_FAULTCODE_EX{

  char IDX[33]    ;/*CHAR(32) not null,             */

  char   VALIDECHECK;

  int  GZSB;

  int  GZZT;

  int  SEND_TYPE;

  unsigned int  GZDM       ;/*NUMBER(10),                    */

  char GZMC[101]  ;/*VARCHAR2(100),                 */

  char GZKSSJ[21] ;/*DATE,                          */

  int  GZDJ       ;/*NUMBER(2),                     */

  unsigned int  GZDM_WM    ;/*NUMBER(5),                     */

  char CODESHOW[21] ;/*故障代码字符串形式           */

};



struct STR_TRAIN_DATA_FAULT{

  int VER         	  ;/*NUMBER(3) default 10 not null, */

  int key			  ;

  char   VALIDECHECK  ;

  char T_TYPE_ID[5]   ;/*CHAR(3),                       */

  char LOCO_NO[5]     ;/*CHAR(4),                       */

  int AB          ;/*NUMBER(1) default 0,           */

  char B_ID[5]    ;/*CHAR(4),                       */

  char B_ID2[5];

  char D_ID[5]    ;/*CHAR(4),                       */

  char D_ID2[5]   ;/*CHAR(4),                       */

  char BTSJ[21]   ;/*DATE,                          */

  char RKSJ[21]   ;/*DATE default SYSDATE,          */

  int CZH         ;/*NUMBER(5),                     */

  int SJJLH       ;/*NUMBER(5),                     */

  float SJSD      ;/*NUMBER(7,2),                   */

  int JCGKZ       ;/*NUMBER(5),                     */

  int XHJBH       ;/*NUMBER(5),                     */

  int XHJZLZ      ;/*NUMBER(5),                     */

  char CC[21]     ;/*VARCHAR2(20),                  */

  unsigned int ZSJH        ;/*NUMBER(10),                    */

  unsigned int FSJH        ;/*NUMBER(10),                    */

  int GLB         ;/*NUMBER(10),                    */

 

  int JKZT        ;/*NUMBER(5),                     */

  char DRIVERNAME[33]  ;/*VARCHAR2(32),                     */

  char DRIVERTEL[33]   ;/*VARCHAR2(32),                  */

  int LINENO      	   ;/*NUMBER(5),                     */

  char LINENAME[33]    ;/*VARCHAR2(32),                  */

  char STATIONNAME[33] ;/*VARCHAR2(32),                  */

  double GPSJD         ;/*NUMBER(12,6),                  */

  double GPSWD         ;/*NUMBER(12,6),                  */

  double GPSHB          ;/*NUMBER(8,2), edit by guo 20160518  */

  float GPSSD          ;/*NUMBER(8,2)                    */

  int faultnum		   ;

  int CRK;/*出入库标志 add by guo 20160602*/

  struct REC_FAULTCODE_EX 		str_fault[10];

};

/**************故障信息END***************/



/**************事件信息**************/

struct REC_EVENT_INFO{

 char 	IDX[33]         ;/*CHAR(32 CHAR) not null,*/

 int    VER;

 char   VALIDECHECK;

 int 	ETYPE       ;/*NUMBER(5),             */

 char 	SJMC[33]        ;/*VARCHAR2(30),          */

 int 	SJDJ        ;/*NUMBER(2),             */

 char 	SJ[21]          ;/*DATE,                  */

 char 	CC[21]          ;/*VARCHAR2(20 CHAR),     */

 int 	CZH         ;/*NUMBER(5),             */

 unsigned int 	SJH         ;/*NUMBER(10),            */

 unsigned int 	FSJH        ;/*NUMBER(10),            */

 int 	SJJLH       ;/*NUMBER(5),             */

 int 	KHBB        ;/*NUMBER(3),             */

 float 	SJSU        ;/*NUMBER(5,2),           */

 int 	JCXHZ       ;/*NUMBER(5),             */

 int 	GK          ;/*NUMBER(3),             */

 int 	XHJBH       ;/*NUMBER(5),             */

 int 	XHJLB       ;/*NUMBER(5),             */

 int 	GLB         ;/*NUMBER(10),            */

 int 	ZZ          ;/*NUMBER(5),             */

 float 	JC          ;/*NUMBER(6,2),           */

 int 	LS          ;/*NUMBER(5),             */

 int 	LCGYL       ;/*NUMBER(5),             */

 int 	ZZZT        ;/*NUMBER(3),             */

 int 	CXSJ        ;/*NUMBER(10),            */

 int 	SJH_BGQ     ;/*NUMBER(10),            */

 int 	FSJH_BGQ    ;/*NUMBER(10),            */

 int 	SRJLH       ;/*NUMBER(5),             */

 int 	JLQFXHJJL   ;/*NUMBER(5),             */

 int 	XS          ;/*NUMBER(5),             */

 int 	ZDSC        ;/*NUMBER(3),             */

 int 	DQXLHBZ     ;/*NUMBER(3),             */

 int 	DQXLH       ;/*NUMBER(5),             */

 int 	QFXLHBZ     ;/*NUMBER(3),             */

 int 	QFXLH       ;/*NUMBER(5),             */

 int 	DQ_TMIS     ;/*NUMBER(8),             */

 int 	QF_TIME     ;/*NUMBER(8),             */

 int 	QFCZJLH     ;/*NUMBER(3),             */

 int 	QFCHZH      ;/*NUMBER(5),             */

 int 	JKZT        ;/*NUMBER(3),             */

 int 	LJWY        ;/*NUMBER(5),             */

 int 	BFQZX       ;/*NUMBER(3),             */

 int 	BFQCX       ;/*NUMBER(3),             */

 int 	QFFQZX      ;/*NUMBER(3),             */

 int 	QFFQCX      ;/*NUMBER(3),             */

 int    LKJ_TYPE;

 char   LKJ_SJ[21];//

 char   QT_SJ[21];

 int    PRE_CZH;

 int    PRE_JLH;

 char   PRE_CZM[33];

 char   PRE_CC[21];

};

struct STR_TRAIN_DATA_EVENT{

 char 	T_TYPE_ID[5]   	;/*CHAR(3 CHAR),          */

 char 	LOCO_NO[5]     	;/*CHAR(4 CHAR),          */

 int    key			;

 int 	AB          	;/*NUMBER(1),             */

 char 	D_ID[5]        	;/*CHAR(4),               */

 char 	BTSJ[21]        ;/*DATE,                  */

 char 	RKSJ[21]        ;/*DATE default SYSDATE,  */

 double GPSJD       	;/*NUMBER(12,6),          */

 double GPSWD       	;/*NUMBER(12,6),          */

 float 	GPSSD       	;/*NUMBER(5,2),           */

 double 	GPSHB       	;/*NUMBER(8,2), edit by guo 20160518 float */

 char 	DRIVERNAME[33]  ;/*NUMBER(9),             */

 char 	DRIVERTEL[33]   ;/*VARCHAR2(32),          */

 int 	LINENO      	;/*NUMBER(5),             */

 char 	LINENAME[33]    ;/*VARCHAR2(32),          */

 char 	STATIONNAME[33] ;/*VARCHAR2(32)           */

 char 	LKJVER[21]  ;/*VARCHAR2(20),          */

 char   B_ID[5];

 char   B_ID2[5];

 char   D_ID2[5];

 char   VALIDECHECK  ;

 int    eventnum;

 char 	STATIONNAME2[33] ;/*VARCHAR2(32)  前方车站号         */

 int    CRK;    /*出入库标志 add by guo 20160530*/

 struct REC_EVENT_INFO str_event[10];

};



/**************事件信息END***************/

#endif

