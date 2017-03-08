#include "common.h"
//#include "mqcmn.h"
//#include "dbcmn.h"
#include "hash.h"

char sub_routine[30];            /*存放子进程名称*/ 
char configfile[30];         /*系统配置文件*/

char  user[11], pass[21], tname[21]; /*数据库连接变量*/
char  qmname[20];                    /*MQ队列管理器*/ 
char  revqname[31];	                 /*MQ接收队列*/
char  sndqname[31];                  /*MQ命令发送队列*/
char  init_count[11];                /*读MQ次数,然后重新连接MQ*/
char  msgid[10];                     /*MQ的服务ID*/
char  jkcount[10];                   /*要启动的数据处理程序数量*/
char  revlaisqname[31];				/*接收LAISQ队列名*/
char  sendlaisqname[31];			/*发送到LAISQ队列名*/
char  mongoqname[31]; 				/*发送到MongoDB程序队列*/
char  historyqname[31];			/*发送历史数据队列名*/
char  faultqname[31];				/*发送故障数据队列名*/

DISP  disp;

int ans_framenum;
hash_t  engineHash;/*bd去重*/
hash_t  engineHash_3g;/*3g去重*/
hash_t  engineHash_fault;/*故障去重*/
hash_t  engineHash_event;/*事件去重*/
int  dblinkcheck;
int  pre_dblinkcheck;
taghead* lploco=0;
//pthread_mutex_t mut;
char log_data[409600];
char triantypestr[1000];
c_map person_map;/*司机信息map*/
c_map installtrain_map; /*LDP装车信息map*/
c_map tcmsfault_map; /*TCMS故障信息map*/
c_map tcmsfault_map_v2; /*TCMS故障信息v20map*/
c_map _6afault_map;  /*6A故障map*/
c_map ldpfault_map;  /*LDP故障map*/
c_map traininfo_map;  /*机车信息map*/
c_map lkjenvent_map;  /*机车事件map*/
c_map lineinfo_map;  /*线路信息map*/
c_map boundary_map;  /*局界信息map*/
//trainkey_stu trainkey;/*机车索引*/
//updatetraintype_stu updatetraintype;

FILE* gloab_fp = NULL;
FILE* gloab_fp2 = NULL;

time_t getUnixTime(char* buf)
{
	struct tm tm_val;
	int yy,mm,dd,hh,mi,ss;
	char temp[5];
	time_t timetemp = 0;

	if ((strlen(buf) == 0) || buf[0] == 0)
	{
		return 0;
	}

	memset(temp,0,5);
	strncpy(temp,buf,4);
	tm_val.tm_year = atoi(temp) -1900;

	memset(temp,0,5);
	strncpy(temp,buf+5,2);
	tm_val.tm_mon = atoi(temp) - 1;

	memset(temp,0,5);
	strncpy(temp,buf+8,2);
	tm_val.tm_mday = atoi(temp);


	memset(temp,0,5);
	strncpy(temp,buf+11,2);
	tm_val.tm_hour = atoi(temp);

	memset(temp,0,5);
	strncpy(temp,buf+14,2);
	tm_val.tm_min = atoi(temp);

	memset(temp,0,5);
	strncpy(temp,buf+17,2);
	tm_val.tm_sec = atoi(temp);
	
	timetemp = mktime(&tm_val);
	//printf("test:%d-%02d-%02d %02d:%02d:%02d\n",yy,mm,dd,hh,mi,ss);
	return timetemp;
}

//int judgeUpdateTraintype(char *buf,updatetraintype_stu* stu)
//{
//	int i,j;
//	int pos[50];
//	int num;
//	char temp[4];
//	int shuchu = 0;
//	j=0;
//	num = 0;
//	if ((strlen(buf)==0)||(buf[0]==0))
//	{
//		stu->num = 0;
//		return -1;
//	}
//
//	for (i=0;i<strlen(buf);i++)
//	{
//		if (num > 49)
//		{
//			break;
//		}
//		if (buf[i] == '|')
//		{
//			pos[j++] = i;
//			num += 1;
//		}
//	}
//	if (num == 0)
//	{
//		stu->num = 0;
//		return -1;
//	}
//	stu->num = num;
//	for (i=0;i<num;i++)
//	{
//		memset(temp,0,4);
//		strncpy(temp,(buf+4*i),3);
//		stu->traintype[i] = atoi(temp);
//	}
//	return 0;
//}

int lprintf(int dis, char* fmt, ...)
{
	va_list ap;
	char buf[4096];
	char name[512];
	
	FILE * fp;
	int rowCount=0, h;	
	char* pch;
		
	memset(buf, 0, sizeof(buf));
	
	while('\n'==fmt[rowCount]){
		rowCount++;
	}
	memcpy(buf, fmt, rowCount);
	
	//if(st) sprintf(buf+strlen(buf),"%s  ",  pch+9);
	
	va_start(ap,fmt);
	vsprintf(buf+strlen(buf), fmt+rowCount, ap);
	va_end(ap);
	
	/*buf[strlen(buf)]='\r';
	buf[strlen(buf)]='\n';
	*/
	if(dis) printf("%s", buf);

	return 0;
}

/*设置调试文件,默认指向标准输出*/
void setDebugFile(char *name)
{
	if (_fileno(debugfile)!=1)
	{
		fclose(debugfile);
	}
	if ((debugfile=fopen(name,"w"))==NULL) 
		debugfile = stdout;
}

/*  关闭调试文件 */
void  closeDebugFile()
{
	if (_fileno(debugfile)!=1)
		fclose(debugfile);
}

int setLogFile(char *name)
{
  if (strcmp(name, logfilename) == 0)   
	  return 0;
  if (_fileno(logfile)!=1)  
	  fclose(logfile);
  if ((logfile=fopen(name,"r+")) == NULL)   
	  logfile = fopen(name, "w+");
  if (logfile == NULL) 
  {
    logfile = stdout;
    logfilename[0] = '\0';
    return -1;
  }
  else strcpy(logfilename, name);
  return 0;
}

/********************************************************
  功能：设置日志文件大小
  输入：日志文件大小
  返回: 无
  依赖: 文件大小变量logMaxLen
********************************************************/
void setLogFileSize(int size)
{
  logMaxLen = size;
  if (logMaxLen < 100*1024)       /* 100k */
  {
    logMaxLen = 100*1024;
  }
  if (logMaxLen > 100*1024*1024)  /* 100M */
  {
    logMaxLen = 100*1024*1024;
  }
}

/********************************** 
  功能：关闭日志文件 
  依赖: 日志文件指针logfile
**********************************/
int	 closeLogFile()
{
	if (_fileno(logfile) != 1)  
		fclose(logfile);
	return 0;
}

 void getDateTime(int *year, int *month, int *day, int *hour, int *minute, int *second)
{
  time_t time_val;
  struct tm	*tmdate;

  time_val = time(NULL);	      
  tmdate = localtime(&time_val);

  *year = tmdate->tm_year+1900;	  
  *month = tmdate->tm_mon+1;
  *day = tmdate->tm_mday; 
  *hour = tmdate->tm_hour;
  *minute = tmdate->tm_min;	
  *second = tmdate->tm_sec;
}

void getDateTime1(int *year, int *month, int *day, int *hour, int *minute, int *second,time_t *unixtime)
{
  time_t time_val;
  struct tm	*tmdate;

  time_val = time(NULL);	      
  tmdate = localtime(&time_val);

  *year = tmdate->tm_year+1900;	  
  *month = tmdate->tm_mon+1;
  *day = tmdate->tm_mday; 
  *hour = tmdate->tm_hour;
  *minute = tmdate->tm_min;	
  *second = tmdate->tm_sec;
  *unixtime = time_val;
}

 void writeLogInfo(char type, const char *message)
{
	char filenametmp[100], buffer[1024];
	char temp[20];
	int	 year, month, day, hour, minute, second;
	int	 len;
	int  logflag = 0;   /*日志记录标志，1:保留所有日志；0:保留当前及上一个日志文件*/

	len = strlen(message);
	if (len == 0)  
		return;
	else 
	{
		getDateTime(&year, &month, &day, &hour, &minute, &second);
		sprintf(buffer, "####<%c><%04d-%02d-%02d %02d:%02d:%02d>--%s",
							 type, year, month, day, hour, minute, second, message);		
		fseek(logfile, 0, SEEK_END);
		if (ftell(logfile) > logMaxLen)    /*当前Log文件大小大于设置的最大Log文件大小*/
		{			
			strcpy(filenametmp, logfilename);
			if (logflag == 1)
			    /*日志备份文件格式为jwjksndcmd.log_年月日时分秒*/
			    sprintf(temp, "_%04d%02d%02d%02d%02d%02d", year, month, day, hour, minute, second);
			else
			    strcat(temp, "_bak");   /*日志备份文件格式为jwjksndcmd.log_bak*/

			strcat(filenametmp, temp);
			fclose(logfile);
			_unlink(filenametmp);
			rename(logfilename, filenametmp);

			if (NULL == (logfile=fopen(logfilename,"wt")))	return;
		}
		
		fputs(buffer, logfile);
		fflush(logfile);
		if (message[len-1] != '\n')  fprintf(logfile, "\n");				
	}
}

/* 用途: 输出调试日志*/
void writedebugInfo(char * fname, char *message, char type)
{
	char filenametmp[100], buffer[1000];
	FILE *tmpfile;
	int	 year, month, day, hour, minute, second;

	strcpy(filenametmp, "log/");
	strcat(filenametmp, fname);
	strcat(filenametmp, "debug.log");
	getDateTime(&year, &month, &day, &hour, &minute, &second);
	tmpfile = fopen(filenametmp, "a+");
	if (tmpfile==NULL) 
		return;
	fseek(tmpfile, 0, SEEK_END);
	if (ftell(tmpfile) > 1024*1024)
	{
		fclose(tmpfile);
		tmpfile = fopen(filenametmp, "w");
	}
	if (tmpfile)
	{
		sprintf(buffer, "%c, %04d-%02d-%02d %02d:%02d---%s\n",
		 	    type, year, month, day, hour, minute, message);
		fputs(buffer, tmpfile);
		fflush(tmpfile);
		fclose(tmpfile);
	}
}

 int GetToken(char *buffer, int pos, char *token)
{
	int	cc=0;

	while(buffer[pos]==32 || buffer[pos]=='\t')   pos++;
	if ('#' == buffer[pos])   return 0;
	while(buffer[pos]!=32 && buffer[pos]!='\t'
		&& buffer[pos]!='\n' && buffer[pos]!='\0')
	{
		token[cc++] = buffer[pos++];
	}
	token[cc] = '\0';
	return cc? pos:0;
}

char *UCase(const char *source, char *target)
{
  char *p = target;
  while (*source)
  {
    *p = toupper(*source);
    ++p;++source;
  }
  *p = 0;
  return target;
}

char *LCase(const char *source, char *target)
{
  char *p = target;
  while (*source)
  {
    *p = tolower(*source);
    ++p;++source;
  }
  *p = 0;
  return target;
}

//#ifdef  UNIX_LINUX_SYS
//int getGuid(char* guidstr)
//{
//	int guid_len;
//	int i=0;
//	uuid_t uu;
//	uuid_generate(uu);	
//	sprintf(guidstr,"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x"
//	,uu[15],uu[14],uu[13],uu[12],uu[11],uu[10],uu[9],uu[8],uu[7],uu[6],uu[5],uu[4],uu[3]
//	,uu[2],uu[1],uu[0]);
//	
//	return 0 ;
//}
//#else
int getGuid(char* guidstr)
{
	int guid_len;
	int i=0;
	GUID guid;
	guid_len = strlen(guidstr);
	if(guid_len<17)
	{
		guidstr[i] = '\0';
		return -1;
	}
	if( CoCreateGuid(&guid) == S_OK)
	{   
		sprintf(guidstr, "%08X%04X%04x%02X%02X%02X%02X%02X%02X%02X%02X", 
		guid.Data1, 
		guid.Data2, 
		guid.Data3, 
		guid.Data4[0], 
		guid.Data4[1], 
		guid.Data4[2], 
		guid.Data4[3], 
		guid.Data4[4], 
		guid.Data4[5], 
		guid.Data4[6], 
		guid.Data4[7]);
		return 0;
	}
	else{
		guidstr[0] = '\0';
		return -1;
	}
	
}      
//#endif

void trim1(char *s)
{
	char *p,*r;
	//char *h=s;
	p=r=s;
	while(*r)r++;//找尾
	r--;
	while(*r==' ')r--;//找最后一个字 
	while(*p==' ')p++;//找第一个字
	while(p<=r)
		*s++=*p++;
	*s=0;
	return;
}

char *Trim(char *dst, const char *src)
{
	int src_len;
	int i,j;
	
	src_len = strlen(src);
	//dst_len = strlen(dst);
	//printf("src_len=%d,dst_len=%d\n",src_len,dst_len);
	

	 i=0;
	 j=0;
	for(i=0;i<src_len;i++)
	{
		if (((src[i] >= 0x30) &&(src[i] <=0x39) ) || ((src[i] >= 0x41) &&(src[i] <=0x5A) ) || ((src[i] >= 0x61) &&(src[i] <=0x7A) ))
		{
			dst[j++] =  src[i];
		}
	}
	dst[j] = '\0';
	return dst;
}

long charTolong_h(unsigned char *buffer, int size, unsigned char mask)
{
	long result = 0;
	int i;
	buffer[0] = buffer[0] & mask;
	i = 0;
	for(i; i<size; i++)
	{
		result = (result<<8) + buffer[i];
	}
	return result;
} 

long charTolong(unsigned char *buffer, int size, unsigned char mask)
{
	long result = 0;
	int i;

	if (size > 4)	
		size = 4;
	buffer[size-1] = buffer[size-1] & mask;
	i = size-1;
	for(i; i>=0; i--)
	{
		result = (result<<8) + buffer[i];
	}
	return result;
} 
 
long charToint_mask(unsigned char *buffer, int size, unsigned char mask)
{
	return charTolong(buffer, size, mask);
} 

long charToint(unsigned char *buffer, int size)
{
	return charTolong(buffer, size, 0xff);
} 
 
int longTochar(unsigned char *buffer, int buflen, long data)
{
	unsigned long maxdata;
	int maxlen;
	int i;    

	maxlen = (buflen>4)? 4:buflen;
	maxdata = ~(~0 << (maxlen*8)) - 1;     /*maxlen个字节的最大数*/
    if ((unsigned long)data > maxdata)
		return -1;

    i = 0;
    for(i; i<buflen; i++)
	{
	    buffer[i] = data % 0x100;
		data = ((unsigned long)data >> 8);
	}
	return 0;
}
 
short getDataTypeLength(unsigned char *buffer, unsigned char *type, unsigned char *data_id, int trade_len)
{
	unsigned char mark;    /*存放协议包标识符变量，LAIS为0x39，RMDS为0x58 */
	int head_length;       /*协议数据头长度*/
	int check_length;      /*校验和长度*/
	int pack_len;          /*每包数据的长度*/

	head_length = 15;  
	check_length = 1;        
	pack_len = 0;

	if (trade_len < (head_length+check_length))  
		return -3;                    /*数据长度不够*/
	mark = buffer[0];


	if(mark == 0x58)              /*RMDS系统数据包标识符,为0x58*/
	{   
		/*type = buffer[20];            协议设备类型*/
		/*data_id = buffer[21];         协议数据特征码*/
	    pack_len = charTolong(&buffer[4],2,0xff) + head_length + check_length;
		if(pack_len > trade_len)  
			return 0;                           /*长度溢出，数据包实际长度小于其所申明的长度*/
		if(Check_sum(buffer, pack_len) != 0) 	/*计算校验和*/	
			return -2;   	                    /*校验和不正确*/	
	}	
	else                                        /*数据包标识符不对*/
	{                       
		return -1;      
	}
    	
	return pack_len;                            /*返回协议所申明的整个数据包长度*/
}

unsigned char Check_sum(unsigned char *buf, int buflen)
{
	/*检查和*/
	int i;
	unsigned char buff;
	buff = 0;
	for (i=0; i<buflen ; i++)
		buff += buf[i];
	buff = (~buff) + 1;
	return buff;
}

unsigned char Check_sum2(unsigned char *buf, int buflen)
{
	/*检查和*/
	int i;
	unsigned char buff=0;
	buff = 0;
	for (i=0; i<buflen-1 ; i++)
		buff += buf[i];
	if(buff==buf[i])
		return 0;
	else
		return 1;
}
 
int extractFilePath(char *path, char *fileName)
{
	int i;

	if(path && fileName)
	{
		i=strlen(fileName);
		
		while(i>=0 && fileName[i]!='\\') 
			i--;
		
		if(i<0) 
			return 0;
		
		memcpy(path,fileName,i+1);
		path[i+1]='\0';
		return i+1;
	}
	return 0;
}

int	cmn_read_db_config(char *path, char *name)
{
	char	buffer[1000] = "",
			cname[30] = "",
			fname[256] = "",
			temp[1000]="";
	FILE	*fp;
	int		pos;
    
	if(name)
	    strcpy (cname, name);
    if(path) 
	{
	    strcpy(fname, path);
	    strcpy(fname, "/");
	}
	strcat(fname, cname);
	fp = fopen(fname, "r+");

	if(fp)
	{
		while (!feof(fp))
		{
			/*配置标识， 数据类型标识，管道名称*/
			if (fgets(buffer, sizeof(buffer), fp))
			{
				pos = 0;
				pos = GetToken(buffer, pos, temp);
				UCase(temp,temp);
				printf("temp = %s\n",temp);
				if (strcmp(temp, "TNAME") == 0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(tname, temp);					
				}
				if (strcmp(temp, "USER") == 0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(user, temp);					
				}
				if (strcmp(temp, "PWD") == 0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(pass, temp);					
				}
				if(strcmp(temp, "BINDPORT") == 0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(bindport, temp);	
                }
                /*add by guo 20160721*/
                if(strcmp(temp, "ISTEST") == 0)
                {
                    pos = GetToken(buffer, pos, temp);
                    //strcpy(bindport, temp);
                    g_istest = atoi(temp);
                }
                if(strcmp(temp, "TYPE") == 0)
                {
                    pos = GetToken(buffer, pos, temp);
                    //strcpy(bindport, temp);
                    g_type = atoi(temp);
                }
                if(strcmp(temp, "LOCONO") == 0)
                {
                    pos = GetToken(buffer, pos, temp);
                    //strcpy(bindport, temp);
                    g_locono = atoi(temp);
                }/*end */
				if(strcmp(temp, "BINDIP") == 0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(ipaddr, temp);	
				}
				if (strcmp(temp, "QMNAME") == 0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(qmname, temp);					
				}
				if (strcmp(temp, "REVQNAME") == 0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(revqname, temp);	
				}
				if (strcmp(temp, "SNDQNAME") == 0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(sndqname, temp);	
				}
				if (strcmp(temp, "INITCOUNT") == 0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(init_count, temp);					
				}
				if (strcmp(temp, "MSGID")==0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(msgid, temp);					
				}
				if (strcmp(temp, "JKCOUNT")==0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(jkcount, temp);					
				}
				if (strcmp(temp, "LAISRQ")==0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(revlaisqname, temp);					
				}
				if (strcmp(temp, "LAISSQ")==0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(sendlaisqname, temp);					
				}
				if (strcmp(temp, "MONGORQ")==0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(mongoqname, temp);					
				}
				if (strcmp(temp, "HISTORYQ")==0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(historyqname, temp);					
				}
				if (strcmp(temp, "FAULTQ")==0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(faultqname, temp);					
				}

				if (strcmp(temp, "TRAINTYPE")==0)
				{
					pos = GetToken(buffer, pos, temp);					
					strcpy(triantypestr, temp);	
					//judgeUpdateTraintype(triantypestr,&updatetraintype);					
				}

			}
		}
		fclose(fp);
		return 1;
	}
	return 0;
}

void  init_read_configfile(char *path, char *name, char *sub_routine)  
{
  char temp[100];
  if ( !cmn_read_db_config(path, name) )     
  {
    sprintf(temp, "程序%s读取系统配置文件%s出错，程序10秒后退出！\n", sub_routine, name);
#if 1
    cclog('e', temp);
	printf("temp1 = %s\n",temp);
#else
    writedebugInfo(sub_routine, temp, LOGERROR);
#endif
	Sleep(5000);                
    exit(-1);
  }
}
 
void init_oracle(char *sub_routine, char *configfile)
{
  char temp[200];
  while(1) 
  {
	//if(oraConnect(user,pass,tname) != 0)
	  if (1)
    {
        sprintf(temp, "  %s连接Oracle数据库出错，请检查与数据库的相应设置，30秒后重试..........\n", sub_routine);

        /*  add by linw 20160306*/
#ifdef UNIX_LINUX_DEBUG
        printf("  %s\n", temp);
#endif

#if 1
        cclog('e', temp);
#else
        writedebugInfo(sub_routine, temp, LOGERROR);
#endif
		Sleep(30000);
		init_read_configfile(NULL, configfile, sub_routine); 
    }
    else
	{
		sprintf(temp, "%s连接Oracle数据库成功!\n", sub_routine);  
#ifdef UNIX_LINUX_DEBUG
        printf("  %s\n", temp);
#endif
#if 1
        cclog('e', temp);
#else
        writedebugInfo(sub_routine, temp, LOGNORMAL);
#endif
		break;
    }
  }
}

void saveTcpdata(unsigned char* data,  int len, int tag)
{
	/*tag:1为3G；2为LAIS；3为北斗*/
	char datafile[100];
	int yy=2001,mm=0,dd=0,hh=0,mi=0,ss=0;
	int chex=0,cheh=0;
	unsigned short uChex=0,uCheh=0;
	unsigned char uTag=0;
	
	if(tag==1 || tag==4)/*3g,event*/
	{
		chex = ((data[17]<<8) | data[16]) & 0x3FF;
		cheh = ((data[19]<<8) | data[18]) & 0x3FFF;
	}
	else if (tag==2)/*lais*/
	{
		chex = ((data[41]<<8) | data[40]) & 0x3FF;
		cheh = ((data[39]<<8) | data[38]) & 0x3FFF;
	}
	else if (tag==3)/*BD*/
	{
		chex = ((data[11]<<8) | data[10]) & 0x3FF;
		cheh = ((data[13]<<8) | data[12]) & 0x3FFF;
	}
	memset(datafile,'\0',sizeof(datafile));
	getDateTime(&yy,&mm,&dd,&hh,&mi,&ss);
	if(tag==1)
	{
		/*sprintf(datafile,"./log/%03d-%04dcmddata_%04d%02d%02d_%02d%02d.dat",chex,cheh,yy,mm,dd,hh,mi);*/
		sprintf(datafile,"./log/%03d-%04dcmddata_%04d%02d%02d.dat",chex,cheh,yy,mm,dd);
	}
	else if (tag==2)
	{
		sprintf(datafile,"./log/lais%03d-%04ddata_%04d%02d%02d.dat",chex,cheh,yy,mm,dd);
	}
	else if (tag==3)
	{
		sprintf(datafile,"./log/BD%03d-%04ddata_%04d%02d%02d.dat",chex,cheh,yy,mm,dd);
	}
	else if(tag == 4)
	{
		sprintf(datafile,"./log/Event%03d-%04ddata_%04d%02d%02d.dat",chex,cheh,yy,mm,dd);
	}
	else
	{
		return;
	}
	if((gloab_fp=fopen(datafile,"ab"))!=NULL)
	{
		fwrite(data,1,len,gloab_fp);
		fclose(gloab_fp);
	}
}

int readTcpdata()
{
	int len=0;
	char datafile[50]={"log\\cmd_data.dat"};
	if(gloab_fp==NULL)
	{
		gloab_fp = fopen(datafile,"rb");
	}
	if(gloab_fp!=NULL)
	{
		int readbyte = fread(&len,1,4,gloab_fp);
		if(readbyte==4)
		{
			readbyte = fread(log_data,1,len,gloab_fp);
			if(readbyte==len)
			{
				return len;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void arrayUnite(int *b,int *source,int idx)
{
	int i,j;
	j = 0;
	for(i = idx; i < idx+8; i ++)
	{
		b[i] = source[j];
		j++;
	}

}

int getdiffsecond(unsigned int tm_n,unsigned int tm_o)
{
	int hh_n,mi_n,ss_n;
	int hh_o,mi_o,ss_o;
	int diffsec=0;
	
	ss_n = tm_n & 0x0000003f;
	mi_n = tm_n >>6 & 0x0000003f;
	hh_n = tm_n >>12 & 0x0000001f;
	
	ss_o = tm_o & 0x0000003f;
	mi_o = tm_o >>6 & 0x0000003f;
	hh_o = tm_o >>12 & 0x0000001f;
	
	diffsec = (hh_n*3600+mi_n*60+ss_n) - (hh_o*3600+mi_o*60+ss_o);
	if(diffsec<0)
		return diffsec*(-1);
	else
		return diffsec;
}
 
void jktoDate(char *date,long pl)
{
	int yy=2001,mm=0,dd=0,hh=0,mi=0,ss=0;
	int idate = pl;


	ss = idate & 0x3f;
	mi = idate >>6 & 0x3f;
	hh = idate >>12 & 0x1f;

	dd = idate >>17 & 0x1f;
	mm = idate >>22 & 0x0f;
	yy = (idate >>26 & 0x3f )+ 2000;

	if(!checkdate(yy,mm,dd,hh,mi,ss))
	{
		lprintf(disp.e,"jkdate get systime..........%04d-%02d-%02d %02d:%02d:%02d\n",yy,mm,dd,hh,mi,ss);	
		getDateTime(&yy,&mm,&dd,&hh,&mi,&ss);
	}
	sprintf(date,"%04d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);
}

int checkdate(int yy,int mm, int dd,int hh,int mi,int ss)
{
	if(mm>12 || mm<1 || dd<1)
		return 0;
	if( hh > 23 || mi > 60 || ss > 60)
	{
		return 0;
	}
	if(mm==2)
	{
		if(((yy%4==0) && (yy%100 !=0)) || (yy%400 == 0))/*闰年*/
		{
			if(dd>29)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			if(dd>28)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		if(mm<8 )
		{
			if(mm%2 ==0 )/*小月*/
			{
				if(dd>30)
					return 0;
				else
					return 1;
			}
			else
			{
				 if(dd>31)
					return 0;
				else
					return 1;
			}
		}
		else
		{
			if(mm%2 ==0 )/*大月*/
			{
				if(dd>31)
					return 0;
				else
					return 1;
			}
			else
			{
				 if(dd>30)
					return 0;
				else
					return 1;
			}
		}
	}
}

char* tcmstoDate(char *date,unsigned char *ch)
{
	int yy=0,mm=0,dd=1,hh=1,mi=1,ss=1,tmp=0;
	
	tmp = ch[0];
	yy = ((tmp &0x0f) + (tmp>>4 &0x0f)*10) +2000;
	
	tmp = ch[1];
	mm = ((tmp &0x0f) + (tmp>>4 &0x0f)*10);
	
	tmp = ch[2];
	dd  = ((tmp &0x0f) + (tmp>>4 &0x0f)*10);

	tmp = ch[4];
	hh= ((tmp &0x0f) + (tmp>>4 &0x0f)*10);

	tmp = ch[5];
	mi  = ((tmp &0x0f) + (tmp>>4 &0x0f)*10);

	tmp = ch[6];
	ss  = ((tmp &0x0f) + (tmp>>4 &0x0f)*10);

	if(mm == 0 ||mm > 12 || dd == 0 || dd >31 || hh > 24 || mi > 60 || ss > 60){
		printf("tcmstoDate get sysdate..........mm =%d, dd= %d\n",mm,dd);
		getDateTime(&yy,&mm,&dd,&hh,&mi,&ss);
		
	}
	sprintf(date,"%04d-%02d-%02d %02d:%02d:%02d",yy,mm,dd,hh,mi,ss);
	return date;
}

int s8toint(unsigned char data)
{
	int tmp = 0;
	int fhw = 0;
	tmp = charToint(&data,1);
	fhw = tmp>>7 &0x01;
	tmp = tmp &0x7f;
	if(fhw == 1)
		tmp = -tmp;
	return tmp;
}

int s16toint(char *ch)
{
	int tmp = 0;
	int fhw = 0;

	tmp = charToint((unsigned char*)ch,2);
	fhw = tmp>>15 &0x01;

	tmp = tmp &0x7fff;
	
	if(fhw == 1)
		tmp = -tmp;
	
	return tmp;
}

int s32toint(char *ch)
{
	int tmp = 0;
	int fhw = 0;

	tmp = charToint((unsigned char*)ch,4);
	fhw = tmp>>31 &0x01;

	tmp = tmp &0x7fffffff;
	if(fhw == 1)
		tmp = -tmp;

	return tmp;
}
 
void getCheci(long checi, char *buf)
{	
	char l_no[2]={0};
	int tmp = 0;
	int tmp3 = 0;
	tmp = checi / 1000;
	tmp3 = checi % 1000;
	switch(tmp) {
		case 20: strcpy(l_no,"T");break;
		case 21: strcpy(l_no,"K");break;
		case 22: strcpy(l_no,"L");break;
		case 23: strcpy(l_no,"Y");break;
		case 24: strcpy(l_no,"H");break;    
		case 25: strcpy(l_no,"Z");break;
		case 26: strcpy(l_no,"N");break;
		case 29: strcpy(l_no,"X");break;
		case 30: strcpy(l_no,"0T");break;
		case 31: strcpy(l_no,"0K");break;
		case 32: strcpy(l_no,"0L");break;
		case 33: strcpy(l_no,"0Y");break;
		case 34: strcpy(l_no,"0H");break;
		case 35: strcpy(l_no,"0Z");break;
		case 36: strcpy(l_no,"0N");break;
		case 39: strcpy(l_no,"0X");break;
		default :sprintf(l_no,"%2d",tmp);break;
	}
	sprintf(buf,"%s%03d",l_no,tmp3);
}

long getKilo(long param)
{
	int fz =0;
	long kilo = 0;
	fz = (param >>23 &0x01);
	kilo = (param &0x3fffff);
	if(fz== 1)
		kilo =  -kilo;
	
	return kilo;
}
 
void cclog(char type,char *ch)
{
	FILE *fp1;
	int	 year, month, day, hour, minute, second;
	char mess[1024]={"\0"};
    char mlogfile[50]={"log/bjcmd_\0"};
	char cdate[20]={"\0"};

	getDateTime(&year, &month, &day, &hour, &minute, &second);

	sprintf(cdate,"%d-%d-%d",year,month,day);
	strcat(mlogfile,cdate);
	strcat(mlogfile,".log");
	
	if(type == 'e')
	{
		sprintf(mess,"错误信息%d-%d-%d %d:%d:%d\t%s",
		year, month, day, hour, minute, second,ch);
	}
	else if(type == 'l')
	{
		sprintf(mess,"--------%d-%d-%d %d:%d:%d\t%s",
		year, month, day, hour, minute, second,ch);
	}else
	{
        sprintf(mess,"--------%d-%d-%d %d:%d:%d\t%s",
                year, month, day, hour, minute, second,ch);
//		sprintf(mess,"%s",ch);
	}
	
	if((fp1 = fopen(mlogfile,"at+"))!=NULL){
			
			fputs(mess,fp1);
			rewind(fp1);
			fclose(fp1);	
	}
}

void testlog(char type,char *ch)
{
	FILE *fp1;
	int	 year, month, day, hour, minute, second;
	char mess[1024]={"\0"};
	char mlogfile[50]={"log/HXD1D0226_test_\0"};
	char cdate[20]={"\0"};
	char ctype_3G[10]={"3G_\0"};
	char ctype_BD[10]={"BD_\0"};
	getDateTime(&year, &month, &day, &hour, &minute, &second);
	sprintf(cdate,"%d-%d-%d",year,month,day);
	if(type == 1)
	{
		strcat(mlogfile,ctype_3G);
		strcat(mlogfile,cdate);
		strcat(mlogfile,".log");	
	}
	else if(type == 2)
	{
		strcat(mlogfile,ctype_BD);
		strcat(mlogfile,cdate);
		strcat(mlogfile,".log");
	}
	else
	{
		strcat(mlogfile,cdate);
		strcat(mlogfile,".log");
	}
	sprintf(mess,"入库时间%d-%d-%d %d:%d:%d\t%s",
		year, month, day, hour, minute, second,ch);
	if((fp1 = fopen(mlogfile,"at+"))!=NULL){
			
			fputs(mess,fp1);
			rewind(fp1);
			fclose(fp1);	
	}
}

//用来记录故障下发的日志文件
void testlogGZ(char type,char *ch)
{
	FILE *fp1;
	int	 year, month, day, hour, minute, second;
	char mess[1024]={"\0"};
	char mlogfile[50]={"log/GZ_test_\0"};
	char cdate[20]={"\0"};
	char ctype_10[10]={"10_\0"};
	char ctype_20[10]={"20_\0"};
	getDateTime(&year, &month, &day, &hour, &minute, &second);
	sprintf(cdate,"%d-%d-%d",year,month,day);
	if(type == 10)
	{
		strcat(mlogfile,ctype_10);
		strcat(mlogfile,cdate);
		strcat(mlogfile,".log");	
	}
	else if(type == 20)
	{
		strcat(mlogfile,ctype_20);
		strcat(mlogfile,cdate);
		strcat(mlogfile,".log");
	}
	else
	{
		strcat(mlogfile,cdate);
		strcat(mlogfile,".log");
	}
	sprintf(mess,"入库时间%d-%d-%d %d:%d:%d\t%s",
		year, month, day, hour, minute, second,ch);
	if((fp1 = fopen(mlogfile,"at+"))!=NULL){
			
			fputs(mess,fp1);
			rewind(fp1);
			fclose(fp1);	
	}
}

//去除字符串中所有空格
void VS_StrTrim(char *pStr_from,char *pTmp_to)
{
    int i = 0,j = 0;
    int len = strlen(pStr_from);
    memcpy(pTmp_to,pStr_from,len);

    for(i=0;i<len;i++)
    {
        //printf("pStr_from[%d] = %c\n",i,pStr_from[i]);
        if(pStr_from[i] == '0' ||pStr_from[i] == '1' ||pStr_from[i] == '2' ||pStr_from[i] == '3'
                ||pStr_from[i] == '4' ||pStr_from[i] == '5' ||pStr_from[i] == '6' ||
                pStr_from[i] == '7' ||pStr_from[i] == '8' ||pStr_from[i] == '9')
        {
            pTmp_to[j] = pStr_from[i];
            //printf("pTmp_to[%d] = %c\n",j,pTmp_to[j]);
            j++;
        }
        else
        {
           pTmp_to[j] ='\0';
           //printf("pTmp_to len = %d\n",strlen(pTmp_to));
           break;
        }
    }
}

