#include "declare.h"
#include "data_analysis.h"
int zxcnt = 0;
int test_flag = 1;
struct STR_TRAIN_DATA_3G gloab_3g[NUM_3G];
struct STR_TRAIN_DATA_BD gloab_bd[NUM_BD];
struct STR_TRAIN_DATA_FAULT gloab_fault[NUM_FAULT];
struct STR_TRAIN_DATA_EVENT gloab_event[NUM_EVENT];

uint16 gloab_3g_usednum = 0;
uint16 gloab_bd_usednum = 0;
uint16 gloab_fault_usednum = 0;
uint16 gloab_event_usednum = 0;

/***************相应键盘输入*******************/
//#ifdef UNIX_LINUX_SYS
//int _kbhit(void)  
//{  
//    struct termios oldt, newt;
//    int oldf;
//    int ch;
//
//    tcgetattr(STDIN_FILENO, &oldt);
//    newt = oldt;
//    newt.c_lflag &= ~(ICANON | ECHO);
//    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
//    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
//	fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
//
//    ch = getchar();
//    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
//    fcntl(STDIN_FILENO, F_SETFL, oldf);
//    if(ch != EOF)
//    {
//        ungetc(ch, stdin);
//        return 1;
//    }
//    return 0;
//} 
//#endif

void setDispSwitch(char chCmd)

{

    switch(chCmd)

    {

    case 'a':/*总开关*/

        memset(&disp,0,sizeof(DISP));

        break;

    case 'A':

        memset(&disp,1,sizeof(DISP));

        break;

    case 'e':/*显示接收数据类型*/

        disp.e=0;

        break;

    case 'E':

        memset(&disp,0,sizeof(DISP));

        disp.e=1;

        break;

    case 't':/*显示接收数据类型*/

        disp.t=0;

        break;

    case 'T':

        memset(&disp,0,sizeof(DISP));

        disp.t=1;

        break;

    case 'r':/*接收显示*/

        disp.r=0;

        break;

    case 'R':

        memset(&disp,0,sizeof(DISP));

        disp.r=1;

        break;

    case 's':/*是否记录*/

        disp.s=0;

        break;

    case 'S':

        memset(&disp,0,sizeof(DISP));

        disp.s=1;

        break;

    case 'g':/*3g显示开关*/

        disp.g=0;

        break;

    case 'G':

        memset(&disp,0,sizeof(DISP));

        disp.g=1;

        break;

    case 'b':/*北斗显示开关*/

        disp.b=0;

        break;

    case 'B':

        memset(&disp,0,sizeof(DISP));

        disp.b=1;

        break;

    case 'f':/*故障显示开关*/

        disp.f=0;

        break;

    case 'F':

        memset(&disp,0,sizeof(DISP));

        disp.f=1;

        break;

    case 'v':/*事件显示开关*/

        disp.v=0;

        break;

    case 'V':

        disp.v=1;

        break;

    default:

        break;

    }

}

/*add by guo 20160520 判断3g报文入库时间，对超出范围的进行过滤*/

unsigned int judge_3g_pre(int yy1,int mm1,int dd1,int hh1,int mi1,int ss1)

{

    int yy,MM,dd,hh,mm,ss;

    time_t tmpsystime;

    time_t tmpframetime;

    struct tm *tmpframetm;



    //printf("date:%d-%d-%d %d:%d:%d\n",yy1,mm1,dd1,hh1,mi1,ss1);

    /*  add by guo 20160520  当机车下发的报文时间超前服务器时间600s时将该报文进行过滤 */

    getDateTime1(&yy, &MM, &dd, &hh, &mm, &ss, &tmpsystime);



    //printf("year:%d\n",yy);

    tmpframetime = time(NULL);

    tmpframetm = localtime(&tmpframetime);

    tmpframetm->tm_year = yy1 - 1900;                         //2000 - 1900;

    tmpframetm->tm_mon = mm1 - 1;

    tmpframetm->tm_mday = dd1;

    tmpframetm->tm_hour = hh1;

    tmpframetm->tm_min = mi1;

    tmpframetm->tm_sec = ss1;

    tmpframetime = mktime(tmpframetm);



    //printf("tmpframetime:%d,tmpsystime:%d\n",tmpframetime,tmpsystime);

    //printf("tmpframetime - tmpsystime = %d\n",tmpframetime - tmpsystime);

    if((tmpframetime - tmpsystime) > 600)

    {

        return 2;

    }

    return 0;

}

unsigned int judge_3g(unsigned int tm,unsigned int key)

{

    engineStruct *engineFind =0;

    engineStruct engine;

    int flag;

    int yy,MM,dd,hh,mm,ss;

    time_t tmpsystime;

    time_t tmpframetime;

    struct tm *tmpframetm;



    /*  add by guo 20160713  当机车下发的报文时间超前服务器时间600s时将该报文进行过滤 */

    getDateTime1(&yy, &MM, &dd, &hh, &mm, &ss, &tmpsystime);



    //printf("xtsj:yy =%d,mm = %d,dd = %d,hh = %d,mm = %d,ss = %d\n",yy,MM,dd,hh,mm,ss);

    yy = (tm >> 26) & 0x0000003f;

    MM = (tm >> 22) & 0x0000000f;

    dd = (tm >> 17) & 0x0000001f;

    hh = (tm >> 12) & 0x0000001f;

    mm = (tm >> 6) & 0x0000003f;

    ss = tm & 0x0000003f;



    //printf("key = %d,btsj:tm = %d,yy =%d,mm = %d,dd = %d,hh = %d,mm = %d,ss = %d\n",key,tm,yy,MM,dd,hh,mm,ss);



    tmpframetime = time(NULL);

    tmpframetm = localtime(&tmpframetime);

    tmpframetm->tm_year = yy + 100;                         //2000 - 1900;

    tmpframetm->tm_mon = MM - 1;

    tmpframetm->tm_mday = dd;

    tmpframetm->tm_hour = hh;

    tmpframetm->tm_min = mm;

    tmpframetm->tm_sec = ss;

    tmpframetime = mktime(tmpframetm);



    if((tmpframetime - tmpsystime) > 600)

    {

        //printf("0\n");

        return 2;

    }



    engineFind = hash_lookup(&engineHash_3g, key);

    if(0 != engineFind)

    {

        if(tm <= engineFind->bddate)

        {

            //printf("1\n");

            lprintf(disp.b,"%d3g数据：去重成功\n",key);

            return 0;

        } else

        {

            //printf("2\n");

            engineFind->bddate = tm;

            return 1;

        }

    } else

    {

        //printf("3\n");

        engine.bddate = tm;

        engine.faultHead.pFirst = 0;

        engine.faultHead.pTail = 0;

        engine.faultHead.faultnum=0;

        engine.eventHead.pFirst = 0;

        engine.eventHead.pTail = 0;

        engine.eventHead.eventnum=0;

        flag = hash_insert(&engineHash_3g, key, engine);

        if(HASH_SUCCESS != flag)

        {

            printf("%d3g数据：插入哈希表失败\n",key);

        } else

        {

            lprintf(disp.a,"%d3g数据：插入哈希表成功\n",key);

        }

        return 1;

    }

}

unsigned int judge_bd(unsigned int tm,unsigned int key)

{

    engineStruct *engineFind =0;

    engineStruct engine;

    int flag;

    //	int change = 0;

    //	int tmdiff=0;

    int yy,MM,dd,hh,mm,ss;

    time_t tmpsystime;

    time_t tmpframetime;

    struct tm *tmpframetm;



    /*  add by linw 20160227  当机车下发的报文时间超前服务器时间600s时将该报文进行过滤 */

    getDateTime1(&yy, &MM, &dd, &hh, &mm, &ss, &tmpsystime);



    yy = (tm >> 26) & 0x0000003f;

    MM = (tm >> 22) & 0x0000000f;

    dd = (tm >> 17) & 0x0000001f;

    hh = (tm >> 12) & 0x0000001f;

    mm = (tm >> 6) & 0x0000003f;

    ss = tm & 0x0000003f;



    tmpframetime = time(NULL);

    tmpframetm = localtime(&tmpframetime);

    tmpframetm->tm_year = yy + 100;                         //2000 - 1900;

    tmpframetm->tm_mon = MM - 1;

    tmpframetm->tm_mday = dd;

    tmpframetm->tm_hour = hh;

    tmpframetm->tm_min = mm;

    tmpframetm->tm_sec = ss;

    tmpframetime = mktime(tmpframetm);



    if((tmpframetime - tmpsystime) > 600)

        return 2;



    engineFind = hash_lookup(&engineHash, key);

    if(0 != engineFind)

    {

        if(tm <= engineFind->bddate)

        {

            lprintf(disp.b,"%d北斗数据：去重成功\n",key);

            return 0;

        } else

        {

            engineFind->bddate = tm;

            return 1;

        }

    } else

    {

        engine.bddate = tm;

        engine.faultHead.pFirst = 0;

        engine.faultHead.pTail = 0;

        engine.faultHead.faultnum=0;

        engine.eventHead.pFirst = 0;

        engine.eventHead.pTail = 0;

        engine.eventHead.eventnum=0;

        flag = hash_insert(&engineHash, key, engine);

        if(HASH_SUCCESS != flag)

        {

            printf("%d北斗数据：插入哈希表失败\n",key);

        } else

        {

            lprintf(disp.a,"%d北斗数据：插入哈希表成功\n",key);

        }

        return 1;

    }

}

/*解析存储北斗数据到北斗数据结构体中*/

uchar parse_bd(uchar *data, int length)

{

    uint16 cheh=0;

    uint16 chex=0;

    int ret = 0;

    int offset = 0;

    int yy=0,mm=0,dd=0,hh=0,mi=0,ss=0;

    int yy1=0,mm1=0,dd1=0,hh1=0,mi1=0,ss1=0;

    unsigned int tm = 0;

    int i;

    unsigned int key;



    struct tm *tmpdate;

    time_t time_val;

    int sequence = 0; /*占用序号*/

    char tempCC[21];

    struct STR_BD_DATAHEAD *s_head =NULL;

    struct STR_BD_CTBW *s_ctbw  = NULL;

    ptraininfo_stu ptraininfo = NULL;

    struct PARSE_ERROR_LOG parse_error;

    if(!(data[8]>0 && data[8]<6))

    {

        lprintf(disp.e,"BD解析：数据类型代码:%d,不需解析入库\n",data[8]);

        return ERR;

    }

    sequence = gloab_bd_usednum;

    if (sequence >= NUM_BD)

    {

        lprintf(disp.e,"存储北斗数据容器已满\n");

        return ERR;

    }

    memset(&gloab_bd[sequence],0,sizeof(gloab_bd[sequence]));

    s_head = (struct STR_BD_DATAHEAD *)(data+offset);



    chex = SWAP2(s_head->c10);

    cheh = SWAP2(s_head->c12);



    key = gloab_bd[sequence].key = ((chex<<16)&0xc0ff0000) + (cheh&0x3FFF);



    /*  add by linw 20160227  */

    //	yy = 2000+s_head->c14[0];

    yy = s_head->c14[0];

    mm = s_head->c14[1];

    dd = s_head->c14[2];

    hh = s_head->c14[3];

    mi = s_head->c14[4];

    ss = s_head->c14[5];



    sprintf(parse_error.t_type_id,"%03d",chex & 0x3FF);

    sprintf(parse_error.loco_no,"%04d",cheh & 0x3FFF);

    sprintf(parse_error.btsj, "%d-%02d-%02d %02d:%02d:%02d", yy+2000, mm, dd, hh, mi, ss);



    if(!checkdate(yy + 2000, mm, dd, hh, mi, ss))

    {

        lprintf(disp.e,"BD解析:%03d-%04d\t日期错误：date:(%04d-%02d-%02d %02d:%02d:%02d)\n",chex&0x3ff,cheh&0x3fff,yy,mm,dd,hh,mi,ss);

        /*add by guo 20160824*/

        parse_error.datatype = 2;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

        parse_error.efield = 1;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

        sprintf(parse_error.ereason, "BD解析:日期错误,%04d-%02d-%02d %02d:%02d:%02d",yy+2000,mm,dd,hh,mi,ss);

        getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);

        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);

        insert_AP_PARSE_ERROR_LOG(parse_error);



        return ERR;

    }



    tm = ((unsigned char)(yy&0x0000003f)<<26)

            | ((unsigned char)(mm&0x0000000f)<<22)

            | ((unsigned char)(dd&0x0000001f)<<17)

            | ((unsigned char)(hh&0x0000001f)<<12)

            | ((unsigned char)(mi&0x0000003f)<<6)

            |(ss&0x0000003f);

    gloab_bd[sequence].sjcd = SWAP2(s_head->c2);

    gloab_bd[sequence].xxlx = s_head->c8;

    gloab_bd[sequence].zh   = s_head->c9;



    /*  add by linw 20160227  */

#if 1

    ret = judge_bd(tm, key);

    if(0 == ret)

    {

        if(0x05 == gloab_bd[sequence].xxlx)

        {

            if((0 == mi) && (mi == ss))

            {

                getDateTime1(&yy, &mm, &dd, &hh, &mi, &ss, &time_val);

                sprintf(gloab_bd[sequence].rksj,"%d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);

                gloab_bd[sequence].unixsj = time_val;



                time_val -= 10;

                tmpdate = localtime(&time_val);

                sprintf(gloab_bd[sequence].btsj,

                        "%d-%02d-%02d %02d:%02d:%02d",

                        tmpdate->tm_year + 1900,

                        tmpdate->tm_mon + 1,

                        tmpdate->tm_mday,

                        tmpdate->tm_hour,

                        tmpdate->tm_min,

                        tmpdate->tm_sec);



                ptraininfo = c_map_at(&traininfo_map,&key);

                if(NULL != ptraininfo)

                {

                    memcpy(ptraininfo->LASTTIMEBD,gloab_bd[sequence].rksj,21);

                    memcpy(ptraininfo->LASTTIME,gloab_bd[sequence].rksj,21);

                    memcpy(ptraininfo->LASTTIMEBDNBGD,gloab_bd[sequence].rksj,21);

                    ptraininfo->STATUSBD = 2;

                    ptraininfo->UNIXTIMEBD	= gloab_bd[sequence].unixsj;

                    ptraininfo->UNIXTIMELAST = gloab_bd[sequence].unixsj;

                }

            }

        }

        lprintf(disp.b,"BD解析:%03d-%04d去重成功\n",chex&0x3ff,cheh);

        return ERR;

    } else if(2 == ret)

    {

        /*add by guo 20160818*/

        parse_error.datatype = 2;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

        parse_error.efield = 1;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

        sprintf(parse_error.ereason, "BD解析:超出服务器时间600s,btsj:%04d-%02d-%02d %02d:%02d:%02d",yy+2000,mm,dd,hh,mi,ss);

        getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);

        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);

        insert_AP_PARSE_ERROR_LOG(parse_error);

        lprintf(disp.b,"BD解析:%03d-%04d时间超出服务器600s\n",chex&0x3ff,cheh);

        //printf("BD解析:%03d-%04d时间超出服务器600s--%d-%d-%d %d:%d:%d\n",chex&0x3ff,cheh,yy + 2000,mm,dd,hh,mi,ss);

        //return ERR;/*edit by guo 20160725*/

    } else

    {

        ;

    }

#else

#endif



#ifdef UNIX_LINUX_SYS

    sprintf(gloab_bd[sequence].t_type_id,"%03d",chex & 0x3FF);

    sprintf(gloab_bd[sequence].loco_no,"%04d",cheh & 0x3FFF);

#else

    _snprintf(gloab_bd[sequence].t_type_id,3,"%03d",chex & 0x3FF);

    _snprintf(gloab_bd[sequence].loco_no,4,"%04d",cheh & 0x3FFF);

#endif



    if(chex & 0x8000)

    {

        gloab_bd[sequence].ab = 1;

    } else if(chex & 0x4000)

    {

        gloab_bd[sequence].ab = 2;

    } else

    {

        gloab_bd[sequence].ab = 0;

    }



    gloab_bd[sequence].sjcd = SWAP2(s_head->c2);



    /* add by linw 20160227 */

    //sprintf(gloab_bd[sequence].btsj,"%d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);

    sprintf(gloab_bd[sequence].btsj, "%d-%02d-%02d %02d:%02d:%02d", yy + 2000, mm, dd, hh, mi, ss);

    getDateTime1(&yy, &mm, &dd, &hh, &mi, &ss, &time_val);

    sprintf(gloab_bd[sequence].rksj, "%d-%02d-%02d %02d:%02d:%02d", yy, mm, dd, hh, mi, ss);

    gloab_bd[sequence].unixsj = time_val;



    gloab_bd[sequence].jd = SWAP4(s_head->c20) / 200000.0f;

    gloab_bd[sequence].wd = SWAP4(s_head->c24) / 200000.0f;



    if((gloab_bd[sequence].jd<73 ||gloab_bd[sequence].jd>136)

            ||(gloab_bd[sequence].wd<18 ||gloab_bd[sequence].wd>54))

    {

        /*add by guo 20160826*/

        parse_error.datatype = 2;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

        parse_error.efield = 4;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

        sprintf(parse_error.ereason, "BD解析:经纬度超过国内范围,jd = %f,wd = %f",gloab_bd[sequence].jd,gloab_bd[sequence].wd);

        getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);

        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);

        insert_AP_PARSE_ERROR_LOG(parse_error);

    }



    gloab_bd[sequence].sd = SWAP2(s_head->c28);

    if(gloab_bd[sequence].sd>250)

    {

        /*add by guo 20160826*/

        parse_error.datatype = 2;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

        parse_error.efield = 2;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

        sprintf(parse_error.ereason, "BD解析:速度超过250,value = %f",gloab_bd[sequence].sd);

        getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);

        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);

        insert_AP_PARSE_ERROR_LOG(parse_error);

    }





    gloab_bd[sequence].hb = SWAP2(s_head->c30);

    if(gloab_bd[sequence].hb>=5000)

    {

        /*add by guo 20160818*/

        parse_error.datatype = 2;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

        parse_error.efield = 3;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

        sprintf(parse_error.ereason, "BD解析:海拔超过5000m,hb = %f",gloab_bd[sequence].hb);

        getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);

        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);

        insert_AP_PARSE_ERROR_LOG(parse_error);

    }

    else if(gloab_bd[sequence].hb<=-300)

    {

        /*add by guo 20160818*/

        parse_error.datatype = 2;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

        parse_error.efield = 3;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

        sprintf(parse_error.ereason, "BD解析:海拔低于负300m,hb = %f",gloab_bd[sequence].hb);

        getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);

        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);

        insert_AP_PARSE_ERROR_LOG(parse_error);

    }



    //gloab_bd[sequence].hb = s_head->c30;/*edit by guo 20160517*/

    gloab_bd[sequence].gzdm1 = SWAP2(s_head->c32);

    gloab_bd[sequence].gzdm2 = SWAP2(s_head->c34);

    gloab_bd[sequence].gzdm3 = SWAP2(s_head->c36);

    gloab_bd[sequence].ver = 10;



    if (s_head->c8 == 0x01) /*常态报文*/

    {

        /*插入常态报文信息时，更新ap_train_online*/

        offset += 38;

        s_ctbw = (struct STR_BD_CTBW *)(data + offset);



        gloab_bd[sequence].ss =	s_ctbw->c0b6 & 0x03;

        gloab_bd[sequence].kzhx = s_ctbw->c0b5 & 0x01;

        gloab_bd[sequence].zdh = s_ctbw->c0b4 & 0x01;

        gloab_bd[sequence].sdgzt = s_ctbw->c0b2 & 0x03;

        gloab_bd[sequence].czd = s_ctbw->c0b0 & 0x03;

        gloab_bd[sequence].jcyxfx =	s_ctbw->c1b4 & 0x03;

        gloab_bd[sequence].jcgk = s_ctbw->c1b2 & 0x03;



        gloab_bd[sequence].gfx = s_ctbw->c1b0 & 0x01;

        gloab_bd[sequence].sbjw = SWAP2(s_ctbw->c2) * 0.1f ;         /*手柄级位*/

        gloab_bd[sequence].qyzdl = ((int16)SWAP2(s_ctbw->c4)) * 0.1f;/*牵引制动力总和*/

        gloab_bd[sequence].sjsd = SWAP2(s_ctbw->c6)*0.1f;            /*机车速度实际值*/

        gloab_bd[sequence].xdcdy = (int16)(SWAP2(s_ctbw->c8)) * 0.1f;/*蓄电池电压*/

        gloab_bd[sequence].wyzfdy = SWAP2(s_ctbw->c10);              /*网压/主发电压*/

        gloab_bd[sequence].wlzfdl = SWAP2(s_ctbw->c12);              /*网流/主发电流*/

        gloab_bd[sequence].zfgyl = SWAP2(s_ctbw->c14) / 16;          /*总风缸压力*/

        gloab_bd[sequence].lcgyl = SWAP2(s_ctbw->c16) / 16;          /*列车管压力*/

        gloab_bd[sequence].zdgyl = SWAP2(s_ctbw->c18) / 16;          /*制动缸压力*/



        memset(tempCC,0,21);

        sprintf(tempCC,"%c%c%c%c%d",

                s_ctbw->c20[0],

                s_ctbw->c20[1],

                s_ctbw->c20[2],

                s_ctbw->c20[3],

                SWAP4(s_ctbw->c24));

        Trim(gloab_bd[sequence].cc, tempCC);                         /*车次数车字部分*/

        gloab_bd[sequence].glb = SWAP4(s_ctbw->c28) & 0x003FFFFF;    /*公里标*/

        gloab_bd[sequence].zsjh = SWAP4(s_ctbw->c32);                /*主司机号*/

    } else if(0x05 == s_head->c8)                                    /*断电回送报文*/

    {

        offset += 38;

    } else

    {

        lprintf(disp.e,"BD解析:未知的北斗报文类型%d\n", s_head->c8);



        return ERR;

    }



    if(-1 == getGuid(gloab_bd[sequence].idx))

    {

        lprintf(disp.b,"BD解析:获取idx失败\n");

        lprintf(disp.e,"BD解析:获取idx失败\n");



        return ERR;

    }



    ptraininfo = c_map_at(&traininfo_map, &key);

    if(NULL != ptraininfo)

    {

        memcpy(ptraininfo->IDX_BD, gloab_bd[sequence].idx, 33);

        memcpy(ptraininfo->LASTTIMEBD, gloab_bd[sequence].rksj, 21);

        memcpy(ptraininfo->LASTTIME, gloab_bd[sequence].rksj, 21);



        ptraininfo->JD = gloab_3g[sequence].str_datahead.JD;

        ptraininfo->WD = gloab_3g[sequence].str_datahead.WD;

        ptraininfo->HB = gloab_3g[sequence].str_datahead.HB;

        ptraininfo->BTSD = gloab_3g[sequence].str_datahead.SD;



        ptraininfo->JD = ptraininfo->BDJD = gloab_bd[sequence].jd;

        ptraininfo->WD = ptraininfo->BDWD = gloab_bd[sequence].wd;

        ptraininfo->BDHB = gloab_bd[sequence].hb;

        ptraininfo->BDSD = gloab_bd[sequence].sd;

        ptraininfo->UNIXTIMEBD = gloab_bd[sequence].unixsj;

        ptraininfo->UNIXTIMELAST = gloab_bd[sequence].unixsj;



        /*  add by linw 20160227  */

#if 1

        if(0x01 == gloab_bd[sequence].xxlx)

        {

            memcpy(ptraininfo->LASTTIMEBDCT, gloab_bd[sequence].rksj, 21);

            ptraininfo->STATUSBD = 1;

        } else

        {

            memcpy(ptraininfo->LASTTIMEBDNBGD, gloab_bd[sequence].rksj, 21);

            ptraininfo->STATUSBD = 2;

        }

#else

        if(0x01 == gloab_bd[sequence].xxlx)

        {

            memcpy(ptraininfo->LASTTIMEBDCT, gloab_bd[sequence].rksj, 21);

            ptraininfo->STATUSBD = 1;

        } else if(0x05 == gloab_bd[sequence].xxlx)

        {

            memcpy(ptraininfo->LASTTIMEBDNBGD, gloab_bd[sequence].rksj, 21);

            ptraininfo->STATUSBD = 2;

        }

#endif

    }

    return SUCCESS ;

}

/*解析V1.0版本 机车安全信息*/

void parse_locosafe_v10(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    char tempCC[21];

    char tmp[256] = {0x00};

    ptraininfo_stu ptraininfo = NULL;

    int i;

    int yy=0,mm=0,dd=0,hh=0,mi=0,ss=0;

    pperson_stu pperson;

    int key;

    int temp_b_id;

    plineinfo_stu plineinfo = NULL;



    int tmpkey;

    int boundary_key,chex,cheh;

    plineinfo_stu tmpplineinfo = NULL;

    pboundary_info pboundaryinfo;

    boundary_info boundaryinfo;

    boundary_cur boundary_curinfo;

    boundary_history boundary_historyinfo;



    pboundary_cur pboundary_curinfo;

    pboundary_cur pboundary_curinfo_temp;

    pboundary_history pboundary_historyinfo;



    pboundaryinfo = &boundaryinfo;

    pboundary_curinfo = &boundary_curinfo;

    pboundary_historyinfo = &boundary_historyinfo;



    struct ITF_TRAIN_BOUNDARY_TRACK itf_train_boundary_track;

    struct PARSE_ERROR_LOG parse_error;



    struct STR_LKJ_V10 *s_safe = (struct STR_LKJ_V10 *)(data+offset);



    key = savetmp->key;



    savetmp->tax_ver = s_safe->s_tou.c4;

    jktoDate(savetmp->str_tax.xtsj,SWAP4(s_safe->c5));

    memset(tempCC,0,21);

    for(i=0;i<4;i++)

    {

        if(s_safe->c9[i] == '0')

        {

            s_safe->c9[i] = 0x20;

        }

    }



    sprintf(tempCC,"%c%c%c%c%d",s_safe->c9[0],s_safe->c9[1],s_safe->c9[2],s_safe->c9[3],SWAP4(s_safe->c13));

    Trim(savetmp->str_tax.cc,tempCC);



    savetmp->str_tax.czh		  = SWAP2(s_safe->c17);

    savetmp->str_tax.sjh		  = SWAP4(s_safe->c19);

    savetmp->str_tax.fsjh		  = SWAP4(s_safe->c23);

    savetmp->str_tax.sjjlh		  = SWAP2(s_safe->c31)	;

    savetmp->str_tax.kh		  = SWAP2(s_safe->c33) &0x01        ;  /*NUMBER(1),        */

    savetmp->str_tax.bb		  = (SWAP2(s_safe->c33)>>1)&0x01        ;  /*NUMBER(1),        */

    savetmp->str_tax.sjsu        = SWAP2(s_safe->c35)&0x03ff;  /*NUMBER(5,2),      */

    if(savetmp->str_tax.sjsu>250)

    {

        /*add by guo 20160826*/

        sprintf(parse_error.t_type_id,"%03d",savetmp->t_type_id);

        sprintf(parse_error.loco_no,"%04d",savetmp->loco_no);

        memcpy(parse_error.btsj,savetmp->btsj,strlen(savetmp->btsj));



        parse_error.datatype = 1;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

        parse_error.efield = 2;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

        sprintf(parse_error.ereason, "tax解析v10:速度超过250,sjsu = %f",savetmp->str_tax.sjsu);

        getDateTime(&yy, &mm, &dd, &hh, &mi, &ss);

        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy, mm, dd, hh, mi, ss);

        insert_AP_PARSE_ERROR_LOG(parse_error);

    }

    savetmp->str_tax.jcxh        = (uchar)SWAP2(s_safe->c37);  /*NUMBER(3),        */

    savetmp->str_tax.gk          = (uchar)SWAP2(s_safe->c39);  /*NUMBER(3),        */

    savetmp->str_tax.xhjbh       = SWAP2(s_safe->c41);  /*NUMBER(5),        */

    savetmp->str_tax.xhjlb       = (uchar)SWAP2(s_safe->c43);  /*NUMBER(3),        */

    savetmp->str_tax.glb         = SWAP4(s_safe->c45) & 0x003FFFFF;  /*NUMBER(10),       */

    savetmp->str_tax.zz          = SWAP2(s_safe->c49);  /*NUMBER(5),        */

    savetmp->str_tax.jc          = SWAP2(s_safe->c51)*0.1f;  /*NUMBER(6,2),      */

    savetmp->str_tax.ls          = SWAP2(s_safe->c53);  /*NUMBER(5),        */

    savetmp->str_tax.lcgyl       = SWAP2(s_safe->c55)&0x03FF;  /*NUMBER(5),        */

    savetmp->str_tax.zzzt        = (uchar)SWAP2(s_safe->c57)&0x07;  /*NUMBER(5),        */



    ptraininfo = (traininfo_stu*)c_map_at(&traininfo_map,&key);

    if((savetmp->str_tax.czh != 0) || (savetmp->str_tax.sjjlh != 0))

    {

        if(ptraininfo != NULL)

        {

            if ((savetmp->str_tax.czh != ptraininfo->STATIONNO)

                    ||(savetmp->str_tax.sjjlh != ptraininfo->CROSSROADNO) )/*交路号或者车站号改变时*/

            {

                /* add by guo 20160331*/

                temp_b_id = atoi(ptraininfo->B_ID);

                tmpkey = ((temp_b_id & 0x000000ff) << 24) +

                        ((ptraininfo->CROSSROADNO & 0x000000ff) <<16) + ptraininfo->STATIONNO;

                tmpplineinfo = c_map_at(&lineinfo_map,&tmpkey);/*前一站的线路信息*/



                /* add by guo 20160818*/

                //if(NULL == tmpplineinfo)

                if(0)

                {

                    //printf("parse_locosafe_v10 typeid = %s,locono = %s,temp_b_id = %d,CROSSROADNO = %d,STATIONNO = %d\n",ptraininfo->T_TYPE_ID,ptraininfo->LOCO_NO,temp_b_id,ptraininfo->CROSSROADNO,ptraininfo->STATIONNO);

                    sprintf(tmp, "parse_locosafe_v10 typeid = %s,locono = %s,temp_b_id = %d,CROSSROADNO = %d,STATIONNO = %d\n",ptraininfo->T_TYPE_ID,ptraininfo->LOCO_NO,temp_b_id,ptraininfo->CROSSROADNO,ptraininfo->STATIONNO);

                    cclog('e', tmp);

                }



                ptraininfo->STATIONNO   = savetmp->str_tax.czh;

                ptraininfo->CROSSROADNO = savetmp->str_tax.sjjlh;



                key  = ((temp_b_id & 0x000000ff) << 24) +

                        ((ptraininfo->CROSSROADNO & 0x000000ff) << 16) + ptraininfo->STATIONNO;

                plineinfo = c_map_at(&lineinfo_map,&key);/*当前站的线路信息*/

                if(NULL != plineinfo)

                {

                    ptraininfo->TIMSSTATIONNO = plineinfo->TMIS_STATION_NO;

                    ptraininfo->LINENO = plineinfo->TRAIN_LINE_NO;

                    memcpy(ptraininfo->STATIONNAME,plineinfo->TRAIN_STATION_NAME,33);

                    memcpy(ptraininfo->TIMSSTATIONNAME,plineinfo->TMIS_STATION_NAME,33);

                    memcpy(ptraininfo->LINENAME,plineinfo->TRAIN_LINE_NAME,33);

                    memcpy(ptraininfo->CUR_B_ID,plineinfo->STATION_B_ID,5);



                    /*add by guo 20160825 insert to itf_train_boundary_track*/

                    if(1 == plineinfo->ISBOUNDARY)

                    {

                        //printf("111111111\n");

                        /*如果是分界口，插入数据库表itf_train_boundary_track*/

                        if(-1 != getGuid(itf_train_boundary_track.idx))

                        {

                            memcpy(itf_train_boundary_track.t_type_id, ptraininfo->T_TYPE_ID, 5);

                            memcpy(itf_train_boundary_track.loco_no, ptraininfo->LOCO_NO, 5);

                            memcpy(itf_train_boundary_track.jzsj, savetmp->rksj, 21);

                            itf_train_boundary_track.tmis_no = plineinfo->TMIS_STATION_NO;

                            memcpy(itf_train_boundary_track.tmis_trainname,plineinfo->TMIS_STATION_NAME,33);

                            itf_train_boundary_track.jd = savetmp->str_datahead.JD;

                            itf_train_boundary_track.wd = savetmp->str_datahead.WD;

                            insert_ITF_TRAIN_BOUNDARY_TRACK(itf_train_boundary_track);

                        }

                    }



                    /*判断是否过局界 20160818*/

                    if((NULL != tmpplineinfo)

                            &&(1 == tmpplineinfo->ISBOUNDARY || 1 == plineinfo->ISBOUNDARY)

                            &&(-1 != getGuid(pboundaryinfo->idx))

                            &&(0 != memcmp(tmpplineinfo->STATION_B_ID, plineinfo->STATION_B_ID, 5)))

                    {

                        /*add by guo 20160406*/

                        if (savetmp->str_tax.sjh != ptraininfo->DRIVERNO)

                        {

                            key = savetmp->str_tax.sjh ;

                            pperson = c_map_at(&person_map,&key);

                            if(pperson != NULL)

                            {

                                memcpy(pboundary_historyinfo->next_drivername, pperson->NAME, 33);

                                memcpy(pboundary_curinfo->drivername, pperson->NAME, 33);

                                memcpy(pboundaryinfo->drivername, pperson->NAME, 33);

                            } else

                            {

                                memset(pboundary_historyinfo->next_drivername, 0, 33);

                                memset(pboundary_curinfo->drivername, 0, 33);

                                memset(pboundaryinfo->drivername, 0, 33);

                            }

                            /*更新司机名，司机配属局，司机联系方式*/

                        }

                        else

                        {

                            memcpy(pboundary_historyinfo->next_drivername, ptraininfo->DRIVERNAME, 33);

                            memcpy(pboundary_curinfo->drivername, ptraininfo->DRIVERNAME, 33);

                            memcpy(pboundaryinfo->drivername, ptraininfo->DRIVERNAME, 33);

                        }



                        memcpy(pboundaryinfo->t_type_id, ptraininfo->T_TYPE_ID, 5);

                        memcpy(pboundaryinfo->loco_no, ptraininfo->LOCO_NO, 5);

                        memcpy(pboundaryinfo->rksj, savetmp->rksj, 21);

                        memcpy(pboundaryinfo->recordtime, savetmp->btsj, 21);

                        pboundaryinfo->speed = savetmp->str_tax.sjsu ;

                        memcpy(pboundaryinfo->cc, savetmp->str_tax.cc, 21);

                        pboundaryinfo->driverno = savetmp->str_tax.sjh;

                        pboundaryinfo->tmisno= plineinfo->TMIS_STATION_NO;

                        memcpy(pboundaryinfo->tmisname, plineinfo->TMIS_STATION_NAME, 33);



                        //pboundaryinfo->direction = 1;



                        memcpy(pboundary_historyinfo->t_type_id, ptraininfo->T_TYPE_ID, 5);

                        memcpy(pboundary_historyinfo->loco_no, ptraininfo->LOCO_NO, 5);

                        memcpy(pboundary_historyinfo->next_cc, savetmp->str_tax.cc, 21);

                        pboundary_historyinfo->next_driverno = savetmp->str_tax.sjh;

                        memcpy(pboundary_historyinfo->next_boundary_time, savetmp->str_tax.xtsj, 21);

                        pboundary_historyinfo->next_sjsd = (int)savetmp->str_tax.sjsu;

                        memcpy(pboundary_historyinfo->rksj, savetmp->rksj, 21);



                        memcpy(pboundary_curinfo->t_type_id, ptraininfo->T_TYPE_ID, 5);

                        memcpy(pboundary_curinfo->loco_no, ptraininfo->LOCO_NO, 5);

                        memcpy(pboundary_curinfo->cc, ptraininfo->CC, 21);

                        pboundary_curinfo->driverno = savetmp->str_tax.sjh;

                        memcpy(pboundary_curinfo->pass_boundary_time, savetmp->str_tax.xtsj, 21);

                        memcpy(pboundary_curinfo->update_time, savetmp->rksj, 21);

                        pboundary_curinfo->sjsd = (int)savetmp->str_tax.sjsu;



                        if(1 == tmpplineinfo->ISBOUNDARY)

                        {

                            /* modify by cuiy 20160918*/

                             memcpy(pboundary_historyinfo->duration_bid, tmpplineinfo->STATION_B_ID, 5);

                             memcpy(pboundary_historyinfo->next_bid, plineinfo->STATION_B_ID, 5);

                             memcpy(pboundary_curinfo->last_bid, tmpplineinfo->STATION_B_ID, 5);

                             memcpy(pboundary_curinfo->next_bid, plineinfo->STATION_B_ID, 5);

                             pboundaryinfo->direction = 0;



                             /*当前局界*/

                             pboundary_curinfo->tmis_station_no = tmpplineinfo->TMIS_STATION_NO;

                             memcpy(pboundary_curinfo->tmis_station_name, tmpplineinfo->TMIS_STATION_NAME, 33);



                             /*历史局界 add by guo 20160608*/

                             pboundary_historyinfo->next_tmis_no = tmpplineinfo->TMIS_STATION_NO;

                             memcpy(pboundary_historyinfo->next_tmis_name, tmpplineinfo->TMIS_STATION_NAME, 33);

                        }

                        if(1 == plineinfo->ISBOUNDARY)

                        {

                            memcpy(pboundary_historyinfo->duration_bid, tmpplineinfo->STATION_B_ID, 5);

                            memcpy(pboundary_historyinfo->next_bid, plineinfo->STATION_B_ID, 5);

                            memcpy(pboundary_curinfo->last_bid, tmpplineinfo->STATION_B_ID, 5);

                            memcpy(pboundary_curinfo->next_bid, plineinfo->STATION_B_ID, 5);

                            pboundaryinfo->direction = 1;



                            /*当前局界*/

                            pboundary_curinfo->tmis_station_no = plineinfo->TMIS_STATION_NO;

                            memcpy(pboundary_curinfo->tmis_station_name, plineinfo->TMIS_STATION_NAME, 33);



                            /*历史局界 add by guo 20160608*/

                            pboundary_historyinfo->next_tmis_no = plineinfo->TMIS_STATION_NO;

                            memcpy(pboundary_historyinfo->next_tmis_name, plineinfo->TMIS_STATION_NAME, 33);

                        }







//                        /*当前局界*/

//                        pboundary_curinfo->tmis_station_no = plineinfo->TMIS_STATION_NO;

//                        memcpy(pboundary_curinfo->tmis_station_name, plineinfo->TMIS_STATION_NAME, 33);



//                        /*历史局界 add by guo 20160608*/

//                        pboundary_historyinfo->next_tmis_no = plineinfo->TMIS_STATION_NO;

//                        memcpy(pboundary_historyinfo->next_tmis_name, plineinfo->TMIS_STATION_NAME, 33);



                        chex = atoi(ptraininfo->T_TYPE_ID);

                        cheh = atoi(ptraininfo->LOCO_NO);

                        boundary_key = ((chex<<16)&0xc0ff0000) + (cheh&0x3FFF);/*changed by guo 20160831*/

                        //boundary_key = ((chex<<16)&0xffff0000) + cheh;

                        pboundary_curinfo_temp = c_map_at(&boundary_map,&boundary_key);

                        if(-1 != getGuid(pboundary_historyinfo->idx))

                        {

                            /*局界历史*/

                            if(pboundary_curinfo_temp != NULL)

                            {

                                memcpy(pboundary_historyinfo->last_boundary_time, pboundary_curinfo_temp->pass_boundary_time, 21);

                                pboundary_historyinfo->last_sjsd = pboundary_curinfo_temp->sjsd;



                                /* add by cuiy 20160918*/

                                memcpy(pboundary_historyinfo->last_bid,  pboundary_curinfo->last_bid, 5);



                                //memcpy(pboundary_historyinfo->last_bid, pboundary_curinfo_temp->next_bid, 5);

                                pboundary_historyinfo->last_tmis_no = pboundary_curinfo_temp->tmis_station_no;

                                memcpy(pboundary_historyinfo->last_tmis_name, pboundary_curinfo_temp->tmis_station_name, 33);

                                memcpy(pboundary_historyinfo->last_cc, pboundary_curinfo_temp->cc, 21);

                                pboundary_historyinfo->last_driverno = pboundary_curinfo_temp->driverno;

                                memcpy(pboundary_historyinfo->last_drivername, pboundary_curinfo_temp->drivername, 33);

                            }

                            else

                            {

                                memset(pboundary_historyinfo->last_boundary_time, 0, 21);

                                pboundary_historyinfo->last_sjsd = 0;

                                memset(pboundary_historyinfo->last_bid, 0, 5);

                                pboundary_historyinfo->last_tmis_no = 0;

                                memset(pboundary_historyinfo->last_tmis_name, 0, 33);

                                memset(pboundary_historyinfo->last_cc, 0, 21);

                                pboundary_historyinfo->last_driverno = 0;

                                memset(pboundary_historyinfo->last_drivername, 0, 33);

                            }



                            insert_ap_train_boundary_history(pboundary_historyinfo);

                        }



                        /*add by guo 20160406*/

                        //判断是插入还是更新

                        if(pboundary_curinfo_temp != NULL)

                        {

                           memcpy(pboundary_curinfo_temp->cc,pboundary_curinfo->cc,21);

                           memcpy(pboundary_curinfo_temp->drivername,pboundary_curinfo->drivername,33);

                           memcpy(pboundary_curinfo_temp->pass_boundary_time,pboundary_curinfo->pass_boundary_time,21);

                           memcpy(pboundary_curinfo_temp->update_time,pboundary_curinfo->update_time,21);

                           memcpy(pboundary_curinfo_temp->last_bid,pboundary_curinfo->last_bid,5);

                           memcpy(pboundary_curinfo_temp->next_bid,pboundary_curinfo->next_bid,5);

                           memcpy(pboundary_curinfo_temp->tmis_station_name,pboundary_curinfo->tmis_station_name,33);



                           pboundary_curinfo_temp->driverno = pboundary_curinfo_temp->driverno;

                           pboundary_curinfo_temp->sjsd     = pboundary_curinfo_temp->sjsd;

                           pboundary_curinfo_temp->tmis_station_no = pboundary_curinfo_temp->tmis_station_no;

                           update_Train_boundary_Status(pboundary_curinfo);

                        }

                        else

                        {

                           if(-1 != getGuid(pboundary_curinfo->idx))

                           {

                              insert_Train_boundary_Status(pboundary_curinfo);

                              creatBoundaryNode(&boundary_map,boundary_key,pboundary_curinfo);

                           }

                        }

                        insert_ap_train_laststatuslog(pboundaryinfo);//插入数据到数据库表

                    }



                }

                else

                {

                    //sprintf(tmp, "v10 plineinfo=null,typeid = %s,locono = %s,temp_b_id = %d,CROSSROADNO = %d,STATIONNO = %d\n",ptraininfo->T_TYPE_ID,ptraininfo->LOCO_NO,temp_b_id,ptraininfo->CROSSROADNO,ptraininfo->STATIONNO);

                    //cclog('e', tmp);

                }

            }



            if (savetmp->str_tax.sjh != ptraininfo->DRIVERNO)

            {

                ptraininfo->DRIVERNO = savetmp->str_tax.sjh;

                key = savetmp->str_tax.sjh ;

                pperson = c_map_at(&person_map,&key);

                if(pperson != NULL)

                {

                    memcpy(ptraininfo->DRIVERBID,pperson->B_ID,5);

                    memcpy(ptraininfo->DRIVERBSNAME,pperson->BSNAME,11);

                    memcpy(ptraininfo->DRIVERBFNAME,pperson->BFNAME,33);

                    memcpy(ptraininfo->DRIVERDID,pperson->D_ID,5);

                    memcpy(ptraininfo->DRIVERDSNAME,pperson->DSNAME,11);

                    memcpy(ptraininfo->DRIVERDFNAME,pperson->DFNAME,33);

                    memcpy(ptraininfo->DRIVERNAME,pperson->NAME,33);

                    memcpy(ptraininfo->DRIVERTEL,pperson->MOBILENUMBER,33);

                } else

                {

                    memset(ptraininfo->DRIVERBID,0,5);

                    memset(ptraininfo->DRIVERBSNAME,0,11);

                    memset(ptraininfo->DRIVERBFNAME,0,33);

                    memset(ptraininfo->DRIVERDID,0,5);

                    memset(ptraininfo->DRIVERDSNAME,0,11);

                    memset(ptraininfo->DRIVERDFNAME,0,33);

                    memset(ptraininfo->DRIVERNAME,0,33);

                    memset(ptraininfo->DRIVERTEL,0,33);

                }

                /*更新司机名，司机配属局，司机联系方式*/

            }



            if (savetmp->str_tax.fsjh != ptraininfo->FDRIVERNO)

            {

                ptraininfo->FDRIVERNO = savetmp->str_tax.fsjh;

                key = savetmp->str_tax.fsjh ;

                pperson = c_map_at(&person_map,&key);

                if(pperson != NULL)

                {

                    memcpy(ptraininfo->FDRIVERNAME,pperson->NAME,33);

                    memcpy(ptraininfo->FDRIVERTEL,pperson->MOBILENUMBER,33);

                } else

                {

                    memset(ptraininfo->FDRIVERNAME,0,33);

                    memset(ptraininfo->FDRIVERTEL,0,33);

                }



                /*更新司机名，司机配属局，司机联系方式*/

            }



            memcpy( ptraininfo->CC,savetmp->str_tax.cc,21);

            ptraininfo->KHBB = SWAP2(s_safe->c33) &0x03;

            ptraininfo->ZZ   = savetmp->str_tax.zz;

            ptraininfo->JC   = savetmp->str_tax.jc;

            ptraininfo->GLB  = savetmp->str_tax.glb;

            ptraininfo->LS   = savetmp->str_tax.ls;

            ptraininfo->PROVERLKJ = s_safe->s_tou.c4;;

            ptraininfo->LKJSD = savetmp->str_tax.sjsu;

            memcpy(savetmp->str_tax.stationname,ptraininfo->STATIONNAME,33);

            memcpy(savetmp->str_tax.drivername,ptraininfo->DRIVERNAME,33);

            memcpy(savetmp->str_tax.fdrivername,ptraininfo->FDRIVERNAME,33);

        }

    }

    savetmp->flag_tax = 1;

}

/*解析V2.0版本 机车安全信息*/

void parse_locosafe_v20(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    char tempCC[21];

    char tmp[256] = {0x00};

    ptraininfo_stu ptraininfo = NULL;

    int key;

    int yy=0,mm=0,dd=0,hh=0,mi=0,ss=0;

    int temp_b_id;

    pperson_stu pperson = NULL;

    plineinfo_stu plineinfo = NULL;



    int tmpkey;

    int boundary_key,chex,cheh;

    plineinfo_stu tmpplineinfo = NULL;

    pboundary_info pboundaryinfo;

    boundary_info boundaryinfo;

    boundary_cur boundary_curinfo;

    boundary_history boundary_historyinfo;



    pboundary_cur pboundary_curinfo;

    pboundary_cur pboundary_curinfo_temp;

    pboundary_history pboundary_historyinfo;



    pboundaryinfo = &boundaryinfo;

    pboundary_curinfo = &boundary_curinfo;

    pboundary_historyinfo = &boundary_historyinfo;



    struct ITF_TRAIN_BOUNDARY_TRACK itf_train_boundary_track;

    struct PARSE_ERROR_LOG parse_error;

    struct STR_LKJ_V20 *s_safe = (struct STR_LKJ_V20 *)(data+offset);



    key = savetmp->key;



    savetmp->tax_ver = s_safe->s_tou.c4;

    jktoDate(savetmp->str_tax.xtsj,SWAP4(s_safe->c5));

    memset(tempCC,0,21);

    sprintf(tempCC,"%c%c%c%c%d",s_safe->c9[0],s_safe->c9[1],s_safe->c9[2],s_safe->c9[3],SWAP4(s_safe->c13));

    Trim(savetmp->str_tax.cc,tempCC);

    savetmp->str_tax.czh		  = SWAP2(s_safe->c17);

    savetmp->str_tax.sjh		  = SWAP4(s_safe->c19);

    savetmp->str_tax.fsjh		  = SWAP4(s_safe->c23);

    savetmp->str_tax.sjjlh		  = SWAP2(s_safe->c31)	;

    savetmp->str_tax.kh		  = s_safe->c33 &0x01        ;  /*NUMBER(1),        */

    savetmp->str_tax.bb		  = (s_safe->c33>>1)&0x01        ;  /*NUMBER(1),        */

    savetmp->str_tax.sjsu        = SWAP2(s_safe->c34)&0x03ff;  /*NUMBER(5,2),      */

    if(savetmp->str_tax.sjsu>250)

    {

        /*add by guo 20160826*/

        sprintf(parse_error.t_type_id,"%03d",savetmp->t_type_id);

        sprintf(parse_error.loco_no,"%04d",savetmp->loco_no);

        memcpy(parse_error.btsj,savetmp->btsj,strlen(savetmp->btsj));



        parse_error.datatype = 1;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

        parse_error.efield = 2;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

        sprintf(parse_error.ereason, "tax解析v20:速度超过250,sjsu = %f",savetmp->str_tax.sjsu);

        getDateTime(&yy, &mm, &dd, &hh, &mi, &ss);

        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy, mm, dd, hh, mi, ss);

        insert_AP_PARSE_ERROR_LOG(parse_error);

    }

    savetmp->str_tax.jcxh        = s_safe->c36;  /*NUMBER(3),        */

    savetmp->str_tax.gk          = s_safe->c37;  /*NUMBER(3),        */

    savetmp->str_tax.xhjbh       = SWAP2(s_safe->c38);  /*NUMBER(5),        */

    savetmp->str_tax.xhjlb       = s_safe->c40;  /*NUMBER(3),        */

    savetmp->str_tax.glb         = SWAP4(s_safe->c41) & 0x003FFFFF;  /*NUMBER(10),       */

    savetmp->str_tax.zz          = SWAP2(s_safe->c45);  /*NUMBER(5),        */

    savetmp->str_tax.jc          = SWAP2(s_safe->c47)*0.1f;  /*NUMBER(6,2),      */

    savetmp->str_tax.ls          = SWAP2(s_safe->c49);  /*NUMBER(5),        */

    savetmp->str_tax.lcgyl       = SWAP2(s_safe->c51)&0x03FF;  /*NUMBER(5),        */

    savetmp->str_tax.zzzt        = s_safe->c53 & 0x07;  /*NUMBER(5),        */

    savetmp->str_tax.srjlh       = SWAP2(s_safe->c54);  /*NUMBER(5),        */

    savetmp->str_tax.jlqfxhjjl   = SWAP2(s_safe->c56);  /*NUMBER(5),        */

    savetmp->str_tax.xs          = SWAP2(s_safe->c58);  /*NUMBER(5),        */

    savetmp->str_tax.zdsc        = s_safe->c60;  /*NUMBER(3),        */

    savetmp->str_tax.dqxlhbz     = s_safe->c61;  /*NUMBER(3),        */

    savetmp->str_tax.dqxlh       = SWAP2(s_safe->c62);  /*NUMBER(5),        */

    savetmp->str_tax.qfxlhbz     = s_safe->c64;  /*NUMBER(3),        */

    savetmp->str_tax.qfxlh       = SWAP2(s_safe->c65);  /*NUMBER(5),        */



    savetmp->str_tax.dq_tmis     = (((int)s_safe->c67[2]<<16)&0x00ff0000)

            +(((int)s_safe->c67[1]<<8)&0x0000ff00)

            +(((int)s_safe->c67[0]<<0)&0x000000ff);  /*NUMBER(8),        */

    savetmp->str_tax.qf_time     = (((int)s_safe->c70[2]<<16)&0x00ff0000)

            +(((int)s_safe->c70[1]<<8)&0x0000ff00)

            +(((int)s_safe->c70[0]<<0)&0x000000ff);  /*NUMBER(8),        */

    savetmp->str_tax.qfczjlh     = s_safe->c73;  /*NUMBER(3),        */

    savetmp->str_tax.qfchzh      = SWAP2(s_safe->c74);  /*NUMBER(5),        */

    savetmp->str_tax.jkzt        = s_safe->c76;  /*NUMBER(3),        */

    savetmp->str_tax.ljwy        = SWAP2(s_safe->c77);  /*NUMBER(5),        */

    savetmp->str_tax.bfqzx       = s_safe->c79;  /*NUMBER(3),        */

    savetmp->str_tax.bfqcx       = s_safe->c80;  /*NUMBER(3),        */

    savetmp->str_tax.qffqzx      = s_safe->c81;  /*NUMBER(3),        */

    savetmp->str_tax.qffqcx      = s_safe->c82;  /*NUMBER(3),        */



    ptraininfo = (traininfo_stu*)c_map_at(&traininfo_map,&key);

    if((savetmp->str_tax.czh != 0) || (savetmp->str_tax.sjjlh != 0))

    {

        //printf("parse_locosafe_v20\n");

        if(ptraininfo != NULL)

        {

        if ((savetmp->str_tax.czh != ptraininfo->STATIONNO)

                ||(savetmp->str_tax.sjjlh != ptraininfo->CROSSROADNO) )/*交路号或者车站号改变时*/

        {

            /* add by guo 20160331*/

            //printf("parse_locosafe_v20\n");

            temp_b_id = atoi(ptraininfo->B_ID);

            tmpkey = ((temp_b_id & 0x000000ff) << 24) +

                    ((ptraininfo->CROSSROADNO & 0x000000ff) <<16) + ptraininfo->STATIONNO;

            tmpplineinfo = c_map_at(&lineinfo_map,&tmpkey);/*前一站的线路信息*/



            /* add by guo 20160818*/

            //if(NULL == tmpplineinfo)

            if(0)

            {

                //printf("parse_locosafe_v20 typeid = %s,locono = %s,temp_b_id = %d,CROSSROADNO = %d,STATIONNO = %d\n",ptraininfo->T_TYPE_ID,ptraininfo->LOCO_NO,temp_b_id,ptraininfo->CROSSROADNO,ptraininfo->STATIONNO);

                sprintf(tmp, "parse_locosafe_v20 typeid = %s,locono = %s,temp_b_id = %d,CROSSROADNO = %d,STATIONNO = %d\n",ptraininfo->T_TYPE_ID,ptraininfo->LOCO_NO,temp_b_id,ptraininfo->CROSSROADNO,ptraininfo->STATIONNO);

                cclog('e', tmp);

            }



            ptraininfo->STATIONNO   = savetmp->str_tax.czh;

            ptraininfo->CROSSROADNO = savetmp->str_tax.sjjlh;



            key  = ((temp_b_id &0x000000ff) << 24) +

                    ((ptraininfo->CROSSROADNO & 0x000000ff) << 16) + ptraininfo->STATIONNO;

            plineinfo = c_map_at(&lineinfo_map,&key);/*当前站的线路信息*/

            if(NULL != plineinfo)

            {

                // printf("parse_locosafe_v20 1111111\n");

                ptraininfo->TIMSSTATIONNO = plineinfo->TMIS_STATION_NO;

                ptraininfo->LINENO = plineinfo->TRAIN_LINE_NO;

                memcpy(ptraininfo->STATIONNAME,plineinfo->TRAIN_STATION_NAME,33);

                memcpy(ptraininfo->TIMSSTATIONNAME,plineinfo->TMIS_STATION_NAME,33);

                memcpy(ptraininfo->LINENAME,plineinfo->TRAIN_LINE_NAME,33);

                memcpy(ptraininfo->CUR_B_ID,plineinfo->STATION_B_ID,5);



                /*add by guo 20160825 insert to itf_train_boundary_track*/

                if(1 == plineinfo->ISBOUNDARY)

                {

                    //printf("111111112\n");

                    /*如果是分界口，插入数据库表itf_train_boundary_track*/

                    if(-1 != getGuid(itf_train_boundary_track.idx))

                    {

                        memcpy(itf_train_boundary_track.t_type_id, ptraininfo->T_TYPE_ID, 5);

                        memcpy(itf_train_boundary_track.loco_no, ptraininfo->LOCO_NO, 5);

                        memcpy(itf_train_boundary_track.jzsj, savetmp->rksj, 21);

                        itf_train_boundary_track.tmis_no = plineinfo->TMIS_STATION_NO;

                        memcpy(itf_train_boundary_track.tmis_trainname,plineinfo->TMIS_STATION_NAME,33);

                        itf_train_boundary_track.jd = savetmp->str_datahead.JD;

                        itf_train_boundary_track.wd = savetmp->str_datahead.WD;

                        insert_ITF_TRAIN_BOUNDARY_TRACK(itf_train_boundary_track);

                    }

                }



                /*判断是否过局界 20160818*/

                if((NULL != tmpplineinfo)

                        &&(1 == tmpplineinfo->ISBOUNDARY || 1 == plineinfo->ISBOUNDARY)

                        &&(-1 != getGuid(pboundaryinfo->idx))

                        &&(0 != memcmp(tmpplineinfo->STATION_B_ID, plineinfo->STATION_B_ID, 5)))

                {

                    /*add by guo 20160406*/

                    if (savetmp->str_tax.sjh != ptraininfo->DRIVERNO)

                    {

                        key = savetmp->str_tax.sjh ;

                        pperson = c_map_at(&person_map,&key);

                        if(pperson != NULL)

                        {

                            memcpy(pboundary_historyinfo->next_drivername, pperson->NAME, 33);

                            memcpy(pboundary_curinfo->drivername, pperson->NAME, 33);

                            memcpy(pboundaryinfo->drivername, pperson->NAME, 33);

                        } else

                        {

                            memset(pboundary_historyinfo->next_drivername, 0, 33);

                            memset(pboundary_curinfo->drivername, 0, 33);

                            memset(pboundaryinfo->drivername, 0, 33);

                        }

                        /*更新司机名，司机配属局，司机联系方式*/

                    }

                    else

                    {

                        memcpy(pboundary_historyinfo->next_drivername, ptraininfo->DRIVERNAME, 33);

                        memcpy(pboundary_curinfo->drivername, ptraininfo->DRIVERNAME, 33);

                        memcpy(pboundaryinfo->drivername, ptraininfo->DRIVERNAME, 33);

                    }



                    memcpy(pboundaryinfo->t_type_id, ptraininfo->T_TYPE_ID, 5);

                    memcpy(pboundaryinfo->loco_no, ptraininfo->LOCO_NO, 5);

                    memcpy(pboundaryinfo->rksj, savetmp->rksj, 21);

                    memcpy(pboundaryinfo->recordtime, savetmp->btsj, 21);

                    pboundaryinfo->speed = savetmp->str_tax.sjsu ;

                    memcpy(pboundaryinfo->cc, savetmp->str_tax.cc, 21);

                    pboundaryinfo->driverno = savetmp->str_tax.sjh;

                    pboundaryinfo->tmisno= plineinfo->TMIS_STATION_NO;

                    memcpy(pboundaryinfo->tmisname, plineinfo->TMIS_STATION_NAME, 33);



                    //pboundaryinfo->direction = 1;



                    memcpy(pboundary_historyinfo->t_type_id, ptraininfo->T_TYPE_ID, 5);

                    memcpy(pboundary_historyinfo->loco_no, ptraininfo->LOCO_NO, 5);

                    memcpy(pboundary_historyinfo->next_cc, savetmp->str_tax.cc, 21);

                    pboundary_historyinfo->next_driverno = savetmp->str_tax.sjh;

                    memcpy(pboundary_historyinfo->next_boundary_time, savetmp->str_tax.xtsj, 21);

                    pboundary_historyinfo->next_sjsd = (int)savetmp->str_tax.sjsu;

                    memcpy(pboundary_historyinfo->rksj, savetmp->rksj, 21);



                    memcpy(pboundary_curinfo->t_type_id, ptraininfo->T_TYPE_ID, 5);

                    memcpy(pboundary_curinfo->loco_no, ptraininfo->LOCO_NO, 5);

                    memcpy(pboundary_curinfo->cc, ptraininfo->CC, 21);

                    pboundary_curinfo->driverno = savetmp->str_tax.sjh;

                    memcpy(pboundary_curinfo->pass_boundary_time, savetmp->str_tax.xtsj, 21);

                    memcpy(pboundary_curinfo->update_time, savetmp->rksj, 21);

                    pboundary_curinfo->sjsd = (int)savetmp->str_tax.sjsu;



                    if(1 == tmpplineinfo->ISBOUNDARY)

                    {

                        /* modify by cuiy 20160918*/

                         memcpy(pboundary_historyinfo->duration_bid, tmpplineinfo->STATION_B_ID, 5);

                         memcpy(pboundary_historyinfo->next_bid, plineinfo->STATION_B_ID, 5);

                         memcpy(pboundary_curinfo->last_bid, tmpplineinfo->STATION_B_ID, 5);

                         memcpy(pboundary_curinfo->next_bid, plineinfo->STATION_B_ID, 5);

                         pboundaryinfo->direction = 0;



                         /*当前局界*/

                         pboundary_curinfo->tmis_station_no = tmpplineinfo->TMIS_STATION_NO;

                         memcpy(pboundary_curinfo->tmis_station_name, tmpplineinfo->TMIS_STATION_NAME, 33);



                         /*历史局界 add by guo 20160608*/

                         pboundary_historyinfo->next_tmis_no = tmpplineinfo->TMIS_STATION_NO;

                         memcpy(pboundary_historyinfo->next_tmis_name, tmpplineinfo->TMIS_STATION_NAME, 33);

                    }

                    if(1 == plineinfo->ISBOUNDARY)

                    {

                        memcpy(pboundary_historyinfo->duration_bid, tmpplineinfo->STATION_B_ID, 5);

                        memcpy(pboundary_historyinfo->next_bid, plineinfo->STATION_B_ID, 5);

                        memcpy(pboundary_curinfo->last_bid, tmpplineinfo->STATION_B_ID, 5);

                        memcpy(pboundary_curinfo->next_bid, plineinfo->STATION_B_ID, 5);

                        pboundaryinfo->direction = 1;



                        /*当前局界*/

                        pboundary_curinfo->tmis_station_no = plineinfo->TMIS_STATION_NO;

                        memcpy(pboundary_curinfo->tmis_station_name, plineinfo->TMIS_STATION_NAME, 33);



                        /*历史局界 add by guo 20160608*/

                        pboundary_historyinfo->next_tmis_no = plineinfo->TMIS_STATION_NO;

                        memcpy(pboundary_historyinfo->next_tmis_name, plineinfo->TMIS_STATION_NAME, 33);

                    }







//                        /*当前局界*/

//                        pboundary_curinfo->tmis_station_no = plineinfo->TMIS_STATION_NO;

//                        memcpy(pboundary_curinfo->tmis_station_name, plineinfo->TMIS_STATION_NAME, 33);



//                        /*历史局界 add by guo 20160608*/

//                        pboundary_historyinfo->next_tmis_no = plineinfo->TMIS_STATION_NO;

//                        memcpy(pboundary_historyinfo->next_tmis_name, plineinfo->TMIS_STATION_NAME, 33);



                    chex = atoi(ptraininfo->T_TYPE_ID);

                    cheh = atoi(ptraininfo->LOCO_NO);

                    boundary_key = ((chex<<16)&0xc0ff0000) + (cheh&0x3FFF);/*changed by guo 20160831*/

                    //boundary_key = ((chex<<16)&0xffff0000) + cheh;

                    pboundary_curinfo_temp = c_map_at(&boundary_map,&boundary_key);

                    if(-1 != getGuid(pboundary_historyinfo->idx))

                    {

                        /*局界历史*/

                        if(pboundary_curinfo_temp != NULL)

                        {

                            memcpy(pboundary_historyinfo->last_boundary_time, pboundary_curinfo_temp->pass_boundary_time, 21);

                            pboundary_historyinfo->last_sjsd = pboundary_curinfo_temp->sjsd;



                            /* add by cuiy 20160918*/

                            memcpy(pboundary_historyinfo->last_bid,  pboundary_curinfo->last_bid, 5);



                            //memcpy(pboundary_historyinfo->last_bid, pboundary_curinfo_temp->next_bid, 5);

                            pboundary_historyinfo->last_tmis_no = pboundary_curinfo_temp->tmis_station_no;

                            memcpy(pboundary_historyinfo->last_tmis_name, pboundary_curinfo_temp->tmis_station_name, 33);

                            memcpy(pboundary_historyinfo->last_cc, pboundary_curinfo_temp->cc, 21);

                            pboundary_historyinfo->last_driverno = pboundary_curinfo_temp->driverno;

                            memcpy(pboundary_historyinfo->last_drivername, pboundary_curinfo_temp->drivername, 33);

                        }

                        else

                        {

                            memset(pboundary_historyinfo->last_boundary_time, 0, 21);

                            pboundary_historyinfo->last_sjsd = 0;

                            memset(pboundary_historyinfo->last_bid, 0, 5);

                            pboundary_historyinfo->last_tmis_no = 0;

                            memset(pboundary_historyinfo->last_tmis_name, 0, 33);

                            memset(pboundary_historyinfo->last_cc, 0, 21);

                            pboundary_historyinfo->last_driverno = 0;

                            memset(pboundary_historyinfo->last_drivername, 0, 33);

                        }



                        insert_ap_train_boundary_history(pboundary_historyinfo);

                    }



                    /*add by guo 20160406*/

                    //判断是插入还是更新

                    if(pboundary_curinfo_temp != NULL)

                    {

                       memcpy(pboundary_curinfo_temp->cc,pboundary_curinfo->cc,21);

                       memcpy(pboundary_curinfo_temp->drivername,pboundary_curinfo->drivername,33);

                       memcpy(pboundary_curinfo_temp->pass_boundary_time,pboundary_curinfo->pass_boundary_time,21);

                       memcpy(pboundary_curinfo_temp->update_time,pboundary_curinfo->update_time,21);

                       memcpy(pboundary_curinfo_temp->last_bid,pboundary_curinfo->last_bid,5);

                       memcpy(pboundary_curinfo_temp->next_bid,pboundary_curinfo->next_bid,5);

                       memcpy(pboundary_curinfo_temp->tmis_station_name,pboundary_curinfo->tmis_station_name,33);



                       pboundary_curinfo_temp->driverno = pboundary_curinfo_temp->driverno;

                       pboundary_curinfo_temp->sjsd     = pboundary_curinfo_temp->sjsd;

                       pboundary_curinfo_temp->tmis_station_no = pboundary_curinfo_temp->tmis_station_no;

                       update_Train_boundary_Status(pboundary_curinfo);

                    }

                    else

                    {

                       if(-1 != getGuid(pboundary_curinfo->idx))

                       {

                          insert_Train_boundary_Status(pboundary_curinfo);

                          creatBoundaryNode(&boundary_map,boundary_key,pboundary_curinfo);

                       }

                    }

                    insert_ap_train_laststatuslog(pboundaryinfo);//插入数据到数据库表

                }



            }

            else

            {

                //sprintf(tmp, "v20 plineinfo=null,typeid = %s,locono = %s,temp_b_id = %d,CROSSROADNO = %d,STATIONNO = %d\n",ptraininfo->T_TYPE_ID,ptraininfo->LOCO_NO,temp_b_id,ptraininfo->CROSSROADNO,ptraininfo->STATIONNO);

                //cclog('e', tmp);

            }

        }



        if (savetmp->str_tax.sjh != ptraininfo->DRIVERNO)

        {

            ptraininfo->DRIVERNO = savetmp->str_tax.sjh;

            key = savetmp->str_tax.sjh ;

            pperson = c_map_at(&person_map,&key);

            if(pperson != NULL)

            {

                memcpy(ptraininfo->DRIVERBID,pperson->B_ID,5);

                memcpy(ptraininfo->DRIVERBSNAME,pperson->BSNAME,11);

                memcpy(ptraininfo->DRIVERBFNAME,pperson->BFNAME,33);

                memcpy(ptraininfo->DRIVERDID,pperson->D_ID,5);

                memcpy(ptraininfo->DRIVERDSNAME,pperson->DSNAME,11);

                memcpy(ptraininfo->DRIVERDFNAME,pperson->DFNAME,33);

                memcpy(ptraininfo->DRIVERNAME,pperson->NAME,33);

                memcpy(ptraininfo->DRIVERTEL,pperson->MOBILENUMBER,33);

            } else

            {

                memset(ptraininfo->DRIVERBID,0,5);

                memset(ptraininfo->DRIVERBSNAME,0,11);

                memset(ptraininfo->DRIVERBFNAME,0,33);

                memset(ptraininfo->DRIVERDID,0,5);

                memset(ptraininfo->DRIVERDSNAME,0,11);

                memset(ptraininfo->DRIVERDFNAME,0,33);

                memset(ptraininfo->DRIVERNAME,0,33);

                memset(ptraininfo->DRIVERTEL,0,33);

            }

            /*更新司机名，司机配属局，司机联系方式*/

        }



        if (savetmp->str_tax.fsjh != ptraininfo->FDRIVERNO)

        {

            ptraininfo->FDRIVERNO = savetmp->str_tax.fsjh;

            key = savetmp->str_tax.fsjh ;

            pperson = c_map_at(&person_map,&key);

            if(pperson != NULL)

            {

                memcpy(ptraininfo->FDRIVERNAME,pperson->NAME,33);

                memcpy(ptraininfo->FDRIVERTEL,pperson->MOBILENUMBER,33);

            } else

            {

                memset(ptraininfo->FDRIVERNAME,0,33);

                memset(ptraininfo->FDRIVERTEL,0,33);

            }



            /*更新司机名，司机配属局，司机联系方式*/

        }



        memcpy( ptraininfo->CC,savetmp->str_tax.cc,21);

        ptraininfo->KHBB = SWAP2(s_safe->c33) &0x03;

        ptraininfo->ZZ   = savetmp->str_tax.zz;

        ptraininfo->JC   = savetmp->str_tax.jc;

        ptraininfo->GLB  = savetmp->str_tax.glb;

        ptraininfo->LS   = savetmp->str_tax.ls;

        ptraininfo->PROVERLKJ = s_safe->s_tou.c4;;

        ptraininfo->LKJSD = savetmp->str_tax.sjsu;

        memcpy(savetmp->str_tax.stationname,ptraininfo->STATIONNAME,33);

        memcpy(savetmp->str_tax.drivername,ptraininfo->DRIVERNAME,33);

        memcpy(savetmp->str_tax.fdrivername,ptraininfo->FDRIVERNAME,33);

        }

    }

    savetmp->flag_tax = 1;

}



/*解析V2.1版本 机车安全信息*/

void parse_locosafe_v21(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    char tempCC[21];

    char tmp[256] = {0x00};

    ptraininfo_stu ptraininfo = NULL;



    int key;

    int yy=0,mm=0,dd=0,hh=0,mi=0,ss=0;

    struct STR_LKJ_V21 *s_safe = (struct STR_LKJ_V21 *)(data+offset);

    pperson_stu pperson = NULL;

    plineinfo_stu plineinfo = NULL;

    int temp_b_id;



    int tmpkey;

    int boundary_key,chex,cheh;

    plineinfo_stu tmpplineinfo = NULL;

    pboundary_info pboundaryinfo;

    boundary_info boundaryinfo;

    boundary_cur boundary_curinfo;

    boundary_history boundary_historyinfo;



    pboundary_cur pboundary_curinfo;

    pboundary_cur pboundary_curinfo_temp;

    pboundary_history pboundary_historyinfo;



    pboundaryinfo = &boundaryinfo;

    pboundary_curinfo = &boundary_curinfo;

    pboundary_historyinfo = &boundary_historyinfo;



    struct ITF_TRAIN_BOUNDARY_TRACK itf_train_boundary_track;

    struct PARSE_ERROR_LOG parse_error;



    key = savetmp->key;



    savetmp->tax_ver = s_safe->s_tou.c4;

    savetmp->str_tax.lkj_type = s_safe->c5;

    //printf("TAX信息V21版本值为：%d\n",s_safe->c5);



    jktoDate(savetmp->str_tax.xtsj,SWAP4(s_safe->c6));

    memset(tempCC,0,21);

    sprintf(tempCC,"%c%c%c%c%d",s_safe->c10[0],s_safe->c10[1],s_safe->c10[2],s_safe->c10[3],SWAP4(s_safe->c14));

    Trim(savetmp->str_tax.cc,tempCC);

    savetmp->str_tax.czh		  = SWAP2(s_safe->c18);

    savetmp->str_tax.sjh		  = SWAP4(s_safe->c20);

    savetmp->str_tax.fsjh		  = SWAP4(s_safe->c24);

    savetmp->str_tax.sjjlh		  = SWAP2(s_safe->c32)	;

    savetmp->str_tax.kh		  = s_safe->c34 &0x01        ;  /*NUMBER(1),        */

    savetmp->str_tax.bb		  = (s_safe->c34>>1)&0x01        ;  /*NUMBER(1),        */

    savetmp->str_tax.sjsu        = SWAP2(s_safe->c35)&0x03ff;  /*NUMBER(5,2),      */

    if(savetmp->str_tax.sjsu>250)

    {

        /*add by guo 20160826*/

        sprintf(parse_error.t_type_id,"%03d",savetmp->t_type_id);

        sprintf(parse_error.loco_no,"%04d",savetmp->loco_no);

        memcpy(parse_error.btsj,savetmp->btsj,strlen(savetmp->btsj));



        parse_error.datatype = 1;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

        parse_error.efield = 2;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

        sprintf(parse_error.ereason, "tax解析v21:速度超过250,sjsu = %f",savetmp->str_tax.sjsu);

        getDateTime(&yy, &mm, &dd, &hh, &mi, &ss);

        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy, mm, dd, hh, mi, ss);

        insert_AP_PARSE_ERROR_LOG(parse_error);

    }

    savetmp->str_tax.jcxh        = s_safe->c37;  /*NUMBER(3),        */

    savetmp->str_tax.gk          = s_safe->c38;  /*NUMBER(3),        */

    savetmp->str_tax.xhjbh       = SWAP2(s_safe->c39);  /*NUMBER(5),        */

    savetmp->str_tax.xhjlb       = s_safe->c41;  /*NUMBER(3),        */

    savetmp->str_tax.glb         = SWAP4(s_safe->c42) & 0x003FFFFF;  /*NUMBER(10),       */

    savetmp->str_tax.zz          = SWAP2(s_safe->c46);  /*NUMBER(5),        */

    savetmp->str_tax.jc          = SWAP2(s_safe->c48)*0.1f;  /*NUMBER(6,2),      */

    savetmp->str_tax.ls          = SWAP2(s_safe->c50);  /*NUMBER(5),        */

    savetmp->str_tax.lcgyl       = SWAP2(s_safe->c52)&0x03FF;  /*NUMBER(5),        */

    savetmp->str_tax.zzzt        = s_safe->c54 &0x07;  /*NUMBER(5),        */

    savetmp->str_tax.srjlh       = SWAP2(s_safe->c55);  /*NUMBER(5),        */

    savetmp->str_tax.jlqfxhjjl   = SWAP2(s_safe->c57);  /*NUMBER(5),        */

    savetmp->str_tax.xs          = SWAP2(s_safe->c59);  /*NUMBER(5),        */

    savetmp->str_tax.zdsc        = s_safe->c61;  /*NUMBER(3),        */

    savetmp->str_tax.dqxlhbz     = s_safe->c62;  /*NUMBER(3),        */

    savetmp->str_tax.dqxlh       = SWAP2(s_safe->c63);  /*NUMBER(5),        */

    savetmp->str_tax.qfxlhbz     = s_safe->c65;  /*NUMBER(3),        */

    savetmp->str_tax.qfxlh       = SWAP2(s_safe->c66);  /*NUMBER(5),        */



    savetmp->str_tax.dq_tmis     = (((int)s_safe->c68[2]<<16)&0x00ff0000)

            +(((int)s_safe->c68[1]<<8)&0x0000ff00)

            +(((int)s_safe->c68[0]<<0)&0x000000ff);  /*NUMBER(8),        */

    savetmp->str_tax.qf_time     = (((int)s_safe->c71[2]<<16)&0x00ff0000)

            +(((int)s_safe->c71[1]<<8)&0x0000ff00)

            +(((int)s_safe->c71[0]<<0)&0x000000ff);  /*NUMBER(8),        */

    savetmp->str_tax.qfczjlh     = s_safe->c74;  /*NUMBER(3),        */

    savetmp->str_tax.qfchzh      = SWAP2(s_safe->c75);  /*NUMBER(5),        */

    savetmp->str_tax.jkzt        = s_safe->c77;  /*NUMBER(3),        */

    savetmp->str_tax.ljwy        = SWAP2(s_safe->c78);  /*NUMBER(5),        */

    savetmp->str_tax.bfqzx       = s_safe->c80;  /*NUMBER(3),        */

    savetmp->str_tax.bfqcx       = s_safe->c81;  /*NUMBER(3),        */

    savetmp->str_tax.qffqzx      = s_safe->c82;  /*NUMBER(3),        */

    savetmp->str_tax.qffqcx      = s_safe->c83;  /*NUMBER(3),        */



    ptraininfo = (traininfo_stu*)c_map_at(&traininfo_map,&key);

    if((savetmp->str_tax.czh != 0) || (savetmp->str_tax.sjjlh != 0))

    {

        if(ptraininfo != NULL)

    {

        if ((savetmp->str_tax.czh != ptraininfo->STATIONNO)

                ||(savetmp->str_tax.sjjlh != ptraininfo->CROSSROADNO) )/*交路号或者车站号改变时*/

        {

            /* add by guo 20160331*/

            temp_b_id = atoi(ptraininfo->B_ID);

            tmpkey = ((temp_b_id & 0x000000ff) << 24) +

                    ((ptraininfo->CROSSROADNO & 0x000000ff) <<16) + ptraininfo->STATIONNO;

            tmpplineinfo = c_map_at(&lineinfo_map,&tmpkey);/*前一站的线路信息*/



            /* add by guo 20160818*/

            //if(NULL == tmpplineinfo)

            if(0)

            {

                //printf("parse_locosafe_v21 typeid = %s,locono = %s,temp_b_id = %d,CROSSROADNO = %d,STATIONNO = %d\n",ptraininfo->T_TYPE_ID,ptraininfo->LOCO_NO,temp_b_id,ptraininfo->CROSSROADNO,ptraininfo->STATIONNO);

                sprintf(tmp, "parse_locosafe_v21 typeid = %s,locono = %s,temp_b_id = %d,CROSSROADNO = %d,STATIONNO = %d\n",ptraininfo->T_TYPE_ID,ptraininfo->LOCO_NO,temp_b_id,ptraininfo->CROSSROADNO,ptraininfo->STATIONNO);

                cclog('e', tmp);

            }



            ptraininfo->STATIONNO   = savetmp->str_tax.czh;

            ptraininfo->CROSSROADNO = savetmp->str_tax.sjjlh;



            key  = ((temp_b_id &0x000000ff) << 24) +

                    ((ptraininfo->CROSSROADNO & 0x000000ff) << 16) + ptraininfo->STATIONNO;

            plineinfo = c_map_at(&lineinfo_map,&key);/*当前站的线路信息*/

            if(NULL != plineinfo)

            {

                ptraininfo->TIMSSTATIONNO = plineinfo->TMIS_STATION_NO;

                ptraininfo->LINENO = plineinfo->TRAIN_LINE_NO;

                memcpy(ptraininfo->STATIONNAME,plineinfo->TRAIN_STATION_NAME,33);

                memcpy(ptraininfo->TIMSSTATIONNAME,plineinfo->TMIS_STATION_NAME,33);

                memcpy(ptraininfo->LINENAME,plineinfo->TRAIN_LINE_NAME,33);

                memcpy(ptraininfo->CUR_B_ID,plineinfo->STATION_B_ID,5);



                /*add by guo 20160825 insert to itf_train_boundary_track*/

                if(1 == plineinfo->ISBOUNDARY)

                {

                    //printf("11111113\n");

                    /*如果是分界口，插入数据库表itf_train_boundary_track*/

                    if(-1 != getGuid(itf_train_boundary_track.idx))

                    {

                        memcpy(itf_train_boundary_track.t_type_id, ptraininfo->T_TYPE_ID, 5);

                        memcpy(itf_train_boundary_track.loco_no, ptraininfo->LOCO_NO, 5);

                        memcpy(itf_train_boundary_track.jzsj, savetmp->rksj, 21);

                        itf_train_boundary_track.tmis_no = plineinfo->TMIS_STATION_NO;

                        memcpy(itf_train_boundary_track.tmis_trainname,plineinfo->TMIS_STATION_NAME,33);

                        itf_train_boundary_track.jd = savetmp->str_datahead.JD;

                        itf_train_boundary_track.wd = savetmp->str_datahead.WD;

                        insert_ITF_TRAIN_BOUNDARY_TRACK(itf_train_boundary_track);

                    }

                }



                /*判断是否过局界 20160818*/

                /*判断是否过局界 20160818*/

                if((NULL != tmpplineinfo)

                        &&(1 == tmpplineinfo->ISBOUNDARY || 1 == plineinfo->ISBOUNDARY)

                        &&(-1 != getGuid(pboundaryinfo->idx))

                        &&(0 != memcmp(tmpplineinfo->STATION_B_ID, plineinfo->STATION_B_ID, 5)))

                {

                    /*add by guo 20160406*/

                    if (savetmp->str_tax.sjh != ptraininfo->DRIVERNO)

                    {

                        key = savetmp->str_tax.sjh ;

                        pperson = c_map_at(&person_map,&key);

                        if(pperson != NULL)

                        {

                            memcpy(pboundary_historyinfo->next_drivername, pperson->NAME, 33);

                            memcpy(pboundary_curinfo->drivername, pperson->NAME, 33);

                            memcpy(pboundaryinfo->drivername, pperson->NAME, 33);

                        } else

                        {

                            memset(pboundary_historyinfo->next_drivername, 0, 33);

                            memset(pboundary_curinfo->drivername, 0, 33);

                            memset(pboundaryinfo->drivername, 0, 33);

                        }

                        /*更新司机名，司机配属局，司机联系方式*/

                    }

                    else

                    {

                        memcpy(pboundary_historyinfo->next_drivername, ptraininfo->DRIVERNAME, 33);

                        memcpy(pboundary_curinfo->drivername, ptraininfo->DRIVERNAME, 33);

                        memcpy(pboundaryinfo->drivername, ptraininfo->DRIVERNAME, 33);

                    }



                    memcpy(pboundaryinfo->t_type_id, ptraininfo->T_TYPE_ID, 5);

                    memcpy(pboundaryinfo->loco_no, ptraininfo->LOCO_NO, 5);

                    memcpy(pboundaryinfo->rksj, savetmp->rksj, 21);

                    memcpy(pboundaryinfo->recordtime, savetmp->btsj, 21);

                    pboundaryinfo->speed = savetmp->str_tax.sjsu ;

                    memcpy(pboundaryinfo->cc, savetmp->str_tax.cc, 21);

                    pboundaryinfo->driverno = savetmp->str_tax.sjh;

                    pboundaryinfo->tmisno= plineinfo->TMIS_STATION_NO;

                    memcpy(pboundaryinfo->tmisname, plineinfo->TMIS_STATION_NAME, 33);



                    //pboundaryinfo->direction = 1;



                    memcpy(pboundary_historyinfo->t_type_id, ptraininfo->T_TYPE_ID, 5);

                    memcpy(pboundary_historyinfo->loco_no, ptraininfo->LOCO_NO, 5);

                    memcpy(pboundary_historyinfo->next_cc, savetmp->str_tax.cc, 21);

                    pboundary_historyinfo->next_driverno = savetmp->str_tax.sjh;

                    memcpy(pboundary_historyinfo->next_boundary_time, savetmp->str_tax.xtsj, 21);

                    pboundary_historyinfo->next_sjsd = (int)savetmp->str_tax.sjsu;

                    memcpy(pboundary_historyinfo->rksj, savetmp->rksj, 21);



                    memcpy(pboundary_curinfo->t_type_id, ptraininfo->T_TYPE_ID, 5);

                    memcpy(pboundary_curinfo->loco_no, ptraininfo->LOCO_NO, 5);

                    memcpy(pboundary_curinfo->cc, ptraininfo->CC, 21);

                    pboundary_curinfo->driverno = savetmp->str_tax.sjh;

                    memcpy(pboundary_curinfo->pass_boundary_time, savetmp->str_tax.xtsj, 21);

                    memcpy(pboundary_curinfo->update_time, savetmp->rksj, 21);

                    pboundary_curinfo->sjsd = (int)savetmp->str_tax.sjsu;



                    if(1 == tmpplineinfo->ISBOUNDARY)

                    {

                        /* modify by cuiy 20160918*/

                         memcpy(pboundary_historyinfo->duration_bid, tmpplineinfo->STATION_B_ID, 5);

                         memcpy(pboundary_historyinfo->next_bid, plineinfo->STATION_B_ID, 5);

                         memcpy(pboundary_curinfo->last_bid, tmpplineinfo->STATION_B_ID, 5);

                         memcpy(pboundary_curinfo->next_bid, plineinfo->STATION_B_ID, 5);

                         pboundaryinfo->direction = 0;



                         /*当前局界*/

                         pboundary_curinfo->tmis_station_no = tmpplineinfo->TMIS_STATION_NO;

                         memcpy(pboundary_curinfo->tmis_station_name, tmpplineinfo->TMIS_STATION_NAME, 33);



                         /*历史局界 add by guo 20160608*/

                         pboundary_historyinfo->next_tmis_no = tmpplineinfo->TMIS_STATION_NO;

                         memcpy(pboundary_historyinfo->next_tmis_name, tmpplineinfo->TMIS_STATION_NAME, 33);

                    }

                    if(1 == plineinfo->ISBOUNDARY)

                    {

                        memcpy(pboundary_historyinfo->duration_bid, tmpplineinfo->STATION_B_ID, 5);

                        memcpy(pboundary_historyinfo->next_bid, plineinfo->STATION_B_ID, 5);

                        memcpy(pboundary_curinfo->last_bid, tmpplineinfo->STATION_B_ID, 5);

                        memcpy(pboundary_curinfo->next_bid, plineinfo->STATION_B_ID, 5);

                        pboundaryinfo->direction = 1;



                        /*当前局界*/

                        pboundary_curinfo->tmis_station_no = plineinfo->TMIS_STATION_NO;

                        memcpy(pboundary_curinfo->tmis_station_name, plineinfo->TMIS_STATION_NAME, 33);



                        /*历史局界 add by guo 20160608*/

                        pboundary_historyinfo->next_tmis_no = plineinfo->TMIS_STATION_NO;

                        memcpy(pboundary_historyinfo->next_tmis_name, plineinfo->TMIS_STATION_NAME, 33);

                    }







//                        /*当前局界*/

//                        pboundary_curinfo->tmis_station_no = plineinfo->TMIS_STATION_NO;

//                        memcpy(pboundary_curinfo->tmis_station_name, plineinfo->TMIS_STATION_NAME, 33);



//                        /*历史局界 add by guo 20160608*/

//                        pboundary_historyinfo->next_tmis_no = plineinfo->TMIS_STATION_NO;

//                        memcpy(pboundary_historyinfo->next_tmis_name, plineinfo->TMIS_STATION_NAME, 33);



                    chex = atoi(ptraininfo->T_TYPE_ID);

                    cheh = atoi(ptraininfo->LOCO_NO);

                    boundary_key = ((chex<<16)&0xc0ff0000) + (cheh&0x3FFF);/*changed by guo 20160831*/

                    //boundary_key = ((chex<<16)&0xffff0000) + cheh;

                    pboundary_curinfo_temp = c_map_at(&boundary_map,&boundary_key);

                    if(-1 != getGuid(pboundary_historyinfo->idx))

                    {

                        /*局界历史*/

                        if(pboundary_curinfo_temp != NULL)

                        {

                            memcpy(pboundary_historyinfo->last_boundary_time, pboundary_curinfo_temp->pass_boundary_time, 21);

                            pboundary_historyinfo->last_sjsd = pboundary_curinfo_temp->sjsd;



                            /* add by cuiy 20160918*/

                            memcpy(pboundary_historyinfo->last_bid,  pboundary_curinfo->last_bid, 5);



                            //memcpy(pboundary_historyinfo->last_bid, pboundary_curinfo_temp->next_bid, 5);

                            pboundary_historyinfo->last_tmis_no = pboundary_curinfo_temp->tmis_station_no;

                            memcpy(pboundary_historyinfo->last_tmis_name, pboundary_curinfo_temp->tmis_station_name, 33);

                            memcpy(pboundary_historyinfo->last_cc, pboundary_curinfo_temp->cc, 21);

                            pboundary_historyinfo->last_driverno = pboundary_curinfo_temp->driverno;

                            memcpy(pboundary_historyinfo->last_drivername, pboundary_curinfo_temp->drivername, 33);

                        }

                        else

                        {

                            memset(pboundary_historyinfo->last_boundary_time, 0, 21);

                            pboundary_historyinfo->last_sjsd = 0;

                            memset(pboundary_historyinfo->last_bid, 0, 5);

                            pboundary_historyinfo->last_tmis_no = 0;

                            memset(pboundary_historyinfo->last_tmis_name, 0, 33);

                            memset(pboundary_historyinfo->last_cc, 0, 21);

                            pboundary_historyinfo->last_driverno = 0;

                            memset(pboundary_historyinfo->last_drivername, 0, 33);

                        }



                        insert_ap_train_boundary_history(pboundary_historyinfo);

                    }



                    /*add by guo 20160406*/

                    //判断是插入还是更新

                    if(pboundary_curinfo_temp != NULL)

                    {

                       memcpy(pboundary_curinfo_temp->cc,pboundary_curinfo->cc,21);

                       memcpy(pboundary_curinfo_temp->drivername,pboundary_curinfo->drivername,33);

                       memcpy(pboundary_curinfo_temp->pass_boundary_time,pboundary_curinfo->pass_boundary_time,21);

                       memcpy(pboundary_curinfo_temp->update_time,pboundary_curinfo->update_time,21);

                       memcpy(pboundary_curinfo_temp->last_bid,pboundary_curinfo->last_bid,5);

                       memcpy(pboundary_curinfo_temp->next_bid,pboundary_curinfo->next_bid,5);

                       memcpy(pboundary_curinfo_temp->tmis_station_name,pboundary_curinfo->tmis_station_name,33);



                       pboundary_curinfo_temp->driverno = pboundary_curinfo_temp->driverno;

                       pboundary_curinfo_temp->sjsd     = pboundary_curinfo_temp->sjsd;

                       pboundary_curinfo_temp->tmis_station_no = pboundary_curinfo_temp->tmis_station_no;

                       update_Train_boundary_Status(pboundary_curinfo);

                    }

                    else

                    {

                       if(-1 != getGuid(pboundary_curinfo->idx))

                       {

                          insert_Train_boundary_Status(pboundary_curinfo);

                          creatBoundaryNode(&boundary_map,boundary_key,pboundary_curinfo);

                       }

                    }

                    insert_ap_train_laststatuslog(pboundaryinfo);//插入数据到数据库表

                }



            }

            else

            {

                //sprintf(tmp, "v21 plineinfo=null,typeid = %s,locono = %s,temp_b_id = %d,CROSSROADNO = %d,STATIONNO = %d\n",ptraininfo->T_TYPE_ID,ptraininfo->LOCO_NO,temp_b_id,ptraininfo->CROSSROADNO,ptraininfo->STATIONNO);

                //cclog('e', tmp);

            }

        }



        if (savetmp->str_tax.sjh != ptraininfo->DRIVERNO)

        {

            ptraininfo->DRIVERNO = savetmp->str_tax.sjh;

            key = savetmp->str_tax.sjh ;

            pperson = c_map_at(&person_map,&key);

            if(pperson != NULL)

            {

                memcpy(ptraininfo->DRIVERBID,pperson->B_ID,5);

                memcpy(ptraininfo->DRIVERBSNAME,pperson->BSNAME,11);

                memcpy(ptraininfo->DRIVERBFNAME,pperson->BFNAME,33);

                memcpy(ptraininfo->DRIVERDID,pperson->D_ID,5);

                memcpy(ptraininfo->DRIVERDSNAME,pperson->DSNAME,11);

                memcpy(ptraininfo->DRIVERDFNAME,pperson->DFNAME,33);

                memcpy(ptraininfo->DRIVERNAME,pperson->NAME,33);

                memcpy(ptraininfo->DRIVERTEL,pperson->MOBILENUMBER,33);

            } else

            {

                memset(ptraininfo->DRIVERBID,0,5);

                memset(ptraininfo->DRIVERBSNAME,0,11);

                memset(ptraininfo->DRIVERBFNAME,0,33);

                memset(ptraininfo->DRIVERDID,0,5);

                memset(ptraininfo->DRIVERDSNAME,0,11);

                memset(ptraininfo->DRIVERDFNAME,0,33);

                memset(ptraininfo->DRIVERNAME,0,33);

                memset(ptraininfo->DRIVERTEL,0,33);

            }

            /*更新司机名，司机配属局，司机联系方式*/

        }



        if (savetmp->str_tax.fsjh != ptraininfo->FDRIVERNO)

        {

            ptraininfo->FDRIVERNO = savetmp->str_tax.fsjh;

            key = savetmp->str_tax.fsjh ;

            pperson = c_map_at(&person_map,&key);

            if(pperson != NULL)

            {

                memcpy(ptraininfo->FDRIVERNAME,pperson->NAME,33);

                memcpy(ptraininfo->FDRIVERTEL,pperson->MOBILENUMBER,33);

            } else

            {

                memset(ptraininfo->FDRIVERNAME,0,33);

                memset(ptraininfo->FDRIVERTEL,0,33);

            }



            /*更新司机名，司机配属局，司机联系方式*/

        }



        memcpy(ptraininfo->CC,savetmp->str_tax.cc,21);

        ptraininfo->KHBB = SWAP2(s_safe->c34) &0x03;

        ptraininfo->ZZ   = savetmp->str_tax.zz;

        ptraininfo->JC   = savetmp->str_tax.jc;

        ptraininfo->GLB  = savetmp->str_tax.glb;

        ptraininfo->LS   = savetmp->str_tax.ls;

        ptraininfo->PROVERLKJ = s_safe->s_tou.c4;

        ptraininfo->LKJSD = savetmp->str_tax.sjsu;



        //add by cuiy 20160913

        ptraininfo->LKJ_TYPE = (int)savetmp->str_tax.lkj_type &0x000000ff;



        memcpy(savetmp->str_tax.stationname,ptraininfo->STATIONNAME,33);

        memcpy(savetmp->str_tax.drivername,ptraininfo->DRIVERNAME,33);

        memcpy(savetmp->str_tax.fdrivername,ptraininfo->FDRIVERNAME,33);

    }

    }

    savetmp->flag_tax = 1;

}



/*机车安全信息版本判定函数*/

void parse_locosafe_entry(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    uchar ver = data[offset+4];

    switch(ver)

    {

    case 10:

    case 11:

        parse_locosafe_v10(data,offset, savetmp);

        break;

    case 20:

        parse_locosafe_v20(data,offset, savetmp);

        break;

    case 21:

        parse_locosafe_v21(data,offset, savetmp);

        break;

    default:

        break;

    }

}



/*解析V1.0版本 基本运行信息*/

void parse_basicinfo_V10(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    int yy=0,mm=0,dd=0,hh=0,mi=0,ss=0;

    struct PARSE_ERROR_LOG parse_error;

    struct STR_BASICINFO_V10 *s_basic = (struct STR_BASICINFO_V10 *)(data+offset);

    savetmp->flag_tcms = 1;

    savetmp->tcms_ver = s_basic->s_tou.c4;



    jktoDate(savetmp->tcms_xtsj,SWAP4(s_basic->c11));

    savetmp->str_tcms_v10.str_basic.jb_ss         = s_basic->c5b6 &0x03; /*    NUMBER(1),   */

    savetmp->str_tcms_v10.str_basic.jb_kzhx       = s_basic->c5b5 &0x01; /*    NUMBER(1),   */

    savetmp->str_tcms_v10.str_basic.jb_zdh        = s_basic->c5b4&0x01; /*    NUMBER(1),   */

    savetmp->str_tcms_v10.str_basic.jb_sdg        = s_basic->c5b2&0x03; /*    NUMBER(1),   */

    savetmp->str_tcms_v10.str_basic.jb_czd        = s_basic->c5b0&0x03; /*    NUMBER(1),   */

    savetmp->str_tcms_v10.str_basic.jb_yxfx       = s_basic->c6b4&0x03; /*    NUMBER(1),   */

    savetmp->str_tcms_v10.str_basic.jb_gk         = s_basic->c6b2&0x03; /*    NUMBER(1),   */

    savetmp->str_tcms_v10.str_basic.jb_gfx        = s_basic->c6b0&0x01; /*    NUMBER(1),   */

    savetmp->str_tcms_v10.str_basic.jb_sbjw       = SWAP2(s_basic->c9)*0.1f; /*    NUMBER(6,1), */

    savetmp->str_tcms_v10.str_basic.jb_qyzdl_jh   = ((int16)SWAP2(s_basic->c15)) *0.1f ; /*    NUMBER(6,1), */

    savetmp->str_tcms_v10.str_basic.jb_qyzdl_sj   = ((int16)SWAP2(s_basic->c17)) *0.1f ; /*    NUMBER(6,1), */

    savetmp->str_tcms_v10.str_basic.jb_sdsdz      = SWAP2(s_basic->c19) *0.1f; /*    NUMBER(6,1), */

    savetmp->str_tcms_v10.str_basic.jb_sdsjz      = SWAP2(s_basic->c21) *0.1f; /*    NUMBER(6,1), */

    if(savetmp->str_tcms_v10.str_basic.jb_sdsjz>250)

    {

        /*add by guo 20160826*/

        sprintf(parse_error.t_type_id,"%03d",savetmp->t_type_id);

        sprintf(parse_error.loco_no,"%04d",savetmp->loco_no);

        memcpy(parse_error.btsj,savetmp->btsj,strlen(savetmp->btsj));



        parse_error.datatype = 1;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

        parse_error.efield = 2;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

        sprintf(parse_error.ereason, "tcms_basic解析v10:速度超过250,jb_sdsjz = %f",savetmp->str_tcms_v10.str_basic.jb_sdsjz);

        getDateTime(&yy, &mm, &dd, &hh, &mi, &ss);

        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy, mm, dd, hh, mi, ss);

        insert_AP_PARSE_ERROR_LOG(parse_error);

    }

    savetmp->str_tcms_v10.str_basic.jb_wyzfdy     = SWAP2(s_basic->c23); /*    NUMBER(5),   */

    savetmp->str_tcms_v10.str_basic.jb_wyzfdl     = SWAP2(s_basic->c25); /*    NUMBER(5),   */

    savetmp->str_tcms_v10.str_basic.jb_zfgyl      = SWAP2(s_basic->c27) >>4; /*    NUMBER(5),   */

    savetmp->str_tcms_v10.str_basic.jb_lcgyl      = SWAP2(s_basic->c29) >>4; /*    NUMBER(5),   */

    savetmp->str_tcms_v10.str_basic.jb_zdgyl      = SWAP2(s_basic->c31) >>4; /*    NUMBER(5),   */

    savetmp->str_tcms_v10.str_basic.jb_jhfgyl     = SWAP2(s_basic->c33) >>4; /*    NUMBER(5),   */

    savetmp->str_tcms_v10.str_basic.jb_xdcyl      = ((int16)SWAP2(s_basic->c35)) * 0.1f; /*    NUMBER(5,1), */

    savetmp->str_tcms_v10.str_basic.jb_cyjzs      = SWAP2(s_basic->c37) ; /*    NUMBER(5),   */

    savetmp->str_tcms_v10.str_basic.jb_zlc        = SWAP4(s_basic->c39); /*    NUMBER(5),   */

}



/*解析V2.0版本 电力机车基本运行信息*/

void parse_basicinfo_v20(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    int yy=0,mm=0,dd=0,hh=0,mi=0,ss=0;

    struct PARSE_ERROR_LOG parse_error;

    struct STR_BASICINFO_V20 *s_basic = (struct STR_BASICINFO_V20 *)(data+offset);

    savetmp->tcms_ver = s_basic->s_tou.c4;

    savetmp->flag_tcms = 3;

    sprintf(savetmp->tcms_xtsj,"%04d-%02d-%02d %02d:%02d:%02d",2000+s_basic->c16[0],s_basic->c16[1],s_basic->c16[2],s_basic->c16[3],s_basic->c16[4],s_basic->c16[5]);



    savetmp->str_tcms_dl_v20.str_basic.yx_st5        = s_basic->c5; /*    NUMBER(3),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_st6        = s_basic->c6; /*    NUMBER(3),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_st7        = s_basic->c7; /*    NUMBER(3),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_st8        = s_basic->c8; /*    NUMBER(3),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_st9        = s_basic->c9; /*    NUMBER(3),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_st10       = s_basic->c10; /*    NUMBER(3),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_st11       = s_basic->c11; /*    NUMBER(3),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_sbjw       = SWAP2(s_basic->c22)*0.1f ;   /*    NUMBER(6,1),  */

    savetmp->str_tcms_dl_v20.str_basic.yx_sd_jh      = SWAP2(s_basic->c24)*0.1f ;   /*    NUMBER(6,1),  */

    savetmp->str_tcms_dl_v20.str_basic.yx_sd_sj      = SWAP2(s_basic->c26)*0.1f ;   /*    NUMBER(6,1),  */

    if(savetmp->str_tcms_dl_v20.str_basic.yx_sd_sj>250)

    {

        /*add by guo 20160826*/

        sprintf(parse_error.t_type_id,"%03d",savetmp->t_type_id);

        sprintf(parse_error.loco_no,"%04d",savetmp->loco_no);

        memcpy(parse_error.btsj,savetmp->btsj,strlen(savetmp->btsj));



        parse_error.datatype = 1;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

        parse_error.efield = 2;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

        sprintf(parse_error.ereason, "str_tcms_dl_v20解析:速度超过250,yx_sd_sj = %f",savetmp->str_tcms_dl_v20.str_basic.yx_sd_sj);

        getDateTime(&yy, &mm, &dd, &hh, &mi, &ss);

        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy, mm, dd, hh, mi, ss);

        insert_AP_PARSE_ERROR_LOG(parse_error);

    }

    savetmp->str_tcms_dl_v20.str_basic.yx_ybdy       = SWAP2(s_basic->c28); /*    NUMBER(5),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_ybdl       = SWAP2(s_basic->c30); /*    NUMBER(5),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_zfgyl      = SWAP2(s_basic->c32)>>4; /*    NUMBER(5),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_jhfgyl	  = SWAP2(s_basic->c34)>>4; /*    NUMBER(1),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_lcgyl      = SWAP2(s_basic->c36)>>4; /*    NUMBER(5),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_zdfg1yl    = SWAP2(s_basic->c38)>>4; /*    NUMBER(5),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_zdfg2yl    = SWAP2(s_basic->c40)>>4; /*    NUMBER(4),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_zlc        = SWAP4(s_basic->c42); /*    NUMBER(10),   */

    savetmp->str_tcms_dl_v20.str_basic.yx_xdcyl      = s_basic->c46; /*    NUMBER(3),    */

    savetmp->str_tcms_dl_v20.str_basic.yx_zdlqdzcs   = SWAP4(s_basic->c47); /*    NUMBER(10),   */

    savetmp->str_tcms_dl_v20.str_basic.yx_ysj1yxsj   = SWAP4(s_basic->c51)*0.1 ;   /*    NUMBER(10,1), */

    savetmp->str_tcms_dl_v20.str_basic.yx_ysj2yxsj   = SWAP4(s_basic->c55)*0.1 ;   /*    NUMBER(10,1), */

}



/*解析V2.0版本 内燃机车基本运行信息*/

void parse_basicinfo_n3_v2(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    int yy=0,mm=0,dd=0,hh=0,mi=0,ss=0;

    struct PARSE_ERROR_LOG parse_error;

    struct STR_BASICINFO_N_V20 *s_basic_n3 = (struct STR_BASICINFO_N_V20 *)(data+offset);

    savetmp->tcms_ver = s_basic_n3->s_tou.c4;

    savetmp->flag_tcms = 4;



    sprintf(savetmp->tcms_xtsj,"%04d-%02d-%02d %02d:%02d:%02d",

            2000+s_basic_n3->c14[0],s_basic_n3->c14[1],s_basic_n3->c14[2],s_basic_n3->c14[3],s_basic_n3->c14[4],s_basic_n3->c14[5]);



    savetmp->str_tcms_nr_v20.str_basic.yx_czd         =s_basic_n3->c5;/*      NUMBER(3),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_fxsb        =s_basic_n3->c6;/*      NUMBER(3),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_jcgk        =s_basic_n3->c7;/*      NUMBER(3),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_xsqjm       =s_basic_n3->c8;/*      NUMBER(3),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_st9         =s_basic_n3->c9;/*      NUMBER(3),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_wrjt        =s_basic_n3->c10;/*      NUMBER(3),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_st11        =s_basic_n3->c11;/*      NUMBER(3),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_skqsbdw     =s_basic_n3->c20;/*      NUMBER(3),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_cyjsczgl    =SWAP2(s_basic_n3->c21);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_zfgl        =SWAP2(s_basic_n3->c23);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_fzfdjgl     =SWAP2(s_basic_n3->c25);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_zfhgl       =SWAP2(s_basic_n3->c27);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_jcyxsd      =SWAP2(s_basic_n3->c29)*0.1f ;/*      NUMBER(5,1), */

    if(savetmp->str_tcms_nr_v20.str_basic.yx_jcyxsd>250)

    {

        /*add by guo 20160826*/

        sprintf(parse_error.t_type_id,"%03d",savetmp->t_type_id);

        sprintf(parse_error.loco_no,"%04d",savetmp->loco_no);

        memcpy(parse_error.btsj,savetmp->btsj,strlen(savetmp->btsj));



        parse_error.datatype = 1;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

        parse_error.efield = 2;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

        sprintf(parse_error.ereason, "str_tcms_nr_v20解析:速度超过250,yx_jcyxsd = %f",savetmp->str_tcms_nr_v20.str_basic.yx_jcyxsd);

        getDateTime(&yy, &mm, &dd, &hh, &mi, &ss);

        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy, mm, dd, hh, mi, ss);

        insert_AP_PARSE_ERROR_LOG(parse_error);

    }

    savetmp->str_tcms_nr_v20.str_basic.yx_jcqyl       =SWAP2(s_basic_n3->c31);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_jczdl       =SWAP2(s_basic_n3->c33);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_dqyl        =SWAP2(s_basic_n3->c35);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_hjwd        =SWAP2(s_basic_n3->c37)*0.1f ;/*      NUMBER(5,1), */

    savetmp->str_tcms_nr_v20.str_basic.yx_ryyl        =SWAP2(s_basic_n3->c39);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_ryyw        =SWAP2(s_basic_n3->c41);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_xdcdy       =SWAP2(s_basic_n3->c43)*0.1f ;/*      NUMBER(5,1), */

    savetmp->str_tcms_nr_v20.str_basic.yx_xdccddl     =SWAP2(s_basic_n3->c45);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_zfgyl       =SWAP2(s_basic_n3->c47);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_jhfgyl      =SWAP2(s_basic_n3->c49);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_lcgyl       =SWAP2(s_basic_n3->c51);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_zdfg1yl     =SWAP2(s_basic_n3->c53);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_zdfg2yl     =SWAP2(s_basic_n3->c55);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_cyjzs       =SWAP2(s_basic_n3->c57);/*      NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_basic.yx_jcyxlc      =SWAP4(s_basic_n3->c59);/*      NUMBER(10),  */



}



/*基本运行信息版本判定函数*/

void parse_basicinfo_entry(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    uchar ver = data[offset+4];

    switch(ver)

    {

    case 10:

    case 11:

        parse_basicinfo_V10(data,offset,savetmp);

        break;

    case 20:

        parse_basicinfo_v20(data,offset,savetmp);

        break;

    default:

        ;

    }

}



/*解析V1.0版本 柴油机系统信息*/

void parse_diesel_v10(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    int diesel_key = 0 ;

    struct STR_DIESEL_V10 *s_diesel = (struct STR_DIESEL_V10 *)(data+offset);



    diesel_key = (savetmp->key>>16)&0x000000ff;

    //printf("parse_diesel_v10 t_type_id = %3d ,diesel_key = %d\n",savetmp->t_type_id,diesel_key);

    if( diesel_key == 160)

    {

        savetmp->flag_tcms = 2;

    }



    savetmp->str_tcms_v10.str_desel.cyj_jcsd         =SWAP2(s_diesel->c5)*0.1f;/*  NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_desel.cyj_hlqfjwd      =(int16)SWAP2(s_diesel->c7);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_zcqzxyl      = ((int16)SWAP2(s_diesel->c9))*0.01f;/*  NUMBER(5,2),  */

    savetmp->str_tcms_v10.str_desel.cyj_ycqzxyl      = ((int16)SWAP2(s_diesel->c11))*0.01f;/*  NUMBER(5,2),  */

    savetmp->str_tcms_v10.str_desel.cyj_zcjfkkqyl    = (int16)SWAP2(s_diesel->c13);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_ycjfkkqyl    = (int16)SWAP2(s_diesel->c15);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_jfkkqwd      = (int16)SWAP2(s_diesel->c17);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_zcjfkkqwd    = (int16)SWAP2(s_diesel->c19);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_ycjfkkqwd    = (int16)SWAP2(s_diesel->c21);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_kqjkwd       = (int16)SWAP2(s_diesel->c23);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_jywd         = (int16)SWAP2(s_diesel->c25);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_jkryyl       = (int16)SWAP2(s_diesel->c27);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_jyjkyl       = (int16)SWAP2(s_diesel->c29);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_zyq_zcjyjkyl = (int16)SWAP2(s_diesel->c31);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_zyq_ycjyjkyl = (int16)SWAP2(s_diesel->c33);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_jkjywd       = (int16)SWAP2(s_diesel->c35);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_zclqsckyl    = (int16)SWAP2(s_diesel->c37);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_yclqsckyl    = (int16)SWAP2(s_diesel->c39);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_zclqsjkyl    = (int16)SWAP2(s_diesel->c43);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_yclqsjkyl    = (int16)SWAP2(s_diesel->c45);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_cksyl        = (int16)SWAP2(s_diesel->c47);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_dqyl         = ((int16)SWAP2(s_diesel->c49))*0.001f;/*  NUMBER(5,3),  */

    savetmp->str_tcms_v10.str_desel.cyj_ryyl         = (int16)SWAP2(s_diesel->c51);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_ryyw         = (int16)SWAP2(s_diesel->c53);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_fzfkxh       = ((int16)SWAP2(s_diesel->c55)) * 0.1f;/*  NUMBER(5,3),  */

    savetmp->str_tcms_v10.str_desel.cyj_zfglsc       = SWAP2(s_diesel->c57);/*  NUMBER(5),    */

    savetmp->str_tcms_v10.str_desel.cyj_glsczs       = SWAP4(s_diesel->c59);/*  NUMBER(9),    */

    savetmp->str_tcms_v10.str_desel.cyj_qyl          = (int16)SWAP2(s_diesel->c63);/*  NUMBER(5),    */

}



/*解析V2.0版本 柴油机系统信息*/

void parse_diesel_v20(uchar* data, int offset, struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_DIESEL_V20 *s_sysdata = (struct STR_DIESEL_V20 *)(data+offset);



    savetmp->str_tcms_nr_v20.str_desel.cyj_st5           =s_sysdata->c5;/*   NUMBER(3),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_st6           =s_sysdata->c6;/*   NUMBER(3),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_st7           =s_sysdata->c7;/*   NUMBER(3),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_st8           =s_sysdata->c8;/*   NUMBER(3),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_zs            =SWAP2(s_sysdata->c9);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_qzxyl1        =SWAP2(s_sysdata->c11)*0.1f;/*   NUMBER(5,1),  */

    savetmp->str_tcms_nr_v20.str_desel.cyj_qzxyl2        =SWAP2(s_sysdata->c13)*0.1f;/*   NUMBER(5,1),  */

    savetmp->str_tcms_nr_v20.str_desel.cyj_kqxwyxly1     =SWAP2(s_sysdata->c15);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_kqxwyxly2     =SWAP2(s_sysdata->c17);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_rkkqwd        =SWAP2(s_sysdata->c19);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_kqxkqwd1      =SWAP2(s_sysdata->c21);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_kqxkqwd2      =SWAP2(s_sysdata->c23);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_zyqjyjkyl1    =SWAP2(s_sysdata->c25);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_zyqjyjkyl2    =SWAP2(s_sysdata->c27);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_jkryyl        =SWAP2(s_sysdata->c29);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_jyjkyl        =SWAP2(s_sysdata->c31);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_jyjkwd        =SWAP2(s_sysdata->c33);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_jyckwd        =SWAP2(s_sysdata->c35);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_lqsckyl1      =SWAP2(s_sysdata->c37);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_lqsckyl2      =SWAP2(s_sysdata->c39);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_lqsjkyl1      =SWAP2(s_sysdata->c41);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_lqsjkyl2      =SWAP2(s_sysdata->c43);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_zlsbckyl      =SWAP2(s_sysdata->c45);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_gwsbckyl      =SWAP2(s_sysdata->c47);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_gwsjkwd       =SWAP2(s_sysdata->c49);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_gwsckwd       =SWAP2(s_sysdata->c51);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_zlsjkwd       =SWAP2(s_sysdata->c53);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_zlsckwd       =SWAP2(s_sysdata->c55);/*   NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_desel.cyj_cyjfzfkxh     =SWAP2(s_sysdata->c57)*0.1f;/*   NUMBER(5,1),  */

    savetmp->str_tcms_nr_v20.str_desel.cyj_dbkzqgddy     =SWAP2(s_sysdata->c59)*0.01f;/*   NUMBER(5,2),  */

    savetmp->str_tcms_nr_v20.str_desel.cyj_pyqddy        =SWAP2(s_sysdata->c61)*0.01f;/*   NUMBER(5,2),  */

}



/*柴油机系统信息版本判定函数*/

void parse_diesel_entry(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    uchar version = data[offset+4];

    switch(version)

    {

    case 10:

    case 11:

        parse_diesel_v10(data,offset,savetmp);

        break;

    case 20:

        parse_diesel_v20(data,offset,savetmp);

        break;

    default:

        ;

    }

}



/*解析V1.0版本 牵引系统系统信息*/

void parse_qianyin_v10(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_QIANYIN_V10 *s_qianyin = (struct STR_QIANYIN_V10 *)(data+offset);



    savetmp->str_tcms_v10.str_qianyin.qy_sdsd            = SWAP2(s_qianyin->c5)*0.1f; /*NUMBER(6,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_sjsd            = SWAP2(s_qianyin->c7)*0.1f; /*NUMBER(6,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_fx              = s_qianyin->c9; /*NUMBER(3),    */

    savetmp->str_tcms_v10.str_qianyin.qy_zgl             = s_qianyin->c10; /*NUMBER(3),    */

    savetmp->str_tcms_v10.str_qianyin.qy_qyzdlsdz_1bg1mt = ((int16)SWAP2(s_qianyin->c11))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_qyzdlsdz_1bg2mt = ((int16)SWAP2(s_qianyin->c13))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_qyzdlsdz_1bg3mt = ((int16)SWAP2(s_qianyin->c15))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_qyzdlsdz_2bg1mt = ((int16)SWAP2(s_qianyin->c17))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_qyzdlsdz_2bg2mt = ((int16)SWAP2(s_qianyin->c19))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_qyzdlsdz_2bg3mt = ((int16)SWAP2(s_qianyin->c21))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_sjsd_1bg1mt     = ((int16)SWAP2(s_qianyin->c23))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_sjsd_1bg2mt     = ((int16)SWAP2(s_qianyin->c25))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_sjsd_1bg3mt     = ((int16)SWAP2(s_qianyin->c27))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_sjsd_2bg1mt     = ((int16)SWAP2(s_qianyin->c29))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_sjsd_2bg2mt     = ((int16)SWAP2(s_qianyin->c31))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_sjsd_2bg3mt     = ((int16)SWAP2(s_qianyin->c33))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_fdjdy           = (int16)SWAP2(s_qianyin->c35); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_fdjdl           = (int16)SWAP2(s_qianyin->c37); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_qyblq1_zjdy     = (int16)SWAP2(s_qianyin->c39); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_qyblq1_zjdl     = (int16)SWAP2(s_qianyin->c41); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_qyblq2_zjdy     = (int16)SWAP2(s_qianyin->c43); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_qyblq2_zjdl     = (int16)SWAP2(s_qianyin->c45); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_qyblq1_lqsyl    = ((int16)SWAP2(s_qianyin->c47))*0.01f; /*NUMBER(5,2),  */

    savetmp->str_tcms_v10.str_qianyin.qy_qyblq1_lqswd    = SWAP2(s_qianyin->c49)-100; /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_qyblq2_lqsyl    = ((int16)SWAP2(s_qianyin->c51))*0.01f; /*NUMBER(5,2),  */

    savetmp->str_tcms_v10.str_qianyin.qy_qyblq2_lqswd    = SWAP2(s_qianyin->c53)-100; /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_qybyqyw1        = SWAP2(s_qianyin->c55)-100; /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_qybyqyw2        = SWAP2(s_qianyin->c57)-100; /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_qyzdlsjz_1bg1mt = ((int16)SWAP2(s_qianyin->c59))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_qyzdlsjz_1bg2mt = ((int16)SWAP2(s_qianyin->c61))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_qyzdlsjz_1bg3mt = ((int16)SWAP2(s_qianyin->c63))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_qyzdlsjz_2bg1mt = ((int16)SWAP2(s_qianyin->c65))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_qyzdlsjz_2bg2mt = ((int16)SWAP2(s_qianyin->c67))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_qyzdlsjz_2bg3mt = ((int16)SWAP2(s_qianyin->c69))*0.1f; /*NUMBER(5,1),  */

    savetmp->str_tcms_v10.str_qianyin.qy_djwd_1bg1mt     = SWAP2(s_qianyin->c71)-100; /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djwd_1bg2mt     = SWAP2(s_qianyin->c73)-100; /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djwd_1bg3mt     = SWAP2(s_qianyin->c75)-100; /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djwd_2bg1mt     = SWAP2(s_qianyin->c77)-100; /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djwd_2bg2mt     = SWAP2(s_qianyin->c79)-100; /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djwd_2bg3mt     = SWAP2(s_qianyin->c81)-100; /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djdl_1bg1mt     = (int16)SWAP2(s_qianyin->c83); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djdl_1bg2mt     = (int16)SWAP2(s_qianyin->c85); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djdl_1bg3mt     = (int16)SWAP2(s_qianyin->c87); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djdl_2bg1mt     = (int16)SWAP2(s_qianyin->c89); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djdl_2bg2mt     = (int16)SWAP2(s_qianyin->c91); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djdl_2bg3mt     = (int16)SWAP2(s_qianyin->c93); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djdy_1bg1mt     = (int16)SWAP2(s_qianyin->c95); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djdy_1bg2mt     = (int16)SWAP2(s_qianyin->c97); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djdy_1bg3mt     = (int16)SWAP2(s_qianyin->c99); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djdy_2bg1mt     = (int16)SWAP2(s_qianyin->c101); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djdy_2bg2mt     = (int16)SWAP2(s_qianyin->c103); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djdy_2bg3mt     = (int16)SWAP2(s_qianyin->c105); /*NUMBER(5),    */

    savetmp->str_tcms_v10.str_qianyin.qy_cdjcq           = s_qianyin->c107; /*NUMBER(3),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djjcq           = s_qianyin->c108; /*NUMBER(3),    */

    savetmp->str_tcms_v10.str_qianyin.qy_djgl            = s_qianyin->c109; /*NUMBER(3),    */

    savetmp->str_tcms_v10.str_qianyin.qy_kz              = s_qianyin->c110; /*NUMBER(3),    */



}



/*解析V2.0版本 电力机车牵引系统信息*/

void parse_qianyin_v20(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_QIANYIN_V20 *s_qianyin = (struct STR_QIANYIN_V20 *)(data+offset);



    savetmp->str_tcms_dl_v20.str_qianyin.qy_cdjcq             =s_qianyin->c5;/*NUMBER(3),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_djjcq             =s_qianyin->c6;/*NUMBER(3),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_zgl               =s_qianyin->c7;/*NUMBER(3),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_sdsd              =SWAP2(s_qianyin->c12)*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_sjsd              =SWAP2(s_qianyin->c14)*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyzdlsdz_1bg1mt   =((int16)SWAP2(s_qianyin->c16))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyzdlsdz_1bg2mt   =((int16)SWAP2(s_qianyin->c18))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyzdlsdz_1bg3mt   =((int16)SWAP2(s_qianyin->c20))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyzdlsdz_2bg1mt   =((int16)SWAP2(s_qianyin->c22))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyzdlsdz_2bg2mt   =((int16)SWAP2(s_qianyin->c24))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyzdlsdz_2bg3mt   =((int16)SWAP2(s_qianyin->c26))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyzdlsjz_1bg1mt   =((int16)SWAP2(s_qianyin->c28))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyzdlsjz_1bg2mt   =((int16)SWAP2(s_qianyin->c30))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyzdlsjz_1bg3mt   =((int16)SWAP2(s_qianyin->c32))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyzdlsjz_2bg1mt   =((int16)SWAP2(s_qianyin->c34))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyzdlsjz_2bg2mt   =((int16)SWAP2(s_qianyin->c36))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyzdlsjz_2bg3mt   =((int16)SWAP2(s_qianyin->c38))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_sjsd_1bg1mt       =((int16)SWAP2(s_qianyin->c40))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_sjsd_1bg2mt       =((int16)SWAP2(s_qianyin->c42))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_sjsd_1bg3mt       =((int16)SWAP2(s_qianyin->c44))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_sjsd_2bg1mt       =((int16)SWAP2(s_qianyin->c46))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_sjsd_2bg2mt       =((int16)SWAP2(s_qianyin->c48))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_sjsd_2bg3mt       =((int16)SWAP2(s_qianyin->c50))*0.1f;/*NUMBER(5,1),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_djdl_1bg1mt       =(int16)SWAP2(s_qianyin->c52);/*NUMBER(5),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_djdl_1bg2mt       =(int16)SWAP2(s_qianyin->c54);/*NUMBER(5),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_djdl_1bg3mt       =(int16)SWAP2(s_qianyin->c56);/*NUMBER(5),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_djdl_2bg1mt       =(int16)SWAP2(s_qianyin->c58);/*NUMBER(5),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_djdl_2bg2mt       =(int16)SWAP2(s_qianyin->c60);/*NUMBER(5),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_djdl_2bg3mt       =(int16)SWAP2(s_qianyin->c62);/*NUMBER(5),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_djwd_1bg1mt       =(int16)SWAP2(s_qianyin->c64)-100;/*NUMBER(4),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_djwd_1bg2mt       =(int16)SWAP2(s_qianyin->c66)-100;/*NUMBER(4),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_djwd_1bg3mt       =(int16)SWAP2(s_qianyin->c68)-100;/*NUMBER(4),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_djwd_2bg1mt       =(int16)SWAP2(s_qianyin->c70)-100;/*NUMBER(4),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_djwd_2bg2mt       =(int16)SWAP2(s_qianyin->c72)-100;/*NUMBER(4),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_djwd_2bg3mt       =(int16)SWAP2(s_qianyin->c74)-100;/*NUMBER(4),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_fdjdy             =(int16)SWAP2(s_qianyin->c76);/*NUMBER(5),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_fdjdl             =(int16)SWAP2(s_qianyin->c78);/*NUMBER(5),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_jlqzlmx1dy        =(int16)SWAP2(s_qianyin->c80);/*NUMBER(5),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_jlqzlmx2dy        =(int16)SWAP2(s_qianyin->c82);/*NUMBER(5),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_jlqzlmx3dy        =(int16)SWAP2(s_qianyin->c84);/*NUMBER(5),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_jlqzlmx4dy        =(int16)SWAP2(s_qianyin->c86);/*NUMBER(5),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_jlqzlmx5dy        =(int16)SWAP2(s_qianyin->c88);/*NUMBER(5),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_jlqzlmx6dy        =(int16)SWAP2(s_qianyin->c90);/*NUMBER(5),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyblqlqsyl1       =((int16)SWAP2(s_qianyin->c92))*0.01f;/*NUMBER(5,2),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyblqlqsyl2       =((int16)SWAP2(s_qianyin->c94))*0.01f;/*NUMBER(5,2),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyblqlqsyl3       =((int16)SWAP2(s_qianyin->c96))*0.01f;/*NUMBER(5,2),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyblqlqsyl4       =((int16)SWAP2(s_qianyin->c98))*0.01f;/*NUMBER(5,2),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyblqlqsyl5       =((int16)SWAP2(s_qianyin->c100))*0.01f;/*NUMBER(5,2),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyblqlqsyl6       =((int16)SWAP2(s_qianyin->c102))*0.01f;/*NUMBER(5,2),   */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyblqlqswd1       =SWAP2(s_qianyin->c104)-100;/*NUMBER(6),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyblqlqswd2       =SWAP2(s_qianyin->c106)-100;/*NUMBER(6),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyblqlqswd3       =SWAP2(s_qianyin->c108)-100;/*NUMBER(6),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyblqlqswd4       =SWAP2(s_qianyin->c110)-100;/*NUMBER(6),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyblqlqswd5       =SWAP2(s_qianyin->c112)-100;/*NUMBER(6),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qyblqlqswd6       =SWAP2(s_qianyin->c114)-100;/*NUMBER(6),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qybyqyw1      	   =SWAP2(s_qianyin->c116)-100;/*NUMBER(6),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qybyqyw2          =SWAP2(s_qianyin->c118)-100;/*NUMBER(6),     */

    savetmp->str_tcms_dl_v20.str_qianyin.qy_qybyqyw3          =SWAP2(s_qianyin->c120)-100;/*NUMBER(6),     */



}



/*解析V2.0版本 内燃机车牵引系统信息*/

void parse_qianyin_n3_v2(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_QIANYIN_N_V20 *s_qianyin_n3 = (struct STR_QIANYIN_N_V20 *)(data+offset);



    savetmp->str_tcms_nr_v20.str_qianyin.qy_zf           =s_qianyin_n3->c5;/*     NUMBER(3),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_gl           =s_qianyin_n3->c6;/*     NUMBER(3),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_skqsbdw      =(int16)SWAP2(s_qianyin_n3->c9);/*     NUMBER(3),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_zflcdl       =(int16)SWAP2(s_qianyin_n3->c11);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_zfdjdl       =(int16)SWAP2(s_qianyin_n3->c13);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_yjzjzlhldy   =(int16)SWAP2(s_qianyin_n3->c15);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_ejzjzlhldy   =(int16)SWAP2(s_qianyin_n3->c17);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_yjsdlj       =(int16)SWAP2(s_qianyin_n3->c19);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_ejsdlj       =(int16)SWAP2(s_qianyin_n3->c21);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_yjsjlj       =(int16)SWAP2(s_qianyin_n3->c23);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_ejsjlj       =(int16)SWAP2(s_qianyin_n3->c25);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj1_sdlj     =(int16)SWAP2(s_qianyin_n3->c27);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj2_sdlj     =(int16)SWAP2(s_qianyin_n3->c29);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj3_sdlj     =(int16)SWAP2(s_qianyin_n3->c31);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj4_sdlj     =(int16)SWAP2(s_qianyin_n3->c33);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj5_sdlj     =(int16)SWAP2(s_qianyin_n3->c35);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj6_sdlj     =(int16)SWAP2(s_qianyin_n3->c37);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj1_sjlj     =(int16)SWAP2(s_qianyin_n3->c39);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj2_sjlj     =(int16)SWAP2(s_qianyin_n3->c41);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj3_sjlj     =(int16)SWAP2(s_qianyin_n3->c43);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj4_sjlj     =(int16)SWAP2(s_qianyin_n3->c45);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj5_sjlj     =(int16)SWAP2(s_qianyin_n3->c47);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj6_sjlj      =(int16)SWAP2(s_qianyin_n3->c49);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_yjdl         =(int16)SWAP2(s_qianyin_n3->c51);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_ejdl         =(int16)SWAP2(s_qianyin_n3->c53);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj1_dl       =(int16)SWAP2(s_qianyin_n3->c55);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj2_dl       =(int16)SWAP2(s_qianyin_n3->c57);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj3_dl       =(int16)SWAP2(s_qianyin_n3->c59);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj4_dl       =(int16)SWAP2(s_qianyin_n3->c61);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj5_dl       =(int16)SWAP2(s_qianyin_n3->c63);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj6_dl       =(int16)SWAP2(s_qianyin_n3->c65);/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj1_sjzs     =(int16)SWAP2(s_qianyin_n3->c67)*0.1f;/*     NUMBER(5,1), */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj2_sjzs     =(int16)SWAP2(s_qianyin_n3->c69)*0.1f;/*     NUMBER(5,1), */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj3_sjzs     =(int16)SWAP2(s_qianyin_n3->c71)*0.1f;/*     NUMBER(5,1), */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj4_sjzs     =(int16)SWAP2(s_qianyin_n3->c73)*0.1f;/*     NUMBER(5,1), */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj5_sjzs     =(int16)SWAP2(s_qianyin_n3->c75)*0.1f;/*     NUMBER(5,1), */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj6_sjzs     =(int16)SWAP2(s_qianyin_n3->c77)*0.1f;/*     NUMBER(5,1), */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj1_wd       =(int16)SWAP2(s_qianyin_n3->c79)-100;/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj2_wd       =(int16)SWAP2(s_qianyin_n3->c81)-100;/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj3_wd       =(int16)SWAP2(s_qianyin_n3->c83)-100;/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj4_wd       =(int16)SWAP2(s_qianyin_n3->c85)-100;/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj5_wd       =(int16)SWAP2(s_qianyin_n3->c87)-100;/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_dj6_wd       =(int16)SWAP2(s_qianyin_n3->c89)-100;/*     NUMBER(5),   */

    savetmp->str_tcms_nr_v20.str_qianyin.qy_jdldl        =(int16)SWAP2(s_qianyin_n3->c91)*0.01f;/*     NUMBER(5,2), */



}



/*牵引系统信息版本判定函数*/

void parse_qianyin_entry(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    uchar ver = data[offset+4];

    switch(ver)

    {

    case 10:

    case 11:

        parse_qianyin_v10(data,offset,savetmp);

        break;

    case 20:

        parse_qianyin_v20(data,offset,savetmp);

        break;

    default:

        ;

    }

}



/*解析V1.0版本 辅助系统信息*/

void parse_fuzhu_v10(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_FUZHU_V10 *s_fuzhu = (struct STR_FUZHU_V10 *)(data+offset);



    savetmp->str_tcms_v10.str_fuzhu.fz_bppvsdz      = SWAP2(s_fuzhu->c5);/*   NUMBER(5),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_dppvsdz      = SWAP2(s_fuzhu->c7);/*   NUMBER(5),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_fb1zt        = s_fuzhu->c9;/*   NUMBER(3),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_fb2zt        = s_fuzhu->c10;/*   NUMBER(3),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_fb1_zlqsrdy  = (int16)SWAP2(s_fuzhu->c11);/*   NUMBER(5),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_fb1_zlqsrdl  = (int16)SWAP2(s_fuzhu->c13);/*   NUMBER(5),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_fb1_zjzldy   = (int16)SWAP2(s_fuzhu->c15);/*   NUMBER(5),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_fb1_nbqscdy  = (int16)SWAP2(s_fuzhu->c17);/*   NUMBER(5),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_fb1_nbqscdl  = (int16)SWAP2(s_fuzhu->c19);/*   NUMBER(5),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_fb1_nbqscpl  = (int16)SWAP2(s_fuzhu->c21);/*   NUMBER(5),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_fb2_zlqsrdy  = (int16)SWAP2(s_fuzhu->c23);/*   NUMBER(5),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_fb2_zlqsrdl  = (int16)SWAP2(s_fuzhu->c25);/*   NUMBER(5),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_fb2_zjzldy   = (int16)SWAP2(s_fuzhu->c27);/*   NUMBER(5),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_fb2_nbqscdy  = (int16)SWAP2(s_fuzhu->c29);/*   NUMBER(5),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_fb2_nbqscdl  = (int16)SWAP2(s_fuzhu->c31);/*   NUMBER(5),  */

    savetmp->str_tcms_v10.str_fuzhu.fz_fb2_nbqscpl  = (int16)SWAP2(s_fuzhu->c33);/*   NUMBER(5),  */



}



/*解析V2.0版本 电力机车辅助系统信息*/

void parse_fuzhu_v20(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_FUZHU_V20 *s_fuzhu = (struct STR_FUZHU_V20 *)(data+offset);



    savetmp->str_tcms_dl_v20.str_fuzhu.fz_fzblqzczt      = s_fuzhu->c5;/* NUMBER(3),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_qyfjsxdlqjqqzt = s_fuzhu->c6;/* NUMBER(3),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_st7            = s_fuzhu->c7;/* NUMBER(3),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_ybsxdlqzt      = s_fuzhu->c8;/* NUMBER(3),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_blqsbsxdlqzt   = s_fuzhu->c9;/* NUMBER(3),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_ysjgz          = s_fuzhu->c10;/* NUMBER(3),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_fzblq1_scdy    = SWAP2(s_fuzhu->c13);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_fzblq1_scdl    = SWAP2(s_fuzhu->c15);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_fzblq1_scpl    = SWAP2(s_fuzhu->c17);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_fzblq2_scdy    = SWAP2(s_fuzhu->c19);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_fzblq2_scdl    = SWAP2(s_fuzhu->c21);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_fzblq2_scpl    = SWAP2(s_fuzhu->c23);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_fzblq3_scdy    = SWAP2(s_fuzhu->c25);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_fzblq3_scdl    = SWAP2(s_fuzhu->c27);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_fzblq3_scpl    = SWAP2(s_fuzhu->c29);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_fzblq4_scdy    = SWAP2(s_fuzhu->c31);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_fzblq4_scdl    = SWAP2(s_fuzhu->c33);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_fzblq4_scpl    = SWAP2(s_fuzhu->c35);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_lg1_scdy       = SWAP2(s_fuzhu->c37);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_lg1_scdl       = SWAP2(s_fuzhu->c39);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_lg2_scdy       = SWAP2(s_fuzhu->c41);/* NUMBER(5),  */

    savetmp->str_tcms_dl_v20.str_fuzhu.fz_lg2_scdl       = SWAP2(s_fuzhu->c43);/* NUMBER(5),  */



}



/*解析V2.0版本 内燃机车辅助系统信息*/

void parse_fuzhu_n3_v2(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_FUZHU_N_V20 *s_fuzhu_n3 = (struct STR_FUZHU_N_V20 *)(data+offset);



    savetmp->str_tcms_nr_v20.str_fuzhu.fz_st5            = s_fuzhu_n3->c5 ; /*  NUMBER(3),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_ffdjdy         = (int16)SWAP2(s_fuzhu_n3->c8)   ; /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_kyj1_bpqscpl   = ((int16)SWAP2(s_fuzhu_n3->c10))*0.1f ; /*  NUMBER(5,1),  */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_kyj1_bpqscyl   = (int16)SWAP2(s_fuzhu_n3->c12); /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_kyj2_bpqscpl   = ((int16)SWAP2(s_fuzhu_n3->c14))*0.1f; /*  NUMBER(5,1),  */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_kyj2_bpqscdy   = (int16)SWAP2(s_fuzhu_n3->c16) ; /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_lqfs1_bpqscpl  = ((int16)SWAP2(s_fuzhu_n3->c18))*0.1f ; /*  NUMBER(5,1),  */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_lqfs1_bpqscdy  = (int16)SWAP2(s_fuzhu_n3->c20) ; /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_lqfs2_bpqscpl  = ((int16)SWAP2(s_fuzhu_n3->c22))*0.1f; /*  NUMBER(5,1),  */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_lqfs2_bpqscdy  = (int16)SWAP2(s_fuzhu_n3->c24) ; /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_qytfjbpqscpl   = ((int16)SWAP2(s_fuzhu_n3->c26))*0.1f; /*  NUMBER(5,1),  */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_qytfjbpqscxdy  = (int16)SWAP2(s_fuzhu_n3->c28) ; /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_lg1_scdy       = (int16)SWAP2(s_fuzhu_n3->c30); /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_lg1_scdl       = (int16)SWAP2(s_fuzhu_n3->c32) ; ; /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_lg2_scdy       = (int16)SWAP2(s_fuzhu_n3->c34) ; /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_lg2_scdl       = (int16)SWAP2(s_fuzhu_n3->c36); /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_lqfs1_pl       = (int16)SWAP2(s_fuzhu_n3->c38) ; /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_lqfs2_pl       = (int16)SWAP2(s_fuzhu_n3->c40); /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_lqfs3_pl       = (int16)SWAP2(s_fuzhu_n3->c42); /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_yhzddztfjzs    = (int16)SWAP2(s_fuzhu_n3->c44); /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_eyhzddztfjzs   = (int16)SWAP2(s_fuzhu_n3->c46); /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_qytfj1_pl      = (int16)SWAP2(s_fuzhu_n3->c48); /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_qytfj2_pl      = (int16)SWAP2(s_fuzhu_n3->c50); /*  NUMBER(5),    */

    savetmp->str_tcms_nr_v20.str_fuzhu.fz_zftfjgl        = (int16)SWAP2(s_fuzhu_n3->c52); /*  NUMBER(5),	*/



}



/*辅助系统信息版本判定函数*/

void parse_fuzhu_entry(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    uchar ver = data[offset+4];

    switch(ver)

    {

    case 10:

    case 11:

        parse_fuzhu_v10(data,offset,savetmp);

        break;

    case 20:

        parse_fuzhu_v20(data,offset,savetmp);

        break;

    default:

        ;

    }

}



/*解析V1.0版本 制动系统信息*/

void parse_zhidong_v10(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    int16 tmpVal=0;

    struct STR_ZHIDONG_V10 *s_zhidong = (struct STR_ZHIDONG_V10 *)(data+offset);



    savetmp->str_tcms_v10.str_zhidong.zd_sdsd = ((int16)SWAP2(s_zhidong->c5))*0.1f;

    savetmp->str_tcms_v10.str_zhidong.zd_sjsd = ((int16)SWAP2(s_zhidong->c7))*0.1f;

    savetmp->str_tcms_v10.str_zhidong.zd_fxzd = s_zhidong->c9 ;

    savetmp->str_tcms_v10.str_zhidong.zd_abh  = s_zhidong->c11;

    savetmp->str_tcms_v10.str_zhidong.zd_ibh  = s_zhidong->c12;

    savetmp->str_tcms_v10.str_zhidong.zd_zdqq = s_zhidong->c13;

    savetmp->str_tcms_v10.str_zhidong.zd_bcu  = s_zhidong->c14;

    savetmp->str_tcms_v10.str_zhidong.zd_dzdsdz = (int16)SWAP2(s_zhidong->c15);

    savetmp->str_tcms_v10.str_zhidong.zd_zfgyl  = SWAP2(s_zhidong->c17)/16;

    savetmp->str_tcms_v10.str_zhidong.zd_jhfgyl = SWAP2(s_zhidong->c19)/16;

    savetmp->str_tcms_v10.str_zhidong.zd_lcgyl   = SWAP2(s_zhidong->c21)/16;

    savetmp->str_tcms_v10.str_zhidong.zd_zdfg1yl = SWAP2(s_zhidong->c23)/16;

    savetmp->str_tcms_v10.str_zhidong.zd_zdfg2yl = SWAP2(s_zhidong->c25)/16;

    savetmp->str_tcms_v10.str_zhidong.zd_zdjzt   = SWAP2(s_zhidong->c27);

}



/*解析V2.0版本 制动系统信息*/

void parse_zhidong_v20(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_ZHIDONG_V20 *s_zhidong = (struct STR_ZHIDONG_V20 *)(data+offset);



    savetmp->str_tcms_dl_v20.str_zhidong.zd_abh = s_zhidong->c5;

    savetmp->str_tcms_dl_v20.str_zhidong.zd_ibh = s_zhidong->c6;

    savetmp->str_tcms_dl_v20.str_zhidong.zd_zdsj = s_zhidong->c7;

    savetmp->str_tcms_dl_v20.str_zhidong.zd_zdj = s_zhidong->c8;

    savetmp->str_tcms_dl_v20.str_zhidong.zd_st9 = s_zhidong->c9;



    savetmp->str_tcms_dl_v20.str_zhidong.zd_sdsd = ((int16)SWAP2(s_zhidong->c12))*0.1f;

    savetmp->str_tcms_dl_v20.str_zhidong.zd_sjsd = ((int16)SWAP2(s_zhidong->c14))*0.1f;

    savetmp->str_tcms_dl_v20.str_zhidong.zd_zfgyl = SWAP2(s_zhidong->c16)>>4;

    savetmp->str_tcms_dl_v20.str_zhidong.zd_jhfgyl = SWAP2(s_zhidong->c18)>>4;

    savetmp->str_tcms_dl_v20.str_zhidong.zd_lcgyl = SWAP2(s_zhidong->c20)>>4;

    savetmp->str_tcms_dl_v20.str_zhidong.zd_zdfg1yl = SWAP2(s_zhidong->c22)>>4;

    savetmp->str_tcms_dl_v20.str_zhidong.zd_zdfg2yl  = SWAP2(s_zhidong->c24)>>4;



}



/*制动系统信息版本判定函数*/

void parse_zhidong_entry(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    uchar ver = data[offset+4];

    switch(ver)

    {

    case 10:

    case 11:

        parse_zhidong_v10(data,offset,savetmp);

        break;

    case 20:

        parse_zhidong_v20(data,offset,savetmp);

        break;

    default:

        ;

    }

}



/*解析V2.0版本 内燃机车制动系统信息*/

void parse_zhidong_n3_v2(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_ZHIDONG_N_V20 *s_zhidong_n3_v2 = (struct STR_ZHIDONG_N_V20 *)(data+offset);



    savetmp->str_tcms_nr_v20.str_zhidong.zd_st5 = s_zhidong_n3_v2->c5;

    savetmp->str_tcms_nr_v20.str_zhidong.zd_zdsbwz = s_zhidong_n3_v2->c6;

    savetmp->str_tcms_nr_v20.str_zhidong.zd_ddsbwz = s_zhidong_n3_v2->c7;

    savetmp->str_tcms_nr_v20.str_zhidong.zd_zdjzdsj = s_zhidong_n3_v2->c8;

    savetmp->str_tcms_nr_v20.str_zhidong.zd_st9 = s_zhidong_n3_v2->c9;

    savetmp->str_tcms_nr_v20.str_zhidong.zd_tfzd = s_zhidong_n3_v2->c10;

    savetmp->str_tcms_nr_v20.str_zhidong.zd_zfgyl = (int16)SWAP2(s_zhidong_n3_v2->c13);

    savetmp->str_tcms_nr_v20.str_zhidong.zd_jhfgyl = (int16)SWAP2(s_zhidong_n3_v2->c15);

    savetmp->str_tcms_nr_v20.str_zhidong.zd_lcgyl = (int16)SWAP2(s_zhidong_n3_v2->c17);

    savetmp->str_tcms_nr_v20.str_zhidong.zd_zdfg1yl = (int16)SWAP2(s_zhidong_n3_v2->c19);

    savetmp->str_tcms_nr_v20.str_zhidong.zd_zdfg2yl = (int16)SWAP2(s_zhidong_n3_v2->c21);



    /* 电力机车中的单位换算 4000h = 1024 kPa ，把变量右移四位 （除以16）：rec_zhidong.ZDFG2YL  = SWAP2(s_zhidong->c24)>>4;  */

}



/*解析6A 制动监测系统信息*/

void parse_6AZDinfo(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{	

    struct STR_6AZD *s_6azd = (struct STR_6AZD *)(data+offset);



    savetmp->str_6A.str_6azd.zd_alt = s_6azd->alt &0x01;

    savetmp->str_6A.str_6azd.zd_cnt = s_6azd->cnt;

    savetmp->str_6A.str_6azd.zd_lcg  = (int16)SWAP2(s_6azd->lcg);

    savetmp->str_6A.str_6azd.zd_tfg  =  (int16)SWAP2(s_6azd->tfg);

    savetmp->str_6A.str_6azd.zd_jhg  =  (int16)SWAP2(s_6azd->jhg);

    savetmp->str_6A.str_6azd.zd_llj  =  (int16)SWAP2(s_6azd->llj);

    if(savetmp->str_6A.str_6azd.zd_llj != -1)

        savetmp->str_6A.str_6azd.zd_llj  =  (int16)(SWAP2(s_6azd->llj)& 0xFF);

    savetmp->str_6A.str_6azd.zd_speed  =  (int16)(SWAP2(s_6azd->speed) & 0xFF);

    savetmp->str_6A.zd_flag = 1;



}



/*解析6A 防火监测系统信息*/

void parse_6AFHinfo(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_6AFH *s_6afh = (struct STR_6AFH *)(data+offset);



    savetmp->str_6A.str_6afh.fh_zxkl = s_6afh->zxkl & 0x01;

    savetmp->str_6A.str_6afh.fh_zxdl = s_6afh->zxdl & 0x01;



    memset(savetmp->str_6A.str_6afh.fh_ttzt,0,65);

    sprintf(savetmp->str_6A.str_6afh.fh_ttzt,"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",

            s_6afh->alt[0],

            s_6afh->alt[1],

            s_6afh->alt[2],

            s_6afh->alt[3],

            s_6afh->alt[4],

            s_6afh->alt[5],

            s_6afh->alt[6],

            s_6afh->alt[7],

            s_6afh->alt[8],

            s_6afh->alt[9],

            s_6afh->alt[10],

            s_6afh->alt[11],

            s_6afh->alt[12],

            s_6afh->alt[13],

            s_6afh->alt[14],

            s_6afh->alt[15],

            s_6afh->alt[16],

            s_6afh->alt[17],

            s_6afh->alt[18],

            s_6afh->alt[19],

            s_6afh->alt[20],

            s_6afh->alt[21],

            s_6afh->alt[22],

            s_6afh->alt[23],

            s_6afh->alt[24],

            s_6afh->alt[25],

            s_6afh->alt[26],

            s_6afh->alt[27],

            s_6afh->alt[28],

            s_6afh->alt[29],

            s_6afh->alt[30],

            s_6afh->alt[31]);



    memset(savetmp->str_6A.str_6afh.fh_ttlx,0,65);

    sprintf(savetmp->str_6A.str_6afh.fh_ttlx,"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",

            s_6afh->sen[0],

            s_6afh->sen[1],

            s_6afh->sen[2],

            s_6afh->sen[3],

            s_6afh->sen[4],

            s_6afh->sen[5],

            s_6afh->sen[6],

            s_6afh->sen[7],

            s_6afh->sen[8],

            s_6afh->sen[9],

            s_6afh->sen[10],

            s_6afh->sen[11],

            s_6afh->sen[12],

            s_6afh->sen[13],

            s_6afh->sen[14],

            s_6afh->sen[15],

            s_6afh->sen[16],

            s_6afh->sen[17],

            s_6afh->sen[18],

            s_6afh->sen[19],

            s_6afh->sen[20],

            s_6afh->sen[21],

            s_6afh->sen[22],

            s_6afh->sen[23],

            s_6afh->sen[24],

            s_6afh->sen[25],

            s_6afh->sen[26],

            s_6afh->sen[27],

            s_6afh->sen[28],

            s_6afh->sen[29],

            s_6afh->sen[30],

            s_6afh->sen[31]);

    savetmp->str_6A.fh_flag = 1;

}



/*解析6A 绝缘监测系统信息*/

void parse_6AJYinfo(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_6AJY *s_6ajy = (struct STR_6AJY *)(data+offset);



    savetmp->str_6A.str_6ajy.jy_jcdy = SWAP2(s_6ajy->jcdy);

    savetmp->str_6A.str_6ajy.jy_mxdy = SWAP2(s_6ajy->bjdy);

    savetmp->str_6A.str_6ajy.jy_bjzt = s_6ajy->alt & 0x01;



    savetmp->str_6A.str_6ajy.jy_cszt = s_6ajy->stp& 0x01;

    savetmp->str_6A.str_6ajy.jy_zjgz = s_6ajy->error& 0x01;



    savetmp->str_6A.jy_flag = 1;

}



/*解析6A 列供监测系统信息*/

void parse_6ALGinfo(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_6ALG *s_6alg = (struct STR_6ALG *)(data+offset);



    savetmp->str_6A.str_6alg.lg_ldl_1 = SWAP4(s_6alg->ldl[0]);

    savetmp->str_6A.str_6alg.lg_ydl_1 = SWAP4(s_6alg->ydl[0]);

    savetmp->str_6A.str_6alg.lg_srdy_1 = SWAP4(s_6alg->srdy[0]);

    savetmp->str_6A.str_6alg.lg_srdl_1 = SWAP4(s_6alg->srdl[0]);

    savetmp->str_6A.str_6alg.lg_scdy_1 = SWAP4(s_6alg->scdy[0]);

    savetmp->str_6A.str_6alg.lg_scdl_1 = SWAP4(s_6alg->scdl[0]);

    savetmp->str_6A.str_6alg.lg_bdy_1 = SWAP4(s_6alg->bdy[0]);



    savetmp->str_6A.str_6alg.lg_ldl_2 = SWAP4(s_6alg->ldl[1]);

    savetmp->str_6A.str_6alg.lg_ydl_2 = SWAP4(s_6alg->ydl[1]);

    savetmp->str_6A.str_6alg.lg_srdy_2 = SWAP4(s_6alg->srdy[1]);

    savetmp->str_6A.str_6alg.lg_srdl_2 = SWAP4(s_6alg->srdl[1]);

    savetmp->str_6A.str_6alg.lg_scdy_2 = SWAP4(s_6alg->scdy[1]);

    savetmp->str_6A.str_6alg.lg_scdl_2 = SWAP4(s_6alg->scdl[1]);

    savetmp->str_6A.str_6alg.lg_bdy_2 = SWAP4(s_6alg->bdy[1]);



    if (SWAP2(s_6alg->s_tou.c0) > 61)

    {

        memset(savetmp->str_6A.str_6alg.lg_err,0,9);

        sprintf(savetmp->str_6A.str_6alg.lg_err,"%02x%02x%02x%02x",

                s_6alg->err[0],

                s_6alg->err[1],

                s_6alg->err[2],

                s_6alg->err[3]);



        memset(savetmp->str_6A.str_6alg.lg_sta,0,9);

        sprintf(savetmp->str_6A.str_6alg.lg_sta,"%02x%02x%02x%02x",

                s_6alg->sta[0],

                s_6alg->sta[1],

                s_6alg->sta[2],

                s_6alg->sta[3]);

        savetmp->str_6A.str_6alg.lg_kgl = s_6alg->kgl;

    }

    savetmp->str_6A.lg_flag = 1;

}



/*解析6A 走行监测系统信息*/

void parse_6AZX1info(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    int i;

    char zhtmp;

    char temp;

    struct STR_6AZX1 *s_6azx = (struct STR_6AZX1 *)(data+offset);



    zhtmp =  s_6azx->axis;

    temp = zhtmp -1;

    if((temp >= 0)&&(temp <= 5))

    {

        memset(savetmp->str_6A.str_6azx[temp].zx_wd,0,17);

        sprintf(savetmp->str_6A.str_6azx[temp].zx_wd,"%02x%02x%02x%02x%02x%02x%02x%02x",

                s_6azx->tmp[0],

                s_6azx->tmp[1],

                s_6azx->tmp[2],

                s_6azx->tmp[3],

                s_6azx->tmp[4],

                s_6azx->tmp[5],

                s_6azx->tmp[6],

                s_6azx->tmp[7]);



        memset(savetmp->str_6A.str_6azx[temp].zx_bj,0,17);

        sprintf(savetmp->str_6A.str_6azx[temp].zx_bj,"%02x%02x%02x%02x%02x%02x%02x%02x",

                s_6azx->alt[0],

                s_6azx->alt[1],

                s_6azx->alt[2],

                s_6azx->alt[3],

                s_6azx->alt[4],

                s_6azx->alt[5],

                s_6azx->alt[6],

                s_6azx->alt[7]);



        savetmp->str_6A.str_6azx[temp].zx_hw1 = (int)s_6azx->hw1;

        savetmp->str_6A.str_6azx[temp].zx_hw2 = (int)s_6azx->hw2;

        savetmp->str_6A.str_6azx[temp].zx_qzclqstate = (int)s_6azx->qyzdlzt;

        savetmp->str_6A.str_6azx[temp].zx_sdmc = (int)s_6azx->sdmc;



        savetmp->str_6A.zx_flag = 1;

    }



}



/*解析6A 视频监测系统信息*/

void parse_6ASPinfo(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_6ASP *s_6asp = (struct STR_6ASP *)(data+offset);



    savetmp->str_6A.str_6asp.sp_cjkgz_1 = s_6asp->cjk1 & 0x01;

    savetmp->str_6A.str_6asp.sp_cjkgz_2 = s_6asp->cjk2 & 0x01;

    savetmp->str_6A.str_6asp.sp_ccbgz = s_6asp->disk & 0x01;



    memset(savetmp->str_6A.str_6asp.sp_tdzjgz,0,33);

    sprintf(savetmp->str_6A.str_6asp.sp_tdzjgz,"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",

            s_6asp->chn[0]&0x01,

            s_6asp->chn[1]&0x01,

            s_6asp->chn[2]&0x01,

            s_6asp->chn[3]&0x01,

            s_6asp->chn[4]&0x01,

            s_6asp->chn[5]&0x01,

            s_6asp->chn[6]&0x01,

            s_6asp->chn[7]&0x01,

            s_6asp->chn[8]&0x01,

            s_6asp->chn[9]&0x01,

            s_6asp->chn[10]&0x01,

            s_6asp->chn[11]&0x01,

            s_6asp->chn[12]&0x01,

            s_6asp->chn[13]&0x01,

            s_6asp->chn[14]&0x01,

            s_6asp->chn[15]&0x01);

    savetmp->str_6A.sp_flag = 1;	//add by guo 2016.3.9

}



/*解析6A 先导报文信息*/

void parse_6AXDinfo(uchar* data,int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    int yy,mm,dd,hh,mi,ss;



    /* add by linw 20160328 */

    int key;

    ptraininfo_stu ptraininfo = NULL;



    struct STR_6AXD *s_6axd = (struct STR_6AXD *)(data+offset);

    savetmp->str_6A.xd_simno[0] = s_6axd->simno[0]&0x0f;

    savetmp->str_6A.xd_simno[1] = (s_6axd->simno[0]&0xf0)>>4;

    savetmp->str_6A.xd_simno[2] = s_6axd->simno[1]&0x0f;

    savetmp->str_6A.xd_simno[3] = (s_6axd->simno[1]&0xf0)>>4;

    savetmp->str_6A.xd_simno[4] = s_6axd->simno[2]&0x0f;

    savetmp->str_6A.xd_simno[5] = (s_6axd->simno[2]&0xf0)>>4;

    savetmp->str_6A.xd_simno[6] = s_6axd->simno[3]&0x0f;

    savetmp->str_6A.xd_simno[7] = (s_6axd->simno[3]&0xf0)>>4;

    savetmp->str_6A.xd_simno[8] = s_6axd->simno[4]&0x0f;

    savetmp->str_6A.xd_simno[9] = (s_6axd->simno[4]&0xf0)>>4;

    savetmp->str_6A.xd_simno[10] = s_6axd->simno[5]&0x0f;

    savetmp->str_6A.xd_simno[11] = (s_6axd->simno[5]&0xf0)>>4;

    savetmp->str_6A.xd_simno[12] = 0;

    memcpy(savetmp->str_6A.xd_carno,s_6axd->carno,16);

    yy = 2000+s_6axd->date[0];

    mm = s_6axd->date[1];

    dd = s_6axd->date[2];

    hh = s_6axd->date[3];

    mi = s_6axd->date[4];

    ss = s_6axd->date[5];



    sprintf(savetmp->str_6A.xtsj,"%d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);



    savetmp->str_6A.xd_cenver = (SWAP2(s_6axd->ptbb)%1000)*0.01f;

    //printf("6A先导报文解析ptbb=%d\n",SWAP2(s_6axd->ptbb)%1000);



    /* add by linw 20160328 */

    key = savetmp->key;

    ptraininfo = c_map_at(&traininfo_map, &key);

    if (ptraininfo != NULL)

    {

        ptraininfo->SIXA_CPUVER = savetmp->str_6A.xd_cenver;

    }



    savetmp->str_6A.xd_flag = 1;

}



/*解析6A 瞭望报文*/

void parse_6ALWinfo(uchar* data,int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_6ALW *s_6alw = (struct STR_6ALW *)(data+offset);

    savetmp->str_6a_lw.ERRLW  = s_6alw->err;

    savetmp->str_6a_lw.STA  = s_6alw->sta;



    savetmp->flag_6a_lw = 1;

}



/*解析6A 电能报文*/

void parse_6ADNinfo(uchar* data,int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_6ADN *s_6adn = (struct STR_6ADN *)(data+offset);

    savetmp->str_6a_dn.DY   = SWAP4(s_6adn->dy)  *0.001f;

    savetmp->str_6a_dn.DL   = SWAP4(s_6adn->dl)  *0.001f;

    savetmp->str_6a_dn.PL   = SWAP4(s_6adn->pl)	 *0.001f;

    savetmp->str_6a_dn.GLYS = SWAP4(s_6adn->glys)*0.001f;

    savetmp->str_6a_dn.YGGL = SWAP4(s_6adn->yggl)*0.001f;

    savetmp->str_6a_dn.WGGL = SWAP4(s_6adn->wggl)*0.001f;

    savetmp->str_6a_dn.ZXYG = SWAP4(s_6adn->zxyg)*0.001f;

    savetmp->str_6a_dn.FXYG = SWAP4(s_6adn->fxyg)*0.001f;

    savetmp->str_6a_dn.ZXWG = SWAP4(s_6adn->zxwg)*0.001f;

    savetmp->str_6a_dn.FXWG = SWAP4(s_6adn->fxwg)*0.001f;

    savetmp->flag_6a_dn = 1;

}



/*解析6A 油位报文*/

void parse_6AYWinfo(uchar* data,int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    struct STR_6AYW *s_6ayw = (struct STR_6AYW *)(data+offset);

    savetmp->str_6a_yw.YL = SWAP4(s_6ayw->yl);

    savetmp->str_6a_yw.YW = SWAP4(s_6ayw->yw);



    savetmp->flag_6a_yw = 1;

}



/*解析6A 子系统判定函数*/

void parse_6Ainfo_entry(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    uchar pakflag = data[offset+5];/*6A报文标识*/

    int datalen = charToint(data+offset,2);/*6a数据块长度,去除LDP添加的报文头5字节*/



    switch(pakflag)

    {

    case 0XB0:

        parse_6AXDinfo(data,offset,savetmp);/*先导报文*/

        break;

    case 0XB1:

        parse_6AZDinfo(data,offset,savetmp);/*制动报文*/

        break;

    case 0XB2:

        parse_6AFHinfo(data,offset,savetmp);/*防火报文*/

        break;

    case 0XB3:

        parse_6AJYinfo(data,offset,savetmp);/*绝缘报文*/

        break;

    case 0XB4:

        parse_6ALGinfo(data,offset,savetmp);/*列供报文*/

        break;

    case 0XB5:

        parse_6AZX1info(data,offset,savetmp);/*走形1报文*/

        break;

    case 0XB7:

        parse_6ASPinfo(data,offset,savetmp);/*视频报文*/

        break;

    case 0XB8:

        parse_6ALWinfo(data,offset,savetmp);/*瞭望报文*/

        break;

    case 0XB9:

        parse_6ADNinfo(data,offset,savetmp);/*电能报文*/

        break;

    case 0XBA:

        parse_6AYWinfo(data,offset,savetmp);/*油位报文*/

        break;



    default:

        lprintf(disp.g,"3G解析：未知的6A报文类型：%x\n",pakflag);

    }

}



/*解析V2.2版本 自检信息 add by guo 20160902*/

void parse_ldpinfo_v22(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    int yy=0,mm=0,dd=0,hh=0,mi=0,ss=0;

    ptraininfo_stu ptraininfo = NULL;

 //   struct AP_DEFENDER_MGR ap_denfender_mgr;

    int key;

    struct STR_LDPINFO_V22 *s_ldp = (struct STR_LDPINFO_V22 *)(data+offset);



//    sprintf(ap_denfender_mgr.t_type_id,"%03d",savetmp->t_type_id);

//    sprintf(ap_denfender_mgr.loco_no,"%04d",savetmp->loco_no);

//    ap_denfender_mgr.ab = savetmp->ab;

//    ap_denfender_mgr.factory_no = s_ldp->c5;

//    /*防护记录器厂家（1：株洲所；2：道麒；3：锦达；）*/

//    if(s_ldp->c5 == 1)

//    {

//        sprintf(ap_denfender_mgr.factory_name,"株洲所");

//    }

//    else if(s_ldp->c5 == 2)

//    {

//        sprintf(ap_denfender_mgr.factory_name,"道麒");

//    }

//    else if(s_ldp->c5 == 3)

//    {

//        sprintf(ap_denfender_mgr.factory_name,"锦达");

//    }

//    memcpy(ap_denfender_mgr.serious_no,s_ldp->c6,16);

//    sprintf(ap_denfender_mgr.software_no,"%04d%02d%02d",s_ldp->c67[0]+2000,s_ldp->c67[1],s_ldp->c67[2]);



//    update_ap_denfender_mgr(ap_denfender_mgr);



    savetmp->str_self_check.VER = s_ldp->s_tou.c4;

    savetmp->str_self_check.FHJLQCJ = s_ldp->c5;





    yy=s_ldp->c80[0]+2000;

    mm=s_ldp->c80[1];

    dd=s_ldp->c80[2];

    hh=s_ldp->c80[3];

    mi=s_ldp->c80[4];

    ss=s_ldp->c80[5];

    if(!checkdate(yy,mm,dd,hh,mi,ss))

    {

        getDateTime(&yy,&mm,&dd,&hh,&mi,&ss);

    }

    sprintf(savetmp->str_self_check.LDP_SJ,"%04d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);



    memcpy(savetmp->str_self_check.FHJLQXLH,s_ldp->c6,16);



    savetmp->str_self_check.COMP = s_ldp->c22;

    memcpy(savetmp->str_self_check.LDP_XH,s_ldp->c23,12);

    memcpy(savetmp->str_self_check.LDP_CCBH,s_ldp->c39,12);

    savetmp->str_self_check.LDP_CPU_VER =SWAP2(s_ldp->c55) *0.001f;



    sprintf(savetmp->str_self_check.LDPZCLQRJSJBB,"%04d%02d%02d",s_ldp->c57[0]+2000,s_ldp->c57[1],s_ldp->c57[2]);

    savetmp->str_self_check.LDP_WXTX_VER =SWAP2(s_ldp->c60) *0.001f;

    sprintf(savetmp->str_self_check.LDPWXTXBRJSJBB,"%04d%02d%02d",s_ldp->c62[0]+2000,s_ldp->c62[1],s_ldp->c62[2]);

    savetmp->str_self_check.FHJLQ_VER =SWAP2(s_ldp->c65) *0.001f;

    sprintf(savetmp->str_self_check.FHJLQRJSJBB,"%04d%02d%02d",s_ldp->c67[0]+2000,s_ldp->c67[1],s_ldp->c67[2]);

    savetmp->str_self_check.WLJKB_VER =SWAP2(s_ldp->c70) *0.001f;

    sprintf(savetmp->str_self_check.WLJKBRJSJBB,"%04d%02d%02d",s_ldp->c72[0]+2000,s_ldp->c72[1],s_ldp->c72[2]);

    savetmp->str_self_check.BDBRJBB =SWAP2(s_ldp->c75) *0.001f;

    sprintf(savetmp->str_self_check.BDBRJSJBB,"%04d%02d%02d",s_ldp->c77[0]+2000,s_ldp->c77[1],s_ldp->c77[2]);









//    sprintf(savetmp->str_self_check.LDPZCLQRJSJBB,"%04d-%02d-%02d %02d:%02d:%02d",s_ldp->c57[0]+2000,s_ldp->c57[1],s_ldp->c57[2],hh,mi,ss);

//    sprintf(savetmp->str_self_check.LDPZCLQRJSJBB,"%04d-%02d-%02d %02d:%02d:%02d",s_ldp->c57[0]+2000,s_ldp->c57[1],s_ldp->c57[2],hh,mi,ss);

//    savetmp->str_self_check.LDP_WXTX_VER =SWAP2(s_ldp->c60) *0.001f;

//    sprintf(savetmp->str_self_check.LDPWXTXBRJSJBB,"%04d-%02d-%02d %02d:%02d:%02d",s_ldp->c62[0]+2000,s_ldp->c62[1],s_ldp->c62[2],hh,mi,ss);

//    savetmp->str_self_check.FHJLQ_VER =SWAP2(s_ldp->c65) *0.001f;

//    sprintf(savetmp->str_self_check.FHJLQRJSJBB,"%04d-%02d-%02d %02d:%02d:%02d",s_ldp->c67[0]+2000,s_ldp->c67[1],s_ldp->c67[2],hh,mi,ss);

//    savetmp->str_self_check.WLJKB_VER =SWAP2(s_ldp->c70) *0.001f;

//    sprintf(savetmp->str_self_check.WLJKBRJSJBB,"%04d-%02d-%02d %02d:%02d:%02d",s_ldp->c72[0]+2000,s_ldp->c72[1],s_ldp->c72[2],hh,mi,ss);

//    savetmp->str_self_check.BDBRJBB =SWAP2(s_ldp->c75) *0.001f;

//    sprintf(savetmp->str_self_check.BDBRJSJBB,"%04d-%02d-%02d %02d:%02d:%02d",s_ldp->c77[0]+2000,s_ldp->c77[1],s_ldp->c77[2],hh,mi,ss);



    //printf("LDPZCLQRJSJBB = %s \n",savetmp->str_self_check.LDPZCLQRJSJBB);

    //printf("LDPWXTXBRJSJBB = %s \n",savetmp->str_self_check.LDPWXTXBRJSJBB);

    //printf("FHJLQRJSJBB = %s \n",savetmp->str_self_check.FHJLQRJSJBB);

    //printf("WLJKBRJSJBB = %s \n",savetmp->str_self_check.WLJKBRJSJBB);

    //printf("BDBRJSJBB = %s \n",savetmp->str_self_check.BDBRJSJBB);



    sprintf(savetmp->str_self_check.WLANSSIDBB,"%04d-%02d-%02d",s_ldp->c86[0]+2000,s_ldp->c86[1],s_ldp->c86[2]);

    memcpy(savetmp->str_self_check.SIMID,s_ldp->c92,32);

    savetmp->str_self_check.LL3GSY_M = SWAP2(s_ldp->c124);

    savetmp->str_self_check.LL3GSY_Y = SWAP2(s_ldp->c126);



    /*edit by guo 20160530*/

    //printf("s_ldp->c88[0] = %d,s_ldp->c88[0]>>7 = %d\n",(int)(s_ldp->c88[0]&0x7f),(int)((s_ldp->c88[0]>>7)&1));

    if((int)((s_ldp->c128[0]>>7)&1) == 1)

    {

        //年的高一位为0：思维，1：株所

        sprintf(savetmp->str_self_check.LKJVER,"ZS%04d%02d%02d",2000+(int)(s_ldp->c128[0]&0x7f),s_ldp->c128[1]&0x0f,s_ldp->c128[2]&0x0f);

        //printf("1:%s,\n",savetmp->str_self_check.LKJVER);

    }else if((int)((s_ldp->c128[0]>>7)&1) == 0)

    {

        sprintf(savetmp->str_self_check.LKJVER,"SW%04d%02d%02d",2000+(int)(s_ldp->c128[0]&0x7f),s_ldp->c128[1]&0x0f,s_ldp->c128[2]&0x0f);

        //printf("2:%s\n",savetmp->str_self_check.LKJVER);

    }else

    {

        sprintf(savetmp->str_self_check.LKJVER,"%04d%02d%02d",2000+(int)(s_ldp->c128[0]&0x7f),s_ldp->c128[1]&0x0f,s_ldp->c128[2]&0x0f);

        //printf("3：%s\n",savetmp->str_self_check.LKJVER);

    }



    //printf("s_ldp->c91[0]= %d,s_ldp->c91[0] = %d\n",(int)(s_ldp->c91[0]&0x7f),(int)((s_ldp->c91[0]>>7)&1));

    if((int)((s_ldp->c131[0]>>7)&1) == 1)

    {

        //年的高一位为0：思维，1：株所

        sprintf(savetmp->str_self_check.LKJDATAVER,"ZS%04d%02d%02d",2000+(int)(s_ldp->c131[0]&0x7f),s_ldp->c131[1]&0x0f,s_ldp->c131[2]&0x0f);

        //printf("11:%s,\n",savetmp->str_self_check.LKJVER);

    }else if((int)((s_ldp->c131[0]>>7)&1) == 0)

    {

        sprintf(savetmp->str_self_check.LKJDATAVER,"SW%04d%02d%02d",2000+(int)(s_ldp->c131[0]&0x7f),s_ldp->c131[1]&0x0f,s_ldp->c131[2]&0x0f);

        //printf("22:%s\n",savetmp->str_self_check.LKJVER);

    }else

    {

        sprintf(savetmp->str_self_check.LKJDATAVER,"%04d%02d%02d",2000+(int)(s_ldp->c131[0]&0x7f),s_ldp->c131[1]&0x0f,s_ldp->c131[2]&0x0f);

        //printf("33：%s\n",savetmp->str_self_check.LKJVER);

    }



    //sprintf(savetmp->str_self_check.LKJVER,"%04d%02d%02d",2000+s_ldp->c88[0],s_ldp->c88[1],s_ldp->c88[2]);

    //sprintf(savetmp->str_self_check.LKJDATAVER,"%04d%02d%02d",2000+s_ldp->c91[0],s_ldp->c91[1],s_ldp->c91[2]);

    savetmp->str_self_check.VER6A        = ((int)s_ldp->c134[0] &0x000000ff)

            +((int)s_ldp->c134[1]<<8) &0x0000ff00

            +((int)s_ldp->c134[2]<<16 &0x00ff0000);/*NUMBER(9),        */



    savetmp->str_self_check.INTERVAL0    =  s_ldp->c137;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL20   = s_ldp->c138;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL40   = s_ldp->c139;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL60   = s_ldp->c140;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL80   = s_ldp->c141;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL100  = s_ldp->c142;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL120  = s_ldp->c143;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL140  = s_ldp->c144;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL160  = s_ldp->c145;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL180  = s_ldp->c146;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVALOTHER = s_ldp->c147;/*NUMBER(3)         */

    savetmp->flag_selfcheck = 1;





   // printf("chex = %s,cheh = %s 自检信息V2.2版本\n",savetmp->t_type_id,savetmp->loco_no);

    key = savetmp->key;

    ptraininfo = c_map_at(&traininfo_map,&key);

    if (ptraininfo != NULL)

    {

        memcpy(ptraininfo->LKJVER, savetmp->str_self_check.LKJVER, 21);



        /* add by linw 20160328 */

        memcpy(ptraininfo->LKJ_SOFT_VER, savetmp->str_self_check.LKJVER, 21);

        memcpy(ptraininfo->LKJ_DATA_VER, savetmp->str_self_check.LKJDATAVER, 21);



        ptraininfo->LDP_CPU_VER = savetmp->str_self_check.LDP_CPU_VER;

        ptraininfo->LDP_WXTX_VER = savetmp->str_self_check.LDP_WXTX_VER;

        ptraininfo->FHJLQ_VER = savetmp->str_self_check.FHJLQ_VER;

        ptraininfo->WLJKB_VER = savetmp->str_self_check.WLJKB_VER;



        /*modified by zhangjing 20160407*/

        ptraininfo->PROVERSELFCHECK = savetmp->str_self_check.VER;

        ptraininfo->COMP = savetmp->str_self_check.COMP;

      //  printf("PROVERSELFCHECK %d, COMP %d\n", ptraininfo->PROVERSELFCHECK, ptraininfo->COMP);

        if (10 < ptraininfo->COMP)

        {

            ptraininfo->COMP = 0;

        }

    }



}



/*解析V2.1版本 自检信息*/

void parse_ldpinfo_v21(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    int yy=0,mm=0,dd=0,hh=0,mi=0,ss=0;

    ptraininfo_stu ptraininfo = NULL;

    int key;

    struct STR_LDPINFO_V21 *s_ldp = (struct STR_LDPINFO_V21 *)(data+offset);



    savetmp->str_self_check.VER = s_ldp->s_tou.c4;

    savetmp->str_self_check.COMP = s_ldp->c5;

    savetmp->str_self_check.FHJLQCJ = s_ldp->c6;





    memcpy(savetmp->str_self_check.LDP_XH,s_ldp->c7,12);

    memcpy(savetmp->str_self_check.LDP_CCBH,s_ldp->c19,12);

    savetmp->str_self_check.LDP_CPU_VER =SWAP2(s_ldp->c31) *0.001f;

    savetmp->str_self_check.LDP_WXTX_VER =SWAP2(s_ldp->c33) *0.001f;

    savetmp->str_self_check.FHJLQ_VER =SWAP2(s_ldp->c35) *0.001f;

    savetmp->str_self_check.WLJKB_VER =SWAP2(s_ldp->c37) *0.001f;



    yy=s_ldp->c39[0]+2000;

    mm=s_ldp->c39[1];

    dd=s_ldp->c39[2];

    hh=s_ldp->c39[3];

    mi=s_ldp->c39[4];

    ss=s_ldp->c39[5];

    if(!checkdate(yy,mm,dd,hh,mi,ss))

    {

        getDateTime(&yy,&mm,&dd,&hh,&mi,&ss);

    }

    sprintf(savetmp->str_self_check.LDP_SJ,"%04d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);



    savetmp->str_self_check.FHJLQKYRL = SWAP2(s_ldp->c48);

    savetmp->str_self_check.FLJLQZRL = SWAP2(s_ldp->c50);

    memcpy(savetmp->str_self_check.SIMID,s_ldp->c52,32);

    savetmp->str_self_check.LL3GSY_M = SWAP2(s_ldp->c84);

    savetmp->str_self_check.LL3GSY_Y = SWAP2(s_ldp->c86);



    /*edit by guo 20160530*/

    //printf("s_ldp->c88[0] = %d,s_ldp->c88[0]>>7 = %d\n",(int)(s_ldp->c88[0]&0x7f),(int)((s_ldp->c88[0]>>7)&1));

    if((int)((s_ldp->c88[0]>>7)&1) == 1)

    {

        //年的高一位为0：思维，1：株所

        sprintf(savetmp->str_self_check.LKJVER,"ZS%04d%02d%02d",2000+(int)(s_ldp->c88[0]&0x7f),s_ldp->c88[1]&0x0f,s_ldp->c88[2]&0x0f);

        //printf("1:%s,\n",savetmp->str_self_check.LKJVER);

    }else if((int)((s_ldp->c88[0]>>7)&1) == 0)

    {

        sprintf(savetmp->str_self_check.LKJVER,"SW%04d%02d%02d",2000+(int)(s_ldp->c88[0]&0x7f),s_ldp->c88[1]&0x0f,s_ldp->c88[2]&0x0f);

        //printf("2:%s\n",savetmp->str_self_check.LKJVER);

    }else

    {

        sprintf(savetmp->str_self_check.LKJVER,"%04d%02d%02d",2000+(int)(s_ldp->c88[0]&0x7f),s_ldp->c88[1]&0x0f,s_ldp->c88[2]&0x0f);

        //printf("3：%s\n",savetmp->str_self_check.LKJVER);

    }



    //printf("s_ldp->c91[0]= %d,s_ldp->c91[0] = %d\n",(int)(s_ldp->c91[0]&0x7f),(int)((s_ldp->c91[0]>>7)&1));

    if((int)((s_ldp->c91[0]>>7)&1) == 1)

    {

        //年的高一位为0：思维，1：株所

        sprintf(savetmp->str_self_check.LKJDATAVER,"ZS%04d%02d%02d",2000+(int)(s_ldp->c91[0]&0x7f),s_ldp->c91[1]&0x0f,s_ldp->c91[2]&0x0f);

        //printf("11:%s,\n",savetmp->str_self_check.LKJVER);

    }else if((int)((s_ldp->c91[0]>>7)&1) == 0)

    {

        sprintf(savetmp->str_self_check.LKJDATAVER,"SW%04d%02d%02d",2000+(int)(s_ldp->c91[0]&0x7f),s_ldp->c91[1]&0x0f,s_ldp->c91[2]&0x0f);

        //printf("22:%s\n",savetmp->str_self_check.LKJVER);

    }else

    {

        sprintf(savetmp->str_self_check.LKJDATAVER,"%04d%02d%02d",2000+(int)(s_ldp->c91[0]&0x7f),s_ldp->c91[1]&0x0f,s_ldp->c91[2]&0x0f);

        //printf("33：%s\n",savetmp->str_self_check.LKJVER);

    }



    //sprintf(savetmp->str_self_check.LKJVER,"%04d%02d%02d",2000+s_ldp->c88[0],s_ldp->c88[1],s_ldp->c88[2]);

    //sprintf(savetmp->str_self_check.LKJDATAVER,"%04d%02d%02d",2000+s_ldp->c91[0],s_ldp->c91[1],s_ldp->c91[2]);

    savetmp->str_self_check.VER6A        = ((int)s_ldp->c94[0] &0x000000ff)

            +((int)s_ldp->c94[1]<<8) &0x0000ff00

            +((int)s_ldp->c94[2]<<16 &0x00ff0000);/*NUMBER(9),        */







    savetmp->str_self_check.INTERVAL0    =  s_ldp->c97;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL20   = s_ldp->c98;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL40   = s_ldp->c99;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL60   = s_ldp->c100;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL80   = s_ldp->c101;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL100  = s_ldp->c102;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL120  = s_ldp->c103;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL140  = s_ldp->c104;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL160  = s_ldp->c105;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVAL180  = s_ldp->c106;/*NUMBER(3),        */

    savetmp->str_self_check.INTERVALOTHER = s_ldp->c107;/*NUMBER(3)         */

    savetmp->flag_selfcheck = 1;



    key = savetmp->key;

    ptraininfo = c_map_at(&traininfo_map,&key);

    if (ptraininfo != NULL)

    {

        memcpy(ptraininfo->LKJVER, savetmp->str_self_check.LKJVER, 21);



        /* add by linw 20160328 */

        memcpy(ptraininfo->LKJ_SOFT_VER, savetmp->str_self_check.LKJVER, 21);

        memcpy(ptraininfo->LKJ_DATA_VER, savetmp->str_self_check.LKJDATAVER, 21);



        ptraininfo->LDP_CPU_VER = savetmp->str_self_check.LDP_CPU_VER;

        ptraininfo->LDP_WXTX_VER = savetmp->str_self_check.LDP_WXTX_VER;

        ptraininfo->FHJLQ_VER = savetmp->str_self_check.FHJLQ_VER;

        ptraininfo->WLJKB_VER = savetmp->str_self_check.WLJKB_VER;



        /*modified by zhangjing 20160407*/







        ptraininfo->PROVERSELFCHECK = savetmp->str_self_check.VER;

        ptraininfo->COMP = savetmp->str_self_check.COMP;



     //   printf("PROVERSELFCHECK %d, COMP %d\n", ptraininfo->PROVERSELFCHECK, ptraininfo->COMP);

//        if(key == 61441)

//        {

//            printf("VER %d, COMP %d\n",  savetmp->str_self_check.VER, savetmp->str_self_check.COMP);

//            printf("PROVERSELFCHECK %d, COMP %d\n", ptraininfo->PROVERSELFCHECK, ptraininfo->COMP);

//        }

        if (10 < ptraininfo->COMP)

        {

            ptraininfo->COMP = 0;

        }

    }



}



/*解析V2.0版本 自检信息*/

void parse_ldpinfo_v20(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    ptraininfo_stu  ptraininfo = NULL;

    int key;

    int yy=0,mm=0,dd=0,hh=0,mi=0,ss=0;

    struct STR_LDPINFO_V20 *s_ldp = (struct STR_LDPINFO_V20 *)(data+offset);



    savetmp->str_self_check.VER = 20;

    savetmp->str_self_check.COMP = s_ldp->c5;

    savetmp->str_self_check.FHJLQCJ = s_ldp->c6;





    memcpy(savetmp->str_self_check.LDP_XH,s_ldp->c7,12);

    memcpy(savetmp->str_self_check.LDP_CCBH,s_ldp->c19,12);

    savetmp->str_self_check.LDP_CPU_VER =SWAP2(s_ldp->c31) *0.001f;

    savetmp->str_self_check.LDP_WXTX_VER =SWAP2(s_ldp->c33) *0.001f;

    savetmp->str_self_check.FHJLQ_VER =SWAP2(s_ldp->c35) *0.001f;

    savetmp->str_self_check.WLJKB_VER =SWAP2(s_ldp->c37) *0.001f;



    yy=s_ldp->c39[0]+2000;

    mm=s_ldp->c39[1];

    dd=s_ldp->c39[2];

    hh=s_ldp->c39[3];

    mi=s_ldp->c39[4];

    ss=s_ldp->c39[5];

    if(!checkdate(yy,mm,dd,hh,mi,ss))

    {

        getDateTime(&yy,&mm,&dd,&hh,&mi,&ss);

    }

    sprintf(savetmp->str_self_check.LDP_SJ,"%04d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);



    savetmp->str_self_check.BK_STATUS = SWAP2(s_ldp->c45);

    savetmp->str_self_check.TXZT = s_ldp->c47;

    savetmp->str_self_check.FHJLQKYRL = SWAP2(s_ldp->c48);

    savetmp->str_self_check.FLJLQZRL = SWAP2(s_ldp->c50);

    memcpy(savetmp->str_self_check.SIMID,s_ldp->c52,20);

    savetmp->str_self_check.LL3GSY_M = SWAP2(s_ldp->c72);

    savetmp->str_self_check.LL3GSY_Y = SWAP2(s_ldp->c74);

    //edit by guo 20160428

    //printf("before LKJVER:%04d,%02d,%02d\n",s_ldp->c76[0],s_ldp->c76[1],s_ldp->c76[2]);

    //printf("during LKJVER:%04d,%02d,%02d\n",s_ldp->c76[0]&0x7F,s_ldp->c76[1]&0x0F,s_ldp->c76[2]&0x0F);

    sprintf(savetmp->str_self_check.LKJVER,"%04d%02d%02d",2000+(s_ldp->c76[0]&0x7F),s_ldp->c76[1]&0x0F,s_ldp->c76[2]&0x0F);

   // printf("after LKJVER:%s\n",savetmp->str_self_check.LKJVER);



    //sprintf(savetmp->str_self_check.LKJVER,"%04d%02d%02d",2000+s_ldp->c76[0],s_ldp->c76[1],s_ldp->c76[2]);



    savetmp->flag_selfcheck = 1;



    key = savetmp->key;

    ptraininfo = c_map_at(&traininfo_map,&key);

    if (ptraininfo != NULL)

    {

        //        memcpy(ptraininfo->LKJVER,savetmp->str_self_check.LKJVER,21);



        /* add by linw 20160328 */

        sprintf(savetmp->str_self_check.LKJDATAVER,"00000000");

        memcpy(ptraininfo->LKJVER, savetmp->str_self_check.LKJVER, 21);

        memcpy(ptraininfo->LKJ_SOFT_VER, savetmp->str_self_check.LKJVER, 21);

        memcpy(ptraininfo->LKJ_DATA_VER, savetmp->str_self_check.LKJDATAVER, 21);



        ptraininfo->LDP_CPU_VER = savetmp->str_self_check.LDP_CPU_VER;

        ptraininfo->LDP_WXTX_VER = savetmp->str_self_check.LDP_WXTX_VER;

        ptraininfo->FHJLQ_VER = savetmp->str_self_check.FHJLQ_VER;

        ptraininfo->WLJKB_VER = savetmp->str_self_check.WLJKB_VER;



        /*modified by zhangjing 20160407*/

        ptraininfo->PROVERSELFCHECK = savetmp->str_self_check.VER;

        ptraininfo->COMP = savetmp->str_self_check.COMP;

     //   printf("v21 PROVERSELFCHECK %d, COMP %d\n", ptraininfo->PROVERSELFCHECK, ptraininfo->COMP);

        if (10 < ptraininfo->COMP)

        {

            ptraininfo->COMP = 0;

        }

    }

}



/*自检信息版本判定函数*/

void parse_ldpinfo_entry(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    uchar ver = data[offset+4];

    switch(ver)

    {

    case 20:

        parse_ldpinfo_v20(data,offset,savetmp);

        break;

    case 21:

        parse_ldpinfo_v21(data,offset,savetmp);

        break;

    case 22:

        parse_ldpinfo_v22(data,offset,savetmp);

        break;

    default:

        ;

    }

}



/*解析V2.0 电力机车版本信息*/

void parse_ljlinfo_entry(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    /* add by linw 20160328 */

    int key;

    ptraininfo_stu ptraininfo = NULL;



    struct STR_LJLYBBINFO_V20 *s_ljl = (struct STR_LJLYBBINFO_V20 *)(data+offset);



    savetmp->str_tcms_dl_v20.str_ljlybbxx.bbxx_jcyxlc = SWAP4(s_ljl->c5);

    savetmp->str_tcms_dl_v20.str_ljlybbxx.bbxx_zdlqdzcs = SWAP4(s_ljl->c9);

    savetmp->str_tcms_dl_v20.str_ljlybbxx.bbxx_ysj1_yxljsj= SWAP4(s_ljl->c13)*0.1f;

    savetmp->str_tcms_dl_v20.str_ljlybbxx.bbxx_ysj2_yxljsj= SWAP4(s_ljl->c17)*0.1f;

    savetmp->str_tcms_dl_v20.str_ljlybbxx.bbxx_tcms_zkdybb1= SWAP4(s_ljl->c21);

    savetmp->str_tcms_dl_v20.str_ljlybbxx.bbxx_tcms_zkdybb2= SWAP4(s_ljl->c25);

    savetmp->str_tcms_dl_v20.str_ljlybbxx.bbxx_wgdybb1= SWAP4(s_ljl->c29);

    savetmp->str_tcms_dl_v20.str_ljlybbxx.bbxx_wgdybb2= SWAP4(s_ljl->c33);



    /* add by linw 20160328 */

    key = savetmp->key;

    ptraininfo = c_map_at(&traininfo_map, &key);

    if (ptraininfo != NULL)

    {

        ptraininfo->TCMS_VER1 = savetmp->str_tcms_dl_v20.str_ljlybbxx.bbxx_tcms_zkdybb1;

        ptraininfo->TCMS_VER2 = savetmp->str_tcms_dl_v20.str_ljlybbxx.bbxx_tcms_zkdybb2;

        ptraininfo->TCMS_VER3 = savetmp->str_tcms_dl_v20.str_ljlybbxx.bbxx_wgdybb1;

        ptraininfo->TCMS_VER4 = savetmp->str_tcms_dl_v20.str_ljlybbxx.bbxx_wgdybb2;

    }

}



/*解析V2.0 内燃机车版本信息*/

void parse_ljlinfo_nr(uchar* data, int offset,struct STR_TRAIN_DATA_3G *savetmp)

{

    /* add by linw 20160328 */

    int key;

    ptraininfo_stu ptraininfo = NULL;

    struct STR_LJLYBBINFO_N_V20 *s_versioninfo_n3_v2 = (struct STR_LJLYBBINFO_N_V20 *)(data+offset);



    savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_kyj1_yxsj	=SWAP2(s_versioninfo_n3_v2->c5)   ;

    savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_kyj2_yxsj	=SWAP2(s_versioninfo_n3_v2->c7)   ;

    savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_jcyxlc		=SWAP4(s_versioninfo_n3_v2->c9)   ;

    savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_qynlljl		=SWAP4(s_versioninfo_n3_v2->c13)   ;

    savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_zfhnlljl		=SWAP4(s_versioninfo_n3_v2->c17)   ;

    savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_dzzdnlljl	=SWAP4(s_versioninfo_n3_v2->c21)   ;

    savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_dzsjljl		=SWAP4(s_versioninfo_n3_v2->c25)   ;

    savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_qysjljl		=SWAP4(s_versioninfo_n3_v2->c29)   ;

    savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_zfhsjljl		=SWAP4(s_versioninfo_n3_v2->c33)   ;

    savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_dzzdsjljl	=SWAP4(s_versioninfo_n3_v2->c37)   ;

    savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_wjrjbbh		=SWAP4(s_versioninfo_n3_v2->c41)   ;

    savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_wjrjbbhry	=SWAP4(s_versioninfo_n3_v2->c45)   ;

    savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_wg_gwm_rjbbh	=SWAP4(s_versioninfo_n3_v2->c49)   ;

    savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_wg_gwm_rjbbh_ry	=SWAP4(s_versioninfo_n3_v2->c53)   ;



    /* add by linw 20160328 */

    key = savetmp->key;

    ptraininfo = c_map_at(&traininfo_map, &key);

    if (ptraininfo != NULL)

    {

        ptraininfo->TCMS_VER1 = savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_wjrjbbh;

        ptraininfo->TCMS_VER2 = savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_wjrjbbhry;

        ptraininfo->TCMS_VER3 = savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_wg_gwm_rjbbh;

        ptraininfo->TCMS_VER4 = savetmp->str_tcms_nr_v20.str_ljlybbxx.bbxx_wg_gwm_rjbbh_ry;

    }

}



/*3g通道入口函数*/

uchar parse_3g(uchar *data, int length)
{
    int i;
    int sequence;
    int ret = 0;
    uint16 cheh=0;
    uint16 chex=0;
    time_t time_val;
    int yy=0,mm=0,dd=0,hh=0,mi=0,ss=0;
    int yy1=0,mm1=0,dd1=0,hh1=0,mi1=0,ss1=0;
    unsigned int tm = 0;
    int blocklen	=0 ;
    int	data_type	=0;
    int offset		=0;
    int findflag    = 0;
    int key;
    struct STR_DATAHEAD *s_head;
    ptraininfo_stu ptraininfo = NULL;
    struct PARSE_ERROR_LOG parse_error;
    sequence = gloab_3g_usednum;
    if(gloab_3g_usednum >= NUM_3G)
    {
        //printf("存储3G数据容器已满\n");
        return ERR;
    }
    memset(&gloab_3g[sequence],0,sizeof(gloab_3g[sequence]));
    if(getGuid(gloab_3g[sequence].idx) == -1)
    {
        lprintf(disp.g,"3G解析:获取idx失败\n");
        lprintf(disp.e,"3G解析:获取idx失败\n");
        return ERR;
    }

    s_head = (struct STR_DATAHEAD *)(data+offset);
    gloab_3g[sequence].str_datahead.XXLX = s_head->c8;
    gloab_3g[sequence].str_datahead.XXDJ = s_head->c9;
    gloab_3g[sequence].str_datahead.ZH = SWAP2(s_head->c10);
    gloab_3g[sequence].str_datahead.SJCD = SWAP2(s_head->c12);
    gloab_3g[sequence].str_datahead.FZBSH = s_head->c14;
    gloab_3g[sequence].str_datahead.FZH = s_head->c15;
    chex = SWAP2(s_head->c16);
    cheh = SWAP2(s_head->c18);
    key = gloab_3g[sequence].key = ((chex<<16)&0xc0ff0000) + (cheh&0x3FFF);
#ifdef UNIX_LINUX_SYS
    sprintf(gloab_3g[sequence].t_type_id,"%03d",chex& 0x3FF);
    sprintf(gloab_3g[sequence].loco_no,"%04d",cheh &0x3FFF);
#else
    _snprintf(gloab_3g[sequence].t_type_id,3,"%03d",chex& 0x3FF);
    _snprintf(gloab_3g[sequence].loco_no,4,"%04d",cheh &0x3FFF);
#endif
    if(chex & 0x8000)
    {
        gloab_3g[sequence].ab = 1;
    }
    else if(chex & 0x4000)
    {
        gloab_3g[sequence].ab = 2;
    }
    else
    {
        gloab_3g[sequence].ab = 0;
    }

  //yy = 2000+s_head->c20[0];
    yy = s_head->c20[0];
    mm = s_head->c20[1];
    dd = s_head->c20[2];
    hh = s_head->c20[3];
    mi = s_head->c20[4];
    ss = s_head->c20[5];
    /*add by guo 20160824*/
    sprintf(parse_error.t_type_id,"%03d",chex & 0x3FF);
    sprintf(parse_error.loco_no,"%04d",cheh & 0x3FFF);
    sprintf(parse_error.btsj, "%d-%02d-%02d %02d:%02d:%02d", yy+2000, mm, dd, hh, mi, ss);

    if(checkdate(yy + 2000,mm,dd,hh,mi,ss))
    {
        /*add by guo 20160713*/
        tm = ((unsigned char)(yy&0x0000003f)<<26)
                | ((unsigned char)(mm&0x0000000f)<<22)
                | ((unsigned char)(dd&0x0000001f)<<17)
                | ((unsigned char)(hh&0x0000001f)<<12)
                | ((unsigned char)(mi&0x0000003f)<<6)
                |(ss&0x0000003f);
        //ret = judge_3g(tm,key);
		ret = 1;
        if(0 == ret)
        {
            //去重成功
            sprintf(gloab_3g[sequence].btsj,"%d-%02d-%02d %02d:%02d:%02d",yy+2000,mm,dd,hh,mi,ss);
            return ERR;
        }
		else if(2 == ret)
        {
            lprintf(disp.b,"3G解析:%03d-%04d时间超出服务器600s\n",chex&0x3ff,cheh);
            sprintf(gloab_3g[sequence].btsj,"%d-%02d-%02d %02d:%02d:%02d",yy+2000,mm,dd,hh,mi,ss);
            parse_error.datatype = 1;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/
            parse_error.efield = 1;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/
            sprintf(parse_error.ereason, "3G解析:超出服务器时间600s,btsj:%04d-%02d-%02d %02d:%02d:%02d",yy+2000,mm,dd,hh,mi,ss);
            getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);
            sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);
            insert_AP_PARSE_ERROR_LOG(parse_error);
            //return ERR;/*edit by guo 20160725*/
        }
		else if(1 == ret)
        {
            sprintf(gloab_3g[sequence].btsj,"%d-%02d-%02d %02d:%02d:%02d",yy+2000,mm,dd,hh,mi,ss);
        }
    }
    else
    {
        lprintf(disp.g,"3G解析:loco.%s-%s 日期错误:(%d-%02d-%02d %02d:%02d:%02d)\n",gloab_3g[sequence].t_type_id,gloab_3g[sequence].loco_no,yy,mm,dd,hh,mi,ss);
        parse_error.datatype = 1;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/
        parse_error.efield = 1;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/
        sprintf(parse_error.ereason, "3G解析:日期错误,%04d-%02d-%02d %02d:%02d:%02d",yy+2000,mm,dd,hh,mi,ss);
        getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);
        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);
        //insert_AP_PARSE_ERROR_LOG(parse_error);
       return ERR;
    }
    getDateTime1(&yy, &mm, &dd, &hh, &mi, &ss,&time_val);
    sprintf(gloab_3g[sequence].rksj,"%d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);
    gloab_3g[sequence].unixsj = time_val;
    gloab_3g[sequence].str_datahead.JD = SWAP4(s_head->c26) / 200000.0f;
    gloab_3g[sequence].str_datahead.WD = SWAP4(s_head->c30) / 200000.0f;
    //if(((gloab_3g[sequence].str_datahead.JD<73 ||gloab_3g[sequence].str_datahead.JD)>136)
    //        ||(gloab_3g[sequence].str_datahead.WD<18 ||gloab_3g[sequence].str_datahead.WD>54))
    //{
    //    /*add by guo 20160826*/
    //    parse_error.datatype = 1;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/
    //    parse_error.efield = 4;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/
    //    sprintf(parse_error.ereason, "3G解析:经纬度超过国内范围,jd = %f,wd = %f",gloab_3g[sequence].str_datahead.JD,gloab_3g[sequence].str_datahead.WD);
    //    getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);
    //    sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);
    //    insert_AP_PARSE_ERROR_LOG(parse_error);
    //}
    //gloab_3g[sequence].str_datahead.SD = SWAP2(s_head->c34);
    //if(gloab_3g[sequence].str_datahead.SD>250)
    //{
    //    /*add by guo 20160826*/
    //    parse_error.datatype = 1;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/
    //    parse_error.efield = 2;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/
    //    //sprintf(parse_error.ereason, "3G解析:速度超过250,value = %d",SWAP2(s_head->c34));
    //    sprintf(parse_error.ereason, "3G解析:速度超过250,value = %f",gloab_3g[sequence].str_datahead.SD);
    //    getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);
    //    sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);
    //    insert_AP_PARSE_ERROR_LOG(parse_error);
    //}
    //gloab_3g[sequence].str_datahead.HB = SWAP2(s_head->c36);
 //   if(gloab_3g[sequence].str_datahead.HB>=5000)
 //   {
 //      /*add by guo 20160824*/
 //      parse_error.datatype = 1;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/
 //      parse_error.efield = 3;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/
 //      sprintf(parse_error.ereason, "3G解析:海拔超过5000m,hb = %f",gloab_3g[sequence].str_datahead.HB);
 //      getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);
 //      sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);
 //      insert_AP_PARSE_ERROR_LOG(parse_error);
 //   }
	//else if(gloab_3g[sequence].str_datahead.HB<=-300)
 //   {
 //       /*add by guo 20160824*/
 //       parse_error.datatype = 1;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/
 //       parse_error.efield = 3;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/
 //       sprintf(parse_error.ereason, "BD解析:海拔低于负300m,hb = %f",gloab_3g[sequence].str_datahead.HB);
 //       getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);
 //       sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);
 //       insert_AP_PARSE_ERROR_LOG(parse_error);
 //   }
    //ptraininfo = (traininfo_stu*)c_map_at(&traininfo_map,&key);
    //if(ptraininfo != NULL)
    //{
    //    gloab_3g[sequence].str_datahead.LINENO = ptraininfo->LINENO;
    //    memcpy(gloab_3g[sequence].str_datahead.LINENAME,ptraininfo->LINENAME,65);
    //}
    gloab_3g[sequence].flag_datahead = 1;
    offset += 38;
    lprintf(disp.t,"3G解析：data type: ");
//    while(offset < length-10)
//    {
//        blocklen = charToint(data+offset,2);
//
//        data_type = charToint(data+offset+2,2);
//
//        lprintf(disp.t,"%02X_%d; ",data_type,blocklen);
//
//        if(blocklen<10)
//
//        {
//
//            lprintf(disp.t,"\n");
//
//            break;
//
//        }
//
//        switch(data_type)
//
//        {
//
//        case 0x02:	/*基本运行信息2*/
//
//            parse_basicinfo_entry(data,offset,&gloab_3g[sequence]);
//
//            break;
//
//        case 0x03:	/*机车安全信息3*/
//
//            parse_locosafe_entry(data,offset,&gloab_3g[sequence]);
//
//            break;
//
//        case 0x04: /*司机操作命令信息4*/
//
//            /*parse_operation_entry(data,offset);*/
//
//            break;
//
//        case 0x06:/*充电机系统信息6*/
//
//            /*parse_charger_entry(data, offset);*/
//
//            break;
//
//        case 0x07:/*柴油机系统信息7*/
//
//            parse_diesel_entry(data, offset,&gloab_3g[sequence]);
//
//            break;
//
//        case 0x08:/*内燃机柴油机基本信息8*/
//
//            parse_basicinfo_n3_v2(data, offset,&gloab_3g[sequence]);
//
//            break;
//
//        case 0x10:	/*牵引系统信息16*/
//
//            parse_qianyin_entry(data,offset,&gloab_3g[sequence]);
//
//            break;
//
//        case 0x11:	/*内燃机车牵引系统信息17*/
//
//            parse_qianyin_n3_v2(data,offset,&gloab_3g[sequence]);
//
//            break;
//
//        case 0x30: /*辅助系统信息48*/
//
//            parse_fuzhu_entry(data,offset,&gloab_3g[sequence]);
//
//            break;
//
//        case 0x31: /*内燃机车辅助系统信息49*/
//
//            parse_fuzhu_n3_v2(data,offset,&gloab_3g[sequence]);
//
//            break;
//
//        case 0x40:/*制动系统64*/
//
//            parse_zhidong_entry(data,offset,&gloab_3g[sequence]);
//
//            break;
//
//        case 0x41:/*内燃机车制动系统64*/
//
//            parse_zhidong_n3_v2(data,offset,&gloab_3g[sequence]);
//
//            break;
//
//        case 0x80:/*LDP自检信息128*/
//
//#ifdef UNIX_LINUX_SYS
//
//            WriteQueue(&Queue[MQ_TOHISTORYQ], data, length);
//
//            //            printf("loco.%d-%d自检信息转发队列%s：%d\n",chex,cheh,mongoqname,length);
//
//#endif
//
//            parse_ldpinfo_entry(data,offset,&gloab_3g[sequence]);
//
//            break;
//
//        case 0x90:	/*6A系统信息144*/
//
//            parse_6Ainfo_entry(data, offset,&gloab_3g[sequence]);
//
//            gloab_3g[sequence].flag_6a = 1;
//
//            break;
//
//        case 0xC0:/*电力机车累计与版本信息*/
//
//            parse_ljlinfo_entry(data, offset,&gloab_3g[sequence]);
//
//            break;
//
//        case 0xC1:/*内燃机车累计与版本信息*/
//
//            parse_ljlinfo_nr(data, offset,&gloab_3g[sequence]);
//
//            break;
//
//        default:
//
//            lprintf(disp.e,"3G解析:loco.%d错误的信息类别编码0x%x\n" ,gloab_3g[sequence].idx,data_type);
//
//        }
//
//        offset += blocklen;
//
//    }
//    lprintf(disp.t,"\n");

    /*内存MAP更新*/
/*
    ptraininfo = (traininfo_stu*)c_map_at(&traininfo_map,&key);
    if(ptraininfo != NULL)
    {

        if(gloab_3g[sequence].flag_selfcheck == 1 )

        {

            memcpy(ptraininfo->LKJVER,gloab_3g[sequence].str_self_check.LKJVER,21);

        }

        else

        {

            memcpy(ptraininfo->IDX_3G,gloab_3g[sequence].idx,33);

            memcpy(ptraininfo->LASTTIME3G,gloab_3g[sequence].rksj,21);

            memcpy(ptraininfo->LASTTIME,gloab_3g[sequence].rksj,21);

            ptraininfo->JD =  gloab_3g[sequence].str_datahead.JD;

            ptraininfo->WD =  gloab_3g[sequence].str_datahead.WD;

            ptraininfo->HB =  gloab_3g[sequence].str_datahead.HB;

            ptraininfo->BTSD =  gloab_3g[sequence].str_datahead.SD;

            ptraininfo->PROVER6A	= 10;

            if(gloab_3g[sequence].tcms_ver != 0)

            {

                ptraininfo->PROVERTCMS	= gloab_3g[sequence].tcms_ver;

            }



            ptraininfo->STATUS3G    = 1;

            ptraininfo->UNIXTIME3G	= gloab_3g[sequence].unixsj;

            ptraininfo->UNIXTIMELAST = gloab_3g[sequence].unixsj;

        }

    }
    */
	return SUCCESS;
}



uchar judge_fault(unsigned int datatype,unsigned char gzzt, unsigned int tm,int key)

{

    engineStruct *engineFind =0;

    engineStruct engine;

    int flag;

    int change = 0;

    int tmdiff=0;

    pFaultNode p1 = 0;

    pFaultNode newNode = 0;

    int yy,MM,dd,hh,mm,ss;



    engineFind = hash_lookup(&engineHash_fault, key);

    if (engineFind != 0)

    {

        p1 = engineFind->faultHead.pFirst;

        yy = (tm>>26) &0x0000003f;

        MM = (tm>>22) &0x0000000f;

        dd = (tm>>17) &0x0000001f;

        hh = (tm>>12) &0x0000001f;

        mm = (tm>>6)  &0x0000003f;

        ss = (tm>>0)  &0x0000003f;

        while(p1 != 0)

        {

            if(p1->faultcode == datatype)

            {

                if(tm <p1->tm)

                {

                    //lprintf(disp.f,"%d去重成功--故障数目：%d,故障代码：%d,tm=%d,p1->tm=%d,%04d-%02d-%02d %02d:%02d:%02d\n",key,engineFind->faultHead.faultnum,datatype,tm,p1->tm,yy,MM,dd,hh,mm,ss);

                    change = 0;

                    break;

                }

                else

                {

                    tmdiff = getdiffsecond(tm,p1->tm);

                    if(tmdiff<10)

                    {

                        //	printf("%d去重成功--故障数目：%d,故障代码：%d,tm=%d,p1->tm=%d,%04d-%02d-%02d %02d:%02d:%02d\n",key,engineFind->faultHead.faultnum,datatype,tm,p1->tm,yy,MM,dd,hh,mm,ss);

                        change = 0;

                    }

                    else

                    {

                        lprintf(disp.f,"%d新故障进入1--故障数目：%d,故障代码：%d,tm=%d,p1->tm=%d ,%04d-%02d-%02d %02d:%02d:%02d\n",key,engineFind->faultHead.faultnum,datatype,p1->tm,tm,yy,MM,dd,hh,mm,ss);

                        change = 1;

                    }

                    p1->tm = tm;

                    break;

                }

            }

            else

            {

                p1 = p1->next;

                change = 0;

            }

        }

        if(p1==0)

        {

            pFaultNode newNode = (pFaultNode)malloc(sizeof(struct faultCodeNode));

            newNode->faultcode = (unsigned int)datatype;

            newNode->next = 0;

            newNode->tm = tm;

            if(engineFind->faultHead.pTail!=0)

            {

                engineFind->faultHead.pTail->next = newNode;

            }

            else

            {

                engineFind->faultHead.pFirst=newNode;

            }

            engineFind->faultHead.pTail = newNode;

            engineFind->faultHead.faultnum++;

            //	printf("%d故障列表长度%d\n",key,engineFind->faultHead.faultnum);



            lprintf(disp.f,"%d新故障进入2--故障数目：%d,故障代码：%d,tm=%d\n",key,engineFind->faultHead.faultnum,datatype,tm);

            change = 1;

        }

    }

    else

    {

        pFaultNode newNode = (pFaultNode)malloc(sizeof(struct faultCodeNode));

        if(newNode==0)

        {

            lprintf(disp.f,"分配内存失败!\n");

            cclog('e',"分配内存失败!\n");

            change =  0;

        }

        else

        {

            newNode->faultcode = (unsigned int)datatype;

            newNode->next = 0;

            newNode->tm = tm;

            newNode->gzzt = gzzt;

            engine.faultHead.pFirst = newNode;

            engine.faultHead.pTail = newNode;

            engine.faultHead.faultnum=1;

            engine.eventHead.pFirst = 0;

            engine.eventHead.pTail = 0;

            engine.eventHead.eventnum=0;

            engine.bddate = 0;

            flag = hash_insert (&engineHash_fault, key, engine);



            if(flag != HASH_SUCCESS)

            {

                free(newNode);

                //printf("%d插入哈希表失败，长度为%d\n",key,engine.faultHead.faultnum);

            }

            else

            {

                ;

                //lprintf(disp.a,"%d插入哈希表成功，长度为%d,故障代码：%d\n",key,engine.faultHead.faultnum,datatype);

                //	printf("%d插入哈希表成功，长度为%d,故障代码：%d\n",key,engine.faultHead.faultnum,datatype);

            }

            change = 1;

        }

    }

    //lprintf(disp.a,"出故障去重判断\n");

    return change;

}



uchar parse_fault(uchar *data, int length)

{

    int ret = 0;

    uint16 cheh=0;

    uint16 chex=0;

    int offset = 0;

    int yy=0,mm=0,dd=0,hh=0,mi=0,ss=0;

    int yy1=0,mm1=0,dd1=0,hh1=0,mi1=0,ss1=0;

    int key=0;

    int i=0;

    int mapkey=0;

    int ver;

    char trim_temp[33];

    pperson_stu pperson = NULL;//司机信息map用

    ptcmsfault_stu ptcmsfault = NULL; //TCMS故障map

    p_6afault_stu p_6afault = NULL;

    //	pinstalltrain_stu pinstalltrain;//LDP装车map用

    ptraininfo_stu ptraininfo = NULL;

    unsigned int tm;

    char tempCC[21];

    int sequence = -1;

    int gzdm_tmp;

    int insert_faultnum = 0;



    struct PARSE_ERROR_LOG parse_error;

    struct STR_FAULT_V20	*s_fault = NULL;

    struct STR_FAULT_V21   *s_fault_v21 = NULL;

    struct STR_DATAHEAD *s_head = (struct STR_DATAHEAD *)(data+offset);



    sequence = gloab_fault_usednum;

    if (sequence >= NUM_FAULT)

    {

        //printf("存储故障数据容器已满\n");

        return ERR;

    }



    memset(&gloab_fault[sequence],0,sizeof(gloab_fault[sequence]));



    chex = SWAP2(s_head->c16);

    cheh = SWAP2(s_head->c18);



    if((chex& 0x3FF) == 240)

    {

        if((chex& 0x3FF)!=(chex & 0xc0ff))

        {

            printf("LOCO:%3d-%4d车型错误chex=%d",chex& 0x3FF,cheh&0x3FFF,chex);

        }

    }



    gloab_fault[sequence].key = ((chex<<16)&0xc0ff0000) +(cheh&0x3FFF);

#ifdef UNIX_LINUX_SYS

    sprintf(gloab_fault[sequence].T_TYPE_ID,"%03d",chex& 0x3FF);

    sprintf(gloab_fault[sequence].LOCO_NO,"%04d",cheh &0x3FFF);

#else

    _snprintf(gloab_fault[sequence].T_TYPE_ID,3,"%03d",chex& 0x3FF);

    _snprintf(gloab_fault[sequence].LOCO_NO,4,"%04d",cheh &0x3FFF);

#endif



    if(chex & 0x8000)

    {

        gloab_fault[sequence].AB = 1;

    }

    else if(chex & 0x4000)

    {

        gloab_fault[sequence].AB = 2;

    }

    else

    {

        gloab_fault[sequence].AB = 0;

    }



    yy = 2000+s_head->c20[0];

    mm = s_head->c20[1];

    dd = s_head->c20[2];

    hh = s_head->c20[3];

    mi = s_head->c20[4];

    ss = s_head->c20[5];



    sprintf(parse_error.t_type_id,"%03d",chex & 0x3FF);

    sprintf(parse_error.loco_no,"%04d",cheh & 0x3FFF);

    sprintf(parse_error.btsj, "%d-%02d-%02d %02d:%02d:%02d", yy, mm, dd, hh, mi, ss);



    if(!checkdate(yy,mm,dd,hh,mi,ss))

    {

        lprintf(disp.e,"故障解析:%03d-%04d日期错误:date(%d-%02d-%02d %02d:%02d:%02d)\n",gloab_fault[sequence].key,yy,mm,dd,hh,mi,ss);

        /*add by guo 20160824*/

        parse_error.datatype = 3;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

        parse_error.efield = 1;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

        sprintf(parse_error.ereason, "故障解析:日期错误,%04d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);

        getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);

        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);

        insert_AP_PARSE_ERROR_LOG(parse_error);



        return ERR;

    }



    sprintf(gloab_fault[sequence].BTSJ,"%d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);



    getDateTime(&yy, &mm, &dd, &hh, &mi, &ss);

    sprintf(gloab_fault[sequence].RKSJ,"%d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);



    gloab_fault[sequence].GPSJD = SWAP4(s_head->c26) / 200000.0f;

    gloab_fault[sequence].GPSWD = SWAP4(s_head->c30) / 200000.0f;

    gloab_fault[sequence].GPSSD = SWAP2(s_head->c34);

    //gloab_fault[sequence].GPSHB = SWAP2(s_head->c36);

    gloab_fault[sequence].GPSHB = s_head->c36;/*edit by guo 20160518*/



    offset += 38;



    ver = data[offset+4];

    gloab_fault[sequence].VER = ver;



    key = ((chex<<16)&0xc0ff0000) + (cheh&0x3FFF);

    ptraininfo = (traininfo_stu*)c_map_at(&traininfo_map,&key);

    if(ptraininfo != NULL)

    {

        gloab_fault[sequence].LINENO = ptraininfo->LINENO;

        memcpy(gloab_fault[sequence].B_ID,ptraininfo->B_ID,5);

        memcpy(gloab_fault[sequence].D_ID,ptraininfo->D_ID,5);

        memcpy(gloab_fault[sequence].B_ID2,ptraininfo->DRIVERBID,5);

        memcpy(gloab_fault[sequence].D_ID2,ptraininfo->DRIVERDID,5);

        memcpy(gloab_fault[sequence].DRIVERNAME,ptraininfo->DRIVERNAME,33);

        memcpy(gloab_fault[sequence].DRIVERTEL,ptraininfo->DRIVERTEL,33);

        memcpy(gloab_fault[sequence].LINENAME,ptraininfo->LINENAME,33);

        memcpy(gloab_fault[sequence].STATIONNAME,ptraininfo->STATIONNAME,33);

    }

    else

    {

        gloab_fault[sequence].LINENO = 0;

        memset(gloab_fault[sequence].B_ID,0,5);

        memset(gloab_fault[sequence].B_ID2,0,5);

        memset(gloab_fault[sequence].D_ID2,0,5);

        memset(gloab_fault[sequence].D_ID,0,5);

        memset(gloab_fault[sequence].DRIVERNAME, 0,33);

        memset(gloab_fault[sequence].DRIVERTEL, 0,33);

        memset(gloab_fault[sequence].LINENAME, 0,33);

        memset(gloab_fault[sequence].STATIONNAME, 0,33);

    }

    ptraininfo = NULL;



    trim1(gloab_fault[sequence].DRIVERNAME);



    if ((ver== 10)||(ver== 20))

    {

        s_fault = (struct STR_FAULT_V20 *)(data + offset);



        memset(tempCC,0,21);

        sprintf(tempCC,"%c%c%c%c%d",s_fault->s_lkj.c5[0],s_fault->s_lkj.c5[1],s_fault->s_lkj.c5[2],s_fault->s_lkj.c5[3],SWAP4(s_fault->s_lkj.c9));

        Trim(gloab_fault[sequence].CC,tempCC);

        gloab_fault[sequence].CZH	= SWAP2(s_fault->s_lkj.c13);

        gloab_fault[sequence].ZSJH	= SWAP4(s_fault->s_lkj.c15);

        gloab_fault[sequence].FSJH	= SWAP4(s_fault->s_lkj.c19);

        gloab_fault[sequence].SJJLH = SWAP2(s_fault->s_lkj.c23);

        gloab_fault[sequence].SJSD	= SWAP2(s_fault->s_lkj.c25);



        if(gloab_fault[sequence].SJSD>250)

        {

            /*add by guo 20160826*/

            parse_error.datatype = 3;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

            parse_error.efield = 2;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

            sprintf(parse_error.ereason, "故障解析v10-20:速度大于250，sjsu = %f",gloab_fault[sequence].SJSD);

            getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);

            sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);

            insert_AP_PARSE_ERROR_LOG(parse_error);

        }

        gloab_fault[sequence].JCGKZ = SWAP2(s_fault->s_lkj.c27);

        gloab_fault[sequence].XHJBH = SWAP2(s_fault->s_lkj.c29);

        gloab_fault[sequence].XHJZLZ = SWAP2(s_fault->s_lkj.c31);

        gloab_fault[sequence].GLB	= SWAP4(s_fault->s_lkj.c33) & 0x003FFFFF;



        for (i=0;i<s_fault->num;i++)

        {

            if(i >9)  break;

            yy=s_fault->fault[i].year+2000;

            mm=s_fault->fault[i].month;

            dd=s_fault->fault[i].day;

            hh=s_fault->fault[i].hour;

            mi=s_fault->fault[i].minute;

            ss=s_fault->fault[i].second;

            tm = ((unsigned char)((yy-2000)&0x0000003f)<<26) | ((unsigned char)(mm&0x0000000f)<<22) | ((unsigned char)(dd&0x0000001f)<<17) | ((unsigned char)(hh&0x0000001f)<<12) | ((unsigned char)((unsigned char)mi&0x0000003f)<<6)|(ss&0x0000003f);

            gzdm_tmp = SWAP4(s_fault->fault[i].code);

            if(!checkdate(yy,mm,dd,hh,mi,ss))

                continue;

            if(judge_fault(gzdm_tmp,(s_fault->fault[i].fzt&0X01),tm,key)==1)

            {

                sprintf(gloab_fault[sequence].str_fault[insert_faultnum].GZKSSJ,"%04d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);

                gloab_fault[sequence].str_fault[insert_faultnum].GZZT = s_fault->fault[i].fzt &0x01 ;

                gloab_fault[sequence].str_fault[insert_faultnum].SEND_TYPE = (s_fault->fault[i].fzt>>1)&0x01;

                gloab_fault[sequence].str_fault[insert_faultnum].GZSB = s_fault->fault[i].fsrc ;



                if(gloab_fault[sequence].str_fault[insert_faultnum].GZSB == 1)

                {

                    mapkey = (chex& 0x3FF)*10000 + (SWAP4(s_fault->fault[i].code));

                    if(ver == 10)

                    {

                        gloab_fault[sequence].str_fault[insert_faultnum].GZDM = SWAP4(s_fault->fault[i].code) ;

                        gloab_fault[sequence].str_fault[insert_faultnum].GZDM_WM = SWAP4(s_fault->fault[i].code) ;

                        ptcmsfault = (tcmsfault_stu*)c_map_at(&tcmsfault_map,&mapkey);

                        if(ptcmsfault != NULL)

                        {

                            gloab_fault[sequence].str_fault[insert_faultnum].VALIDECHECK = 0;

                            gloab_fault[sequence].str_fault[insert_faultnum].GZDJ = ptcmsfault->GRADE;

                            memcpy(gloab_fault[sequence].str_fault[insert_faultnum].GZMC,ptcmsfault->NAME,101);

                            memcpy(gloab_fault[sequence].str_fault[insert_faultnum].CODESHOW,ptcmsfault->CODESHOW,21);

                        }

                        else

                        {

                            gloab_fault[sequence].str_fault[insert_faultnum].VALIDECHECK = 1;

                            gloab_fault[sequence].str_fault[insert_faultnum].GZDJ = 0;

                            memset(gloab_fault[sequence].str_fault[insert_faultnum].GZMC, 0,101);

                            memset(gloab_fault[sequence].str_fault[insert_faultnum].CODESHOW,0,21);

                        }

                        ptcmsfault = NULL;

                    }

                    else

                    {

                        gloab_fault[sequence].str_fault[insert_faultnum].GZDM_WM = SWAP4(s_fault->fault[i].code) ;

                        ptcmsfault = (tcmsfault_stu*)c_map_at(&tcmsfault_map_v2,&mapkey);

                        if(ptcmsfault != NULL)

                        {

                            gloab_fault[sequence].str_fault[insert_faultnum].VALIDECHECK = 0;

                            gloab_fault[sequence].str_fault[insert_faultnum].GZDJ = ptcmsfault->GRADE;

                            gloab_fault[sequence].str_fault[insert_faultnum].GZDM = ptcmsfault->CODE;

                            memcpy(gloab_fault[sequence].str_fault[insert_faultnum].GZMC,ptcmsfault->NAME,101);

                            memcpy(gloab_fault[sequence].str_fault[insert_faultnum].CODESHOW,ptcmsfault->CODESHOW,21);

                        }

                        else

                        {

                            gloab_fault[sequence].str_fault[insert_faultnum].VALIDECHECK = 1;

                            gloab_fault[sequence].str_fault[insert_faultnum].GZDM = SWAP4(s_fault->fault[i].code) ;

                            gloab_fault[sequence].str_fault[insert_faultnum].GZDJ = 0;

                            memset(gloab_fault[sequence].str_fault[insert_faultnum].GZMC, 0,101);

                            memset(gloab_fault[sequence].str_fault[insert_faultnum].CODESHOW,0,21);

                        }

                        ptcmsfault = NULL;



                    }

                }

                else if(gloab_fault[sequence].str_fault[insert_faultnum].GZSB == 2)

                {

                    gloab_fault[sequence].str_fault[insert_faultnum].GZDM = SWAP4(s_fault->fault[i].code) ;

                    gloab_fault[sequence].str_fault[insert_faultnum].GZDM_WM = SWAP4(s_fault->fault[i].code) ;

                    mapkey = gloab_fault[sequence].str_fault[insert_faultnum].GZDM;



                    p_6afault = (_6afault_stu*)c_map_at(&_6afault_map,&mapkey);

                    if(p_6afault != NULL)

                    {

                        gloab_fault[sequence].str_fault[insert_faultnum].VALIDECHECK = 0;

                        memcpy(gloab_fault[sequence].str_fault[insert_faultnum].GZMC,p_6afault->NAME,101);

                        gloab_fault[sequence].str_fault[insert_faultnum].GZDJ = p_6afault->GRADE;

                        memcpy(gloab_fault[sequence].str_fault[insert_faultnum].CODESHOW,p_6afault->CODESHOW,21);



                    }

                    else

                    {

                        gloab_fault[sequence].str_fault[insert_faultnum].VALIDECHECK = 1;

                        gloab_fault[sequence].str_fault[insert_faultnum].GZDJ = 0;

                        memset(gloab_fault[sequence].str_fault[insert_faultnum].GZMC, 0,101);

                        memset(gloab_fault[sequence].str_fault[insert_faultnum].CODESHOW,0,21);

                    }

                    p_6afault = NULL;

                }

                else

                {

                    gloab_fault[sequence].str_fault[insert_faultnum].VALIDECHECK = 1;

                    gloab_fault[sequence].str_fault[insert_faultnum].GZDJ = 0;

                    memset(gloab_fault[sequence].str_fault[insert_faultnum].GZMC, 0,101);

                    memset(gloab_fault[sequence].str_fault[insert_faultnum].CODESHOW,0,21);

                }

                getGuid(gloab_fault[sequence].str_fault[insert_faultnum].IDX);

                insert_faultnum += 1;

            }

             //printf("fault解析:%03d-%04d去重,i = %d\n",chex&0x3ff,cheh,i);

        }

        if(insert_faultnum == 0)

        {

            return ERR;

        }

    }

    else if((ver == 21 )|| (ver == 11)||(ver == 22)||(ver == 12))

    {

        s_fault_v21 = (struct STR_FAULT_V21 *)(data + offset);



        memset(tempCC,0,21);

        sprintf(tempCC,"%c%c%c%c%d",s_fault_v21->s_lkj.c5[0],s_fault_v21->s_lkj.c5[1],s_fault_v21->s_lkj.c5[2],s_fault_v21->s_lkj.c5[3],SWAP4(s_fault_v21->s_lkj.c9));

        Trim(gloab_fault[sequence].CC,tempCC);

        gloab_fault[sequence].CZH	= SWAP2(s_fault_v21->s_lkj.c13);

        gloab_fault[sequence].ZSJH	= SWAP4(s_fault_v21->s_lkj.c15);

        gloab_fault[sequence].FSJH	= SWAP4(s_fault_v21->s_lkj.c19);

        gloab_fault[sequence].SJJLH = SWAP2(s_fault_v21->s_lkj.c23);

        gloab_fault[sequence].SJSD	= SWAP2(s_fault_v21->s_lkj.c25);



        if(gloab_fault[sequence].SJSD>250)

        {

            /*add by guo 20160826*/

            parse_error.datatype = 3;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

            parse_error.efield = 2;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

            sprintf(parse_error.ereason, "故障解析v11-22:速度大于250，sjsu = %f",gloab_fault[sequence].SJSD);

            getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);

            sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);

            insert_AP_PARSE_ERROR_LOG(parse_error);

        }

        gloab_fault[sequence].JCGKZ = s_fault_v21->s_lkj.c27;

        gloab_fault[sequence].JKZT = s_fault_v21->s_lkj.c28;

        gloab_fault[sequence].XHJBH = SWAP2(s_fault_v21->s_lkj.c29);

        gloab_fault[sequence].XHJZLZ = SWAP2(s_fault_v21->s_lkj.c31);

        gloab_fault[sequence].GLB	= SWAP4(s_fault_v21->s_lkj.c33) & 0x003FFFFF;



        for (i=0;i<s_fault_v21->num;i++)

        {

            if(i >9)  break;

            yy=s_fault_v21->fault[i].year+2000;

            mm=s_fault_v21->fault[i].month;

            dd=s_fault_v21->fault[i].day;

            hh=s_fault_v21->fault[i].hour;

            mi=s_fault_v21->fault[i].minute;

            ss=s_fault_v21->fault[i].second;

            tm = ((unsigned char)((yy-2000)&0x0000003f)<<26) | ((unsigned char)(mm&0x0000000f)<<22) | ((unsigned char)(dd&0x0000001f)<<17) | ((unsigned char)(hh&0x0000001f)<<12) | ((unsigned char)((unsigned char)mi&0x0000003f)<<6)|(ss&0x0000003f);

            gzdm_tmp = SWAP4(s_fault_v21->fault[i].code);

            if(!checkdate(yy,mm,dd,hh,mi,ss))

                continue;



            if(judge_fault(gzdm_tmp,(s_fault_v21->fault[i].fzt&0x01),tm,key)==1)

            {

                sprintf(gloab_fault[sequence].str_fault[insert_faultnum].GZKSSJ,"%04d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);

                gloab_fault[sequence].str_fault[insert_faultnum].GZZT = s_fault_v21->fault[i].fzt &0x01 ;

                gloab_fault[sequence].str_fault[insert_faultnum].SEND_TYPE = (s_fault_v21->fault[i].fzt>>1) &0x01 ;

                gloab_fault[sequence].str_fault[insert_faultnum].GZSB = s_fault_v21->fault[i].fsrc ;



                if(gloab_fault[sequence].str_fault[insert_faultnum].GZSB == 1)

                {

                    mapkey = (chex& 0x3FF)*10000 + (SWAP4(s_fault_v21->fault[i].code)) ;

                    if((ver == 11) || (ver == 12))

                    {

                        gloab_fault[sequence].str_fault[insert_faultnum].GZDM = SWAP4(s_fault_v21->fault[i].code) ;

                        gloab_fault[sequence].str_fault[insert_faultnum].GZDM_WM = SWAP4(s_fault_v21->fault[i].code) ;

                        ptcmsfault = (tcmsfault_stu*)c_map_at(&tcmsfault_map,&mapkey);

                        if(ptcmsfault != NULL)

                        {

                            gloab_fault[sequence].str_fault[insert_faultnum].VALIDECHECK = 0;

                            gloab_fault[sequence].str_fault[insert_faultnum].GZDJ = ptcmsfault->GRADE;

                            memcpy(gloab_fault[sequence].str_fault[insert_faultnum].GZMC,ptcmsfault->NAME,101);

                            memcpy(gloab_fault[sequence].str_fault[insert_faultnum].CODESHOW,ptcmsfault->CODESHOW,21);

                        }

                        else

                        {

                            gloab_fault[sequence].str_fault[insert_faultnum].VALIDECHECK = 1;

                            gloab_fault[sequence].str_fault[insert_faultnum].GZDJ = 0;

                            memset(gloab_fault[sequence].str_fault[insert_faultnum].GZMC, 0,101);

                            memset(gloab_fault[sequence].str_fault[insert_faultnum].CODESHOW,0,21);

                        }

                        ptcmsfault = NULL;

                    }

                    else

                    {

                        gloab_fault[sequence].str_fault[insert_faultnum].GZDM_WM = SWAP4(s_fault_v21->fault[i].code) ;

                        ptcmsfault = (tcmsfault_stu*)c_map_at(&tcmsfault_map_v2,&mapkey);

                        if(ptcmsfault != NULL)

                        {

                            gloab_fault[sequence].str_fault[insert_faultnum].VALIDECHECK = 0;

                            gloab_fault[sequence].str_fault[insert_faultnum].GZDJ = ptcmsfault->GRADE;

                            gloab_fault[sequence].str_fault[insert_faultnum].GZDM = ptcmsfault->CODE;

                            memcpy(gloab_fault[sequence].str_fault[insert_faultnum].GZMC,ptcmsfault->NAME,101);

                            memcpy(gloab_fault[sequence].str_fault[insert_faultnum].CODESHOW,ptcmsfault->CODESHOW,21);

                        }

                        else

                        {

                            gloab_fault[sequence].str_fault[insert_faultnum].VALIDECHECK = 1;

                            gloab_fault[sequence].str_fault[insert_faultnum].GZDM = SWAP4(s_fault_v21->fault[i].code) ;

                            gloab_fault[sequence].str_fault[insert_faultnum].GZDJ = 0;

                            memset(gloab_fault[sequence].str_fault[insert_faultnum].GZMC, 0,101);

                            memset(gloab_fault[sequence].str_fault[insert_faultnum].CODESHOW,0,21);

                        }

                        ptcmsfault = NULL;

                    }

                }

                else if(gloab_fault[sequence].str_fault[insert_faultnum].GZSB == 2)

                {

                    gloab_fault[sequence].str_fault[insert_faultnum].GZDM = SWAP4(s_fault_v21->fault[i].code) ;

                    gloab_fault[sequence].str_fault[insert_faultnum].GZDM_WM = SWAP4(s_fault_v21->fault[i].code) ;

                    mapkey = gloab_fault[sequence].str_fault[insert_faultnum].GZDM;



                    p_6afault = (_6afault_stu*)c_map_at(&_6afault_map,&mapkey);

                    if(p_6afault != NULL)

                    {

                        gloab_fault[sequence].str_fault[insert_faultnum].VALIDECHECK = 0;

                        memcpy(gloab_fault[sequence].str_fault[insert_faultnum].GZMC,p_6afault->NAME,101);

                        gloab_fault[sequence].str_fault[insert_faultnum].GZDJ = p_6afault->GRADE;

                        memcpy(gloab_fault[sequence].str_fault[insert_faultnum].CODESHOW,p_6afault->CODESHOW,21);



                    }

                    else

                    {

                        gloab_fault[sequence].str_fault[insert_faultnum].VALIDECHECK = 1;

                        gloab_fault[sequence].str_fault[insert_faultnum].GZDJ = 0;

                        memset(gloab_fault[sequence].str_fault[insert_faultnum].GZMC, 0,101);

                        memset(gloab_fault[sequence].str_fault[insert_faultnum].CODESHOW,0,21);

                    }

                    p_6afault = NULL;

                }

                else

                {

                    gloab_fault[sequence].str_fault[insert_faultnum].VALIDECHECK = 1;

                    gloab_fault[sequence].str_fault[insert_faultnum].GZDJ = 0;

                    memset(gloab_fault[sequence].str_fault[insert_faultnum].GZMC, 0,101);

                    memset(gloab_fault[sequence].str_fault[insert_faultnum].CODESHOW,0,21);

                }

                getGuid(gloab_fault[sequence].str_fault[insert_faultnum].IDX);

                insert_faultnum += 1;

            }

        }

        if(insert_faultnum == 0)

        {

            return ERR;

        }

    }

    else

    {

        return ERR;

    }





    /*add by guo 20160411*/

    key = gloab_fault[sequence].ZSJH;

    pperson = c_map_at(&person_map,&key);

    if(pperson != NULL)

    {

        if((strlen(pperson->NAME) == 0)|| (pperson->NAME[0] == 0))

        {

            gloab_fault[sequence].VALIDECHECK =1 ;

        }

        else

        {

            gloab_fault[sequence].VALIDECHECK =0 ;

        }

    }

    else

    {

        gloab_fault[sequence].VALIDECHECK =0 ;

    }

    /*end guo*/

    gloab_fault[sequence].faultnum = insert_faultnum;

    lprintf(disp.f,"%3d%4d存入故障数目为：%d\n",gloab_fault[sequence].key,insert_faultnum);

    return SUCCESS;

}



uchar judge_event(int datatype,unsigned int tm, int key)

{

    engineStruct *engineFind =0;

    engineStruct engine;

    int flag;

    int change = 0;

    pEventNode p1 = 0;

    pEventNode newNode = 0;



    engineFind = hash_lookup(&engineHash_event, key);



    if (engineFind != 0)

    {

        //printf("11111\n");

        p1 = engineFind->eventHead.pFirst;

        lprintf(disp.a,"进入事件去重判断\n");

        while(p1 != 0)

        {

            //printf("datatype = %d,p1->eventcode = %d\n",datatype,p1->eventcode);

            if(p1->eventcode == datatype)

            {

                //printf("tm = %d,p1->tm = %d \n",tm,p1->tm);

                if(tm <= p1->tm)

                {

                    //printf("%d事件数据：去重成功%d,tm = %d\n",key,datatype,tm);

                    change = 0;

                    lprintf(disp.v,"%d事件数据：去重成功%d,tm = %d\n",key,datatype,tm);

                    break;

                }

                else

                {

                    change = 1;

                    p1->tm = tm;

                    break;

                }

            }

            else

            {

                p1 = p1->next;

                change = 0;

            }

        }

        if(p1==0)

        {



            pEventNode newNode = (pEventNode)malloc(sizeof(struct eventCodeNode));

            newNode->eventcode = datatype;

            newNode->next = 0;

            newNode->tm = tm;

            if(engineFind->eventHead.pTail!=0)

            {

                engineFind->eventHead.pTail->next = newNode;

            }

            else

            {

                engineFind->eventHead.pFirst=newNode;

            }

            engineFind->eventHead.pTail = newNode;

            engineFind->eventHead.eventnum++;

            change = 1;

           //printf("p1 = 0\n");

        }

    }

    else

    {

        //printf("22222\n");

        pEventNode newNode = (pEventNode)malloc(sizeof(struct eventCodeNode));

        if(newNode==0)

        {

            lprintf(disp.a,"分配内存失败!\n");

            cclog('e',"分配内存失败!\n");

            change =  0;

        }

        else

        {

            newNode->eventcode = datatype;

            newNode->next = 0;

            newNode->tm = tm;

            engine.eventHead.pFirst = newNode;

            engine.eventHead.pTail = newNode;

            engine.eventHead.eventnum=1;

            engine.faultHead.pFirst = 0;

            engine.faultHead.pTail = 0;

            engine.faultHead.faultnum=0;

            engine.bddate=0;

            flag = hash_insert (&engineHash_event, key, engine);

            //printf("hash_insert datatype = %d,tm = %d\n",datatype,tm);



            if(flag != HASH_SUCCESS)

            {

                free(newNode);

                //printf("%d插入哈希表失败，长度为%d\n",key,engine.eventHead.eventnum);

            }

            else

            {

                lprintf(disp.a,"%d插入哈希表成功，长度为%d\n",key,engine.eventHead.eventnum);

            }

            change = 1;

        }

    }

    //lprintf(disp.a,"出事件去重判断\n");

    return change;

}



uchar parse_event(uchar *data, int length)

{

    int data_type = 0;

    int data_length = 0;

    int offset =0;

    int chex=0;

    int cheh=0;

    int yy=0,mm=0,dd=0,hh=0,mi=0,ss=0;

    int yy1=0,mm1=0,dd1=0,hh1=0,mi1=0,ss1=0;

    unsigned int key=0;

    unsigned int tm;

    int sequence = -1;

    int flag;

    char tempCC[21];

    uint16 tmpVal=0;

    uint32 time = 0;

    int  tmpeventnum=0;

    int tmpoffset;

    int lkj_type;

    char temp[512];

    int temp_b_id;

    ptraininfo_stu ptraininfo = NULL;

    plkjevent_stu  plkjevent = NULL;

    plineinfo_stu  plineinfo = NULL;



    struct PARSE_ERROR_LOG parse_error;

    struct STR_EVENT_BASIC *s_event_basic;

    struct STR_EVENT_G5	*s_event_g5= NULL;

    struct STR_EVENT_G6	*s_event_g6 = NULL;

    struct STR_EVENT_G8	*s_event_g8= NULL;

    struct STR_EVENT_G9	*s_event_g9= NULL;

    struct STR_EVENT_G10 *s_event_g10	= NULL;

    struct STR_EVENT_G11 *s_event_g11	= NULL;



    struct STR_DATAHEAD *s_head = (struct STR_DATAHEAD *)(data+offset);



    sequence = gloab_event_usednum;

    if (sequence >= NUM_EVENT)

    {

        printf("存储事件数据容器已满\n");

        return ERR;

    }

    memset(&gloab_event[sequence],0,sizeof(gloab_event[sequence]));



    chex = SWAP2(s_head->c16);

    cheh = SWAP2(s_head->c18);



    gloab_event[sequence].key = ((chex<<16)&0xc0ff0000) + (cheh&0x3FFF);



#ifdef UNIX_LINUX_SYS

    sprintf(gloab_event[sequence].T_TYPE_ID,"%03d",SWAP2(s_head->c16) & 0x3FF);

    sprintf(gloab_event[sequence].LOCO_NO,"%04d",SWAP2(s_head->c18) &0x3FFF);

#else

    _snprintf(gloab_event[sequence].T_TYPE_ID,3,"%03d",SWAP2(s_head->c16)& 0x3FF);

    _snprintf(gloab_event[sequence].LOCO_NO,4,"%04d",SWAP2(s_head->c18) &0x3FFF);

#endif

    if(chex & 0x8000)

    {

        gloab_event[sequence].AB = 1;

    }

    else if(chex & 0x4000)

    {

        gloab_event[sequence].AB = 2;

    }

    else

    {

        gloab_event[sequence].AB = 0;

    }



    gloab_event[sequence].GPSJD = SWAP4(s_head->c26) / 200000.0f;

    gloab_event[sequence].GPSWD = SWAP4(s_head->c30) / 200000.0f;

    gloab_event[sequence].GPSSD = SWAP2(s_head->c34);

    //gloab_event[sequence].GPSHB = SWAP2(s_head->c36);

    gloab_event[sequence].GPSHB = s_head->c36;/*edit by guo 20160518*/



    getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);

    sprintf(gloab_event[sequence].RKSJ,"%d-%02d-%02d %02d:%02d:%02d",yy1,mm1,dd1,hh1,mi1,ss1);



    yy = 2000+s_head->c20[0];

    mm = s_head->c20[1];

    dd = s_head->c20[2];

    hh = s_head->c20[3];

    mi = s_head->c20[4];

    ss = s_head->c20[5];



    sprintf(parse_error.t_type_id,"%03d",chex & 0x3FF);

    sprintf(parse_error.loco_no,"%04d",cheh & 0x3FFF);

    sprintf(parse_error.btsj, "%d-%02d-%02d %02d:%02d:%02d", yy, mm, dd, hh, mi, ss);



    if(checkdate(yy,mm,dd,hh,mi,ss))

    {

        sprintf(gloab_event[sequence].BTSJ,"%d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);

    }

    else

    {

        lprintf(disp.e,"事件解析:日期错误(%d-%02d-%02d %02d:%02d:%02d)\n",yy,mm,dd,hh,mi,ss);

        /*add by guo 20160824*/

        parse_error.datatype = 4;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

        parse_error.efield = 1;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

        sprintf(parse_error.ereason, "事件解析:日期错误,%04d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);

        getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);

        sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);

        insert_AP_PARSE_ERROR_LOG(parse_error);



        return ERR;

    }



    key = ((chex<<16)&0xc0ff0000)+(cheh&0x3FFF);

    ptraininfo = (traininfo_stu*)c_map_at(&traininfo_map,&key);

    if(ptraininfo != NULL)

    {

        //change by cuiyi   20160913

        //gloab_event[sequence].LINENO = ptraininfo->LINENO;



        memcpy(gloab_event[sequence].B_ID,ptraininfo->B_ID,5);

        memcpy(gloab_event[sequence].D_ID,ptraininfo->D_ID,5);



        memcpy(gloab_event[sequence].B_ID2,ptraininfo->DRIVERBID,5);

        memcpy(gloab_event[sequence].D_ID2,ptraininfo->DRIVERDID,5);

        memcpy(gloab_event[sequence].DRIVERNAME,ptraininfo->DRIVERNAME,33);

        memcpy(gloab_event[sequence].DRIVERTEL,ptraininfo->DRIVERTEL,33);

       // memcpy(gloab_event[sequence].LINENAME,ptraininfo->LINENAME,33);

       // memcpy(gloab_event[sequence].STATIONNAME,ptraininfo->STATIONNAME,33);

        memcpy(gloab_event[sequence].LKJVER,ptraininfo->LKJVER,21);

    }

    else

    {

       // gloab_event[sequence].LINENO = 0;

        memset(gloab_event[sequence].B_ID,0,5);

        memset(gloab_event[sequence].B_ID2,0,5);

        memset(gloab_event[sequence].D_ID,0,5);

        memset(gloab_event[sequence].D_ID2,0,5);

        memset(gloab_event[sequence].DRIVERNAME,0,33);

        memset(gloab_event[sequence].DRIVERTEL,0,33);

       // memset(gloab_event[sequence].LINENAME,0,33);

       // memset(gloab_event[sequence].STATIONNAME,0,33);

        memset(gloab_event[sequence].LKJVER, 0,21);

        //printf("未查到局段信息\n");

    }



    if((strlen(gloab_event[sequence].DRIVERNAME) == 0)|| (gloab_event[sequence].DRIVERNAME[0] == 0))

    {

        gloab_event[sequence].VALIDECHECK =1 ;

    }

    else

    {

        gloab_event[sequence].VALIDECHECK =0 ;

    }



    offset += 38;

    s_event_basic = (struct STR_EVENT_BASIC *)(data+offset);

    lprintf(disp.v,"事件解析：data type: ");

    while(offset < length-40)

    {

        data_type = SWAP2(s_event_basic->s_tou.c0);

        data_length = SWAP2(s_event_basic->s_tou.c2);

        lprintf(disp.v,"%02X\n",data_type);

        time = SWAP4(s_event_basic->c0);/*事件发送时间 111111 1111 11111 11111 111111 111111*/

        /*LKJ时间格式：b5～b0：秒，b11～b6：分，b16～b12：时，b21～b17：日，b25～b22：月，b26～b31：年*/



        /*add by guo 20160715 */

        yy = time/pow(2,26);

        mm = (time - yy*pow(2,26))/pow(2,22);

        dd = (time - yy*pow(2,26) - mm*pow(2,22))/pow(2,17);

        hh = (time - yy*pow(2,26) - mm*pow(2,22) - dd*pow(2,17))/pow(2,12);

        mi = (time - yy*pow(2,26) - mm*pow(2,22) - dd*pow(2,17) - hh*pow(2,12))/pow(2,6);

        ss = (time - yy*pow(2,26) - mm*pow(2,22) - dd*pow(2,17) - hh*pow(2,12) - mi*pow(2,6));

        //printf("event time = %d,sys time = %d \n",yy,yy1-2000);

        if(yy == (yy1-2000))

        {

            //printf("chex = %d ,cheh = %d,tmpeventnum = %d,time = %d ,yy = %d,mm = %d, dd = %d,hh = %d,mi = %d,ss = %d\n",chex,cheh,tmpeventnum,time,yy,mm,dd,hh,mi,ss);

            tm = ((unsigned char)(yy&0x0000003f)<<26)

                   | ((unsigned char)(mm&0x0000000f)<<22)

                   | ((unsigned char)(dd&0x0000001f)<<17)

                   | ((unsigned char)(hh&0x0000001f)<<12)

                   | ((unsigned char)(mi&0x0000003f)<<6)

                   |(ss&0x0000003f);



            lkj_type = (unsigned int)s_event_basic->c4 &0x000000ff;



            flag = judge_event(data_type,tm,key);

            if (flag == 1)

            {

                gloab_event[sequence].str_event[tmpeventnum].ETYPE = data_type;



                plkjevent = (lkjevent_stu*)c_map_at(&lkjenvent_map,&data_type);

                if(plkjevent!= NULL)

                {

                    gloab_event[sequence].str_event[tmpeventnum].VALIDECHECK = 0;

                    memcpy(gloab_event[sequence].str_event[tmpeventnum].SJMC,plkjevent->SJMS,33);

                    gloab_event[sequence].str_event[tmpeventnum].SJDJ = plkjevent->SJDJ;

                }

                else

                {

                    gloab_event[sequence].str_event[tmpeventnum].VALIDECHECK = 1;

                    memset(gloab_event[sequence].str_event[tmpeventnum].SJMC,0,33);

                    gloab_event[sequence].str_event[tmpeventnum].SJDJ = 0;

                }



                gloab_event[sequence].str_event[tmpeventnum].LKJ_TYPE = lkj_type;

                gloab_event[sequence].str_event[tmpeventnum].VER   = s_event_basic->s_tou.c4;

                //jktoDate(gloab_event[sequence].str_event[tmpeventnum].SJ,time);

                /*add by guo 20160718*/

                sprintf(gloab_event[sequence].str_event[tmpeventnum].SJ,"%d-%02d-%02d %02d:%02d:%02d",yy+2000,mm,dd,hh,mi,ss);



                memset(tempCC,0,21);

                sprintf(tempCC,"%c%c%c%c%d",s_event_basic->c5[0],s_event_basic->c5[1],s_event_basic->c5[2],s_event_basic->c5[3],SWAP4(s_event_basic->c9));

                Trim(gloab_event[sequence].str_event[tmpeventnum].CC,tempCC);

                gloab_event[sequence].str_event[tmpeventnum].CZH = SWAP2(s_event_basic->c13);

                gloab_event[sequence].str_event[tmpeventnum].SJH = SWAP4(s_event_basic->c15);

                gloab_event[sequence].str_event[tmpeventnum].FSJH = SWAP4(s_event_basic->c19);



                gloab_event[sequence].str_event[tmpeventnum].SJJLH = SWAP2(s_event_basic->c27);

                gloab_event[sequence].str_event[tmpeventnum].KHBB = s_event_basic->c29;

                gloab_event[sequence].str_event[tmpeventnum].SJSU = SWAP2(s_event_basic->c30);



                if(gloab_event[sequence].str_event[tmpeventnum].SJSU>250)

                {

                    /*add by guo 20160824*/

                    parse_error.datatype = 4;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

                    parse_error.efield = 2;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

                    sprintf(parse_error.ereason, "事件解析:速度大于250，sjsu = %f",gloab_event[sequence].str_event[tmpeventnum].SJSU);

                    getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);

                    sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);

                    insert_AP_PARSE_ERROR_LOG(parse_error);



                }

                gloab_event[sequence].str_event[tmpeventnum].JCXHZ = s_event_basic->c32;

                gloab_event[sequence].str_event[tmpeventnum].GK = s_event_basic->c33;

                gloab_event[sequence].str_event[tmpeventnum].XHJBH = SWAP2(s_event_basic->c34);

                gloab_event[sequence].str_event[tmpeventnum].XHJLB = s_event_basic->c36;

                gloab_event[sequence].str_event[tmpeventnum].GLB = SWAP4(s_event_basic->c37)& 0x003FFFFF;

                gloab_event[sequence].str_event[tmpeventnum].ZZ = SWAP2(s_event_basic->c41);

                gloab_event[sequence].str_event[tmpeventnum].JC = SWAP2(s_event_basic->c43)*0.1f;

                gloab_event[sequence].str_event[tmpeventnum].LS = SWAP2(s_event_basic->c45);

                gloab_event[sequence].str_event[tmpeventnum].LCGYL = SWAP2(s_event_basic->c47);



                gloab_event[sequence].str_event[tmpeventnum].ZZZT = s_event_basic->c49;

                gloab_event[sequence].str_event[tmpeventnum].SRJLH = SWAP2(s_event_basic->c50);

                gloab_event[sequence].str_event[tmpeventnum].JLQFXHJJL = SWAP2(s_event_basic->c52);



                gloab_event[sequence].str_event[tmpeventnum].XS = SWAP2(s_event_basic->c54);

                gloab_event[sequence].str_event[tmpeventnum].ZDSC = s_event_basic->c56;

                gloab_event[sequence].str_event[tmpeventnum].DQXLHBZ = s_event_basic->c57;

                gloab_event[sequence].str_event[tmpeventnum].DQXLH = SWAP2(s_event_basic->c58);

                gloab_event[sequence].str_event[tmpeventnum].QFXLHBZ = s_event_basic->c60;

                gloab_event[sequence].str_event[tmpeventnum].QFXLH = SWAP2(s_event_basic->c61);

                gloab_event[sequence].str_event[tmpeventnum].DQ_TMIS = (((int)s_event_basic->c63[2]<<16)&0x00ff0000)

                        +(((int)s_event_basic->c63[1]<<8)&0x0000ff00)

                        +(((int)s_event_basic->c63[0]<<0)&0x000000ff);

                gloab_event[sequence].str_event[tmpeventnum].QF_TIME = (((int)s_event_basic->c66[2]<<16)&0x00ff0000)

                        +(((int)s_event_basic->c66[1]<<8)&0x0000ff00)

                        +(((int)s_event_basic->c66[0]<<0)&0x000000ff);

                gloab_event[sequence].str_event[tmpeventnum].QFCZJLH = s_event_basic->c69;

                gloab_event[sequence].str_event[tmpeventnum].QFCHZH = SWAP2(s_event_basic->c70);

                gloab_event[sequence].str_event[tmpeventnum].JKZT = s_event_basic->c72;

                gloab_event[sequence].str_event[tmpeventnum].LJWY = SWAP2(s_event_basic->c73);

                gloab_event[sequence].str_event[tmpeventnum].BFQZX = s_event_basic->c75;

                gloab_event[sequence].str_event[tmpeventnum].BFQCX = s_event_basic->c76;

                gloab_event[sequence].str_event[tmpeventnum].QFFQZX = s_event_basic->c77;

                gloab_event[sequence].str_event[tmpeventnum].QFFQCX = s_event_basic->c78;

                //plkjevent = (lkjevent_stu*)c_map_at(&lkjenvent_map,&data_type);



                //change by cuiyi   20160913

                temp_b_id = atoi(gloab_event[sequence].B_ID);

                key  = ((temp_b_id & 0x000000ff) << 24) +

                        ((gloab_event[sequence].str_event[tmpeventnum].SJJLH & 0x000000ff) << 16) + gloab_event[sequence].str_event[tmpeventnum].CZH;

                plineinfo = c_map_at(&lineinfo_map,&key);/*当前站的线路信息*/

                if(NULL != plineinfo)

                {

                    gloab_event[sequence].LINENO = plineinfo->TRAIN_LINE_NO;

                    memcpy(gloab_event[sequence].STATIONNAME,plineinfo->TRAIN_STATION_NAME,33);

                    memcpy(gloab_event[sequence].LINENAME,plineinfo->TRAIN_LINE_NAME,33);

                }

                else

                {

                    gloab_event[sequence].LINENO = 0;

                    memset(gloab_event[sequence].LINENAME,0,33);

                    memset(gloab_event[sequence].STATIONNAME,0,33);



                }



                /*add by guo 20160530*/

                if(g_istest)

                {

                    if((chex == g_type) && (cheh == g_locono))

                    {

                        printf("接收到事件数据(%d bytes),loco. %03d-%04d,data_type = %d\n",length,chex,cheh,data_type);

                    }

                }

                if (data_type == 409)/*出库事件*/

                {

                    gloab_event[sequence].CRK = 1;

                    gloab_fault[sequence].CRK = 1;

                    ptraininfo->CRK = 1;        /*add by guo 20160608*/

                }else if (data_type == 410)/*入库事件*/

                {

                    gloab_event[sequence].CRK = 2;

                    gloab_fault[sequence].CRK = 2;

                    ptraininfo->CRK = 2;        /*add by guo 20160608*/

                }else

                {

                    ;

                }



                ptraininfo = NULL;//*edit by guo 20160608*/

                /*0530 end*/

                if (data_type == 0x198)/*408 司机号变更事件0x01*/

                {

                    s_event_g5= (struct STR_EVENT_G5 *)(data+offset+105);

                    gloab_event[sequence].str_event[tmpeventnum].SJH_BGQ = SWAP4(s_event_g5->c105);

                    gloab_event[sequence].str_event[tmpeventnum].FSJH_BGQ = SWAP4(s_event_g5->c109);

                }

                else if(data_type == 0x80 || data_type == 0x82)/*机外停车结束0x05、区间停车结束事件0x03*/

                {

                    s_event_g6 = (struct STR_EVENT_G6 *)(data+offset+105);

                    gloab_event[sequence].str_event[tmpeventnum].CXSJ = SWAP2(s_event_g6->c105);

                }

                else if (data_type == 0x193)/*403 LKJ版本信息事件0x91*/

                {

                    s_event_g8= (struct STR_EVENT_G8 *)(data+offset+105);

                    /*edit by guo 20160725*/

                    //sprintf(gloab_event[sequence].RKSJ,"%d-%02d-%02d %02d:%02d:%02d",yy+2000,mm,dd,hh,mi,ss);

                    sprintf(gloab_event[sequence].LKJVER,"%d%02d%02d",s_event_g8->c105[0]+2000,s_event_g8->c105[1],s_event_g8->c105[2]);

                }

                else if (data_type == 0x194)/*进站事件0x92*/

                {

                    s_event_g9= (struct STR_EVENT_G9 *)(data+offset+105);



                    gloab_event[sequence].str_event[tmpeventnum].PRE_CZH = SWAP2(s_event_g9->c105);

                    gloab_event[sequence].str_event[tmpeventnum].PRE_JLH = SWAP2(s_event_g9->c107);



                    temp_b_id = atoi(gloab_event[sequence].B_ID);

                    key  = ((temp_b_id &0x000000ff)<<24)

                            + ((gloab_event[sequence].str_event[tmpeventnum].PRE_JLH &0x000000ff)<<16)

                            +gloab_event[sequence].str_event[tmpeventnum].PRE_CZH;

                    plineinfo = c_map_at(&lineinfo_map,&key);

                    if (plineinfo != NULL)

                    {

                        memcpy(gloab_event[sequence].str_event[tmpeventnum].PRE_CZM,plineinfo->TRAIN_STATION_NAME,33);

                    }

                    else{

                        memset(gloab_event[sequence].str_event[tmpeventnum].PRE_CZM,0,33);

                    }

                }

                else if (data_type == 0x197)/*407 车次变更事件0x95*/

                {

                    s_event_g10	= (struct STR_EVENT_G10 *)(data+offset+105);

                    memset(tempCC,0,21);

                    sprintf(tempCC,"%c%c%c%c%d",s_event_g10->c105[0],s_event_g10->c105[1],s_event_g10->c105[2],s_event_g10->c105[3],SWAP4(s_event_g10->c109));

                    Trim(gloab_event[sequence].str_event[tmpeventnum].PRE_CC,tempCC);

                }

                else if (data_type == 0xE0||data_type == 0xE1)/*TCMS时间报警事件0xE0、6A时间报警事件0xE1*/

                {

                    s_event_g11	= (struct STR_EVENT_G11 *)(data+offset+105);

                    yy = 2000+s_event_g11->c105[0];

                    mm = s_event_g11->c105[1];

                    dd = s_event_g11->c105[2];

                    hh = s_event_g11->c105[3];

                    mi = s_event_g11->c105[4];

                    ss = s_event_g11->c105[5];

                    sprintf(gloab_event[sequence].str_event[tmpeventnum].LKJ_SJ,"%d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);



                    yy = 2000+s_event_g11->c111[0];

                    mm = s_event_g11->c111[1];

                    dd = s_event_g11->c111[2];

                    hh = s_event_g11->c111[3];

                    mi = s_event_g11->c111[4];

                    ss = s_event_g11->c111[5];

                    sprintf(gloab_event[sequence].str_event[tmpeventnum].QT_SJ,"%d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);

                }

                else{;}

                if(getGuid(gloab_event[sequence].str_event[tmpeventnum].IDX) == -1)

                {

                    lprintf(disp.v,"事件解析:获取idx失败\n");

                    lprintf(disp.e,"事件解析:获取idx失败\n");

                    return ERR;

                }

                else

                {

                    tmpeventnum += 1;

                }

            }

            else if(flag == 0)

            {

                //printf("chex = %d,cheh = %d,事件去重:日期为(%d-%02d-%02d %02d:%02d:%02d)\n",chex,cheh,yy,mm,dd,hh,mi,ss);

                lprintf(disp.e,"chex = %d,cheh = %d,事件去重:日期为(%d-%02d-%02d %02d:%02d:%02d)\n",chex,cheh,yy,mm,dd,hh,mi,ss);

            }

        }

        else

        {

            /*add by guo 20160824*/

            parse_error.datatype = 4;/*数据类型  1:3G, 2:北斗，3:故障，4:事件, 0:其他*/

            parse_error.efield = 1;/*错误字段  1:时间，2:速度，3:海拔，4:经纬度, 0:其他*/

            sprintf(parse_error.ereason, "事件解析:事件时间格式不对,yy = %d,mm = %d, dd = %d,hh = %d,mi = %d,ss = %d",yy + 2000,mm,dd,hh,mi,ss);

            getDateTime(&yy1, &mm1, &dd1, &hh1, &mi1, &ss1);

            sprintf(parse_error.rksj, "%d-%02d-%02d %02d:%02d:%02d", yy1, mm1, dd1, hh1, mi1, ss1);

            insert_AP_PARSE_ERROR_LOG(parse_error);

            //printf("事件时间格式不对，chex = %d,cheh = %d,yy = %d,mm = %d, dd = %d,hh = %d,mi = %d,ss = %d\n",chex,cheh,yy,mm,dd,hh,mi,ss);

        }



        offset += data_length;

        break;

    }

    if(tmpeventnum == 0)

    {

        return ERR;

    }



    gloab_event[sequence].eventnum = tmpeventnum;

    return SUCCESS;

}



uchar parse_start(uchar *data, int length)
{
    int chex=0;
    int cheh=0;
    uchar flag = ERR;
    if((0x55 != data[0]) || (0xBB != data[1]))
    {
        lprintf(disp.e,"报文头特征码错误0x%X,0x%X\n！宿ID：0x%X",data[0],data[1],data[5]);
        return ERR;
    }

    //if(0x22 == data[5])                                    //BD frame
	if (0)
    {
        chex = ((data[11]<<8) | data[10]) & 0x3FF;
        cheh = ((data[13]<<8) | data[12]) & 0x3FFF;
        if((0 == chex) || (0 == cheh))
        {
            return ERR;
        }
        lprintf(disp.b,"接收到北斗数据(%d bytes),loco. %03d-%04d\n",length,chex,cheh);
        flag = parse_bd(data, length);
        if(SUCCESS == flag)
        {
            gloab_bd_usednum += 1;
        }
    } else if (0x20 == data[5])                            //3G frame
    {
        chex = ((data[17]<<8) | data[16]) & 0x3FF;
        cheh = ((data[19]<<8) | data[18]) & 0x3FFF;
        if((0 == chex) || (0 == cheh))
        {
            return ERR;
        }
        if(g_istest)
        {
            if((chex == g_type) && (cheh == g_locono))
            {
                printf("接收到事件数据(%d bytes),loco. %03d-%04d,data[8] = %d\n",length,chex,cheh,data[8]);
            }
        }
        if(1 == data[8])                                   //实时信息
        {
            lprintf(disp.g,"接收到3g数据(%d bytes),loco. %03d-%04d\n",length,chex,cheh);
            flag = parse_3g(data, length);
            if(SUCCESS == flag)
            {
                gloab_3g_usednum += 1;
            }
        } 
		//else if(2 == data[8])                            //故障信息
  //      {
  //          lprintf(disp.f,"接收到故障数据(%d bytes),loco. %03d-%04d\n",length,chex,cheh);
  //          flag = parse_fault(data, length);
  //          if(SUCCESS == flag)
  //          {
  //             gloab_fault_usednum += 1;
  //          }
  //      } 
		//else if(3 == data[8])                            //事件信息
  //      {
  //          lprintf(disp.v,"接收到事件数据(%d bytes),loco. %03d-%04d\n",length,chex,cheh);
  //          /*add by guo 20160721*/
  //          if(0)
  //          {
  //              if((chex == g_type) && (cheh == g_locono))
  //              {
  //                  printf("接收到事件数据(%d bytes),loco. %03d-%04d\n",length,chex,cheh);
  //              }
  //          }
  //          flag = parse_event(data,length);
  //          if(SUCCESS == flag)
  //          {
  //              gloab_event_usednum += 1;
  //          }
  //      } 
		else
        {
            lprintf(disp.e,"信息类型代码:%d,不需解析入库\n",data[8]);
            flag = ERR;
        }
    } else
    {
        flag = ERR;
    }
    return flag;
}