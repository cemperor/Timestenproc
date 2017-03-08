
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
    "data_update.pc"
};


static unsigned int sqlctx = 1151267;


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
   unsigned char  *sqhstv[160];
   unsigned long  sqhstl[160];
            int   sqhsts[160];
            short *sqindv[160];
            int   sqinds[160];
   unsigned long  sqharm[160];
   unsigned long  *sqharc[160];
   unsigned short  sqadto[160];
   unsigned short  sqtdso[160];
} sqlstm = {12,160};

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

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4274,852,0,0,
5,0,0,1,1540,0,5,24,0,0,90,90,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,
0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,
0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,
0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,
380,0,0,2,441,0,5,147,0,0,29,29,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,
0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,68,0,0,1,68,0,0,1,3,0,
0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
511,0,0,3,664,0,5,201,0,0,48,48,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,
0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,68,0,0,1,68,0,0,1,3,0,
0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,
718,0,0,4,2406,0,5,285,0,0,129,129,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,
0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,
1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1249,0,0,5,2766,0,5,453,0,0,160,160,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,
0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,
4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,4,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,4,0,
0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1904,0,0,6,2613,0,5,653,0,0,144,144,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,4,0,0,1,
4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,
0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,4,
0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,
4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,
1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,
0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,
0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,
2495,0,0,7,2106,0,5,859,0,0,116,116,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,
3,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,
1,4,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,
0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,
0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
2974,0,0,8,601,0,3,1013,0,0,37,37,0,1,0,1,97,0,0,1,68,0,0,1,97,0,0,1,97,0,0,1,
3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,
0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,68,0,0,1,68,0,0,1,3,0,0,1,3,0,0,
1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,
97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
3137,0,0,9,453,0,3,1224,0,0,29,29,0,1,0,1,97,0,0,1,68,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,97,0,0,1,68,0,0,1,68,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,0,0,
1,4,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
3268,0,0,10,635,0,3,1406,0,0,39,39,0,1,0,1,97,0,0,1,68,0,0,1,97,0,0,1,97,0,0,1,
3,0,0,1,68,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,
3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,68,0,0,1,68,0,0,1,3,0,
0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,4,0,0,1,4,0,0,1,4,0,0,
1,4,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
3439,0,0,11,631,0,3,1626,0,0,39,39,0,1,0,1,97,0,0,1,68,0,0,1,97,0,0,1,97,0,0,1,
3,0,0,1,68,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,
3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,68,0,0,1,68,0,0,1,3,0,
0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,4,0,0,1,4,0,0,1,4,0,0,
1,4,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
3610,0,0,12,487,0,3,1848,0,0,31,31,0,1,0,1,97,0,0,1,68,0,0,1,97,0,0,1,68,0,0,1,
3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,68,0,0,1,68,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,
1,4,0,0,1,4,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
3749,0,0,13,627,0,3,2036,0,0,39,39,0,1,0,1,97,0,0,1,68,0,0,1,97,0,0,1,97,0,0,1,
97,0,0,1,97,0,0,1,3,0,0,1,68,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,68,0,0,1,68,0,0,1,3,0,
0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,4,0,0,1,4,0,0,1,4,0,0,
1,4,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
3920,0,0,14,485,0,3,2254,0,0,31,31,0,1,0,1,97,0,0,1,68,0,0,1,97,0,0,1,97,0,0,1,
97,0,0,1,68,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,68,0,0,1,68,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,
1,4,0,0,1,4,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
4059,0,0,15,639,0,3,2438,0,0,40,40,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,
97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,97,0,0,1,68,0,0,1,68,0,0,1,3,0,0,1,68,0,0,1,3,0,0,1,97,0,0,1,3,0,
0,1,68,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,4,0,0,1,4,0,0,
1,4,0,0,1,4,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
4234,0,0,16,620,0,3,2660,0,0,39,39,0,1,0,1,97,0,0,1,68,0,0,1,3,0,0,1,97,0,0,1,
97,0,0,1,3,0,0,1,68,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,
97,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,68,0,0,1,68,
0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,4,0,0,1,4,0,
0,1,4,0,0,1,4,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
4405,0,0,17,586,0,3,2878,0,0,37,37,0,1,0,1,97,0,0,1,68,0,0,1,3,0,0,1,97,0,0,1,
97,0,0,1,3,0,0,1,68,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,
97,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,68,0,0,1,68,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,
1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
4568,0,0,18,954,0,3,3084,0,0,61,61,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,
0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,68,0,0,1,68,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,
0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,
0,
4827,0,0,19,863,0,3,3406,0,0,60,60,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,
0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,68,0,0,1,68,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,
0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
5082,0,0,20,971,0,3,3724,0,0,63,63,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,
0,0,1,4,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,68,0,0,1,68,0,0,1,3,0,0,1,3,0,0,1,4,0,
0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,
1,97,0,0,1,97,0,0,
5349,0,0,21,880,0,3,4050,0,0,62,62,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,
0,0,1,4,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,68,0,0,1,68,0,0,1,3,0,0,1,3,0,0,1,4,0,
0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,
1,3,0,0,
5612,0,0,22,983,0,3,4372,0,0,68,68,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,3,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,4,0,0,1,4,0,0,1,4,
0,0,1,4,0,0,1,97,0,0,1,3,0,0,1,68,0,0,1,68,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,
97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,
5899,0,0,23,987,0,3,4716,0,0,68,68,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,3,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,4,0,0,1,4,0,0,1,4,
0,0,1,4,0,0,1,97,0,0,1,3,0,0,1,68,0,0,1,68,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,
97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,
6186,0,0,24,987,0,3,5062,0,0,68,68,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,3,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,4,0,0,1,4,0,0,1,4,
0,0,1,4,0,0,1,97,0,0,1,3,0,0,1,68,0,0,1,68,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,
97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,
6473,0,0,25,0,0,29,5344,0,0,0,0,0,1,0,
6488,0,0,26,852,0,3,5400,0,0,61,61,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,3,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,
0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,68,0,0,1,68,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
6747,0,0,27,463,0,3,5726,0,0,37,37,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,
0,0,1,3,0,0,1,4,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
6910,0,0,28,259,0,3,5924,0,0,17,17,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,
97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,4,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,1,3,0,0,
6993,0,0,29,0,0,29,6054,0,0,0,0,0,1,0,
7008,0,0,30,0,0,29,6127,0,0,0,0,0,1,0,
7023,0,0,31,0,0,29,6345,0,0,0,0,0,1,0,
7038,0,0,32,0,0,29,6393,0,0,0,0,0,1,0,
7053,0,0,33,0,0,29,6557,0,0,0,0,0,1,0,
};


#include <stdio.h>
#include <sqlca.h>
#include "common.h"
#include "dbcmn.h"
//#include "data_insert.h" 
#include "struct.h"


unsigned int Insert_num = 0;

struct STR_TRAIN_DATA_EVENT *data_event;

struct STR_TRAIN_DATA_3G 	 *data_3g;

struct STR_TRAIN_DATA_BD 	*data_bd;

struct STR_TRAIN_DATA_FAULT  *data_fault;

unsigned char update_ITF_6A()//6A报文
{
    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

    /* EXEC SQL UPDATE AP_6A_LASTSTATUS SET 
             idx			= :data_3g->idx				,
             t_type_id		= :data_3g->t_type_id          , /oCHAR(3)o/
             loco_no		= :data_3g->loco_no             , /oCHAR(4)o/
             ab				= :data_3g->ab                  , /oNUMBER(1)o/
             rksj			= to_date(:data_3g->btsj,'yyyy-mm-dd hh24:mi:ss'), /oDATEo/
             btsj			= to_date(:data_3g->rksj,'yyyy-mm-dd hh24:mi:ss'), /oDATEo/
             xtsj			= to_date(:data_3g->str_6A.xtsj ,'yyyy-mm-dd hh24:mi:ss'), /oDATEo/

             xd_flag		= :data_3g->str_6A.xd_flag             , /oNUMBER(1)o/
             xd_simno		= :data_3g->str_6A.xd_simno            , /oVARCHAR2(12)o/
             xd_carno		= :data_3g->str_6A.xd_carno             ,/oVARCHAR2(16)o/
             xd_cenver		= :data_3g->str_6A.xd_cenver           , /oNUMBER(1,2)o/

             zd_flag		= :data_3g->str_6A.zd_flag             , /oNUMBER(1)o/
             zd_alt	    = :data_3g->str_6A.str_6azd.zd_alt              , /oNUMBER(3)o/
             zd_cnt     = :data_3g->str_6A.str_6azd.zd_cnt              , /oNUMBER(3)o/
             zd_lcg     = :data_3g->str_6A.str_6azd.zd_lcg              , /oNUMBER(6)o/
             zd_tfg     = :data_3g->str_6A.str_6azd.zd_tfg              , /oNUMBER(6)o/
             zd_jhg     = :data_3g->str_6A.str_6azd.zd_jhg              , /oNUMBER(6)o/
             zd_llj     = :data_3g->str_6A.str_6azd.zd_llj              , /oNUMBER(6)o/
             zd_speed   = :data_3g->str_6A.str_6azd.zd_speed            ,/oNUMBER(6)o/
             jy_flag    = :data_3g->str_6A.jy_flag             , /oNUMBER(1)o/

             jy_jcdy    = :data_3g->str_6A.str_6ajy.jy_jcdy             , /oNUMBER(5)o/
             jy_mxdy    = :data_3g->str_6A.str_6ajy.jy_mxdy             , /oNUMBER(5)o/
             jy_bjzt    = :data_3g->str_6A.str_6ajy.jy_bjzt             , /oNUMBER(3)o/
             jy_cszt    = :data_3g->str_6A.str_6ajy.jy_cszt             , /oNUMBER(3)o/
             jy_zjgz    = :data_3g->str_6A.str_6ajy.jy_zjgz             , /oNUMBER(3)o/
             sp_flag    = :data_3g->str_6A.sp_flag             , /oNUMBER(1)o/

             sp_cjkgz_1 = :data_3g->str_6A.str_6asp.sp_cjkgz_1          , /oNUMBER(3)o/
             sp_cjkgz_2 = :data_3g->str_6A.str_6asp.sp_cjkgz_2          , /oNUMBER(3)o/
             sp_ccbgz   = :data_3g->str_6A.str_6asp.sp_ccbgz            , /oNUMBER(3)o/
             sp_tdzjgz  = hextoraw(:data_3g->str_6A.str_6asp.sp_tdzjgz)            ,

             zx_flag    = :data_3g->str_6A.zx_flag             , /oNUMBER(1)o/
             zx_wd_1    = hextoraw(:data_3g->str_6A.str_6azx[0].zx_wd )            , /oRAW(8)o/
             zx_bj_1    = hextoraw(:data_3g->str_6A.str_6azx[0].zx_bj )           , /oRAW(8)o/
             zx_hw1_1   = :data_3g->str_6A.str_6azx[0].zx_hw1            , /oNUMBER(4)o/
             zx_hw2_1   = :data_3g->str_6A.str_6azx[0].zx_hw2            , /oNUMBER(4)o/
             zx_qzclqstate_1    = :data_3g->str_6A.str_6azx[0].zx_qzclqstate     , /oNUMBER(3)o/
             zx_sdmc_1  = :data_3g->str_6A.str_6azx[0].zx_sdmc            ,/oNUMBER(5)o/
             zx_wd_2    = hextoraw(:data_3g->str_6A.str_6azx[1].zx_wd)             , /oRAW(8)o/
             zx_bj_2    = hextoraw(:data_3g->str_6A.str_6azx[1].zx_bj)              ,/oRAW(8)o/
             zx_hw1_2   = :data_3g->str_6A.str_6azx[1].zx_hw1            , /oNUMBER(4)o/
             zx_hw2_2   = :data_3g->str_6A.str_6azx[1].zx_hw2            , /oNUMBER(4)o/
             zx_qzclqstate_2    = :data_3g->str_6A.str_6azx[1].zx_qzclqstate     , /oNUMBER(3)o/
             zx_sdmc_2  = :data_3g->str_6A.str_6azx[1].zx_sdmc           , /oNUMBER(5)o/
             zx_wd_3    = hextoraw(:data_3g->str_6A.str_6azx[2].zx_wd)             , /oRAW(8)o/
             zx_bj_3    = hextoraw(:data_3g->str_6A.str_6azx[2].zx_bj)             , /oRAW(8)o/
             zx_hw1_3   = :data_3g->str_6A.str_6azx[2].zx_hw1            , /oNUMBER(4)o/
             zx_hw2_3   = :data_3g->str_6A.str_6azx[2].zx_hw2            , /oNUMBER(4)o/
             zx_qzclqstate_3    = :data_3g->str_6A.str_6azx[2].zx_qzclqstate     , /oINTEGERo/
             zx_sdmc_3  = :data_3g->str_6A.str_6azx[2].zx_sdmc           , /oNUMBER(5)o/
             zx_wd_4    = hextoraw(:data_3g->str_6A.str_6azx[3].zx_wd)             , /oRAW(8)o/
             zx_bj_4    = hextoraw(:data_3g->str_6A.str_6azx[3].zx_bj)             , /oRAW(8)o/
             zx_hw1_4   = :data_3g->str_6A.str_6azx[3].zx_hw1            , /oNUMBER(4)o/
             zx_hw2_4   = :data_3g->str_6A.str_6azx[3].zx_hw2            , /oNUMBER(4)o/
             zx_qzclqstate_4    = :data_3g->str_6A.str_6azx[3].zx_qzclqstate     , /oINTEGERo/
             zx_sdmc_4  = :data_3g->str_6A.str_6azx[3].zx_sdmc           , /oNUMBER(5)o/
             zx_wd_5    = hextoraw(:data_3g->str_6A.str_6azx[4].zx_wd)             , /oRAW(8)o/
             zx_bj_5    = hextoraw(:data_3g->str_6A.str_6azx[4].zx_bj)             , /oRAW(8)o/
             zx_hw1_5   = :data_3g->str_6A.str_6azx[4].zx_hw1            , /oNUMBER(4)o/
             zx_hw2_5   = :data_3g->str_6A.str_6azx[4].zx_hw2            , /oNUMBER(4)o/
             zx_qzclqstate_5    = :data_3g->str_6A.str_6azx[4].zx_qzclqstate     , /oNUMBER(3)o/
             zx_sdmc_5  = :data_3g->str_6A.str_6azx[4].zx_sdmc           , /oNUMBER(5)o/
             zx_wd_6    = hextoraw(:data_3g->str_6A.str_6azx[5].zx_wd)             , /oRAW(8)o/
             zx_bj_6    = hextoraw(:data_3g->str_6A.str_6azx[5].zx_bj)             , /oRAW(8)o/
             zx_hw1_6   = :data_3g->str_6A.str_6azx[5].zx_hw1            , /oNUMBER(4)o/
             zx_hw2_6   = :data_3g->str_6A.str_6azx[5].zx_hw2           , /oNUMBER(4)o/
             zx_qzclqstate_6    = :data_3g->str_6A.str_6azx[5].zx_qzclqstate     , /oNUMBER(3)o/
             zx_sdmc_6  = :data_3g->str_6A.str_6azx[5].zx_sdmc           , /oNUMBER(5)o/

             lg_flag    = :data_3g->str_6A.lg_flag                      , /oNUMBER(1)o/
             lg_ldl_1   = :data_3g->str_6A.str_6alg.lg_ldl_1            , /oNUMBER(11)o/
             lg_ydl_1   = :data_3g->str_6A.str_6alg.lg_ydl_1            , /oNUMBER(11)o/
             lg_srdy_1  = :data_3g->str_6A.str_6alg.lg_srdy_1           , /oNUMBER(11)o/
             lg_srdl_1  = :data_3g->str_6A.str_6alg.lg_srdl_1           , /oNUMBER(11)o/
             lg_scdy_1  = :data_3g->str_6A.str_6alg.lg_scdy_1           , /oNUMBER(11)o/
             lg_scdl_1  = :data_3g->str_6A.str_6alg.lg_scdl_1           , /oNUMBER(11)o/
             lg_bdy_1   = :data_3g->str_6A.str_6alg.lg_bdy_1            , /oNUMBER(11)o/
             lg_ldl_2   = :data_3g->str_6A.str_6alg.lg_ldl_2            , /oNUMBER(11)o/
             lg_ydl_2   = :data_3g->str_6A.str_6alg.lg_ydl_2            , /oNUMBER(11)o/
             lg_srdy_2  = :data_3g->str_6A.str_6alg.lg_srdy_2           , /oNUMBER(11)o/
             lg_srdl_2  = :data_3g->str_6A.str_6alg.lg_srdl_2           , /oNUMBER(11)o/
             lg_scdy_2  = :data_3g->str_6A.str_6alg.lg_scdy_2           , /oNUMBER(11)o/
             lg_scdl_2  = :data_3g->str_6A.str_6alg.lg_scdl_2           , /oNUMBER(11)o/
             lg_bdy_2   = :data_3g->str_6A.str_6alg.lg_bdy_2            , /oNUMBER(11)o/
             lg_err     = hextoraw(:data_3g->str_6A.str_6alg.lg_err)              , /oRAW(4)o/
             lg_sta     = hextoraw(:data_3g->str_6A.str_6alg.lg_sta)              , /oRAW(4)o/
             lg_kgl     = :data_3g->str_6A.str_6alg.lg_kgl              , /oNUMBER(3)o/

             fh_flag    = :data_3g->str_6A.fh_flag                      , /oNUMBER(1)o/
             fh_zxkl    = :data_3g->str_6A.str_6afh.fh_zxkl             , /oNUMBER(3)o/
             fh_zxdl    = :data_3g->str_6A.str_6afh.fh_zxdl             , /oNUMBER(3)o/
             fh_ttzt    = hextoraw(:data_3g->str_6A.str_6afh.fh_ttzt)             , /oRAW(32)o/
             fh_ttlx    =  hextoraw(:data_3g->str_6A.str_6afh.fh_ttlx)               /oRAW(32)o/; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 90;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlbuft((void **)0,
      "update AP_6A_LASTSTATUS  set idx=:b0,t_type_id=:b1,loco_no=:b2,ab=:b3\
,rksj=to_date(:b4,'yyyy-mm-dd hh24:mi:ss'),btsj=to_date(:b5,'yyyy-mm-dd hh24\
:mi:ss'),xtsj=to_date(:b6,'yyyy-mm-dd hh24:mi:ss'),xd_flag=:b7,xd_simno=:b8,\
xd_carno=:b9,xd_cenver=:b10,zd_flag=:b11,zd_alt=:b12,zd_cnt=:b13,zd_lcg=:b14\
,zd_tfg=:b15,zd_jhg=:b16,zd_llj=:b17,zd_speed=:b18,jy_flag=:b19,jy_jcdy=:b20\
,jy_mxdy=:b21,jy_bjzt=:b22,jy_cszt=:b23,jy_zjgz=:b24,sp_flag=:b25,sp_cjkgz_1\
=:b26,sp_cjkgz_2=:b27,sp_ccbgz=:b28,sp_tdzjgz=hextoraw(:b29),zx_flag=:b30,zx\
_wd_1=hextoraw(:b31),zx_bj_1=hextoraw(:b32),zx_hw1_1=:b33,zx_hw2_1=:b34,zx_q\
zclqstate_1=:b35,zx_sdmc_1=:b36,zx_wd_2=hextoraw(:b37),zx_bj_2=hextoraw(:b38\
),zx_hw1_2=:b39,zx_hw2_2=:b40,zx_qzclqstate_2=:b41,zx_sdmc_2=:b42,zx_wd_3=he\
xtoraw(:b43),zx_bj_3=hextoraw(:b44),zx_hw1_3=:b45,zx_hw2_3=:b46,zx_qzclqstat\
e_3=:b47,zx_sdmc_3=:b48,zx_wd_4=hextoraw(:b49),zx_bj_4=hextoraw(:b50),zx_hw1\
_4=:b51,zx_hw2_4=:b52,zx_qzclqstate_4=:b53,zx_sdmc_4=:b54,zx_wd_5=hextoraw(:\
b55),zx_bj_5=hextoraw(:b56),zx_hw1_5=:b57,z");
    sqlstm.stmt = "x_hw2_5=:b58,zx_qzclqstate_5=:b59,zx_sdmc_5=:b60,zx_wd_6\
=hextoraw(:b61),zx_bj_6=hextoraw(:b62),zx_hw1_6=:b63,zx_hw2_6=:b64,zx_qzclqst\
ate_6=:b65,zx_sdmc_6=:b66,lg_flag=:b67,lg_ldl_1=:b68,lg_ydl_1=:b69,lg_srdy_1=\
:b70,lg_srdl_1=:b71,lg_scdy_1=:b72,lg_scdl_1=:b73,lg_bdy_1=:b74,lg_ldl_2=:b75\
,lg_ydl_2=:b76,lg_srdy_2=:b77,lg_srdl_2=:b78,lg_scdy_2=:b79,lg_scdl_2=:b80,lg\
_bdy_2=:b81,lg_err=hextoraw(:b82),lg_sta=hextoraw(:b83),lg_kgl=:b84,fh_flag=:\
b85,fh_zxkl=:b86,fh_zxdl=:b87,fh_ttzt=hextoraw(:b88),fh_ttlx=hextoraw(:b89)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )5;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)(data_3g->idx);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_3g->t_type_id);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_3g->loco_no);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_3g->ab);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_3g->btsj);
    sqlstm.sqhstl[4] = (unsigned long )21;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_3g->rksj);
    sqlstm.sqhstl[5] = (unsigned long )21;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)((data_3g->str_6A).xtsj);
    sqlstm.sqhstl[6] = (unsigned long )21;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&((data_3g->str_6A).xd_flag);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)((data_3g->str_6A).xd_simno);
    sqlstm.sqhstl[8] = (unsigned long )13;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)((data_3g->str_6A).xd_carno);
    sqlstm.sqhstl[9] = (unsigned long )17;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&((data_3g->str_6A).xd_cenver);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&((data_3g->str_6A).zd_flag);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(((data_3g->str_6A).str_6azd).zd_alt);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(((data_3g->str_6A).str_6azd).zd_cnt);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(((data_3g->str_6A).str_6azd).zd_lcg);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(((data_3g->str_6A).str_6azd).zd_tfg);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(((data_3g->str_6A).str_6azd).zd_jhg);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(((data_3g->str_6A).str_6azd).zd_llj);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(((data_3g->str_6A).str_6azd).zd_speed);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&((data_3g->str_6A).jy_flag);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&(((data_3g->str_6A).str_6ajy).jy_jcdy);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(((data_3g->str_6A).str_6ajy).jy_mxdy);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(((data_3g->str_6A).str_6ajy).jy_bjzt);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(((data_3g->str_6A).str_6ajy).jy_cszt);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&(((data_3g->str_6A).str_6ajy).jy_zjgz);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&((data_3g->str_6A).sp_flag);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&(((data_3g->str_6A).str_6asp).sp_cjkgz_1);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&(((data_3g->str_6A).str_6asp).sp_cjkgz_2);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&(((data_3g->str_6A).str_6asp).sp_ccbgz);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)(((data_3g->str_6A).str_6asp).sp_tdzjgz);
    sqlstm.sqhstl[29] = (unsigned long )33;
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&((data_3g->str_6A).zx_flag);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)(((data_3g->str_6A).str_6azx)[0].zx_wd);
    sqlstm.sqhstl[31] = (unsigned long )17;
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)(((data_3g->str_6A).str_6azx)[0].zx_bj);
    sqlstm.sqhstl[32] = (unsigned long )17;
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[0].zx_hw1);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[0].zx_hw2);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[0].zx_qzclqstate);
    sqlstm.sqhstl[35] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[0].zx_sdmc);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)(((data_3g->str_6A).str_6azx)[1].zx_wd);
    sqlstm.sqhstl[37] = (unsigned long )17;
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)(((data_3g->str_6A).str_6azx)[1].zx_bj);
    sqlstm.sqhstl[38] = (unsigned long )17;
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[1].zx_hw1);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[1].zx_hw2);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[1].zx_qzclqstate);
    sqlstm.sqhstl[41] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[1].zx_sdmc);
    sqlstm.sqhstl[42] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)(((data_3g->str_6A).str_6azx)[2].zx_wd);
    sqlstm.sqhstl[43] = (unsigned long )17;
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)(((data_3g->str_6A).str_6azx)[2].zx_bj);
    sqlstm.sqhstl[44] = (unsigned long )17;
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[2].zx_hw1);
    sqlstm.sqhstl[45] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[2].zx_hw2);
    sqlstm.sqhstl[46] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[2].zx_qzclqstate);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
    sqlstm.sqhstv[48] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[2].zx_sdmc);
    sqlstm.sqhstl[48] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[48] = (         int  )0;
    sqlstm.sqindv[48] = (         short *)0;
    sqlstm.sqinds[48] = (         int  )0;
    sqlstm.sqharm[48] = (unsigned long )0;
    sqlstm.sqadto[48] = (unsigned short )0;
    sqlstm.sqtdso[48] = (unsigned short )0;
    sqlstm.sqhstv[49] = (unsigned char  *)(((data_3g->str_6A).str_6azx)[3].zx_wd);
    sqlstm.sqhstl[49] = (unsigned long )17;
    sqlstm.sqhsts[49] = (         int  )0;
    sqlstm.sqindv[49] = (         short *)0;
    sqlstm.sqinds[49] = (         int  )0;
    sqlstm.sqharm[49] = (unsigned long )0;
    sqlstm.sqadto[49] = (unsigned short )0;
    sqlstm.sqtdso[49] = (unsigned short )0;
    sqlstm.sqhstv[50] = (unsigned char  *)(((data_3g->str_6A).str_6azx)[3].zx_bj);
    sqlstm.sqhstl[50] = (unsigned long )17;
    sqlstm.sqhsts[50] = (         int  )0;
    sqlstm.sqindv[50] = (         short *)0;
    sqlstm.sqinds[50] = (         int  )0;
    sqlstm.sqharm[50] = (unsigned long )0;
    sqlstm.sqadto[50] = (unsigned short )0;
    sqlstm.sqtdso[50] = (unsigned short )0;
    sqlstm.sqhstv[51] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[3].zx_hw1);
    sqlstm.sqhstl[51] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[51] = (         int  )0;
    sqlstm.sqindv[51] = (         short *)0;
    sqlstm.sqinds[51] = (         int  )0;
    sqlstm.sqharm[51] = (unsigned long )0;
    sqlstm.sqadto[51] = (unsigned short )0;
    sqlstm.sqtdso[51] = (unsigned short )0;
    sqlstm.sqhstv[52] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[3].zx_hw2);
    sqlstm.sqhstl[52] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[52] = (         int  )0;
    sqlstm.sqindv[52] = (         short *)0;
    sqlstm.sqinds[52] = (         int  )0;
    sqlstm.sqharm[52] = (unsigned long )0;
    sqlstm.sqadto[52] = (unsigned short )0;
    sqlstm.sqtdso[52] = (unsigned short )0;
    sqlstm.sqhstv[53] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[3].zx_qzclqstate);
    sqlstm.sqhstl[53] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[53] = (         int  )0;
    sqlstm.sqindv[53] = (         short *)0;
    sqlstm.sqinds[53] = (         int  )0;
    sqlstm.sqharm[53] = (unsigned long )0;
    sqlstm.sqadto[53] = (unsigned short )0;
    sqlstm.sqtdso[53] = (unsigned short )0;
    sqlstm.sqhstv[54] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[3].zx_sdmc);
    sqlstm.sqhstl[54] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[54] = (         int  )0;
    sqlstm.sqindv[54] = (         short *)0;
    sqlstm.sqinds[54] = (         int  )0;
    sqlstm.sqharm[54] = (unsigned long )0;
    sqlstm.sqadto[54] = (unsigned short )0;
    sqlstm.sqtdso[54] = (unsigned short )0;
    sqlstm.sqhstv[55] = (unsigned char  *)(((data_3g->str_6A).str_6azx)[4].zx_wd);
    sqlstm.sqhstl[55] = (unsigned long )17;
    sqlstm.sqhsts[55] = (         int  )0;
    sqlstm.sqindv[55] = (         short *)0;
    sqlstm.sqinds[55] = (         int  )0;
    sqlstm.sqharm[55] = (unsigned long )0;
    sqlstm.sqadto[55] = (unsigned short )0;
    sqlstm.sqtdso[55] = (unsigned short )0;
    sqlstm.sqhstv[56] = (unsigned char  *)(((data_3g->str_6A).str_6azx)[4].zx_bj);
    sqlstm.sqhstl[56] = (unsigned long )17;
    sqlstm.sqhsts[56] = (         int  )0;
    sqlstm.sqindv[56] = (         short *)0;
    sqlstm.sqinds[56] = (         int  )0;
    sqlstm.sqharm[56] = (unsigned long )0;
    sqlstm.sqadto[56] = (unsigned short )0;
    sqlstm.sqtdso[56] = (unsigned short )0;
    sqlstm.sqhstv[57] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[4].zx_hw1);
    sqlstm.sqhstl[57] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[57] = (         int  )0;
    sqlstm.sqindv[57] = (         short *)0;
    sqlstm.sqinds[57] = (         int  )0;
    sqlstm.sqharm[57] = (unsigned long )0;
    sqlstm.sqadto[57] = (unsigned short )0;
    sqlstm.sqtdso[57] = (unsigned short )0;
    sqlstm.sqhstv[58] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[4].zx_hw2);
    sqlstm.sqhstl[58] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[58] = (         int  )0;
    sqlstm.sqindv[58] = (         short *)0;
    sqlstm.sqinds[58] = (         int  )0;
    sqlstm.sqharm[58] = (unsigned long )0;
    sqlstm.sqadto[58] = (unsigned short )0;
    sqlstm.sqtdso[58] = (unsigned short )0;
    sqlstm.sqhstv[59] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[4].zx_qzclqstate);
    sqlstm.sqhstl[59] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[59] = (         int  )0;
    sqlstm.sqindv[59] = (         short *)0;
    sqlstm.sqinds[59] = (         int  )0;
    sqlstm.sqharm[59] = (unsigned long )0;
    sqlstm.sqadto[59] = (unsigned short )0;
    sqlstm.sqtdso[59] = (unsigned short )0;
    sqlstm.sqhstv[60] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[4].zx_sdmc);
    sqlstm.sqhstl[60] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[60] = (         int  )0;
    sqlstm.sqindv[60] = (         short *)0;
    sqlstm.sqinds[60] = (         int  )0;
    sqlstm.sqharm[60] = (unsigned long )0;
    sqlstm.sqadto[60] = (unsigned short )0;
    sqlstm.sqtdso[60] = (unsigned short )0;
    sqlstm.sqhstv[61] = (unsigned char  *)(((data_3g->str_6A).str_6azx)[5].zx_wd);
    sqlstm.sqhstl[61] = (unsigned long )17;
    sqlstm.sqhsts[61] = (         int  )0;
    sqlstm.sqindv[61] = (         short *)0;
    sqlstm.sqinds[61] = (         int  )0;
    sqlstm.sqharm[61] = (unsigned long )0;
    sqlstm.sqadto[61] = (unsigned short )0;
    sqlstm.sqtdso[61] = (unsigned short )0;
    sqlstm.sqhstv[62] = (unsigned char  *)(((data_3g->str_6A).str_6azx)[5].zx_bj);
    sqlstm.sqhstl[62] = (unsigned long )17;
    sqlstm.sqhsts[62] = (         int  )0;
    sqlstm.sqindv[62] = (         short *)0;
    sqlstm.sqinds[62] = (         int  )0;
    sqlstm.sqharm[62] = (unsigned long )0;
    sqlstm.sqadto[62] = (unsigned short )0;
    sqlstm.sqtdso[62] = (unsigned short )0;
    sqlstm.sqhstv[63] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[5].zx_hw1);
    sqlstm.sqhstl[63] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[63] = (         int  )0;
    sqlstm.sqindv[63] = (         short *)0;
    sqlstm.sqinds[63] = (         int  )0;
    sqlstm.sqharm[63] = (unsigned long )0;
    sqlstm.sqadto[63] = (unsigned short )0;
    sqlstm.sqtdso[63] = (unsigned short )0;
    sqlstm.sqhstv[64] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[5].zx_hw2);
    sqlstm.sqhstl[64] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[64] = (         int  )0;
    sqlstm.sqindv[64] = (         short *)0;
    sqlstm.sqinds[64] = (         int  )0;
    sqlstm.sqharm[64] = (unsigned long )0;
    sqlstm.sqadto[64] = (unsigned short )0;
    sqlstm.sqtdso[64] = (unsigned short )0;
    sqlstm.sqhstv[65] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[5].zx_qzclqstate);
    sqlstm.sqhstl[65] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[65] = (         int  )0;
    sqlstm.sqindv[65] = (         short *)0;
    sqlstm.sqinds[65] = (         int  )0;
    sqlstm.sqharm[65] = (unsigned long )0;
    sqlstm.sqadto[65] = (unsigned short )0;
    sqlstm.sqtdso[65] = (unsigned short )0;
    sqlstm.sqhstv[66] = (unsigned char  *)&(((data_3g->str_6A).str_6azx)[5].zx_sdmc);
    sqlstm.sqhstl[66] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[66] = (         int  )0;
    sqlstm.sqindv[66] = (         short *)0;
    sqlstm.sqinds[66] = (         int  )0;
    sqlstm.sqharm[66] = (unsigned long )0;
    sqlstm.sqadto[66] = (unsigned short )0;
    sqlstm.sqtdso[66] = (unsigned short )0;
    sqlstm.sqhstv[67] = (unsigned char  *)&((data_3g->str_6A).lg_flag);
    sqlstm.sqhstl[67] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[67] = (         int  )0;
    sqlstm.sqindv[67] = (         short *)0;
    sqlstm.sqinds[67] = (         int  )0;
    sqlstm.sqharm[67] = (unsigned long )0;
    sqlstm.sqadto[67] = (unsigned short )0;
    sqlstm.sqtdso[67] = (unsigned short )0;
    sqlstm.sqhstv[68] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_ldl_1);
    sqlstm.sqhstl[68] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[68] = (         int  )0;
    sqlstm.sqindv[68] = (         short *)0;
    sqlstm.sqinds[68] = (         int  )0;
    sqlstm.sqharm[68] = (unsigned long )0;
    sqlstm.sqadto[68] = (unsigned short )0;
    sqlstm.sqtdso[68] = (unsigned short )0;
    sqlstm.sqhstv[69] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_ydl_1);
    sqlstm.sqhstl[69] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[69] = (         int  )0;
    sqlstm.sqindv[69] = (         short *)0;
    sqlstm.sqinds[69] = (         int  )0;
    sqlstm.sqharm[69] = (unsigned long )0;
    sqlstm.sqadto[69] = (unsigned short )0;
    sqlstm.sqtdso[69] = (unsigned short )0;
    sqlstm.sqhstv[70] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_srdy_1);
    sqlstm.sqhstl[70] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[70] = (         int  )0;
    sqlstm.sqindv[70] = (         short *)0;
    sqlstm.sqinds[70] = (         int  )0;
    sqlstm.sqharm[70] = (unsigned long )0;
    sqlstm.sqadto[70] = (unsigned short )0;
    sqlstm.sqtdso[70] = (unsigned short )0;
    sqlstm.sqhstv[71] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_srdl_1);
    sqlstm.sqhstl[71] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[71] = (         int  )0;
    sqlstm.sqindv[71] = (         short *)0;
    sqlstm.sqinds[71] = (         int  )0;
    sqlstm.sqharm[71] = (unsigned long )0;
    sqlstm.sqadto[71] = (unsigned short )0;
    sqlstm.sqtdso[71] = (unsigned short )0;
    sqlstm.sqhstv[72] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_scdy_1);
    sqlstm.sqhstl[72] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[72] = (         int  )0;
    sqlstm.sqindv[72] = (         short *)0;
    sqlstm.sqinds[72] = (         int  )0;
    sqlstm.sqharm[72] = (unsigned long )0;
    sqlstm.sqadto[72] = (unsigned short )0;
    sqlstm.sqtdso[72] = (unsigned short )0;
    sqlstm.sqhstv[73] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_scdl_1);
    sqlstm.sqhstl[73] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[73] = (         int  )0;
    sqlstm.sqindv[73] = (         short *)0;
    sqlstm.sqinds[73] = (         int  )0;
    sqlstm.sqharm[73] = (unsigned long )0;
    sqlstm.sqadto[73] = (unsigned short )0;
    sqlstm.sqtdso[73] = (unsigned short )0;
    sqlstm.sqhstv[74] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_bdy_1);
    sqlstm.sqhstl[74] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[74] = (         int  )0;
    sqlstm.sqindv[74] = (         short *)0;
    sqlstm.sqinds[74] = (         int  )0;
    sqlstm.sqharm[74] = (unsigned long )0;
    sqlstm.sqadto[74] = (unsigned short )0;
    sqlstm.sqtdso[74] = (unsigned short )0;
    sqlstm.sqhstv[75] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_ldl_2);
    sqlstm.sqhstl[75] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[75] = (         int  )0;
    sqlstm.sqindv[75] = (         short *)0;
    sqlstm.sqinds[75] = (         int  )0;
    sqlstm.sqharm[75] = (unsigned long )0;
    sqlstm.sqadto[75] = (unsigned short )0;
    sqlstm.sqtdso[75] = (unsigned short )0;
    sqlstm.sqhstv[76] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_ydl_2);
    sqlstm.sqhstl[76] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[76] = (         int  )0;
    sqlstm.sqindv[76] = (         short *)0;
    sqlstm.sqinds[76] = (         int  )0;
    sqlstm.sqharm[76] = (unsigned long )0;
    sqlstm.sqadto[76] = (unsigned short )0;
    sqlstm.sqtdso[76] = (unsigned short )0;
    sqlstm.sqhstv[77] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_srdy_2);
    sqlstm.sqhstl[77] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[77] = (         int  )0;
    sqlstm.sqindv[77] = (         short *)0;
    sqlstm.sqinds[77] = (         int  )0;
    sqlstm.sqharm[77] = (unsigned long )0;
    sqlstm.sqadto[77] = (unsigned short )0;
    sqlstm.sqtdso[77] = (unsigned short )0;
    sqlstm.sqhstv[78] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_srdl_2);
    sqlstm.sqhstl[78] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[78] = (         int  )0;
    sqlstm.sqindv[78] = (         short *)0;
    sqlstm.sqinds[78] = (         int  )0;
    sqlstm.sqharm[78] = (unsigned long )0;
    sqlstm.sqadto[78] = (unsigned short )0;
    sqlstm.sqtdso[78] = (unsigned short )0;
    sqlstm.sqhstv[79] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_scdy_2);
    sqlstm.sqhstl[79] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[79] = (         int  )0;
    sqlstm.sqindv[79] = (         short *)0;
    sqlstm.sqinds[79] = (         int  )0;
    sqlstm.sqharm[79] = (unsigned long )0;
    sqlstm.sqadto[79] = (unsigned short )0;
    sqlstm.sqtdso[79] = (unsigned short )0;
    sqlstm.sqhstv[80] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_scdl_2);
    sqlstm.sqhstl[80] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[80] = (         int  )0;
    sqlstm.sqindv[80] = (         short *)0;
    sqlstm.sqinds[80] = (         int  )0;
    sqlstm.sqharm[80] = (unsigned long )0;
    sqlstm.sqadto[80] = (unsigned short )0;
    sqlstm.sqtdso[80] = (unsigned short )0;
    sqlstm.sqhstv[81] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_bdy_2);
    sqlstm.sqhstl[81] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[81] = (         int  )0;
    sqlstm.sqindv[81] = (         short *)0;
    sqlstm.sqinds[81] = (         int  )0;
    sqlstm.sqharm[81] = (unsigned long )0;
    sqlstm.sqadto[81] = (unsigned short )0;
    sqlstm.sqtdso[81] = (unsigned short )0;
    sqlstm.sqhstv[82] = (unsigned char  *)(((data_3g->str_6A).str_6alg).lg_err);
    sqlstm.sqhstl[82] = (unsigned long )9;
    sqlstm.sqhsts[82] = (         int  )0;
    sqlstm.sqindv[82] = (         short *)0;
    sqlstm.sqinds[82] = (         int  )0;
    sqlstm.sqharm[82] = (unsigned long )0;
    sqlstm.sqadto[82] = (unsigned short )0;
    sqlstm.sqtdso[82] = (unsigned short )0;
    sqlstm.sqhstv[83] = (unsigned char  *)(((data_3g->str_6A).str_6alg).lg_sta);
    sqlstm.sqhstl[83] = (unsigned long )9;
    sqlstm.sqhsts[83] = (         int  )0;
    sqlstm.sqindv[83] = (         short *)0;
    sqlstm.sqinds[83] = (         int  )0;
    sqlstm.sqharm[83] = (unsigned long )0;
    sqlstm.sqadto[83] = (unsigned short )0;
    sqlstm.sqtdso[83] = (unsigned short )0;
    sqlstm.sqhstv[84] = (unsigned char  *)&(((data_3g->str_6A).str_6alg).lg_kgl);
    sqlstm.sqhstl[84] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[84] = (         int  )0;
    sqlstm.sqindv[84] = (         short *)0;
    sqlstm.sqinds[84] = (         int  )0;
    sqlstm.sqharm[84] = (unsigned long )0;
    sqlstm.sqadto[84] = (unsigned short )0;
    sqlstm.sqtdso[84] = (unsigned short )0;
    sqlstm.sqhstv[85] = (unsigned char  *)&((data_3g->str_6A).fh_flag);
    sqlstm.sqhstl[85] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[85] = (         int  )0;
    sqlstm.sqindv[85] = (         short *)0;
    sqlstm.sqinds[85] = (         int  )0;
    sqlstm.sqharm[85] = (unsigned long )0;
    sqlstm.sqadto[85] = (unsigned short )0;
    sqlstm.sqtdso[85] = (unsigned short )0;
    sqlstm.sqhstv[86] = (unsigned char  *)&(((data_3g->str_6A).str_6afh).fh_zxkl);
    sqlstm.sqhstl[86] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[86] = (         int  )0;
    sqlstm.sqindv[86] = (         short *)0;
    sqlstm.sqinds[86] = (         int  )0;
    sqlstm.sqharm[86] = (unsigned long )0;
    sqlstm.sqadto[86] = (unsigned short )0;
    sqlstm.sqtdso[86] = (unsigned short )0;
    sqlstm.sqhstv[87] = (unsigned char  *)&(((data_3g->str_6A).str_6afh).fh_zxdl);
    sqlstm.sqhstl[87] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[87] = (         int  )0;
    sqlstm.sqindv[87] = (         short *)0;
    sqlstm.sqinds[87] = (         int  )0;
    sqlstm.sqharm[87] = (unsigned long )0;
    sqlstm.sqadto[87] = (unsigned short )0;
    sqlstm.sqtdso[87] = (unsigned short )0;
    sqlstm.sqhstv[88] = (unsigned char  *)(((data_3g->str_6A).str_6afh).fh_ttzt);
    sqlstm.sqhstl[88] = (unsigned long )65;
    sqlstm.sqhsts[88] = (         int  )0;
    sqlstm.sqindv[88] = (         short *)0;
    sqlstm.sqinds[88] = (         int  )0;
    sqlstm.sqharm[88] = (unsigned long )0;
    sqlstm.sqadto[88] = (unsigned short )0;
    sqlstm.sqtdso[88] = (unsigned short )0;
    sqlstm.sqhstv[89] = (unsigned char  *)(((data_3g->str_6A).str_6afh).fh_ttlx);
    sqlstm.sqhstl[89] = (unsigned long )65;
    sqlstm.sqhsts[89] = (         int  )0;
    sqlstm.sqindv[89] = (         short *)0;
    sqlstm.sqinds[89] = (         int  )0;
    sqlstm.sqharm[89] = (unsigned long )0;
    sqlstm.sqadto[89] = (unsigned short )0;
    sqlstm.sqtdso[89] = (unsigned short )0;
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



    if (sqlca.sqlcode == 0)
    {
        //printf("6A update success!\n");
        return 0;
    }
    else
    {
        memset(temp,0,1024);
		sprintf(temp,"loco.%s-%s:3G6A信息 update failed !!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no,sqlca.sqlcode);
        lprintf(disp.e,temp);
        lprintf(disp.g,temp);
        cclog('e',temp);

        return 1;
    }
}



unsigned char update_ITF_TAXV10()//TAX V1.O
{
    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 
	
    /* EXEC SQL UPDATE AP_TAX_LASTSTATUS SET 
               idx		  = :data_3g->idx				,
               t_type_id  = :data_3g->t_type_id   ,
               loco_no	  = :data_3g->loco_no     ,
               tax_ver    = :data_3g->tax_ver         ,
               ab		  = :data_3g->ab          ,
               btsj		  = to_date(:data_3g->btsj,'yyyy-mm-dd hh24:mi:ss'),
               rksj		  = to_date(:data_3g->rksj,'yyyy-mm-dd hh24:mi:ss'),
               xtsj		  = to_date(:data_3g->str_tax.xtsj ,'yyyy-mm-dd hh24:mi:ss'),

               cc			= :data_3g->str_tax.cc          ,
               czh			= :data_3g->str_tax.czh         ,
               sjh			= :data_3g->str_tax.sjh         ,
               fsjh			= :data_3g->str_tax.fsjh        ,
               sjjlh		= :data_3g->str_tax.sjjlh       ,
               kh			= :data_3g->str_tax.kh          ,
               bb			= :data_3g->str_tax.bb          ,
               sjsu			= :data_3g->str_tax.sjsu        ,
               jcxh			= :data_3g->str_tax.jcxh        ,
               gk			= :data_3g->str_tax.gk          ,
               xhjbh		= :data_3g->str_tax.xhjbh       ,
               xhjlb		= :data_3g->str_tax.xhjlb       ,
               glb			= :data_3g->str_tax.glb         ,
               zz			= :data_3g->str_tax.zz          ,
               jc			= :data_3g->str_tax.jc          ,
               ls			= :data_3g->str_tax.ls          ,
               lcgyl		= :data_3g->str_tax.lcgyl       ,
               zzzt			= :data_3g->str_tax.zzzt        ,				
               stationname  = trim(:data_3g->str_tax.stationname) ,
               drivername   = trim(:data_3g->str_tax.drivername)  ,
               fdrivername  = trim(:data_3g->str_tax.fdrivername); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 90;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update AP_TAX_LASTSTATUS  set idx=:b0,t_type_id=:b1,loco\
_no=:b2,tax_ver=:b3,ab=:b4,btsj=to_date(:b5,'yyyy-mm-dd hh24:mi:ss'),rksj=to_\
date(:b6,'yyyy-mm-dd hh24:mi:ss'),xtsj=to_date(:b7,'yyyy-mm-dd hh24:mi:ss'),c\
c=:b8,czh=:b9,sjh=:b10,fsjh=:b11,sjjlh=:b12,kh=:b13,bb=:b14,sjsu=:b15,jcxh=:b\
16,gk=:b17,xhjbh=:b18,xhjlb=:b19,glb=:b20,zz=:b21,jc=:b22,ls=:b23,lcgyl=:b24,\
zzzt=:b25,stationname=trim(:b26),drivername=trim(:b27),fdrivername=trim(:b28)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )380;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)(data_3g->idx);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_3g->t_type_id);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_3g->loco_no);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_3g->tax_ver);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&(data_3g->ab);
    sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_3g->btsj);
    sqlstm.sqhstl[5] = (unsigned long )21;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)(data_3g->rksj);
    sqlstm.sqhstl[6] = (unsigned long )21;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)((data_3g->str_tax).xtsj);
    sqlstm.sqhstl[7] = (unsigned long )21;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)((data_3g->str_tax).cc);
    sqlstm.sqhstl[8] = (unsigned long )21;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&((data_3g->str_tax).czh);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&((data_3g->str_tax).sjh);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&((data_3g->str_tax).fsjh);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&((data_3g->str_tax).sjjlh);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&((data_3g->str_tax).kh);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&((data_3g->str_tax).bb);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&((data_3g->str_tax).sjsu);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&((data_3g->str_tax).jcxh);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&((data_3g->str_tax).gk);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&((data_3g->str_tax).xhjbh);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&((data_3g->str_tax).xhjlb);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&((data_3g->str_tax).glb);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&((data_3g->str_tax).zz);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&((data_3g->str_tax).jc);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&((data_3g->str_tax).ls);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&((data_3g->str_tax).lcgyl);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&((data_3g->str_tax).zzzt);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)((data_3g->str_tax).stationname);
    sqlstm.sqhstl[26] = (unsigned long )33;
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)((data_3g->str_tax).drivername);
    sqlstm.sqhstl[27] = (unsigned long )33;
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)((data_3g->str_tax).fdrivername);
    sqlstm.sqhstl[28] = (unsigned long )33;
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
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



    if (sqlca.sqlcode == 0)
    {
        //printf("TAXV1.0 update success!!\n");
        return 0;
    }
    else
    {
        memset(temp,0,1024);
        sprintf(temp,"loco.%s-%s:TAX v1.0信息 update failed !!!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no,sqlca.sqlcode);	
		lprintf(disp.e,temp);
        lprintf(disp.g,temp);
        cclog('e',temp);

        return 1;
    }
}

unsigned char update_ITF_TAXV2X()//TAX V2.O V2.1
{
    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

    /* EXEC SQL UPDATE AP_TAX_LASTSTATUS SET 

               idx			= :data_3g->idx				,
               t_type_id	= :data_3g->t_type_id   ,
               loco_no		= :data_3g->loco_no     ,
               tax_ver		= :data_3g->tax_ver         ,
               ab			= :data_3g->ab          ,
               btsj			= to_date(:data_3g->btsj,'yyyy-mm-dd hh24:mi:ss'),
               rksj			= to_date(:data_3g->rksj,'yyyy-mm-dd hh24:mi:ss'),
               xtsj			= to_date(:data_3g->str_tax.xtsj ,'yyyy-mm-dd hh24:mi:ss'),

               cc		= :data_3g->str_tax.cc          ,
               czh		= :data_3g->str_tax.czh         ,
               sjh		= :data_3g->str_tax.sjh         ,
               fsjh		= :data_3g->str_tax.fsjh        ,
               sjjlh	= :data_3g->str_tax.sjjlh       ,
               kh		= :data_3g->str_tax.kh          ,
               bb		= :data_3g->str_tax.bb          ,
               sjsu		= :data_3g->str_tax.sjsu        ,
               jcxh		= :data_3g->str_tax.jcxh        ,
               gk		= :data_3g->str_tax.gk          ,
               xhjbh	= :data_3g->str_tax.xhjbh       ,
               xhjlb	= :data_3g->str_tax.xhjlb       ,
               glb		= :data_3g->str_tax.glb         ,
               zz		= :data_3g->str_tax.zz          ,
               jc		= :data_3g->str_tax.jc          ,
               ls		= :data_3g->str_tax.ls          ,
               lcgyl	= :data_3g->str_tax.lcgyl       ,
               zzzt		= :data_3g->str_tax.zzzt        ,
              srjlh		= :data_3g->str_tax.srjlh       ,
              jlqfxhjjl = :data_3g->str_tax.jlqfxhjjl   ,
              xs		= :data_3g->str_tax.xs          ,
              zdsc		= :data_3g->str_tax.zdsc        ,
              dqxlhbz   = :data_3g->str_tax.dqxlhbz     ,
              dqxlh		= :data_3g->str_tax.dqxlh       ,
              qfxlhbz   = :data_3g->str_tax.qfxlhbz     ,
              qfxlh		= :data_3g->str_tax.qfxlh       ,
              dq_tmis   = :data_3g->str_tax.dq_tmis     ,
              qf_time   = :data_3g->str_tax.qf_time     ,
              qfczjlh   = :data_3g->str_tax.qfczjlh     ,
              qfchzh	= :data_3g->str_tax.qfchzh      ,
              jkzt		= :data_3g->str_tax.jkzt        ,
              ljwy		= :data_3g->str_tax.ljwy        ,
              bfqzx		= :data_3g->str_tax.bfqzx       ,
              bfqcx		= :data_3g->str_tax.bfqcx       ,
              qffqzx	= :data_3g->str_tax.qffqzx      ,
              qffqcx	= :data_3g->str_tax.qffqcx      ,
              stationname   = trim(:data_3g->str_tax.stationname) ,
              drivername	= trim(:data_3g->str_tax.drivername)  ,
              fdrivername   = trim(:data_3g->str_tax.fdrivername) ,
              lkj_type		= :data_3g->str_tax.lkj_type; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 90;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update AP_TAX_LASTSTATUS  set idx=:b0,t_type_id=:b1,loco\
_no=:b2,tax_ver=:b3,ab=:b4,btsj=to_date(:b5,'yyyy-mm-dd hh24:mi:ss'),rksj=to_\
date(:b6,'yyyy-mm-dd hh24:mi:ss'),xtsj=to_date(:b7,'yyyy-mm-dd hh24:mi:ss'),c\
c=:b8,czh=:b9,sjh=:b10,fsjh=:b11,sjjlh=:b12,kh=:b13,bb=:b14,sjsu=:b15,jcxh=:b\
16,gk=:b17,xhjbh=:b18,xhjlb=:b19,glb=:b20,zz=:b21,jc=:b22,ls=:b23,lcgyl=:b24,\
zzzt=:b25,srjlh=:b26,jlqfxhjjl=:b27,xs=:b28,zdsc=:b29,dqxlhbz=:b30,dqxlh=:b31\
,qfxlhbz=:b32,qfxlh=:b33,dq_tmis=:b34,qf_time=:b35,qfczjlh=:b36,qfchzh=:b37,j\
kzt=:b38,ljwy=:b39,bfqzx=:b40,bfqcx=:b41,qffqzx=:b42,qffqcx=:b43,stationname=\
trim(:b44),drivername=trim(:b45),fdrivername=trim(:b46),lkj_type=:b47";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )511;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)(data_3g->idx);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_3g->t_type_id);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_3g->loco_no);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_3g->tax_ver);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&(data_3g->ab);
    sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_3g->btsj);
    sqlstm.sqhstl[5] = (unsigned long )21;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)(data_3g->rksj);
    sqlstm.sqhstl[6] = (unsigned long )21;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)((data_3g->str_tax).xtsj);
    sqlstm.sqhstl[7] = (unsigned long )21;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)((data_3g->str_tax).cc);
    sqlstm.sqhstl[8] = (unsigned long )21;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&((data_3g->str_tax).czh);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&((data_3g->str_tax).sjh);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&((data_3g->str_tax).fsjh);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&((data_3g->str_tax).sjjlh);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&((data_3g->str_tax).kh);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&((data_3g->str_tax).bb);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&((data_3g->str_tax).sjsu);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&((data_3g->str_tax).jcxh);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&((data_3g->str_tax).gk);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&((data_3g->str_tax).xhjbh);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&((data_3g->str_tax).xhjlb);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&((data_3g->str_tax).glb);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&((data_3g->str_tax).zz);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&((data_3g->str_tax).jc);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&((data_3g->str_tax).ls);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&((data_3g->str_tax).lcgyl);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&((data_3g->str_tax).zzzt);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&((data_3g->str_tax).srjlh);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&((data_3g->str_tax).jlqfxhjjl);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&((data_3g->str_tax).xs);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&((data_3g->str_tax).zdsc);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&((data_3g->str_tax).dqxlhbz);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&((data_3g->str_tax).dqxlh);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&((data_3g->str_tax).qfxlhbz);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&((data_3g->str_tax).qfxlh);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&((data_3g->str_tax).dq_tmis);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)&((data_3g->str_tax).qf_time);
    sqlstm.sqhstl[35] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&((data_3g->str_tax).qfczjlh);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&((data_3g->str_tax).qfchzh);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&((data_3g->str_tax).jkzt);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&((data_3g->str_tax).ljwy);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&((data_3g->str_tax).bfqzx);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)&((data_3g->str_tax).bfqcx);
    sqlstm.sqhstl[41] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)&((data_3g->str_tax).qffqzx);
    sqlstm.sqhstl[42] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)&((data_3g->str_tax).qffqcx);
    sqlstm.sqhstl[43] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)((data_3g->str_tax).stationname);
    sqlstm.sqhstl[44] = (unsigned long )33;
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)((data_3g->str_tax).drivername);
    sqlstm.sqhstl[45] = (unsigned long )33;
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)((data_3g->str_tax).fdrivername);
    sqlstm.sqhstl[46] = (unsigned long )33;
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&((data_3g->str_tax).lkj_type);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
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



    if (sqlca.sqlcode == 0)
    {
        //		memset(temp,0,1024);
        //		sprintf(temp,"loco.%s-%s:TAXV2.0 update success !!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no ,sqlca.sqlcode);
        //		lprintf(disp.e,temp);
        //		lprintf(disp.v,temp);
        //		cclog('e',temp);
		
        //printf("TAXV2.0 update success!!\n");

        return 0;
    }
    else
    {
        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:TAXV2.0 update failed !!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no ,sqlca.sqlcode);
        lprintf(disp.e,temp);
        lprintf(disp.g,temp);
        cclog('e',temp);

        return 1;
    }	
}



unsigned char update_ITF_TCMS_HXD_V20()//电力机车TCMS2.0
{
    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

    /* EXEC SQL UPDATE AP_TCMS_HXD_V20_LASTSTATUS SET 

              idx		=  :data_3g->idx               ,/oCHAR(32 CHAR) not null,        o/
              t_type_id =  :data_3g->t_type_id          ,/oCHAR(3) not null,                o/
              loco_no   =  :data_3g->loco_no            ,/oCHAR(4) not null,                o/
              ab		=  :data_3g->ab                 ,/oNUMBER(1) default 0 not null,    o/
              btsj		=  to_date(:data_3g->btsj,'yyyy-mm-dd hh24:mi:ss'),
              rksj		=  to_date(:data_3g->rksj,'yyyy-mm-dd hh24:mi:ss'),
              xtsj =  to_date(:data_3g->tcms_xtsj ,'yyyy-mm-dd hh24:mi:ss'),
              ver  =  :data_3g->tcms_ver                ,/oNUMBER(3) default 10 not null,   o/

              yx_st5		=  :data_3g->str_tcms_dl_v20.str_basic.yx_st5             ,/oNUMBER(3)o/
              yx_st6		=  :data_3g->str_tcms_dl_v20.str_basic.yx_st6             ,/oNUMBER(3)o/
              yx_st7		=  :data_3g->str_tcms_dl_v20.str_basic.yx_st7             ,/oNUMBER(3) o/
              yx_st8		=  :data_3g->str_tcms_dl_v20.str_basic.yx_st8             ,/oNUMBER(3)o/
              yx_st9		=  :data_3g->str_tcms_dl_v20.str_basic.yx_st9             ,/oNUMBER(3)o/
              yx_st10		=  :data_3g->str_tcms_dl_v20.str_basic.yx_st10            ,/oNUMBER(3)o/
              yx_st11		=  :data_3g->str_tcms_dl_v20.str_basic.yx_st11            ,/oNUMBER(3)o/
              yx_sbjw		=  :data_3g->str_tcms_dl_v20.str_basic.yx_sbjw            ,/oNUMBER(6,1)o/
              yx_sd_jh		=  :data_3g->str_tcms_dl_v20.str_basic.yx_sd_jh           ,/oNUMBER(6,1)o/
              yx_sd_sj		=  :data_3g->str_tcms_dl_v20.str_basic.yx_sd_sj           ,/oNUMBER(6,1)o/
              yx_ybdy		=  :data_3g->str_tcms_dl_v20.str_basic.yx_ybdy            ,/oNUMBER(5)o/
              yx_ybdl		=  :data_3g->str_tcms_dl_v20.str_basic.yx_ybdl            ,/oNUMBER(5)o/
              yx_zfgyl		=  :data_3g->str_tcms_dl_v20.str_basic.yx_zfgyl           ,/oNUMBER(5)o/
              yx_jhfgyl		=  :data_3g->str_tcms_dl_v20.str_basic.yx_jhfgyl          ,/oNUMBER(5) o/
              yx_lcgyl		=  :data_3g->str_tcms_dl_v20.str_basic.yx_lcgyl           ,/oNUMBER(5) o/
              yx_zdfg1yl    =  :data_3g->str_tcms_dl_v20.str_basic.yx_zdfg1yl         ,/oNUMBER(4)o/
              yx_zdfg2yl    =  :data_3g->str_tcms_dl_v20.str_basic.yx_zdfg2yl         ,/oNUMBER(4) o/
              yx_zlc		=  :data_3g->str_tcms_dl_v20.str_basic.yx_zlc             ,/oNUMBER(10)o/
              yx_xdcyl		=  :data_3g->str_tcms_dl_v20.str_basic.yx_xdcyl           ,/oNUMBER(3)o/
              yx_zdlqdzcs   =  :data_3g->str_tcms_dl_v20.str_basic.yx_zdlqdzcs        ,/oNUMBER(10)o/
              yx_ysj1yxsj   =  :data_3g->str_tcms_dl_v20.str_basic.yx_ysj1yxsj        ,/oNUMBER(10,1)o/
              yx_ysj2yxsj   =  :data_3g->str_tcms_dl_v20.str_basic.yx_ysj2yxsj        ,/oNUMBER(10,1)o/

              qy_cdjcq		=  :data_3g->str_tcms_dl_v20.str_qianyin.qy_cdjcq           ,/oNUMBER(3)o/
              qy_djjcq		=  :data_3g->str_tcms_dl_v20.str_qianyin.qy_djjcq           ,/oNUMBER(3)o/
              qy_zgl		=  :data_3g->str_tcms_dl_v20.str_qianyin.qy_zgl             ,/oNUMBER(3)o/
              qy_sdsd		=  :data_3g->str_tcms_dl_v20.str_qianyin.qy_sdsd            ,/oNUMBER(5,1)o/
              qy_sjsd		=  :data_3g->str_tcms_dl_v20.str_qianyin.qy_sjsd            ,/oNUMBER(5,1)*
              qy_qyzdlsdz_1bg1mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyzdlsdz_1bg1mt ,/oNUMBER(5,1) o/
              qy_qyzdlsdz_1bg2mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyzdlsdz_1bg2mt ,/oNUMBER(5,1)o/
              qy_qyzdlsdz_1bg3mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyzdlsdz_1bg3mt ,/oNUMBER(5,1)o/
              qy_qyzdlsdz_2bg1mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyzdlsdz_2bg1mt ,/oNUMBER(5,1)o/
              qy_qyzdlsdz_2bg2mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyzdlsdz_2bg2mt ,/oNUMBER(5,1) o/
              qy_qyzdlsdz_2bg3mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyzdlsdz_2bg3mt ,/oNUMBER(5,1)o/
              qy_qyzdlsjz_1bg1mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyzdlsjz_1bg1mt ,/oNUMBER(5,1)o/
              qy_qyzdlsjz_1bg2mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyzdlsjz_1bg2mt ,/oNUMBER(5,1) o/
              qy_qyzdlsjz_1bg3mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyzdlsjz_1bg3mt ,/oNUMBER(5,1)o/
              qy_qyzdlsjz_2bg1mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyzdlsjz_2bg1mt ,/oNUMBER(5,1) o/
              qy_qyzdlsjz_2bg2mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyzdlsjz_2bg2mt ,/oNUMBER(5,1),o/
              qy_qyzdlsjz_2bg3mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyzdlsjz_2bg3mt ,/oNUMBER(5,1),o/
              qy_sjsd_1bg1mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_sjsd_1bg1mt     ,/oNUMBER(5,1),o/
              qy_sjsd_1bg2mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_sjsd_1bg2mt     ,/oNUMBER(5,1),o/
              qy_sjsd_1bg3mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_sjsd_1bg3mt     ,/oNUMBER(5,1),o/
              qy_sjsd_2bg1mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_sjsd_2bg1mt     ,/oNUMBER(5,1), o/
              qy_sjsd_2bg2mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_sjsd_2bg2mt     ,/oNUMBER(5,1),o/
              qy_sjsd_2bg3mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_sjsd_2bg3mt     ,/oNUMBER(5,1),o/
              qy_djdl_1bg1mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_djdl_1bg1mt     ,/oNUMBER(5), o/
              qy_djdl_1bg2mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_djdl_1bg2mt     ,/oNUMBER(5),o/
              qy_djdl_1bg3mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_djdl_1bg3mt     ,/oNUMBER(5),o/
              qy_djdl_2bg1mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_djdl_2bg1mt     ,/oNUMBER(5),o/
              qy_djdl_2bg2mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_djdl_2bg2mt     ,/oNUMBER(5), o/
              qy_djdl_2bg3mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_djdl_2bg3mt     ,/oNUMBER(5),o/
              qy_djwd_1bg1mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_djwd_1bg1mt     ,/oNUMBER(4),o/
              qy_djwd_1bg2mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_djwd_1bg2mt     ,/oNUMBER(4),o/
              qy_djwd_1bg3mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_djwd_1bg3mt     ,/oNUMBER(4),o/
              qy_djwd_2bg1mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_djwd_2bg1mt     ,/oNUMBER(4),o/
              qy_djwd_2bg2mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_djwd_2bg2mt     ,/oNUMBER(4), o/
              qy_djwd_2bg3mt    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_djwd_2bg3mt     ,/oNUMBER(4),o/
              qy_fdjdy    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_fdjdy           ,/oNUMBER(5),o/
              qy_fdjdl    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_fdjdl           ,/oNUMBER(5),o/
              qy_jlqzlmx1dy    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_jlqzlmx1dy      ,/oNUMBER(5),o/
              qy_jlqzlmx2dy    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_jlqzlmx2dy      ,/oNUMBER(5),o/
              qy_jlqzlmx3dy    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_jlqzlmx3dy      ,/oNUMBER(5),o/
              qy_jlqzlmx4dy    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_jlqzlmx4dy      ,/oNUMBER(5),o/
              qy_jlqzlmx5dy    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_jlqzlmx5dy      ,/oNUMBER(5),o/
              qy_jlqzlmx6dy    =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_jlqzlmx6dy      ,/oNUMBER(5),o/
              qy_qyblqlqsyl1   =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyblqlqsyl1     ,/oNUMBER(5,2),o/
              qy_qyblqlqsyl2   =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyblqlqsyl2     ,/oNUMBER(5,2),o/
              qy_qyblqlqsyl3   =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyblqlqsyl3     ,/oNUMBER(5,2),o/
              qy_qyblqlqsyl4   =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyblqlqsyl4     ,/oNUMBER(5,2),o/
              qy_qyblqlqsyl5   =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyblqlqsyl5     ,/oNUMBER(5,2), o/
              qy_qyblqlqsyl6   =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyblqlqsyl6     ,/oNUMBER(5,2),o/
              qy_qyblqlqswd1   =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyblqlqswd1     ,/oNUMBER(6),o/
              qy_qyblqlqswd2   =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyblqlqswd2     ,/oNUMBER(6), o/
              qy_qyblqlqswd3   =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyblqlqswd3     ,/oNUMBER(6),o/
              qy_qyblqlqswd4   =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyblqlqswd4     ,/oNUMBER(6),o/
              qy_qyblqlqswd5   =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyblqlqswd5     ,/oNUMBER(6),o/
              qy_qyblqlqswd6   =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qyblqlqswd6     ,/oNUMBER(6),o/
              qy_qybyqyw1	   =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qybyqyw1        ,/oNUMBER(6),o/
              qy_qybyqyw2      =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qybyqyw2        ,/oNUMBER(6),o/
              qy_qybyqyw3      =  :data_3g->str_tcms_dl_v20.str_qianyin.qy_qybyqyw3        ,/oNUMBER(6),o/

              fz_fzblqzczt		=  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_fzblqzczt       ,/oNUMBER(3), o/
              fz_qyfjsxdlqjqqzt =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_qyfjsxdlqjqqzt  ,/oNUMBER(3), o/
              fz_st7			=  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_st7             ,/oNUMBER(3), o/
              fz_ybsxdlqzt		=  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_ybsxdlqzt       ,/oNUMBER(3), o/
              fz_blqsbsxdlqzt	=  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_blqsbsxdlqzt    ,/oNUMBER(3),o/
              fz_ysjgz		 =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_ysjgz           ,/oNUMBER(3),o/
              fz_fzblq1_scdy =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_fzblq1_scdy     ,/oNUMBER(5), o/
              fz_fzblq1_scdl =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_fzblq1_scdl     ,/oNUMBER(5),o/
              fz_fzblq1_scpl =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_fzblq1_scpl     ,/oNUMBER(5),o/
              fz_fzblq2_scdy =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_fzblq2_scdy     ,/oNUMBER(5),o/
              fz_fzblq2_scdl =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_fzblq2_scdl     ,/oNUMBER(5),o/
              fz_fzblq2_scpl =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_fzblq2_scpl     ,/oNUMBER(5),o/
              fz_fzblq3_scdy =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_fzblq3_scdy     ,/oNUMBER(5),o/
              fz_fzblq3_scdl =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_fzblq3_scdl     ,/oNUMBER(5),o/
              fz_fzblq3_scpl =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_fzblq3_scpl     ,/oNUMBER(5),o/
              fz_fzblq4_scdy =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_fzblq4_scdy     ,/oNUMBER(5),o/
              fz_fzblq4_scdl =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_fzblq4_scdl     ,/oNUMBER(5),o/
              fz_fzblq4_scpl =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_fzblq4_scpl     ,/oNUMBER(5),o/
              fz_lg1_scdy    =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_lg1_scdy        ,/oNUMBER(5),o/
              fz_lg1_scdl    =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_lg1_scdl        ,/oNUMBER(5), o/
              fz_lg2_scdy    =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_lg2_scdy        ,/oNUMBER(5),o/
              fz_lg2_scdl    =  :data_3g->str_tcms_dl_v20.str_fuzhu.fz_lg2_scdl        ,/oNUMBER(5),o/

              zd_sdsd    =  :data_3g->str_tcms_dl_v20.str_zhidong.zd_sdsd            ,/oNUMBER(6,1),o/
              zd_sjsd    =  :data_3g->str_tcms_dl_v20.str_zhidong.zd_sjsd            ,/oNUMBER(6,1), o/
              zd_abh     =  :data_3g->str_tcms_dl_v20.str_zhidong.zd_abh             ,/oNUMBER(3),o/
              zd_ibh     =  :data_3g->str_tcms_dl_v20.str_zhidong.zd_ibh             ,/oNUMBER(3),o/
              zd_zdsj    =  :data_3g->str_tcms_dl_v20.str_zhidong.zd_zdsj            ,/oNUMBER(3), o/
              zd_zdj     =  :data_3g->str_tcms_dl_v20.str_zhidong.zd_zdj             ,/oNUMBER(3),o/
              zd_st9     =  :data_3g->str_tcms_dl_v20.str_zhidong.zd_st9             ,/oNUMBER(3),o/
              zd_zfgyl   =  :data_3g->str_tcms_dl_v20.str_zhidong.zd_zfgyl           ,/oNUMBER(5),o/
              zd_jhfgyl  =  :data_3g->str_tcms_dl_v20.str_zhidong.zd_jhfgyl          ,/oNUMBER(5),o/
              zd_lcgyl   =  :data_3g->str_tcms_dl_v20.str_zhidong.zd_lcgyl           ,/oNUMBER(5),o/
              zd_zdfg1yl =  :data_3g->str_tcms_dl_v20.str_zhidong.zd_zdfg1yl         ,/oNUMBER(5),o/
              zd_zdfg2yl =  :data_3g->str_tcms_dl_v20.str_zhidong.zd_zdfg2yl         ,/oNUMBER(5), o/

              bbxx_jcyxlc		=  :data_3g->str_tcms_dl_v20.str_ljlybbxx.bbxx_jcyxlc        ,/oNUMBER(10),o/
              bbxx_zdlqdzcs		=  :data_3g->str_tcms_dl_v20.str_ljlybbxx.bbxx_zdlqdzcs      ,/oNUMBER(10),o/
              bbxx_ysj1_yxljsj  =  :data_3g->str_tcms_dl_v20.str_ljlybbxx.bbxx_ysj1_yxljsj   ,/oNUMBER(10,1),o/
              bbxx_ysj2_yxljsj  =  :data_3g->str_tcms_dl_v20.str_ljlybbxx.bbxx_ysj2_yxljsj   ,/oNUMBER(10,1),o/
              bbxx_tcms_zkdybb1 =  :data_3g->str_tcms_dl_v20.str_ljlybbxx.bbxx_tcms_zkdybb1  ,/oNUMBER(10),o/
              bbxx_tcms_zkdybb2 =  :data_3g->str_tcms_dl_v20.str_ljlybbxx.bbxx_tcms_zkdybb2  ,/oNUMBER(10),                      o/
              bbxx_wgdybb1		=  :data_3g->str_tcms_dl_v20.str_ljlybbxx.bbxx_wgdybb1       ,/oNUMBER(10),o/
              bbxx_wgdybb2		=  :data_3g->str_tcms_dl_v20.str_ljlybbxx.bbxx_wgdybb2        /oNUMBER(10) o/; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 129;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlbuft((void **)0,
      "update AP_TCMS_HXD_V20_LASTSTATUS  set idx=:b0,t_type_id=:b1,loco_no=\
:b2,ab=:b3,btsj=to_date(:b4,'yyyy-mm-dd hh24:mi:ss'),rksj=to_date(:b5,'yyyy-\
mm-dd hh24:mi:ss'),xtsj=to_date(:b6,'yyyy-mm-dd hh24:mi:ss'),ver=:b7,yx_st5=\
:b8,yx_st6=:b9,yx_st7=:b10,yx_st8=:b11,yx_st9=:b12,yx_st10=:b13,yx_st11=:b14\
,yx_sbjw=:b15,yx_sd_jh=:b16,yx_sd_sj=:b17,yx_ybdy=:b18,yx_ybdl=:b19,yx_zfgyl\
=:b20,yx_jhfgyl=:b21,yx_lcgyl=:b22,yx_zdfg1yl=:b23,yx_zdfg2yl=:b24,yx_zlc=:b\
25,yx_xdcyl=:b26,yx_zdlqdzcs=:b27,yx_ysj1yxsj=:b28,yx_ysj2yxsj=:b29,qy_cdjcq\
=:b30,qy_djjcq=:b31,qy_zgl=:b32,qy_sdsd=:b33,qy_sjsd=:b34,qy_qyzdlsdz_1bg2mt\
=:b35,qy_qyzdlsdz_1bg3mt=:b36,qy_qyzdlsdz_2bg1mt=:b37,qy_qyzdlsdz_2bg2mt=:b3\
8,qy_qyzdlsdz_2bg3mt=:b39,qy_qyzdlsjz_1bg1mt=:b40,qy_qyzdlsjz_1bg2mt=:b41,qy\
_qyzdlsjz_1bg3mt=:b42,qy_qyzdlsjz_2bg1mt=:b43,qy_qyzdlsjz_2bg2mt=:b44,qy_qyz\
dlsjz_2bg3mt=:b45,qy_sjsd_1bg1mt=:b46,qy_sjsd_1bg2mt=:b47,qy_sjsd_1bg3mt=:b4\
8,qy_sjsd_2bg1mt=:b49,qy_sjsd_2bg2mt=:b50,qy_sjsd_2bg3mt=:b51,qy_djdl_1bg1mt\
=:b52,qy_djdl_1bg2mt=:b53,qy_djdl_1bg3mt=:b");
    sqlbuft((void **)0,
      "54,qy_djdl_2bg1mt=:b55,qy_djdl_2bg2mt=:b56,qy_djdl_2bg3mt=:b57,qy_djw\
d_1bg1mt=:b58,qy_djwd_1bg2mt=:b59,qy_djwd_1bg3mt=:b60,qy_djwd_2bg1mt=:b61,qy\
_djwd_2bg2mt=:b62,qy_djwd_2bg3mt=:b63,qy_fdjdy=:b64,qy_fdjdl=:b65,qy_jlqzlmx\
1dy=:b66,qy_jlqzlmx2dy=:b67,qy_jlqzlmx3dy=:b68,qy_jlqzlmx4dy=:b69,qy_jlqzlmx\
5dy=:b70,qy_jlqzlmx6dy=:b71,qy_qyblqlqsyl1=:b72,qy_qyblqlqsyl2=:b73,qy_qyblq\
lqsyl3=:b74,qy_qyblqlqsyl4=:b75,qy_qyblqlqsyl5=:b76,qy_qyblqlqsyl6=:b77,qy_q\
yblqlqswd1=:b78,qy_qyblqlqswd2=:b79,qy_qyblqlqswd3=:b80,qy_qyblqlqswd4=:b81,\
qy_qyblqlqswd5=:b82,qy_qyblqlqswd6=:b83,qy_qybyqyw1=:b84,qy_qybyqyw2=:b85,qy\
_qybyqyw3=:b86,fz_fzblqzczt=:b87,fz_qyfjsxdlqjqqzt=:b88,fz_st7=:b89,fz_ybsxd\
lqzt=:b90,fz_blqsbsxdlqzt=:b91,fz_ysjgz=:b92,fz_fzblq1_scdy=:b93,fz_fzblq1_s\
cdl=:b94,fz_fzblq1_scpl=:b95,fz_fzblq2_scdy=:b96,fz_fzblq2_scdl=:b97,fz_fzbl\
q2_scpl=:b98,fz_fzblq3_scdy=:b99,fz_fzblq3_scdl=:b100,fz_fzblq3_scpl=:b101,f\
z_fzblq4_scdy=:b102,fz_fzblq4_scdl=:b103,fz_fzblq4_scpl=:b104,fz_lg1_scdy=:b\
105,fz_lg1_scdl=:b106,fz_lg2_scdy=:b107,fz_");
    sqlstm.stmt = "lg2_scdl=:b108,zd_sdsd=:b109,zd_sjsd=:b110,zd_abh=:b111,\
zd_ibh=:b112,zd_zdsj=:b113,zd_zdj=:b114,zd_st9=:b115,zd_zfgyl=:b116,zd_jhfgyl\
=:b117,zd_lcgyl=:b118,zd_zdfg1yl=:b119,zd_zdfg2yl=:b120,bbxx_jcyxlc=:b121,bbx\
x_zdlqdzcs=:b122,bbxx_ysj1_yxljsj=:b123,bbxx_ysj2_yxljsj=:b124,bbxx_tcms_zkdy\
bb1=:b125,bbxx_tcms_zkdybb2=:b126,bbxx_wgdybb1=:b127,bbxx_wgdybb2=:b128";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )718;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)(data_3g->idx);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_3g->t_type_id);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_3g->loco_no);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_3g->ab);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_3g->btsj);
    sqlstm.sqhstl[4] = (unsigned long )21;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_3g->rksj);
    sqlstm.sqhstl[5] = (unsigned long )21;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)(data_3g->tcms_xtsj);
    sqlstm.sqhstl[6] = (unsigned long )21;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&(data_3g->tcms_ver);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_st5);
    sqlstm.sqhstl[8] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_st6);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_st7);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_st8);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_st9);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_st10);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_st11);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_sbjw);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_sd_jh);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_sd_sj);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_ybdy);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_ybdl);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_zfgyl);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_jhfgyl);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_lcgyl);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_zdfg1yl);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_zdfg2yl);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_zlc);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_xdcyl);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_zdlqdzcs);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_ysj1yxsj);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_basic).yx_ysj2yxsj);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_cdjcq);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_djjcq);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_zgl);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_sdsd);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_sjsd);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyzdlsdz_1bg2mt);
    sqlstm.sqhstl[35] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyzdlsdz_1bg3mt);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyzdlsdz_2bg1mt);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyzdlsdz_2bg2mt);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyzdlsdz_2bg3mt);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyzdlsjz_1bg1mt);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyzdlsjz_1bg2mt);
    sqlstm.sqhstl[41] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyzdlsjz_1bg3mt);
    sqlstm.sqhstl[42] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyzdlsjz_2bg1mt);
    sqlstm.sqhstl[43] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyzdlsjz_2bg2mt);
    sqlstm.sqhstl[44] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyzdlsjz_2bg3mt);
    sqlstm.sqhstl[45] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_sjsd_1bg1mt);
    sqlstm.sqhstl[46] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_sjsd_1bg2mt);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
    sqlstm.sqhstv[48] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_sjsd_1bg3mt);
    sqlstm.sqhstl[48] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[48] = (         int  )0;
    sqlstm.sqindv[48] = (         short *)0;
    sqlstm.sqinds[48] = (         int  )0;
    sqlstm.sqharm[48] = (unsigned long )0;
    sqlstm.sqadto[48] = (unsigned short )0;
    sqlstm.sqtdso[48] = (unsigned short )0;
    sqlstm.sqhstv[49] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_sjsd_2bg1mt);
    sqlstm.sqhstl[49] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[49] = (         int  )0;
    sqlstm.sqindv[49] = (         short *)0;
    sqlstm.sqinds[49] = (         int  )0;
    sqlstm.sqharm[49] = (unsigned long )0;
    sqlstm.sqadto[49] = (unsigned short )0;
    sqlstm.sqtdso[49] = (unsigned short )0;
    sqlstm.sqhstv[50] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_sjsd_2bg2mt);
    sqlstm.sqhstl[50] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[50] = (         int  )0;
    sqlstm.sqindv[50] = (         short *)0;
    sqlstm.sqinds[50] = (         int  )0;
    sqlstm.sqharm[50] = (unsigned long )0;
    sqlstm.sqadto[50] = (unsigned short )0;
    sqlstm.sqtdso[50] = (unsigned short )0;
    sqlstm.sqhstv[51] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_sjsd_2bg3mt);
    sqlstm.sqhstl[51] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[51] = (         int  )0;
    sqlstm.sqindv[51] = (         short *)0;
    sqlstm.sqinds[51] = (         int  )0;
    sqlstm.sqharm[51] = (unsigned long )0;
    sqlstm.sqadto[51] = (unsigned short )0;
    sqlstm.sqtdso[51] = (unsigned short )0;
    sqlstm.sqhstv[52] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_djdl_1bg1mt);
    sqlstm.sqhstl[52] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[52] = (         int  )0;
    sqlstm.sqindv[52] = (         short *)0;
    sqlstm.sqinds[52] = (         int  )0;
    sqlstm.sqharm[52] = (unsigned long )0;
    sqlstm.sqadto[52] = (unsigned short )0;
    sqlstm.sqtdso[52] = (unsigned short )0;
    sqlstm.sqhstv[53] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_djdl_1bg2mt);
    sqlstm.sqhstl[53] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[53] = (         int  )0;
    sqlstm.sqindv[53] = (         short *)0;
    sqlstm.sqinds[53] = (         int  )0;
    sqlstm.sqharm[53] = (unsigned long )0;
    sqlstm.sqadto[53] = (unsigned short )0;
    sqlstm.sqtdso[53] = (unsigned short )0;
    sqlstm.sqhstv[54] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_djdl_1bg3mt);
    sqlstm.sqhstl[54] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[54] = (         int  )0;
    sqlstm.sqindv[54] = (         short *)0;
    sqlstm.sqinds[54] = (         int  )0;
    sqlstm.sqharm[54] = (unsigned long )0;
    sqlstm.sqadto[54] = (unsigned short )0;
    sqlstm.sqtdso[54] = (unsigned short )0;
    sqlstm.sqhstv[55] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_djdl_2bg1mt);
    sqlstm.sqhstl[55] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[55] = (         int  )0;
    sqlstm.sqindv[55] = (         short *)0;
    sqlstm.sqinds[55] = (         int  )0;
    sqlstm.sqharm[55] = (unsigned long )0;
    sqlstm.sqadto[55] = (unsigned short )0;
    sqlstm.sqtdso[55] = (unsigned short )0;
    sqlstm.sqhstv[56] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_djdl_2bg2mt);
    sqlstm.sqhstl[56] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[56] = (         int  )0;
    sqlstm.sqindv[56] = (         short *)0;
    sqlstm.sqinds[56] = (         int  )0;
    sqlstm.sqharm[56] = (unsigned long )0;
    sqlstm.sqadto[56] = (unsigned short )0;
    sqlstm.sqtdso[56] = (unsigned short )0;
    sqlstm.sqhstv[57] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_djdl_2bg3mt);
    sqlstm.sqhstl[57] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[57] = (         int  )0;
    sqlstm.sqindv[57] = (         short *)0;
    sqlstm.sqinds[57] = (         int  )0;
    sqlstm.sqharm[57] = (unsigned long )0;
    sqlstm.sqadto[57] = (unsigned short )0;
    sqlstm.sqtdso[57] = (unsigned short )0;
    sqlstm.sqhstv[58] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_djwd_1bg1mt);
    sqlstm.sqhstl[58] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[58] = (         int  )0;
    sqlstm.sqindv[58] = (         short *)0;
    sqlstm.sqinds[58] = (         int  )0;
    sqlstm.sqharm[58] = (unsigned long )0;
    sqlstm.sqadto[58] = (unsigned short )0;
    sqlstm.sqtdso[58] = (unsigned short )0;
    sqlstm.sqhstv[59] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_djwd_1bg2mt);
    sqlstm.sqhstl[59] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[59] = (         int  )0;
    sqlstm.sqindv[59] = (         short *)0;
    sqlstm.sqinds[59] = (         int  )0;
    sqlstm.sqharm[59] = (unsigned long )0;
    sqlstm.sqadto[59] = (unsigned short )0;
    sqlstm.sqtdso[59] = (unsigned short )0;
    sqlstm.sqhstv[60] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_djwd_1bg3mt);
    sqlstm.sqhstl[60] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[60] = (         int  )0;
    sqlstm.sqindv[60] = (         short *)0;
    sqlstm.sqinds[60] = (         int  )0;
    sqlstm.sqharm[60] = (unsigned long )0;
    sqlstm.sqadto[60] = (unsigned short )0;
    sqlstm.sqtdso[60] = (unsigned short )0;
    sqlstm.sqhstv[61] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_djwd_2bg1mt);
    sqlstm.sqhstl[61] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[61] = (         int  )0;
    sqlstm.sqindv[61] = (         short *)0;
    sqlstm.sqinds[61] = (         int  )0;
    sqlstm.sqharm[61] = (unsigned long )0;
    sqlstm.sqadto[61] = (unsigned short )0;
    sqlstm.sqtdso[61] = (unsigned short )0;
    sqlstm.sqhstv[62] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_djwd_2bg2mt);
    sqlstm.sqhstl[62] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[62] = (         int  )0;
    sqlstm.sqindv[62] = (         short *)0;
    sqlstm.sqinds[62] = (         int  )0;
    sqlstm.sqharm[62] = (unsigned long )0;
    sqlstm.sqadto[62] = (unsigned short )0;
    sqlstm.sqtdso[62] = (unsigned short )0;
    sqlstm.sqhstv[63] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_djwd_2bg3mt);
    sqlstm.sqhstl[63] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[63] = (         int  )0;
    sqlstm.sqindv[63] = (         short *)0;
    sqlstm.sqinds[63] = (         int  )0;
    sqlstm.sqharm[63] = (unsigned long )0;
    sqlstm.sqadto[63] = (unsigned short )0;
    sqlstm.sqtdso[63] = (unsigned short )0;
    sqlstm.sqhstv[64] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_fdjdy);
    sqlstm.sqhstl[64] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[64] = (         int  )0;
    sqlstm.sqindv[64] = (         short *)0;
    sqlstm.sqinds[64] = (         int  )0;
    sqlstm.sqharm[64] = (unsigned long )0;
    sqlstm.sqadto[64] = (unsigned short )0;
    sqlstm.sqtdso[64] = (unsigned short )0;
    sqlstm.sqhstv[65] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_fdjdl);
    sqlstm.sqhstl[65] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[65] = (         int  )0;
    sqlstm.sqindv[65] = (         short *)0;
    sqlstm.sqinds[65] = (         int  )0;
    sqlstm.sqharm[65] = (unsigned long )0;
    sqlstm.sqadto[65] = (unsigned short )0;
    sqlstm.sqtdso[65] = (unsigned short )0;
    sqlstm.sqhstv[66] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_jlqzlmx1dy);
    sqlstm.sqhstl[66] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[66] = (         int  )0;
    sqlstm.sqindv[66] = (         short *)0;
    sqlstm.sqinds[66] = (         int  )0;
    sqlstm.sqharm[66] = (unsigned long )0;
    sqlstm.sqadto[66] = (unsigned short )0;
    sqlstm.sqtdso[66] = (unsigned short )0;
    sqlstm.sqhstv[67] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_jlqzlmx2dy);
    sqlstm.sqhstl[67] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[67] = (         int  )0;
    sqlstm.sqindv[67] = (         short *)0;
    sqlstm.sqinds[67] = (         int  )0;
    sqlstm.sqharm[67] = (unsigned long )0;
    sqlstm.sqadto[67] = (unsigned short )0;
    sqlstm.sqtdso[67] = (unsigned short )0;
    sqlstm.sqhstv[68] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_jlqzlmx3dy);
    sqlstm.sqhstl[68] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[68] = (         int  )0;
    sqlstm.sqindv[68] = (         short *)0;
    sqlstm.sqinds[68] = (         int  )0;
    sqlstm.sqharm[68] = (unsigned long )0;
    sqlstm.sqadto[68] = (unsigned short )0;
    sqlstm.sqtdso[68] = (unsigned short )0;
    sqlstm.sqhstv[69] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_jlqzlmx4dy);
    sqlstm.sqhstl[69] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[69] = (         int  )0;
    sqlstm.sqindv[69] = (         short *)0;
    sqlstm.sqinds[69] = (         int  )0;
    sqlstm.sqharm[69] = (unsigned long )0;
    sqlstm.sqadto[69] = (unsigned short )0;
    sqlstm.sqtdso[69] = (unsigned short )0;
    sqlstm.sqhstv[70] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_jlqzlmx5dy);
    sqlstm.sqhstl[70] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[70] = (         int  )0;
    sqlstm.sqindv[70] = (         short *)0;
    sqlstm.sqinds[70] = (         int  )0;
    sqlstm.sqharm[70] = (unsigned long )0;
    sqlstm.sqadto[70] = (unsigned short )0;
    sqlstm.sqtdso[70] = (unsigned short )0;
    sqlstm.sqhstv[71] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_jlqzlmx6dy);
    sqlstm.sqhstl[71] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[71] = (         int  )0;
    sqlstm.sqindv[71] = (         short *)0;
    sqlstm.sqinds[71] = (         int  )0;
    sqlstm.sqharm[71] = (unsigned long )0;
    sqlstm.sqadto[71] = (unsigned short )0;
    sqlstm.sqtdso[71] = (unsigned short )0;
    sqlstm.sqhstv[72] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyblqlqsyl1);
    sqlstm.sqhstl[72] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[72] = (         int  )0;
    sqlstm.sqindv[72] = (         short *)0;
    sqlstm.sqinds[72] = (         int  )0;
    sqlstm.sqharm[72] = (unsigned long )0;
    sqlstm.sqadto[72] = (unsigned short )0;
    sqlstm.sqtdso[72] = (unsigned short )0;
    sqlstm.sqhstv[73] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyblqlqsyl2);
    sqlstm.sqhstl[73] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[73] = (         int  )0;
    sqlstm.sqindv[73] = (         short *)0;
    sqlstm.sqinds[73] = (         int  )0;
    sqlstm.sqharm[73] = (unsigned long )0;
    sqlstm.sqadto[73] = (unsigned short )0;
    sqlstm.sqtdso[73] = (unsigned short )0;
    sqlstm.sqhstv[74] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyblqlqsyl3);
    sqlstm.sqhstl[74] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[74] = (         int  )0;
    sqlstm.sqindv[74] = (         short *)0;
    sqlstm.sqinds[74] = (         int  )0;
    sqlstm.sqharm[74] = (unsigned long )0;
    sqlstm.sqadto[74] = (unsigned short )0;
    sqlstm.sqtdso[74] = (unsigned short )0;
    sqlstm.sqhstv[75] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyblqlqsyl4);
    sqlstm.sqhstl[75] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[75] = (         int  )0;
    sqlstm.sqindv[75] = (         short *)0;
    sqlstm.sqinds[75] = (         int  )0;
    sqlstm.sqharm[75] = (unsigned long )0;
    sqlstm.sqadto[75] = (unsigned short )0;
    sqlstm.sqtdso[75] = (unsigned short )0;
    sqlstm.sqhstv[76] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyblqlqsyl5);
    sqlstm.sqhstl[76] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[76] = (         int  )0;
    sqlstm.sqindv[76] = (         short *)0;
    sqlstm.sqinds[76] = (         int  )0;
    sqlstm.sqharm[76] = (unsigned long )0;
    sqlstm.sqadto[76] = (unsigned short )0;
    sqlstm.sqtdso[76] = (unsigned short )0;
    sqlstm.sqhstv[77] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyblqlqsyl6);
    sqlstm.sqhstl[77] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[77] = (         int  )0;
    sqlstm.sqindv[77] = (         short *)0;
    sqlstm.sqinds[77] = (         int  )0;
    sqlstm.sqharm[77] = (unsigned long )0;
    sqlstm.sqadto[77] = (unsigned short )0;
    sqlstm.sqtdso[77] = (unsigned short )0;
    sqlstm.sqhstv[78] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyblqlqswd1);
    sqlstm.sqhstl[78] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[78] = (         int  )0;
    sqlstm.sqindv[78] = (         short *)0;
    sqlstm.sqinds[78] = (         int  )0;
    sqlstm.sqharm[78] = (unsigned long )0;
    sqlstm.sqadto[78] = (unsigned short )0;
    sqlstm.sqtdso[78] = (unsigned short )0;
    sqlstm.sqhstv[79] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyblqlqswd2);
    sqlstm.sqhstl[79] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[79] = (         int  )0;
    sqlstm.sqindv[79] = (         short *)0;
    sqlstm.sqinds[79] = (         int  )0;
    sqlstm.sqharm[79] = (unsigned long )0;
    sqlstm.sqadto[79] = (unsigned short )0;
    sqlstm.sqtdso[79] = (unsigned short )0;
    sqlstm.sqhstv[80] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyblqlqswd3);
    sqlstm.sqhstl[80] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[80] = (         int  )0;
    sqlstm.sqindv[80] = (         short *)0;
    sqlstm.sqinds[80] = (         int  )0;
    sqlstm.sqharm[80] = (unsigned long )0;
    sqlstm.sqadto[80] = (unsigned short )0;
    sqlstm.sqtdso[80] = (unsigned short )0;
    sqlstm.sqhstv[81] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyblqlqswd4);
    sqlstm.sqhstl[81] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[81] = (         int  )0;
    sqlstm.sqindv[81] = (         short *)0;
    sqlstm.sqinds[81] = (         int  )0;
    sqlstm.sqharm[81] = (unsigned long )0;
    sqlstm.sqadto[81] = (unsigned short )0;
    sqlstm.sqtdso[81] = (unsigned short )0;
    sqlstm.sqhstv[82] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyblqlqswd5);
    sqlstm.sqhstl[82] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[82] = (         int  )0;
    sqlstm.sqindv[82] = (         short *)0;
    sqlstm.sqinds[82] = (         int  )0;
    sqlstm.sqharm[82] = (unsigned long )0;
    sqlstm.sqadto[82] = (unsigned short )0;
    sqlstm.sqtdso[82] = (unsigned short )0;
    sqlstm.sqhstv[83] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qyblqlqswd6);
    sqlstm.sqhstl[83] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[83] = (         int  )0;
    sqlstm.sqindv[83] = (         short *)0;
    sqlstm.sqinds[83] = (         int  )0;
    sqlstm.sqharm[83] = (unsigned long )0;
    sqlstm.sqadto[83] = (unsigned short )0;
    sqlstm.sqtdso[83] = (unsigned short )0;
    sqlstm.sqhstv[84] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qybyqyw1);
    sqlstm.sqhstl[84] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[84] = (         int  )0;
    sqlstm.sqindv[84] = (         short *)0;
    sqlstm.sqinds[84] = (         int  )0;
    sqlstm.sqharm[84] = (unsigned long )0;
    sqlstm.sqadto[84] = (unsigned short )0;
    sqlstm.sqtdso[84] = (unsigned short )0;
    sqlstm.sqhstv[85] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qybyqyw2);
    sqlstm.sqhstl[85] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[85] = (         int  )0;
    sqlstm.sqindv[85] = (         short *)0;
    sqlstm.sqinds[85] = (         int  )0;
    sqlstm.sqharm[85] = (unsigned long )0;
    sqlstm.sqadto[85] = (unsigned short )0;
    sqlstm.sqtdso[85] = (unsigned short )0;
    sqlstm.sqhstv[86] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_qianyin).qy_qybyqyw3);
    sqlstm.sqhstl[86] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[86] = (         int  )0;
    sqlstm.sqindv[86] = (         short *)0;
    sqlstm.sqinds[86] = (         int  )0;
    sqlstm.sqharm[86] = (unsigned long )0;
    sqlstm.sqadto[86] = (unsigned short )0;
    sqlstm.sqtdso[86] = (unsigned short )0;
    sqlstm.sqhstv[87] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_fzblqzczt);
    sqlstm.sqhstl[87] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[87] = (         int  )0;
    sqlstm.sqindv[87] = (         short *)0;
    sqlstm.sqinds[87] = (         int  )0;
    sqlstm.sqharm[87] = (unsigned long )0;
    sqlstm.sqadto[87] = (unsigned short )0;
    sqlstm.sqtdso[87] = (unsigned short )0;
    sqlstm.sqhstv[88] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_qyfjsxdlqjqqzt);
    sqlstm.sqhstl[88] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[88] = (         int  )0;
    sqlstm.sqindv[88] = (         short *)0;
    sqlstm.sqinds[88] = (         int  )0;
    sqlstm.sqharm[88] = (unsigned long )0;
    sqlstm.sqadto[88] = (unsigned short )0;
    sqlstm.sqtdso[88] = (unsigned short )0;
    sqlstm.sqhstv[89] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_st7);
    sqlstm.sqhstl[89] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[89] = (         int  )0;
    sqlstm.sqindv[89] = (         short *)0;
    sqlstm.sqinds[89] = (         int  )0;
    sqlstm.sqharm[89] = (unsigned long )0;
    sqlstm.sqadto[89] = (unsigned short )0;
    sqlstm.sqtdso[89] = (unsigned short )0;
    sqlstm.sqhstv[90] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_ybsxdlqzt);
    sqlstm.sqhstl[90] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[90] = (         int  )0;
    sqlstm.sqindv[90] = (         short *)0;
    sqlstm.sqinds[90] = (         int  )0;
    sqlstm.sqharm[90] = (unsigned long )0;
    sqlstm.sqadto[90] = (unsigned short )0;
    sqlstm.sqtdso[90] = (unsigned short )0;
    sqlstm.sqhstv[91] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_blqsbsxdlqzt);
    sqlstm.sqhstl[91] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[91] = (         int  )0;
    sqlstm.sqindv[91] = (         short *)0;
    sqlstm.sqinds[91] = (         int  )0;
    sqlstm.sqharm[91] = (unsigned long )0;
    sqlstm.sqadto[91] = (unsigned short )0;
    sqlstm.sqtdso[91] = (unsigned short )0;
    sqlstm.sqhstv[92] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_ysjgz);
    sqlstm.sqhstl[92] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[92] = (         int  )0;
    sqlstm.sqindv[92] = (         short *)0;
    sqlstm.sqinds[92] = (         int  )0;
    sqlstm.sqharm[92] = (unsigned long )0;
    sqlstm.sqadto[92] = (unsigned short )0;
    sqlstm.sqtdso[92] = (unsigned short )0;
    sqlstm.sqhstv[93] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_fzblq1_scdy);
    sqlstm.sqhstl[93] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[93] = (         int  )0;
    sqlstm.sqindv[93] = (         short *)0;
    sqlstm.sqinds[93] = (         int  )0;
    sqlstm.sqharm[93] = (unsigned long )0;
    sqlstm.sqadto[93] = (unsigned short )0;
    sqlstm.sqtdso[93] = (unsigned short )0;
    sqlstm.sqhstv[94] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_fzblq1_scdl);
    sqlstm.sqhstl[94] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[94] = (         int  )0;
    sqlstm.sqindv[94] = (         short *)0;
    sqlstm.sqinds[94] = (         int  )0;
    sqlstm.sqharm[94] = (unsigned long )0;
    sqlstm.sqadto[94] = (unsigned short )0;
    sqlstm.sqtdso[94] = (unsigned short )0;
    sqlstm.sqhstv[95] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_fzblq1_scpl);
    sqlstm.sqhstl[95] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[95] = (         int  )0;
    sqlstm.sqindv[95] = (         short *)0;
    sqlstm.sqinds[95] = (         int  )0;
    sqlstm.sqharm[95] = (unsigned long )0;
    sqlstm.sqadto[95] = (unsigned short )0;
    sqlstm.sqtdso[95] = (unsigned short )0;
    sqlstm.sqhstv[96] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_fzblq2_scdy);
    sqlstm.sqhstl[96] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[96] = (         int  )0;
    sqlstm.sqindv[96] = (         short *)0;
    sqlstm.sqinds[96] = (         int  )0;
    sqlstm.sqharm[96] = (unsigned long )0;
    sqlstm.sqadto[96] = (unsigned short )0;
    sqlstm.sqtdso[96] = (unsigned short )0;
    sqlstm.sqhstv[97] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_fzblq2_scdl);
    sqlstm.sqhstl[97] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[97] = (         int  )0;
    sqlstm.sqindv[97] = (         short *)0;
    sqlstm.sqinds[97] = (         int  )0;
    sqlstm.sqharm[97] = (unsigned long )0;
    sqlstm.sqadto[97] = (unsigned short )0;
    sqlstm.sqtdso[97] = (unsigned short )0;
    sqlstm.sqhstv[98] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_fzblq2_scpl);
    sqlstm.sqhstl[98] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[98] = (         int  )0;
    sqlstm.sqindv[98] = (         short *)0;
    sqlstm.sqinds[98] = (         int  )0;
    sqlstm.sqharm[98] = (unsigned long )0;
    sqlstm.sqadto[98] = (unsigned short )0;
    sqlstm.sqtdso[98] = (unsigned short )0;
    sqlstm.sqhstv[99] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_fzblq3_scdy);
    sqlstm.sqhstl[99] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[99] = (         int  )0;
    sqlstm.sqindv[99] = (         short *)0;
    sqlstm.sqinds[99] = (         int  )0;
    sqlstm.sqharm[99] = (unsigned long )0;
    sqlstm.sqadto[99] = (unsigned short )0;
    sqlstm.sqtdso[99] = (unsigned short )0;
    sqlstm.sqhstv[100] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_fzblq3_scdl);
    sqlstm.sqhstl[100] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[100] = (         int  )0;
    sqlstm.sqindv[100] = (         short *)0;
    sqlstm.sqinds[100] = (         int  )0;
    sqlstm.sqharm[100] = (unsigned long )0;
    sqlstm.sqadto[100] = (unsigned short )0;
    sqlstm.sqtdso[100] = (unsigned short )0;
    sqlstm.sqhstv[101] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_fzblq3_scpl);
    sqlstm.sqhstl[101] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[101] = (         int  )0;
    sqlstm.sqindv[101] = (         short *)0;
    sqlstm.sqinds[101] = (         int  )0;
    sqlstm.sqharm[101] = (unsigned long )0;
    sqlstm.sqadto[101] = (unsigned short )0;
    sqlstm.sqtdso[101] = (unsigned short )0;
    sqlstm.sqhstv[102] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_fzblq4_scdy);
    sqlstm.sqhstl[102] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[102] = (         int  )0;
    sqlstm.sqindv[102] = (         short *)0;
    sqlstm.sqinds[102] = (         int  )0;
    sqlstm.sqharm[102] = (unsigned long )0;
    sqlstm.sqadto[102] = (unsigned short )0;
    sqlstm.sqtdso[102] = (unsigned short )0;
    sqlstm.sqhstv[103] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_fzblq4_scdl);
    sqlstm.sqhstl[103] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[103] = (         int  )0;
    sqlstm.sqindv[103] = (         short *)0;
    sqlstm.sqinds[103] = (         int  )0;
    sqlstm.sqharm[103] = (unsigned long )0;
    sqlstm.sqadto[103] = (unsigned short )0;
    sqlstm.sqtdso[103] = (unsigned short )0;
    sqlstm.sqhstv[104] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_fzblq4_scpl);
    sqlstm.sqhstl[104] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[104] = (         int  )0;
    sqlstm.sqindv[104] = (         short *)0;
    sqlstm.sqinds[104] = (         int  )0;
    sqlstm.sqharm[104] = (unsigned long )0;
    sqlstm.sqadto[104] = (unsigned short )0;
    sqlstm.sqtdso[104] = (unsigned short )0;
    sqlstm.sqhstv[105] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_lg1_scdy);
    sqlstm.sqhstl[105] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[105] = (         int  )0;
    sqlstm.sqindv[105] = (         short *)0;
    sqlstm.sqinds[105] = (         int  )0;
    sqlstm.sqharm[105] = (unsigned long )0;
    sqlstm.sqadto[105] = (unsigned short )0;
    sqlstm.sqtdso[105] = (unsigned short )0;
    sqlstm.sqhstv[106] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_lg1_scdl);
    sqlstm.sqhstl[106] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[106] = (         int  )0;
    sqlstm.sqindv[106] = (         short *)0;
    sqlstm.sqinds[106] = (         int  )0;
    sqlstm.sqharm[106] = (unsigned long )0;
    sqlstm.sqadto[106] = (unsigned short )0;
    sqlstm.sqtdso[106] = (unsigned short )0;
    sqlstm.sqhstv[107] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_lg2_scdy);
    sqlstm.sqhstl[107] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[107] = (         int  )0;
    sqlstm.sqindv[107] = (         short *)0;
    sqlstm.sqinds[107] = (         int  )0;
    sqlstm.sqharm[107] = (unsigned long )0;
    sqlstm.sqadto[107] = (unsigned short )0;
    sqlstm.sqtdso[107] = (unsigned short )0;
    sqlstm.sqhstv[108] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_fuzhu).fz_lg2_scdl);
    sqlstm.sqhstl[108] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[108] = (         int  )0;
    sqlstm.sqindv[108] = (         short *)0;
    sqlstm.sqinds[108] = (         int  )0;
    sqlstm.sqharm[108] = (unsigned long )0;
    sqlstm.sqadto[108] = (unsigned short )0;
    sqlstm.sqtdso[108] = (unsigned short )0;
    sqlstm.sqhstv[109] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_zhidong).zd_sdsd);
    sqlstm.sqhstl[109] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[109] = (         int  )0;
    sqlstm.sqindv[109] = (         short *)0;
    sqlstm.sqinds[109] = (         int  )0;
    sqlstm.sqharm[109] = (unsigned long )0;
    sqlstm.sqadto[109] = (unsigned short )0;
    sqlstm.sqtdso[109] = (unsigned short )0;
    sqlstm.sqhstv[110] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_zhidong).zd_sjsd);
    sqlstm.sqhstl[110] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[110] = (         int  )0;
    sqlstm.sqindv[110] = (         short *)0;
    sqlstm.sqinds[110] = (         int  )0;
    sqlstm.sqharm[110] = (unsigned long )0;
    sqlstm.sqadto[110] = (unsigned short )0;
    sqlstm.sqtdso[110] = (unsigned short )0;
    sqlstm.sqhstv[111] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_zhidong).zd_abh);
    sqlstm.sqhstl[111] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[111] = (         int  )0;
    sqlstm.sqindv[111] = (         short *)0;
    sqlstm.sqinds[111] = (         int  )0;
    sqlstm.sqharm[111] = (unsigned long )0;
    sqlstm.sqadto[111] = (unsigned short )0;
    sqlstm.sqtdso[111] = (unsigned short )0;
    sqlstm.sqhstv[112] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_zhidong).zd_ibh);
    sqlstm.sqhstl[112] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[112] = (         int  )0;
    sqlstm.sqindv[112] = (         short *)0;
    sqlstm.sqinds[112] = (         int  )0;
    sqlstm.sqharm[112] = (unsigned long )0;
    sqlstm.sqadto[112] = (unsigned short )0;
    sqlstm.sqtdso[112] = (unsigned short )0;
    sqlstm.sqhstv[113] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_zhidong).zd_zdsj);
    sqlstm.sqhstl[113] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[113] = (         int  )0;
    sqlstm.sqindv[113] = (         short *)0;
    sqlstm.sqinds[113] = (         int  )0;
    sqlstm.sqharm[113] = (unsigned long )0;
    sqlstm.sqadto[113] = (unsigned short )0;
    sqlstm.sqtdso[113] = (unsigned short )0;
    sqlstm.sqhstv[114] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_zhidong).zd_zdj);
    sqlstm.sqhstl[114] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[114] = (         int  )0;
    sqlstm.sqindv[114] = (         short *)0;
    sqlstm.sqinds[114] = (         int  )0;
    sqlstm.sqharm[114] = (unsigned long )0;
    sqlstm.sqadto[114] = (unsigned short )0;
    sqlstm.sqtdso[114] = (unsigned short )0;
    sqlstm.sqhstv[115] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_zhidong).zd_st9);
    sqlstm.sqhstl[115] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[115] = (         int  )0;
    sqlstm.sqindv[115] = (         short *)0;
    sqlstm.sqinds[115] = (         int  )0;
    sqlstm.sqharm[115] = (unsigned long )0;
    sqlstm.sqadto[115] = (unsigned short )0;
    sqlstm.sqtdso[115] = (unsigned short )0;
    sqlstm.sqhstv[116] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_zhidong).zd_zfgyl);
    sqlstm.sqhstl[116] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[116] = (         int  )0;
    sqlstm.sqindv[116] = (         short *)0;
    sqlstm.sqinds[116] = (         int  )0;
    sqlstm.sqharm[116] = (unsigned long )0;
    sqlstm.sqadto[116] = (unsigned short )0;
    sqlstm.sqtdso[116] = (unsigned short )0;
    sqlstm.sqhstv[117] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_zhidong).zd_jhfgyl);
    sqlstm.sqhstl[117] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[117] = (         int  )0;
    sqlstm.sqindv[117] = (         short *)0;
    sqlstm.sqinds[117] = (         int  )0;
    sqlstm.sqharm[117] = (unsigned long )0;
    sqlstm.sqadto[117] = (unsigned short )0;
    sqlstm.sqtdso[117] = (unsigned short )0;
    sqlstm.sqhstv[118] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_zhidong).zd_lcgyl);
    sqlstm.sqhstl[118] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[118] = (         int  )0;
    sqlstm.sqindv[118] = (         short *)0;
    sqlstm.sqinds[118] = (         int  )0;
    sqlstm.sqharm[118] = (unsigned long )0;
    sqlstm.sqadto[118] = (unsigned short )0;
    sqlstm.sqtdso[118] = (unsigned short )0;
    sqlstm.sqhstv[119] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_zhidong).zd_zdfg1yl);
    sqlstm.sqhstl[119] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[119] = (         int  )0;
    sqlstm.sqindv[119] = (         short *)0;
    sqlstm.sqinds[119] = (         int  )0;
    sqlstm.sqharm[119] = (unsigned long )0;
    sqlstm.sqadto[119] = (unsigned short )0;
    sqlstm.sqtdso[119] = (unsigned short )0;
    sqlstm.sqhstv[120] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_zhidong).zd_zdfg2yl);
    sqlstm.sqhstl[120] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[120] = (         int  )0;
    sqlstm.sqindv[120] = (         short *)0;
    sqlstm.sqinds[120] = (         int  )0;
    sqlstm.sqharm[120] = (unsigned long )0;
    sqlstm.sqadto[120] = (unsigned short )0;
    sqlstm.sqtdso[120] = (unsigned short )0;
    sqlstm.sqhstv[121] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_ljlybbxx).bbxx_jcyxlc);
    sqlstm.sqhstl[121] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[121] = (         int  )0;
    sqlstm.sqindv[121] = (         short *)0;
    sqlstm.sqinds[121] = (         int  )0;
    sqlstm.sqharm[121] = (unsigned long )0;
    sqlstm.sqadto[121] = (unsigned short )0;
    sqlstm.sqtdso[121] = (unsigned short )0;
    sqlstm.sqhstv[122] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_ljlybbxx).bbxx_zdlqdzcs);
    sqlstm.sqhstl[122] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[122] = (         int  )0;
    sqlstm.sqindv[122] = (         short *)0;
    sqlstm.sqinds[122] = (         int  )0;
    sqlstm.sqharm[122] = (unsigned long )0;
    sqlstm.sqadto[122] = (unsigned short )0;
    sqlstm.sqtdso[122] = (unsigned short )0;
    sqlstm.sqhstv[123] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_ljlybbxx).bbxx_ysj1_yxljsj);
    sqlstm.sqhstl[123] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[123] = (         int  )0;
    sqlstm.sqindv[123] = (         short *)0;
    sqlstm.sqinds[123] = (         int  )0;
    sqlstm.sqharm[123] = (unsigned long )0;
    sqlstm.sqadto[123] = (unsigned short )0;
    sqlstm.sqtdso[123] = (unsigned short )0;
    sqlstm.sqhstv[124] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_ljlybbxx).bbxx_ysj2_yxljsj);
    sqlstm.sqhstl[124] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[124] = (         int  )0;
    sqlstm.sqindv[124] = (         short *)0;
    sqlstm.sqinds[124] = (         int  )0;
    sqlstm.sqharm[124] = (unsigned long )0;
    sqlstm.sqadto[124] = (unsigned short )0;
    sqlstm.sqtdso[124] = (unsigned short )0;
    sqlstm.sqhstv[125] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_ljlybbxx).bbxx_tcms_zkdybb1);
    sqlstm.sqhstl[125] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[125] = (         int  )0;
    sqlstm.sqindv[125] = (         short *)0;
    sqlstm.sqinds[125] = (         int  )0;
    sqlstm.sqharm[125] = (unsigned long )0;
    sqlstm.sqadto[125] = (unsigned short )0;
    sqlstm.sqtdso[125] = (unsigned short )0;
    sqlstm.sqhstv[126] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_ljlybbxx).bbxx_tcms_zkdybb2);
    sqlstm.sqhstl[126] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[126] = (         int  )0;
    sqlstm.sqindv[126] = (         short *)0;
    sqlstm.sqinds[126] = (         int  )0;
    sqlstm.sqharm[126] = (unsigned long )0;
    sqlstm.sqadto[126] = (unsigned short )0;
    sqlstm.sqtdso[126] = (unsigned short )0;
    sqlstm.sqhstv[127] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_ljlybbxx).bbxx_wgdybb1);
    sqlstm.sqhstl[127] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[127] = (         int  )0;
    sqlstm.sqindv[127] = (         short *)0;
    sqlstm.sqinds[127] = (         int  )0;
    sqlstm.sqharm[127] = (unsigned long )0;
    sqlstm.sqadto[127] = (unsigned short )0;
    sqlstm.sqtdso[127] = (unsigned short )0;
    sqlstm.sqhstv[128] = (unsigned char  *)&(((data_3g->str_tcms_dl_v20).str_ljlybbxx).bbxx_wgdybb2);
    sqlstm.sqhstl[128] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[128] = (         int  )0;
    sqlstm.sqindv[128] = (         short *)0;
    sqlstm.sqinds[128] = (         int  )0;
    sqlstm.sqharm[128] = (unsigned long )0;
    sqlstm.sqadto[128] = (unsigned short )0;
    sqlstm.sqtdso[128] = (unsigned short )0;
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



    if (sqlca.sqlcode == 0)
    {
        //			memset(temp,0,1024);

        //			sprintf(temp,"loco.%s-%s:电力机车V2.0 update sucess!!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no ,sqlca.sqlcode);
        //			lprintf(disp.e,temp);
        //			lprintf(disp.v,temp);
        //			cclog('e',temp);

        return 0;
    }
    else
    {
        memset(temp,0,1024);
		
		printf("loco.%s-%s:电力机车V2.0 update failed!!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no ,sqlca.sqlcode);
        sprintf(temp,"loco.%s-%s:电力机车V2.0 update failed!!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no ,sqlca.sqlcode);
        lprintf(disp.e,temp);
        lprintf(disp.g,temp);
        cclog('e',temp);

        return 1;
    }
}

unsigned char update_ITF_TCMS_HXN_V20()//内燃机车
{
    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

    /* EXEC SQL UPDATE AP_TCMS_HXN_V20_LASTSTATUS SET 

              idx			=  :data_3g->idx                 ,/oCHAR(32) not nullo/
              t_type_id		=  :data_3g->t_type_id            ,/oCHAR(3) not nullo/
              loco_no		=  :data_3g->loco_no              ,/oCHAR(4) not nullo/
              ab			=  :data_3g->ab                   ,/oNUMBER(1) default 0 not nullo/
              btsj			=  to_date(:data_3g->btsj ,'yyyy-mm-dd hh24:mi:ss'),
              rksj			=  to_date(:data_3g->rksj ,'yyyy-mm-dd hh24:mi:ss'),
              xtsj		=  to_date(:data_3g->tcms_xtsj ,'yyyy-mm-dd hh24:mi:ss'),
              ver		=  :data_3g->tcms_ver               ,/oNUMBER(3)o/

              zd_st5		=  :data_3g->str_tcms_nr_v20.str_zhidong.zd_st5               ,/oNUMBER(3)o/
              zd_zdsbwz		=  :data_3g->str_tcms_nr_v20.str_zhidong.zd_zdsbwz            ,/oNUMBER(3)o/
              zd_ddsbwz		=  :data_3g->str_tcms_nr_v20.str_zhidong.zd_ddsbwz            ,/oNUMBER(3)o/
              zd_zdjzdsj    =  :data_3g->str_tcms_nr_v20.str_zhidong.zd_zdjzdsj           ,/oNUMBER(3)o/
              zd_st9		=  :data_3g->str_tcms_nr_v20.str_zhidong.zd_st9               ,/oNUMBER(3)o/
              zd_tfzd		=  :data_3g->str_tcms_nr_v20.str_zhidong.zd_tfzd              ,/oNUMBER(3)o/
              zd_zfgyl		=  :data_3g->str_tcms_nr_v20.str_zhidong.zd_zfgyl             ,/oNUMBER(5)o/
              zd_jhfgyl		=  :data_3g->str_tcms_nr_v20.str_zhidong.zd_jhfgyl            ,/oNUMBER(5)o/
              zd_lcgyl		=  :data_3g->str_tcms_nr_v20.str_zhidong.zd_lcgyl             ,/oNUMBER(5)o/
              zd_zdfg1yl    =  :data_3g->str_tcms_nr_v20.str_zhidong.zd_zdfg1yl           ,/oNUMBER(5)o/
              zd_zdfg2yl    =  :data_3g->str_tcms_nr_v20.str_zhidong.zd_zdfg2yl          , /oNUMBER(5)o/
              
			  yx_czd		=  :data_3g->str_tcms_nr_v20.str_basic.yx_czd               ,/oNUMBER(3)o/
              yx_fxsb		=  :data_3g->str_tcms_nr_v20.str_basic.yx_fxsb              ,/oNUMBER(3)o/
              yx_jcgk		=  :data_3g->str_tcms_nr_v20.str_basic.yx_jcgk              ,/oNUMBER(3)o/
              yx_xsqjm		=  :data_3g->str_tcms_nr_v20.str_basic.yx_xsqjm             ,/oNUMBER(3)o/
              yx_st9		=  :data_3g->str_tcms_nr_v20.str_basic.yx_st9               ,/oNUMBER(3)o/
              yx_wrjt		=  :data_3g->str_tcms_nr_v20.str_basic.yx_wrjt              ,/oNUMBER(3)o/
              yx_st11		=  :data_3g->str_tcms_nr_v20.str_basic.yx_st11              ,/oNUMBER(3)o/
              yx_skqsbdw    =  :data_3g->str_tcms_nr_v20.str_basic.yx_skqsbdw           ,/oNUMBER(3)o/
              yx_cyjsczgl   =  :data_3g->str_tcms_nr_v20.str_basic.yx_cyjsczgl          ,/oNUMBER(5)o/
              yx_zfgl		=  :data_3g->str_tcms_nr_v20.str_basic.yx_zfgl              ,/oNUMBER(5)o/
              yx_fzfdjgl    =  :data_3g->str_tcms_nr_v20.str_basic.yx_fzfdjgl           ,/oNUMBER(5)o/
              yx_zfhgl		=  :data_3g->str_tcms_nr_v20.str_basic.yx_zfhgl             ,/oNUMBER(5)o/
              yx_jcyxsd		=  :data_3g->str_tcms_nr_v20.str_basic.yx_jcyxsd            ,/oNUMBER(5,1)o/
              yx_jcqyl		=  :data_3g->str_tcms_nr_v20.str_basic.yx_jcqyl             ,/oNUMBER(5)o/
              yx_jczdl		=  :data_3g->str_tcms_nr_v20.str_basic.yx_jczdl             ,/oNUMBER(5)o/
              yx_dqyl		=  :data_3g->str_tcms_nr_v20.str_basic.yx_dqyl              ,/oNUMBER(5)o/
              yx_hjwd		=  :data_3g->str_tcms_nr_v20.str_basic.yx_hjwd              ,/oNUMBER(5,1)o/
              yx_ryyl		=  :data_3g->str_tcms_nr_v20.str_basic.yx_ryyl              ,/oNUMBER(5)o/
              yx_ryyw		=  :data_3g->str_tcms_nr_v20.str_basic.yx_ryyw              ,/oNUMBER(5)o/
              yx_xdcdy		=  :data_3g->str_tcms_nr_v20.str_basic.yx_xdcdy             ,/oNUMBER(5,1)o/
              yx_xdccddl    =  :data_3g->str_tcms_nr_v20.str_basic.yx_xdccddl           ,/oNUMBER(5)o/
              yx_zfgyl		=  :data_3g->str_tcms_nr_v20.str_basic.yx_zfgyl             ,/oNUMBER(5)o/
              yx_jhfgyl		=  :data_3g->str_tcms_nr_v20.str_basic.yx_jhfgyl            ,/oNUMBER(5)o/
              yx_lcgyl		=  :data_3g->str_tcms_nr_v20.str_basic.yx_lcgyl             ,/oNUMBER(5)o/
              yx_zdfg1yl    =  :data_3g->str_tcms_nr_v20.str_basic.yx_zdfg1yl           ,/oNUMBER(5)o/
              yx_zdfg2yl    =  :data_3g->str_tcms_nr_v20.str_basic.yx_zdfg2yl           ,/oNUMBER(5)o/
              yx_cyjzs		=  :data_3g->str_tcms_nr_v20.str_basic.yx_cyjzs             ,/oNUMBER(5)o/
              yx_jcyxlc		=  :data_3g->str_tcms_nr_v20.str_basic.yx_jcyxlc            ,/oNUMBER(10)o/
              
			  cyj_st5		=  :data_3g->str_tcms_nr_v20.str_desel.cyj_st5              ,/oNUMBER(3)o/
              cyj_st6		=  :data_3g->str_tcms_nr_v20.str_desel.cyj_st6              ,/oNUMBER(3)o/
              cyj_st7		=  :data_3g->str_tcms_nr_v20.str_desel.cyj_st7              ,/oNUMBER(3)o/
              cyj_st8		=  :data_3g->str_tcms_nr_v20.str_desel.cyj_st8              ,/oNUMBER(3)o/
              cyj_zs		=  :data_3g->str_tcms_nr_v20.str_desel.cyj_zs               ,/oNUMBER(5)o/
              cyj_qzxyl1    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_qzxyl1           ,/oNUMBER(5,1)o/
              cyj_qzxyl2    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_qzxyl2           ,/oNUMBER(5,1)o/
              cyj_kqxwyxly1		=  :data_3g->str_tcms_nr_v20.str_desel.cyj_kqxwyxly1        ,/oNUMBER(5)o/
              cyj_kqxwyxly2		=  :data_3g->str_tcms_nr_v20.str_desel.cyj_kqxwyxly2        ,/oNUMBER(5)o/
              cyj_rkkqwd		=  :data_3g->str_tcms_nr_v20.str_desel.cyj_rkkqwd           ,/oNUMBER(5)o/
              cyj_kqxkqwd1		=  :data_3g->str_tcms_nr_v20.str_desel.cyj_kqxkqwd1         ,/oNUMBER(5)o/
              cyj_kqxkqwd2		=  :data_3g->str_tcms_nr_v20.str_desel.cyj_kqxkqwd2         ,/oNUMBER(5)o/
              cyj_zyqjyjkyl1    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_zyqjyjkyl1       ,/oNUMBER(5)o/
              cyj_zyqjyjkyl2    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_zyqjyjkyl2       ,/oNUMBER(5)o/
              cyj_jkryyl    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_jkryyl           ,/oNUMBER(5)o/
              cyj_jyjkyl    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_jyjkyl           ,/oNUMBER(5)o/
              cyj_jyjkwd    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_jyjkwd           ,/oNUMBER(5)o/
              cyj_jyckwd    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_jyckwd           ,/oNUMBER(5)o/
              cyj_lqsckyl1    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_lqsckyl1         ,/oNUMBER(5)o/
              cyj_lqsckyl2    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_lqsckyl2         ,/oNUMBER(5)o/
              cyj_lqsjkyl1    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_lqsjkyl1         ,/oNUMBER(5)o/
              cyj_lqsjkyl2    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_lqsjkyl2         ,/oNUMBER(5)o/
              cyj_zlsbckyl    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_zlsbckyl         ,/oNUMBER(5)o/
              cyj_gwsbckyl    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_gwsbckyl         ,/oNUMBER(5)o/
              cyj_gwsjkwd    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_gwsjkwd          ,/oNUMBER(5)o/
              cyj_gwsckwd    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_gwsckwd          ,/oNUMBER(5) o/
              cyj_zlsjkwd    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_zlsjkwd          ,/oNUMBER(5)o/
              cyj_zlsckwd    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_zlsckwd          ,/oNUMBER(5)o/
              cyj_cyjfzfkxh    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_cyjfzfkxh        ,/oNUMBER(5,1)o/
              cyj_dbkzqgddy    =  :data_3g->str_tcms_nr_v20.str_desel.cyj_dbkzqgddy        ,/oNUMBER(5,2)o/
              cyj_pyqddy	   =  :data_3g->str_tcms_nr_v20.str_desel.cyj_pyqddy           ,/oNUMBER(5,2)o/
              
			  qy_zf    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_zf                ,/oNUMBER(3)o/
              qy_gl    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_gl                ,/oNUMBER(3)o/
              qy_skqsbdw    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_skqsbdw           ,/oNUMBER(3)o/
              qy_zflcdl    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_zflcdl            ,/oNUMBER(5)o/
              qy_zfdjdl    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_zfdjdl            ,/oNUMBER(5)o/
              qy_yjzjzlhldy    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_yjzjzlhldy        ,/oNUMBER(5)o/
              qy_ejzjzlhldy    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_ejzjzlhldy        ,/oNUMBER(5)o/
              qy_yjsdlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_yjsdlj            ,/oNUMBER(5)o/
              qy_ejsdlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_ejsdlj            ,/oNUMBER(5)o/
              qy_yjsjlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_yjsjlj            ,/oNUMBER(5)o/
              qy_ejsjlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_ejsjlj            ,/oNUMBER(5)o/
              qy_dj1_sdlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj1_sdlj          ,/oNUMBER(5)o/
              qy_dj2_sdlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj2_sdlj          ,/oNUMBER(5)o/
              qy_dj3_sdlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj3_sdlj          ,/oNUMBER(5)o/
              qy_dj4_sdlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj4_sdlj          ,/oNUMBER(5)o/
              qy_dj5_sdlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj5_sdlj          ,/oNUMBER(5)o/
              qy_dj6_sdlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj6_sdlj          ,/oNUMBER(5)o/
              qy_dj1_sjlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj1_sjlj          ,/oNUMBER(5)o/
              qy_dj2_sjlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj2_sjlj          ,/oNUMBER(5)o/
              qy_dj3_sjlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj3_sjlj          ,/oNUMBER(5)o/
              qy_dj4_sjlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj4_sjlj          ,/oNUMBER(5)o/
              qy_dj5_sjlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj5_sjlj          ,/oNUMBER(5)o/
              qy_dj6_sjlj    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj6_sjlj          , /oNUMBER(5)o/
              qy_yjdl    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_yjdl              ,/oNUMBER(5)o/
              qy_ejdl    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_ejdl              ,/oNUMBER(5)o/
              qy_dj1_dl    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj1_dl            ,/oNUMBER(5)o/
              qy_dj2_dl    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj2_dl            ,/oNUMBER(5)o/
              qy_dj3_dl    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj3_dl            ,/oNUMBER(5)o/
              qy_dj4_dl    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj4_dl            ,/oNUMBER(5)o/
              qy_dj5_dl    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj5_dl            ,/oNUMBER(5)o/
              qy_dj6_dl    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj6_dl            ,/oNUMBER(5)o/
              qy_dj1_sjzs    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj1_sjzs          ,/oNUMBER(5,1)o/
              qy_dj2_sjzs    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj2_sjzs          ,/oNUMBER(5,1)o/
              qy_dj3_sjzs    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj3_sjzs          ,/oNUMBER(5,1)o/
              qy_dj4_sjzs    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj4_sjzs          ,/oNUMBER(5,1)o/
              qy_dj5_sjzs    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj5_sjzs          ,/oNUMBER(5,1)o/
              qy_dj6_sjzs    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj6_sjzs          ,/oNUMBER(5,1)o/
              qy_dj1_wd    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj1_wd            ,/oNUMBER(5)o/
              qy_dj2_wd    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj2_wd            ,/oNUMBER(5)o/
              qy_dj3_wd    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj3_wd            ,/oNUMBER(5)o/
              qy_dj4_wd    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj4_wd            ,/oNUMBER(5)o/
              qy_dj5_wd    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj5_wd            ,/oNUMBER(5)o/
              qy_dj6_wd    =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_dj6_wd            ,/oNUMBER(5)o/
              qy_jdldl     =  :data_3g->str_tcms_nr_v20.str_qianyin.qy_jdldl             ,/oNUMBER(5,2)o/
              
			  fz_st5		=  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_st5               ,/oNUMBER(3)o/
              fz_ffdjdy     =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_ffdjdy            ,/oNUMBER(5)o/
              fz_kyj1_bpqscpl    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_kyj1_bpqscpl      ,/oNUMBER(5,1)o/
              fz_kyj1_bpqscyl    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_kyj1_bpqscyl      ,/oNUMBER(5)o/
              fz_kyj2_bpqscpl    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_kyj2_bpqscpl      ,/oNUMBER(5,1) o/
              fz_kyj2_bpqscdy    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_kyj2_bpqscdy      ,/oNUMBER(5)o/
              fz_lqfs1_bpqscpl    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_lqfs1_bpqscpl     ,/oNUMBER(5,1)o/
              fz_lqfs1_bpqscdy    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_lqfs1_bpqscdy     ,/oNUMBER(5)o/
              fz_lqfs2_bpqscpl    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_lqfs2_bpqscpl     ,/oNUMBER(5,1)o/
              fz_lqfs2_bpqscdy    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_lqfs2_bpqscdy     ,/oNUMBER(5)o/
              fz_qytfjbpqscpl     =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_qytfjbpqscpl      ,/oNUMBER(5,1)o/
              fz_qytfjbpqscxdy    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_qytfjbpqscxdy     ,/oNUMBER(5)o/
              fz_lg1_scdy    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_lg1_scdy          ,/oNUMBER(5)o/
              fz_lg1_scdl    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_lg1_scdl          ,/oNUMBER(5)o/
              fz_lg2_scdy    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_lg2_scdy          ,/oNUMBER(5)o/
              fz_lg2_scdl    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_lg2_scdl          ,/oNUMBER(5)o/
              fz_lqfs1_pl    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_lqfs1_pl          ,/oNUMBER(5)o/
              fz_lqfs2_pl    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_lqfs2_pl          ,/oNUMBER(5)o/
              fz_lqfs3_pl    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_lqfs3_pl          ,/oNUMBER(5)o/
              fz_yhzddztfjzs     =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_yhzddztfjzs       ,/oNUMBER(5)o/
              fz_eyhzddztfjzs    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_eyhzddztfjzs      ,/oNUMBER(5)o/
              fz_qytfj1_pl    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_qytfj1_pl         ,/oNUMBER(5)o/
              fz_qytfj2_pl    =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_qytfj2_pl         ,/oNUMBER(5) o/
              fz_zftfjgl      =  :data_3g->str_tcms_nr_v20.str_fuzhu.fz_zftfjgl           ,/oNUMBER(5)o/
              
			  bbxx_kyj1_yxsj  =  :data_3g->str_tcms_nr_v20.str_ljlybbxx.bbxx_kyj1_yxsj       ,/oNUMBER(5)o/
              bbxx_kyj2_yxsj  =  :data_3g->str_tcms_nr_v20.str_ljlybbxx.bbxx_kyj2_yxsj       ,/oNUMBER(5) o/
              bbxx_jcyxlc     =  :data_3g->str_tcms_nr_v20.str_ljlybbxx.bbxx_jcyxlc          ,/oNUMBER(10)o/
              bbxx_qynlljl    =  :data_3g->str_tcms_nr_v20.str_ljlybbxx.bbxx_qynlljl         ,/oNUMBER(10)o/
              bbxx_zfhnlljl   =  :data_3g->str_tcms_nr_v20.str_ljlybbxx.bbxx_zfhnlljl        ,/oNUMBER(10)o/
              bbxx_dzzdnlljl  =  :data_3g->str_tcms_nr_v20.str_ljlybbxx.bbxx_dzzdnlljl       ,/oNUMBER(10)o/
              bbxx_dzsjljl    =  :data_3g->str_tcms_nr_v20.str_ljlybbxx.bbxx_dzsjljl         ,/oNUMBER(10)o/
              bbxx_qysjljl    =  :data_3g->str_tcms_nr_v20.str_ljlybbxx.bbxx_qysjljl         ,/oNUMBER(10)o/
              bbxx_zfhsjljl   =  :data_3g->str_tcms_nr_v20.str_ljlybbxx.bbxx_zfhsjljl        ,/oNUMBER(10) o/
              bbxx_dzzdsjljl  =  :data_3g->str_tcms_nr_v20.str_ljlybbxx.bbxx_dzzdsjljl       ,/oNUMBER(10)o/
              bbxx_wjrjbbh    =  :data_3g->str_tcms_nr_v20.str_ljlybbxx.bbxx_wjrjbbh         ,/oNUMBER(10)o/
              bbxx_wjrjbbhry  =  :data_3g->str_tcms_nr_v20.str_ljlybbxx.bbxx_wjrjbbhry       ,/oNUMBER(10)o/
              bbxx_wg_gwm_rjbbh		=  :data_3g->str_tcms_nr_v20.str_ljlybbxx.bbxx_wg_gwm_rjbbh    ,/oNUMBER(10)o/
              bbxx_wg_gwm_rjbbh_ry  =  :data_3g->str_tcms_nr_v20.str_ljlybbxx.bbxx_wg_gwm_rjbbh_ry  /oNUMBER(10)o/; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlbuft((void **)0,
      "update AP_TCMS_HXN_V20_LASTSTATUS  set idx=:b0,t_type_id=:b1,loco_no=\
:b2,ab=:b3,btsj=to_date(:b4,'yyyy-mm-dd hh24:mi:ss'),rksj=to_date(:b5,'yyyy-\
mm-dd hh24:mi:ss'),xtsj=to_date(:b6,'yyyy-mm-dd hh24:mi:ss'),ver=:b7,zd_st5=\
:b8,zd_zdsbwz=:b9,zd_ddsbwz=:b10,zd_zdjzdsj=:b11,zd_st9=:b12,zd_tfzd=:b13,zd\
_zfgyl=:b14,zd_jhfgyl=:b15,zd_lcgyl=:b16,zd_zdfg1yl=:b17,zd_zdfg2yl=:b18,yx_\
czd=:b19,yx_fxsb=:b20,yx_jcgk=:b21,yx_xsqjm=:b22,yx_st9=:b23,yx_wrjt=:b24,yx\
_st11=:b25,yx_skqsbdw=:b26,yx_cyjsczgl=:b27,yx_zfgl=:b28,yx_fzfdjgl=:b29,yx_\
zfhgl=:b30,yx_jcyxsd=:b31,yx_jcqyl=:b32,yx_jczdl=:b33,yx_dqyl=:b34,yx_hjwd=:\
b35,yx_ryyl=:b36,yx_ryyw=:b37,yx_xdcdy=:b38,yx_xdccddl=:b39,yx_zfgyl=:b40,yx\
_jhfgyl=:b41,yx_lcgyl=:b42,yx_zdfg1yl=:b43,yx_zdfg2yl=:b44,yx_cyjzs=:b45,yx_\
jcyxlc=:b46,cyj_st5=:b47,cyj_st6=:b48,cyj_st7=:b49,cyj_st8=:b50,cyj_zs=:b51,\
cyj_qzxyl1=:b52,cyj_qzxyl2=:b53,cyj_kqxwyxly1=:b54,cyj_kqxwyxly2=:b55,cyj_rk\
kqwd=:b56,cyj_kqxkqwd1=:b57,cyj_kqxkqwd2=:b58,cyj_zyqjyjkyl1=:b59,cyj_zyqjyj\
kyl2=:b60,cyj_jkryyl=:b61,cyj_jyjkyl=:b62,c");
    sqlbuft((void **)0,
      "yj_jyjkwd=:b63,cyj_jyckwd=:b64,cyj_lqsckyl1=:b65,cyj_lqsckyl2=:b66,cy\
j_lqsjkyl1=:b67,cyj_lqsjkyl2=:b68,cyj_zlsbckyl=:b69,cyj_gwsbckyl=:b70,cyj_gw\
sjkwd=:b71,cyj_gwsckwd=:b72,cyj_zlsjkwd=:b73,cyj_zlsckwd=:b74,cyj_cyjfzfkxh=\
:b75,cyj_dbkzqgddy=:b76,cyj_pyqddy=:b77,qy_zf=:b78,qy_gl=:b79,qy_skqsbdw=:b8\
0,qy_zflcdl=:b81,qy_zfdjdl=:b82,qy_yjzjzlhldy=:b83,qy_ejzjzlhldy=:b84,qy_yjs\
dlj=:b85,qy_ejsdlj=:b86,qy_yjsjlj=:b87,qy_ejsjlj=:b88,qy_dj1_sdlj=:b89,qy_dj\
2_sdlj=:b90,qy_dj3_sdlj=:b91,qy_dj4_sdlj=:b92,qy_dj5_sdlj=:b93,qy_dj6_sdlj=:\
b94,qy_dj1_sjlj=:b95,qy_dj2_sjlj=:b96,qy_dj3_sjlj=:b97,qy_dj4_sjlj=:b98,qy_d\
j5_sjlj=:b99,qy_dj6_sjlj=:b100,qy_yjdl=:b101,qy_ejdl=:b102,qy_dj1_dl=:b103,q\
y_dj2_dl=:b104,qy_dj3_dl=:b105,qy_dj4_dl=:b106,qy_dj5_dl=:b107,qy_dj6_dl=:b1\
08,qy_dj1_sjzs=:b109,qy_dj2_sjzs=:b110,qy_dj3_sjzs=:b111,qy_dj4_sjzs=:b112,q\
y_dj5_sjzs=:b113,qy_dj6_sjzs=:b114,qy_dj1_wd=:b115,qy_dj2_wd=:b116,qy_dj3_wd\
=:b117,qy_dj4_wd=:b118,qy_dj5_wd=:b119,qy_dj6_wd=:b120,qy_jdldl=:b121,fz_st5\
=:b122,fz_ffdjdy=:b123,fz_kyj1_bpqscpl=:b12");
    sqlstm.stmt = "4,fz_kyj1_bpqscyl=:b125,fz_kyj2_bpqscpl=:b126,fz_kyj2_bp\
qscdy=:b127,fz_lqfs1_bpqscpl=:b128,fz_lqfs1_bpqscdy=:b129,fz_lqfs2_bpqscpl=:b\
130,fz_lqfs2_bpqscdy=:b131,fz_qytfjbpqscpl=:b132,fz_qytfjbpqscxdy=:b133,fz_lg\
1_scdy=:b134,fz_lg1_scdl=:b135,fz_lg2_scdy=:b136,fz_lg2_scdl=:b137,fz_lqfs1_p\
l=:b138,fz_lqfs2_pl=:b139,fz_lqfs3_pl=:b140,fz_yhzddztfjzs=:b141,fz_eyhzddztf\
jzs=:b142,fz_qytfj1_pl=:b143,fz_qytfj2_pl=:b144,fz_zftfjgl=:b145,bbxx_kyj1_yx\
sj=:b146,bbxx_kyj2_yxsj=:b147,bbxx_jcyxlc=:b148,bbxx_qynlljl=:b149,bbxx_zfhnl\
ljl=:b150,bbxx_dzzdnlljl=:b151,bbxx_dzsjljl=:b152,bbxx_qysjljl=:b153,bbxx_zfh\
sjljl=:b154,bbxx_dzzdsjljl=:b155,bbxx_wjrjbbh=:b156,bbxx_wjrjbbhry=:b157,bbxx\
_wg_gwm_rjbbh=:b158,bbxx_wg_gwm_rjbbh_ry=:b159";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1249;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)(data_3g->idx);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_3g->t_type_id);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_3g->loco_no);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_3g->ab);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_3g->btsj);
    sqlstm.sqhstl[4] = (unsigned long )21;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_3g->rksj);
    sqlstm.sqhstl[5] = (unsigned long )21;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)(data_3g->tcms_xtsj);
    sqlstm.sqhstl[6] = (unsigned long )21;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&(data_3g->tcms_ver);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_zhidong).zd_st5);
    sqlstm.sqhstl[8] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_zhidong).zd_zdsbwz);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_zhidong).zd_ddsbwz);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_zhidong).zd_zdjzdsj);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_zhidong).zd_st9);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_zhidong).zd_tfzd);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_zhidong).zd_zfgyl);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_zhidong).zd_jhfgyl);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_zhidong).zd_lcgyl);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_zhidong).zd_zdfg1yl);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_zhidong).zd_zdfg2yl);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_czd);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_fxsb);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_jcgk);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_xsqjm);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_st9);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_wrjt);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_st11);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_skqsbdw);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_cyjsczgl);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_zfgl);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_fzfdjgl);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_zfhgl);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_jcyxsd);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_jcqyl);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_jczdl);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_dqyl);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_hjwd);
    sqlstm.sqhstl[35] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_ryyl);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_ryyw);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_xdcdy);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_xdccddl);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_zfgyl);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_jhfgyl);
    sqlstm.sqhstl[41] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_lcgyl);
    sqlstm.sqhstl[42] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_zdfg1yl);
    sqlstm.sqhstl[43] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_zdfg2yl);
    sqlstm.sqhstl[44] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_cyjzs);
    sqlstm.sqhstl[45] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_basic).yx_jcyxlc);
    sqlstm.sqhstl[46] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_st5);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
    sqlstm.sqhstv[48] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_st6);
    sqlstm.sqhstl[48] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[48] = (         int  )0;
    sqlstm.sqindv[48] = (         short *)0;
    sqlstm.sqinds[48] = (         int  )0;
    sqlstm.sqharm[48] = (unsigned long )0;
    sqlstm.sqadto[48] = (unsigned short )0;
    sqlstm.sqtdso[48] = (unsigned short )0;
    sqlstm.sqhstv[49] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_st7);
    sqlstm.sqhstl[49] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[49] = (         int  )0;
    sqlstm.sqindv[49] = (         short *)0;
    sqlstm.sqinds[49] = (         int  )0;
    sqlstm.sqharm[49] = (unsigned long )0;
    sqlstm.sqadto[49] = (unsigned short )0;
    sqlstm.sqtdso[49] = (unsigned short )0;
    sqlstm.sqhstv[50] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_st8);
    sqlstm.sqhstl[50] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[50] = (         int  )0;
    sqlstm.sqindv[50] = (         short *)0;
    sqlstm.sqinds[50] = (         int  )0;
    sqlstm.sqharm[50] = (unsigned long )0;
    sqlstm.sqadto[50] = (unsigned short )0;
    sqlstm.sqtdso[50] = (unsigned short )0;
    sqlstm.sqhstv[51] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_zs);
    sqlstm.sqhstl[51] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[51] = (         int  )0;
    sqlstm.sqindv[51] = (         short *)0;
    sqlstm.sqinds[51] = (         int  )0;
    sqlstm.sqharm[51] = (unsigned long )0;
    sqlstm.sqadto[51] = (unsigned short )0;
    sqlstm.sqtdso[51] = (unsigned short )0;
    sqlstm.sqhstv[52] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_qzxyl1);
    sqlstm.sqhstl[52] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[52] = (         int  )0;
    sqlstm.sqindv[52] = (         short *)0;
    sqlstm.sqinds[52] = (         int  )0;
    sqlstm.sqharm[52] = (unsigned long )0;
    sqlstm.sqadto[52] = (unsigned short )0;
    sqlstm.sqtdso[52] = (unsigned short )0;
    sqlstm.sqhstv[53] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_qzxyl2);
    sqlstm.sqhstl[53] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[53] = (         int  )0;
    sqlstm.sqindv[53] = (         short *)0;
    sqlstm.sqinds[53] = (         int  )0;
    sqlstm.sqharm[53] = (unsigned long )0;
    sqlstm.sqadto[53] = (unsigned short )0;
    sqlstm.sqtdso[53] = (unsigned short )0;
    sqlstm.sqhstv[54] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_kqxwyxly1);
    sqlstm.sqhstl[54] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[54] = (         int  )0;
    sqlstm.sqindv[54] = (         short *)0;
    sqlstm.sqinds[54] = (         int  )0;
    sqlstm.sqharm[54] = (unsigned long )0;
    sqlstm.sqadto[54] = (unsigned short )0;
    sqlstm.sqtdso[54] = (unsigned short )0;
    sqlstm.sqhstv[55] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_kqxwyxly2);
    sqlstm.sqhstl[55] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[55] = (         int  )0;
    sqlstm.sqindv[55] = (         short *)0;
    sqlstm.sqinds[55] = (         int  )0;
    sqlstm.sqharm[55] = (unsigned long )0;
    sqlstm.sqadto[55] = (unsigned short )0;
    sqlstm.sqtdso[55] = (unsigned short )0;
    sqlstm.sqhstv[56] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_rkkqwd);
    sqlstm.sqhstl[56] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[56] = (         int  )0;
    sqlstm.sqindv[56] = (         short *)0;
    sqlstm.sqinds[56] = (         int  )0;
    sqlstm.sqharm[56] = (unsigned long )0;
    sqlstm.sqadto[56] = (unsigned short )0;
    sqlstm.sqtdso[56] = (unsigned short )0;
    sqlstm.sqhstv[57] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_kqxkqwd1);
    sqlstm.sqhstl[57] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[57] = (         int  )0;
    sqlstm.sqindv[57] = (         short *)0;
    sqlstm.sqinds[57] = (         int  )0;
    sqlstm.sqharm[57] = (unsigned long )0;
    sqlstm.sqadto[57] = (unsigned short )0;
    sqlstm.sqtdso[57] = (unsigned short )0;
    sqlstm.sqhstv[58] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_kqxkqwd2);
    sqlstm.sqhstl[58] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[58] = (         int  )0;
    sqlstm.sqindv[58] = (         short *)0;
    sqlstm.sqinds[58] = (         int  )0;
    sqlstm.sqharm[58] = (unsigned long )0;
    sqlstm.sqadto[58] = (unsigned short )0;
    sqlstm.sqtdso[58] = (unsigned short )0;
    sqlstm.sqhstv[59] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_zyqjyjkyl1);
    sqlstm.sqhstl[59] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[59] = (         int  )0;
    sqlstm.sqindv[59] = (         short *)0;
    sqlstm.sqinds[59] = (         int  )0;
    sqlstm.sqharm[59] = (unsigned long )0;
    sqlstm.sqadto[59] = (unsigned short )0;
    sqlstm.sqtdso[59] = (unsigned short )0;
    sqlstm.sqhstv[60] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_zyqjyjkyl2);
    sqlstm.sqhstl[60] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[60] = (         int  )0;
    sqlstm.sqindv[60] = (         short *)0;
    sqlstm.sqinds[60] = (         int  )0;
    sqlstm.sqharm[60] = (unsigned long )0;
    sqlstm.sqadto[60] = (unsigned short )0;
    sqlstm.sqtdso[60] = (unsigned short )0;
    sqlstm.sqhstv[61] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_jkryyl);
    sqlstm.sqhstl[61] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[61] = (         int  )0;
    sqlstm.sqindv[61] = (         short *)0;
    sqlstm.sqinds[61] = (         int  )0;
    sqlstm.sqharm[61] = (unsigned long )0;
    sqlstm.sqadto[61] = (unsigned short )0;
    sqlstm.sqtdso[61] = (unsigned short )0;
    sqlstm.sqhstv[62] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_jyjkyl);
    sqlstm.sqhstl[62] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[62] = (         int  )0;
    sqlstm.sqindv[62] = (         short *)0;
    sqlstm.sqinds[62] = (         int  )0;
    sqlstm.sqharm[62] = (unsigned long )0;
    sqlstm.sqadto[62] = (unsigned short )0;
    sqlstm.sqtdso[62] = (unsigned short )0;
    sqlstm.sqhstv[63] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_jyjkwd);
    sqlstm.sqhstl[63] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[63] = (         int  )0;
    sqlstm.sqindv[63] = (         short *)0;
    sqlstm.sqinds[63] = (         int  )0;
    sqlstm.sqharm[63] = (unsigned long )0;
    sqlstm.sqadto[63] = (unsigned short )0;
    sqlstm.sqtdso[63] = (unsigned short )0;
    sqlstm.sqhstv[64] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_jyckwd);
    sqlstm.sqhstl[64] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[64] = (         int  )0;
    sqlstm.sqindv[64] = (         short *)0;
    sqlstm.sqinds[64] = (         int  )0;
    sqlstm.sqharm[64] = (unsigned long )0;
    sqlstm.sqadto[64] = (unsigned short )0;
    sqlstm.sqtdso[64] = (unsigned short )0;
    sqlstm.sqhstv[65] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_lqsckyl1);
    sqlstm.sqhstl[65] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[65] = (         int  )0;
    sqlstm.sqindv[65] = (         short *)0;
    sqlstm.sqinds[65] = (         int  )0;
    sqlstm.sqharm[65] = (unsigned long )0;
    sqlstm.sqadto[65] = (unsigned short )0;
    sqlstm.sqtdso[65] = (unsigned short )0;
    sqlstm.sqhstv[66] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_lqsckyl2);
    sqlstm.sqhstl[66] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[66] = (         int  )0;
    sqlstm.sqindv[66] = (         short *)0;
    sqlstm.sqinds[66] = (         int  )0;
    sqlstm.sqharm[66] = (unsigned long )0;
    sqlstm.sqadto[66] = (unsigned short )0;
    sqlstm.sqtdso[66] = (unsigned short )0;
    sqlstm.sqhstv[67] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_lqsjkyl1);
    sqlstm.sqhstl[67] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[67] = (         int  )0;
    sqlstm.sqindv[67] = (         short *)0;
    sqlstm.sqinds[67] = (         int  )0;
    sqlstm.sqharm[67] = (unsigned long )0;
    sqlstm.sqadto[67] = (unsigned short )0;
    sqlstm.sqtdso[67] = (unsigned short )0;
    sqlstm.sqhstv[68] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_lqsjkyl2);
    sqlstm.sqhstl[68] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[68] = (         int  )0;
    sqlstm.sqindv[68] = (         short *)0;
    sqlstm.sqinds[68] = (         int  )0;
    sqlstm.sqharm[68] = (unsigned long )0;
    sqlstm.sqadto[68] = (unsigned short )0;
    sqlstm.sqtdso[68] = (unsigned short )0;
    sqlstm.sqhstv[69] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_zlsbckyl);
    sqlstm.sqhstl[69] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[69] = (         int  )0;
    sqlstm.sqindv[69] = (         short *)0;
    sqlstm.sqinds[69] = (         int  )0;
    sqlstm.sqharm[69] = (unsigned long )0;
    sqlstm.sqadto[69] = (unsigned short )0;
    sqlstm.sqtdso[69] = (unsigned short )0;
    sqlstm.sqhstv[70] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_gwsbckyl);
    sqlstm.sqhstl[70] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[70] = (         int  )0;
    sqlstm.sqindv[70] = (         short *)0;
    sqlstm.sqinds[70] = (         int  )0;
    sqlstm.sqharm[70] = (unsigned long )0;
    sqlstm.sqadto[70] = (unsigned short )0;
    sqlstm.sqtdso[70] = (unsigned short )0;
    sqlstm.sqhstv[71] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_gwsjkwd);
    sqlstm.sqhstl[71] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[71] = (         int  )0;
    sqlstm.sqindv[71] = (         short *)0;
    sqlstm.sqinds[71] = (         int  )0;
    sqlstm.sqharm[71] = (unsigned long )0;
    sqlstm.sqadto[71] = (unsigned short )0;
    sqlstm.sqtdso[71] = (unsigned short )0;
    sqlstm.sqhstv[72] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_gwsckwd);
    sqlstm.sqhstl[72] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[72] = (         int  )0;
    sqlstm.sqindv[72] = (         short *)0;
    sqlstm.sqinds[72] = (         int  )0;
    sqlstm.sqharm[72] = (unsigned long )0;
    sqlstm.sqadto[72] = (unsigned short )0;
    sqlstm.sqtdso[72] = (unsigned short )0;
    sqlstm.sqhstv[73] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_zlsjkwd);
    sqlstm.sqhstl[73] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[73] = (         int  )0;
    sqlstm.sqindv[73] = (         short *)0;
    sqlstm.sqinds[73] = (         int  )0;
    sqlstm.sqharm[73] = (unsigned long )0;
    sqlstm.sqadto[73] = (unsigned short )0;
    sqlstm.sqtdso[73] = (unsigned short )0;
    sqlstm.sqhstv[74] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_zlsckwd);
    sqlstm.sqhstl[74] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[74] = (         int  )0;
    sqlstm.sqindv[74] = (         short *)0;
    sqlstm.sqinds[74] = (         int  )0;
    sqlstm.sqharm[74] = (unsigned long )0;
    sqlstm.sqadto[74] = (unsigned short )0;
    sqlstm.sqtdso[74] = (unsigned short )0;
    sqlstm.sqhstv[75] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_cyjfzfkxh);
    sqlstm.sqhstl[75] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[75] = (         int  )0;
    sqlstm.sqindv[75] = (         short *)0;
    sqlstm.sqinds[75] = (         int  )0;
    sqlstm.sqharm[75] = (unsigned long )0;
    sqlstm.sqadto[75] = (unsigned short )0;
    sqlstm.sqtdso[75] = (unsigned short )0;
    sqlstm.sqhstv[76] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_dbkzqgddy);
    sqlstm.sqhstl[76] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[76] = (         int  )0;
    sqlstm.sqindv[76] = (         short *)0;
    sqlstm.sqinds[76] = (         int  )0;
    sqlstm.sqharm[76] = (unsigned long )0;
    sqlstm.sqadto[76] = (unsigned short )0;
    sqlstm.sqtdso[76] = (unsigned short )0;
    sqlstm.sqhstv[77] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_desel).cyj_pyqddy);
    sqlstm.sqhstl[77] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[77] = (         int  )0;
    sqlstm.sqindv[77] = (         short *)0;
    sqlstm.sqinds[77] = (         int  )0;
    sqlstm.sqharm[77] = (unsigned long )0;
    sqlstm.sqadto[77] = (unsigned short )0;
    sqlstm.sqtdso[77] = (unsigned short )0;
    sqlstm.sqhstv[78] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_zf);
    sqlstm.sqhstl[78] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[78] = (         int  )0;
    sqlstm.sqindv[78] = (         short *)0;
    sqlstm.sqinds[78] = (         int  )0;
    sqlstm.sqharm[78] = (unsigned long )0;
    sqlstm.sqadto[78] = (unsigned short )0;
    sqlstm.sqtdso[78] = (unsigned short )0;
    sqlstm.sqhstv[79] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_gl);
    sqlstm.sqhstl[79] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[79] = (         int  )0;
    sqlstm.sqindv[79] = (         short *)0;
    sqlstm.sqinds[79] = (         int  )0;
    sqlstm.sqharm[79] = (unsigned long )0;
    sqlstm.sqadto[79] = (unsigned short )0;
    sqlstm.sqtdso[79] = (unsigned short )0;
    sqlstm.sqhstv[80] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_skqsbdw);
    sqlstm.sqhstl[80] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[80] = (         int  )0;
    sqlstm.sqindv[80] = (         short *)0;
    sqlstm.sqinds[80] = (         int  )0;
    sqlstm.sqharm[80] = (unsigned long )0;
    sqlstm.sqadto[80] = (unsigned short )0;
    sqlstm.sqtdso[80] = (unsigned short )0;
    sqlstm.sqhstv[81] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_zflcdl);
    sqlstm.sqhstl[81] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[81] = (         int  )0;
    sqlstm.sqindv[81] = (         short *)0;
    sqlstm.sqinds[81] = (         int  )0;
    sqlstm.sqharm[81] = (unsigned long )0;
    sqlstm.sqadto[81] = (unsigned short )0;
    sqlstm.sqtdso[81] = (unsigned short )0;
    sqlstm.sqhstv[82] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_zfdjdl);
    sqlstm.sqhstl[82] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[82] = (         int  )0;
    sqlstm.sqindv[82] = (         short *)0;
    sqlstm.sqinds[82] = (         int  )0;
    sqlstm.sqharm[82] = (unsigned long )0;
    sqlstm.sqadto[82] = (unsigned short )0;
    sqlstm.sqtdso[82] = (unsigned short )0;
    sqlstm.sqhstv[83] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_yjzjzlhldy);
    sqlstm.sqhstl[83] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[83] = (         int  )0;
    sqlstm.sqindv[83] = (         short *)0;
    sqlstm.sqinds[83] = (         int  )0;
    sqlstm.sqharm[83] = (unsigned long )0;
    sqlstm.sqadto[83] = (unsigned short )0;
    sqlstm.sqtdso[83] = (unsigned short )0;
    sqlstm.sqhstv[84] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_ejzjzlhldy);
    sqlstm.sqhstl[84] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[84] = (         int  )0;
    sqlstm.sqindv[84] = (         short *)0;
    sqlstm.sqinds[84] = (         int  )0;
    sqlstm.sqharm[84] = (unsigned long )0;
    sqlstm.sqadto[84] = (unsigned short )0;
    sqlstm.sqtdso[84] = (unsigned short )0;
    sqlstm.sqhstv[85] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_yjsdlj);
    sqlstm.sqhstl[85] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[85] = (         int  )0;
    sqlstm.sqindv[85] = (         short *)0;
    sqlstm.sqinds[85] = (         int  )0;
    sqlstm.sqharm[85] = (unsigned long )0;
    sqlstm.sqadto[85] = (unsigned short )0;
    sqlstm.sqtdso[85] = (unsigned short )0;
    sqlstm.sqhstv[86] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_ejsdlj);
    sqlstm.sqhstl[86] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[86] = (         int  )0;
    sqlstm.sqindv[86] = (         short *)0;
    sqlstm.sqinds[86] = (         int  )0;
    sqlstm.sqharm[86] = (unsigned long )0;
    sqlstm.sqadto[86] = (unsigned short )0;
    sqlstm.sqtdso[86] = (unsigned short )0;
    sqlstm.sqhstv[87] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_yjsjlj);
    sqlstm.sqhstl[87] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[87] = (         int  )0;
    sqlstm.sqindv[87] = (         short *)0;
    sqlstm.sqinds[87] = (         int  )0;
    sqlstm.sqharm[87] = (unsigned long )0;
    sqlstm.sqadto[87] = (unsigned short )0;
    sqlstm.sqtdso[87] = (unsigned short )0;
    sqlstm.sqhstv[88] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_ejsjlj);
    sqlstm.sqhstl[88] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[88] = (         int  )0;
    sqlstm.sqindv[88] = (         short *)0;
    sqlstm.sqinds[88] = (         int  )0;
    sqlstm.sqharm[88] = (unsigned long )0;
    sqlstm.sqadto[88] = (unsigned short )0;
    sqlstm.sqtdso[88] = (unsigned short )0;
    sqlstm.sqhstv[89] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj1_sdlj);
    sqlstm.sqhstl[89] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[89] = (         int  )0;
    sqlstm.sqindv[89] = (         short *)0;
    sqlstm.sqinds[89] = (         int  )0;
    sqlstm.sqharm[89] = (unsigned long )0;
    sqlstm.sqadto[89] = (unsigned short )0;
    sqlstm.sqtdso[89] = (unsigned short )0;
    sqlstm.sqhstv[90] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj2_sdlj);
    sqlstm.sqhstl[90] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[90] = (         int  )0;
    sqlstm.sqindv[90] = (         short *)0;
    sqlstm.sqinds[90] = (         int  )0;
    sqlstm.sqharm[90] = (unsigned long )0;
    sqlstm.sqadto[90] = (unsigned short )0;
    sqlstm.sqtdso[90] = (unsigned short )0;
    sqlstm.sqhstv[91] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj3_sdlj);
    sqlstm.sqhstl[91] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[91] = (         int  )0;
    sqlstm.sqindv[91] = (         short *)0;
    sqlstm.sqinds[91] = (         int  )0;
    sqlstm.sqharm[91] = (unsigned long )0;
    sqlstm.sqadto[91] = (unsigned short )0;
    sqlstm.sqtdso[91] = (unsigned short )0;
    sqlstm.sqhstv[92] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj4_sdlj);
    sqlstm.sqhstl[92] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[92] = (         int  )0;
    sqlstm.sqindv[92] = (         short *)0;
    sqlstm.sqinds[92] = (         int  )0;
    sqlstm.sqharm[92] = (unsigned long )0;
    sqlstm.sqadto[92] = (unsigned short )0;
    sqlstm.sqtdso[92] = (unsigned short )0;
    sqlstm.sqhstv[93] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj5_sdlj);
    sqlstm.sqhstl[93] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[93] = (         int  )0;
    sqlstm.sqindv[93] = (         short *)0;
    sqlstm.sqinds[93] = (         int  )0;
    sqlstm.sqharm[93] = (unsigned long )0;
    sqlstm.sqadto[93] = (unsigned short )0;
    sqlstm.sqtdso[93] = (unsigned short )0;
    sqlstm.sqhstv[94] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj6_sdlj);
    sqlstm.sqhstl[94] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[94] = (         int  )0;
    sqlstm.sqindv[94] = (         short *)0;
    sqlstm.sqinds[94] = (         int  )0;
    sqlstm.sqharm[94] = (unsigned long )0;
    sqlstm.sqadto[94] = (unsigned short )0;
    sqlstm.sqtdso[94] = (unsigned short )0;
    sqlstm.sqhstv[95] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj1_sjlj);
    sqlstm.sqhstl[95] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[95] = (         int  )0;
    sqlstm.sqindv[95] = (         short *)0;
    sqlstm.sqinds[95] = (         int  )0;
    sqlstm.sqharm[95] = (unsigned long )0;
    sqlstm.sqadto[95] = (unsigned short )0;
    sqlstm.sqtdso[95] = (unsigned short )0;
    sqlstm.sqhstv[96] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj2_sjlj);
    sqlstm.sqhstl[96] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[96] = (         int  )0;
    sqlstm.sqindv[96] = (         short *)0;
    sqlstm.sqinds[96] = (         int  )0;
    sqlstm.sqharm[96] = (unsigned long )0;
    sqlstm.sqadto[96] = (unsigned short )0;
    sqlstm.sqtdso[96] = (unsigned short )0;
    sqlstm.sqhstv[97] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj3_sjlj);
    sqlstm.sqhstl[97] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[97] = (         int  )0;
    sqlstm.sqindv[97] = (         short *)0;
    sqlstm.sqinds[97] = (         int  )0;
    sqlstm.sqharm[97] = (unsigned long )0;
    sqlstm.sqadto[97] = (unsigned short )0;
    sqlstm.sqtdso[97] = (unsigned short )0;
    sqlstm.sqhstv[98] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj4_sjlj);
    sqlstm.sqhstl[98] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[98] = (         int  )0;
    sqlstm.sqindv[98] = (         short *)0;
    sqlstm.sqinds[98] = (         int  )0;
    sqlstm.sqharm[98] = (unsigned long )0;
    sqlstm.sqadto[98] = (unsigned short )0;
    sqlstm.sqtdso[98] = (unsigned short )0;
    sqlstm.sqhstv[99] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj5_sjlj);
    sqlstm.sqhstl[99] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[99] = (         int  )0;
    sqlstm.sqindv[99] = (         short *)0;
    sqlstm.sqinds[99] = (         int  )0;
    sqlstm.sqharm[99] = (unsigned long )0;
    sqlstm.sqadto[99] = (unsigned short )0;
    sqlstm.sqtdso[99] = (unsigned short )0;
    sqlstm.sqhstv[100] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj6_sjlj);
    sqlstm.sqhstl[100] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[100] = (         int  )0;
    sqlstm.sqindv[100] = (         short *)0;
    sqlstm.sqinds[100] = (         int  )0;
    sqlstm.sqharm[100] = (unsigned long )0;
    sqlstm.sqadto[100] = (unsigned short )0;
    sqlstm.sqtdso[100] = (unsigned short )0;
    sqlstm.sqhstv[101] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_yjdl);
    sqlstm.sqhstl[101] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[101] = (         int  )0;
    sqlstm.sqindv[101] = (         short *)0;
    sqlstm.sqinds[101] = (         int  )0;
    sqlstm.sqharm[101] = (unsigned long )0;
    sqlstm.sqadto[101] = (unsigned short )0;
    sqlstm.sqtdso[101] = (unsigned short )0;
    sqlstm.sqhstv[102] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_ejdl);
    sqlstm.sqhstl[102] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[102] = (         int  )0;
    sqlstm.sqindv[102] = (         short *)0;
    sqlstm.sqinds[102] = (         int  )0;
    sqlstm.sqharm[102] = (unsigned long )0;
    sqlstm.sqadto[102] = (unsigned short )0;
    sqlstm.sqtdso[102] = (unsigned short )0;
    sqlstm.sqhstv[103] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj1_dl);
    sqlstm.sqhstl[103] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[103] = (         int  )0;
    sqlstm.sqindv[103] = (         short *)0;
    sqlstm.sqinds[103] = (         int  )0;
    sqlstm.sqharm[103] = (unsigned long )0;
    sqlstm.sqadto[103] = (unsigned short )0;
    sqlstm.sqtdso[103] = (unsigned short )0;
    sqlstm.sqhstv[104] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj2_dl);
    sqlstm.sqhstl[104] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[104] = (         int  )0;
    sqlstm.sqindv[104] = (         short *)0;
    sqlstm.sqinds[104] = (         int  )0;
    sqlstm.sqharm[104] = (unsigned long )0;
    sqlstm.sqadto[104] = (unsigned short )0;
    sqlstm.sqtdso[104] = (unsigned short )0;
    sqlstm.sqhstv[105] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj3_dl);
    sqlstm.sqhstl[105] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[105] = (         int  )0;
    sqlstm.sqindv[105] = (         short *)0;
    sqlstm.sqinds[105] = (         int  )0;
    sqlstm.sqharm[105] = (unsigned long )0;
    sqlstm.sqadto[105] = (unsigned short )0;
    sqlstm.sqtdso[105] = (unsigned short )0;
    sqlstm.sqhstv[106] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj4_dl);
    sqlstm.sqhstl[106] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[106] = (         int  )0;
    sqlstm.sqindv[106] = (         short *)0;
    sqlstm.sqinds[106] = (         int  )0;
    sqlstm.sqharm[106] = (unsigned long )0;
    sqlstm.sqadto[106] = (unsigned short )0;
    sqlstm.sqtdso[106] = (unsigned short )0;
    sqlstm.sqhstv[107] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj5_dl);
    sqlstm.sqhstl[107] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[107] = (         int  )0;
    sqlstm.sqindv[107] = (         short *)0;
    sqlstm.sqinds[107] = (         int  )0;
    sqlstm.sqharm[107] = (unsigned long )0;
    sqlstm.sqadto[107] = (unsigned short )0;
    sqlstm.sqtdso[107] = (unsigned short )0;
    sqlstm.sqhstv[108] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj6_dl);
    sqlstm.sqhstl[108] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[108] = (         int  )0;
    sqlstm.sqindv[108] = (         short *)0;
    sqlstm.sqinds[108] = (         int  )0;
    sqlstm.sqharm[108] = (unsigned long )0;
    sqlstm.sqadto[108] = (unsigned short )0;
    sqlstm.sqtdso[108] = (unsigned short )0;
    sqlstm.sqhstv[109] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj1_sjzs);
    sqlstm.sqhstl[109] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[109] = (         int  )0;
    sqlstm.sqindv[109] = (         short *)0;
    sqlstm.sqinds[109] = (         int  )0;
    sqlstm.sqharm[109] = (unsigned long )0;
    sqlstm.sqadto[109] = (unsigned short )0;
    sqlstm.sqtdso[109] = (unsigned short )0;
    sqlstm.sqhstv[110] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj2_sjzs);
    sqlstm.sqhstl[110] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[110] = (         int  )0;
    sqlstm.sqindv[110] = (         short *)0;
    sqlstm.sqinds[110] = (         int  )0;
    sqlstm.sqharm[110] = (unsigned long )0;
    sqlstm.sqadto[110] = (unsigned short )0;
    sqlstm.sqtdso[110] = (unsigned short )0;
    sqlstm.sqhstv[111] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj3_sjzs);
    sqlstm.sqhstl[111] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[111] = (         int  )0;
    sqlstm.sqindv[111] = (         short *)0;
    sqlstm.sqinds[111] = (         int  )0;
    sqlstm.sqharm[111] = (unsigned long )0;
    sqlstm.sqadto[111] = (unsigned short )0;
    sqlstm.sqtdso[111] = (unsigned short )0;
    sqlstm.sqhstv[112] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj4_sjzs);
    sqlstm.sqhstl[112] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[112] = (         int  )0;
    sqlstm.sqindv[112] = (         short *)0;
    sqlstm.sqinds[112] = (         int  )0;
    sqlstm.sqharm[112] = (unsigned long )0;
    sqlstm.sqadto[112] = (unsigned short )0;
    sqlstm.sqtdso[112] = (unsigned short )0;
    sqlstm.sqhstv[113] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj5_sjzs);
    sqlstm.sqhstl[113] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[113] = (         int  )0;
    sqlstm.sqindv[113] = (         short *)0;
    sqlstm.sqinds[113] = (         int  )0;
    sqlstm.sqharm[113] = (unsigned long )0;
    sqlstm.sqadto[113] = (unsigned short )0;
    sqlstm.sqtdso[113] = (unsigned short )0;
    sqlstm.sqhstv[114] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj6_sjzs);
    sqlstm.sqhstl[114] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[114] = (         int  )0;
    sqlstm.sqindv[114] = (         short *)0;
    sqlstm.sqinds[114] = (         int  )0;
    sqlstm.sqharm[114] = (unsigned long )0;
    sqlstm.sqadto[114] = (unsigned short )0;
    sqlstm.sqtdso[114] = (unsigned short )0;
    sqlstm.sqhstv[115] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj1_wd);
    sqlstm.sqhstl[115] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[115] = (         int  )0;
    sqlstm.sqindv[115] = (         short *)0;
    sqlstm.sqinds[115] = (         int  )0;
    sqlstm.sqharm[115] = (unsigned long )0;
    sqlstm.sqadto[115] = (unsigned short )0;
    sqlstm.sqtdso[115] = (unsigned short )0;
    sqlstm.sqhstv[116] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj2_wd);
    sqlstm.sqhstl[116] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[116] = (         int  )0;
    sqlstm.sqindv[116] = (         short *)0;
    sqlstm.sqinds[116] = (         int  )0;
    sqlstm.sqharm[116] = (unsigned long )0;
    sqlstm.sqadto[116] = (unsigned short )0;
    sqlstm.sqtdso[116] = (unsigned short )0;
    sqlstm.sqhstv[117] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj3_wd);
    sqlstm.sqhstl[117] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[117] = (         int  )0;
    sqlstm.sqindv[117] = (         short *)0;
    sqlstm.sqinds[117] = (         int  )0;
    sqlstm.sqharm[117] = (unsigned long )0;
    sqlstm.sqadto[117] = (unsigned short )0;
    sqlstm.sqtdso[117] = (unsigned short )0;
    sqlstm.sqhstv[118] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj4_wd);
    sqlstm.sqhstl[118] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[118] = (         int  )0;
    sqlstm.sqindv[118] = (         short *)0;
    sqlstm.sqinds[118] = (         int  )0;
    sqlstm.sqharm[118] = (unsigned long )0;
    sqlstm.sqadto[118] = (unsigned short )0;
    sqlstm.sqtdso[118] = (unsigned short )0;
    sqlstm.sqhstv[119] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj5_wd);
    sqlstm.sqhstl[119] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[119] = (         int  )0;
    sqlstm.sqindv[119] = (         short *)0;
    sqlstm.sqinds[119] = (         int  )0;
    sqlstm.sqharm[119] = (unsigned long )0;
    sqlstm.sqadto[119] = (unsigned short )0;
    sqlstm.sqtdso[119] = (unsigned short )0;
    sqlstm.sqhstv[120] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_dj6_wd);
    sqlstm.sqhstl[120] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[120] = (         int  )0;
    sqlstm.sqindv[120] = (         short *)0;
    sqlstm.sqinds[120] = (         int  )0;
    sqlstm.sqharm[120] = (unsigned long )0;
    sqlstm.sqadto[120] = (unsigned short )0;
    sqlstm.sqtdso[120] = (unsigned short )0;
    sqlstm.sqhstv[121] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_qianyin).qy_jdldl);
    sqlstm.sqhstl[121] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[121] = (         int  )0;
    sqlstm.sqindv[121] = (         short *)0;
    sqlstm.sqinds[121] = (         int  )0;
    sqlstm.sqharm[121] = (unsigned long )0;
    sqlstm.sqadto[121] = (unsigned short )0;
    sqlstm.sqtdso[121] = (unsigned short )0;
    sqlstm.sqhstv[122] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_st5);
    sqlstm.sqhstl[122] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[122] = (         int  )0;
    sqlstm.sqindv[122] = (         short *)0;
    sqlstm.sqinds[122] = (         int  )0;
    sqlstm.sqharm[122] = (unsigned long )0;
    sqlstm.sqadto[122] = (unsigned short )0;
    sqlstm.sqtdso[122] = (unsigned short )0;
    sqlstm.sqhstv[123] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_ffdjdy);
    sqlstm.sqhstl[123] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[123] = (         int  )0;
    sqlstm.sqindv[123] = (         short *)0;
    sqlstm.sqinds[123] = (         int  )0;
    sqlstm.sqharm[123] = (unsigned long )0;
    sqlstm.sqadto[123] = (unsigned short )0;
    sqlstm.sqtdso[123] = (unsigned short )0;
    sqlstm.sqhstv[124] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_kyj1_bpqscpl);
    sqlstm.sqhstl[124] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[124] = (         int  )0;
    sqlstm.sqindv[124] = (         short *)0;
    sqlstm.sqinds[124] = (         int  )0;
    sqlstm.sqharm[124] = (unsigned long )0;
    sqlstm.sqadto[124] = (unsigned short )0;
    sqlstm.sqtdso[124] = (unsigned short )0;
    sqlstm.sqhstv[125] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_kyj1_bpqscyl);
    sqlstm.sqhstl[125] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[125] = (         int  )0;
    sqlstm.sqindv[125] = (         short *)0;
    sqlstm.sqinds[125] = (         int  )0;
    sqlstm.sqharm[125] = (unsigned long )0;
    sqlstm.sqadto[125] = (unsigned short )0;
    sqlstm.sqtdso[125] = (unsigned short )0;
    sqlstm.sqhstv[126] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_kyj2_bpqscpl);
    sqlstm.sqhstl[126] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[126] = (         int  )0;
    sqlstm.sqindv[126] = (         short *)0;
    sqlstm.sqinds[126] = (         int  )0;
    sqlstm.sqharm[126] = (unsigned long )0;
    sqlstm.sqadto[126] = (unsigned short )0;
    sqlstm.sqtdso[126] = (unsigned short )0;
    sqlstm.sqhstv[127] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_kyj2_bpqscdy);
    sqlstm.sqhstl[127] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[127] = (         int  )0;
    sqlstm.sqindv[127] = (         short *)0;
    sqlstm.sqinds[127] = (         int  )0;
    sqlstm.sqharm[127] = (unsigned long )0;
    sqlstm.sqadto[127] = (unsigned short )0;
    sqlstm.sqtdso[127] = (unsigned short )0;
    sqlstm.sqhstv[128] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_lqfs1_bpqscpl);
    sqlstm.sqhstl[128] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[128] = (         int  )0;
    sqlstm.sqindv[128] = (         short *)0;
    sqlstm.sqinds[128] = (         int  )0;
    sqlstm.sqharm[128] = (unsigned long )0;
    sqlstm.sqadto[128] = (unsigned short )0;
    sqlstm.sqtdso[128] = (unsigned short )0;
    sqlstm.sqhstv[129] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_lqfs1_bpqscdy);
    sqlstm.sqhstl[129] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[129] = (         int  )0;
    sqlstm.sqindv[129] = (         short *)0;
    sqlstm.sqinds[129] = (         int  )0;
    sqlstm.sqharm[129] = (unsigned long )0;
    sqlstm.sqadto[129] = (unsigned short )0;
    sqlstm.sqtdso[129] = (unsigned short )0;
    sqlstm.sqhstv[130] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_lqfs2_bpqscpl);
    sqlstm.sqhstl[130] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[130] = (         int  )0;
    sqlstm.sqindv[130] = (         short *)0;
    sqlstm.sqinds[130] = (         int  )0;
    sqlstm.sqharm[130] = (unsigned long )0;
    sqlstm.sqadto[130] = (unsigned short )0;
    sqlstm.sqtdso[130] = (unsigned short )0;
    sqlstm.sqhstv[131] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_lqfs2_bpqscdy);
    sqlstm.sqhstl[131] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[131] = (         int  )0;
    sqlstm.sqindv[131] = (         short *)0;
    sqlstm.sqinds[131] = (         int  )0;
    sqlstm.sqharm[131] = (unsigned long )0;
    sqlstm.sqadto[131] = (unsigned short )0;
    sqlstm.sqtdso[131] = (unsigned short )0;
    sqlstm.sqhstv[132] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_qytfjbpqscpl);
    sqlstm.sqhstl[132] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[132] = (         int  )0;
    sqlstm.sqindv[132] = (         short *)0;
    sqlstm.sqinds[132] = (         int  )0;
    sqlstm.sqharm[132] = (unsigned long )0;
    sqlstm.sqadto[132] = (unsigned short )0;
    sqlstm.sqtdso[132] = (unsigned short )0;
    sqlstm.sqhstv[133] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_qytfjbpqscxdy);
    sqlstm.sqhstl[133] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[133] = (         int  )0;
    sqlstm.sqindv[133] = (         short *)0;
    sqlstm.sqinds[133] = (         int  )0;
    sqlstm.sqharm[133] = (unsigned long )0;
    sqlstm.sqadto[133] = (unsigned short )0;
    sqlstm.sqtdso[133] = (unsigned short )0;
    sqlstm.sqhstv[134] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_lg1_scdy);
    sqlstm.sqhstl[134] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[134] = (         int  )0;
    sqlstm.sqindv[134] = (         short *)0;
    sqlstm.sqinds[134] = (         int  )0;
    sqlstm.sqharm[134] = (unsigned long )0;
    sqlstm.sqadto[134] = (unsigned short )0;
    sqlstm.sqtdso[134] = (unsigned short )0;
    sqlstm.sqhstv[135] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_lg1_scdl);
    sqlstm.sqhstl[135] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[135] = (         int  )0;
    sqlstm.sqindv[135] = (         short *)0;
    sqlstm.sqinds[135] = (         int  )0;
    sqlstm.sqharm[135] = (unsigned long )0;
    sqlstm.sqadto[135] = (unsigned short )0;
    sqlstm.sqtdso[135] = (unsigned short )0;
    sqlstm.sqhstv[136] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_lg2_scdy);
    sqlstm.sqhstl[136] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[136] = (         int  )0;
    sqlstm.sqindv[136] = (         short *)0;
    sqlstm.sqinds[136] = (         int  )0;
    sqlstm.sqharm[136] = (unsigned long )0;
    sqlstm.sqadto[136] = (unsigned short )0;
    sqlstm.sqtdso[136] = (unsigned short )0;
    sqlstm.sqhstv[137] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_lg2_scdl);
    sqlstm.sqhstl[137] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[137] = (         int  )0;
    sqlstm.sqindv[137] = (         short *)0;
    sqlstm.sqinds[137] = (         int  )0;
    sqlstm.sqharm[137] = (unsigned long )0;
    sqlstm.sqadto[137] = (unsigned short )0;
    sqlstm.sqtdso[137] = (unsigned short )0;
    sqlstm.sqhstv[138] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_lqfs1_pl);
    sqlstm.sqhstl[138] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[138] = (         int  )0;
    sqlstm.sqindv[138] = (         short *)0;
    sqlstm.sqinds[138] = (         int  )0;
    sqlstm.sqharm[138] = (unsigned long )0;
    sqlstm.sqadto[138] = (unsigned short )0;
    sqlstm.sqtdso[138] = (unsigned short )0;
    sqlstm.sqhstv[139] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_lqfs2_pl);
    sqlstm.sqhstl[139] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[139] = (         int  )0;
    sqlstm.sqindv[139] = (         short *)0;
    sqlstm.sqinds[139] = (         int  )0;
    sqlstm.sqharm[139] = (unsigned long )0;
    sqlstm.sqadto[139] = (unsigned short )0;
    sqlstm.sqtdso[139] = (unsigned short )0;
    sqlstm.sqhstv[140] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_lqfs3_pl);
    sqlstm.sqhstl[140] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[140] = (         int  )0;
    sqlstm.sqindv[140] = (         short *)0;
    sqlstm.sqinds[140] = (         int  )0;
    sqlstm.sqharm[140] = (unsigned long )0;
    sqlstm.sqadto[140] = (unsigned short )0;
    sqlstm.sqtdso[140] = (unsigned short )0;
    sqlstm.sqhstv[141] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_yhzddztfjzs);
    sqlstm.sqhstl[141] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[141] = (         int  )0;
    sqlstm.sqindv[141] = (         short *)0;
    sqlstm.sqinds[141] = (         int  )0;
    sqlstm.sqharm[141] = (unsigned long )0;
    sqlstm.sqadto[141] = (unsigned short )0;
    sqlstm.sqtdso[141] = (unsigned short )0;
    sqlstm.sqhstv[142] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_eyhzddztfjzs);
    sqlstm.sqhstl[142] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[142] = (         int  )0;
    sqlstm.sqindv[142] = (         short *)0;
    sqlstm.sqinds[142] = (         int  )0;
    sqlstm.sqharm[142] = (unsigned long )0;
    sqlstm.sqadto[142] = (unsigned short )0;
    sqlstm.sqtdso[142] = (unsigned short )0;
    sqlstm.sqhstv[143] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_qytfj1_pl);
    sqlstm.sqhstl[143] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[143] = (         int  )0;
    sqlstm.sqindv[143] = (         short *)0;
    sqlstm.sqinds[143] = (         int  )0;
    sqlstm.sqharm[143] = (unsigned long )0;
    sqlstm.sqadto[143] = (unsigned short )0;
    sqlstm.sqtdso[143] = (unsigned short )0;
    sqlstm.sqhstv[144] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_qytfj2_pl);
    sqlstm.sqhstl[144] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[144] = (         int  )0;
    sqlstm.sqindv[144] = (         short *)0;
    sqlstm.sqinds[144] = (         int  )0;
    sqlstm.sqharm[144] = (unsigned long )0;
    sqlstm.sqadto[144] = (unsigned short )0;
    sqlstm.sqtdso[144] = (unsigned short )0;
    sqlstm.sqhstv[145] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_fuzhu).fz_zftfjgl);
    sqlstm.sqhstl[145] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[145] = (         int  )0;
    sqlstm.sqindv[145] = (         short *)0;
    sqlstm.sqinds[145] = (         int  )0;
    sqlstm.sqharm[145] = (unsigned long )0;
    sqlstm.sqadto[145] = (unsigned short )0;
    sqlstm.sqtdso[145] = (unsigned short )0;
    sqlstm.sqhstv[146] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_ljlybbxx).bbxx_kyj1_yxsj);
    sqlstm.sqhstl[146] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[146] = (         int  )0;
    sqlstm.sqindv[146] = (         short *)0;
    sqlstm.sqinds[146] = (         int  )0;
    sqlstm.sqharm[146] = (unsigned long )0;
    sqlstm.sqadto[146] = (unsigned short )0;
    sqlstm.sqtdso[146] = (unsigned short )0;
    sqlstm.sqhstv[147] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_ljlybbxx).bbxx_kyj2_yxsj);
    sqlstm.sqhstl[147] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[147] = (         int  )0;
    sqlstm.sqindv[147] = (         short *)0;
    sqlstm.sqinds[147] = (         int  )0;
    sqlstm.sqharm[147] = (unsigned long )0;
    sqlstm.sqadto[147] = (unsigned short )0;
    sqlstm.sqtdso[147] = (unsigned short )0;
    sqlstm.sqhstv[148] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_ljlybbxx).bbxx_jcyxlc);
    sqlstm.sqhstl[148] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[148] = (         int  )0;
    sqlstm.sqindv[148] = (         short *)0;
    sqlstm.sqinds[148] = (         int  )0;
    sqlstm.sqharm[148] = (unsigned long )0;
    sqlstm.sqadto[148] = (unsigned short )0;
    sqlstm.sqtdso[148] = (unsigned short )0;
    sqlstm.sqhstv[149] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_ljlybbxx).bbxx_qynlljl);
    sqlstm.sqhstl[149] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[149] = (         int  )0;
    sqlstm.sqindv[149] = (         short *)0;
    sqlstm.sqinds[149] = (         int  )0;
    sqlstm.sqharm[149] = (unsigned long )0;
    sqlstm.sqadto[149] = (unsigned short )0;
    sqlstm.sqtdso[149] = (unsigned short )0;
    sqlstm.sqhstv[150] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_ljlybbxx).bbxx_zfhnlljl);
    sqlstm.sqhstl[150] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[150] = (         int  )0;
    sqlstm.sqindv[150] = (         short *)0;
    sqlstm.sqinds[150] = (         int  )0;
    sqlstm.sqharm[150] = (unsigned long )0;
    sqlstm.sqadto[150] = (unsigned short )0;
    sqlstm.sqtdso[150] = (unsigned short )0;
    sqlstm.sqhstv[151] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_ljlybbxx).bbxx_dzzdnlljl);
    sqlstm.sqhstl[151] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[151] = (         int  )0;
    sqlstm.sqindv[151] = (         short *)0;
    sqlstm.sqinds[151] = (         int  )0;
    sqlstm.sqharm[151] = (unsigned long )0;
    sqlstm.sqadto[151] = (unsigned short )0;
    sqlstm.sqtdso[151] = (unsigned short )0;
    sqlstm.sqhstv[152] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_ljlybbxx).bbxx_dzsjljl);
    sqlstm.sqhstl[152] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[152] = (         int  )0;
    sqlstm.sqindv[152] = (         short *)0;
    sqlstm.sqinds[152] = (         int  )0;
    sqlstm.sqharm[152] = (unsigned long )0;
    sqlstm.sqadto[152] = (unsigned short )0;
    sqlstm.sqtdso[152] = (unsigned short )0;
    sqlstm.sqhstv[153] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_ljlybbxx).bbxx_qysjljl);
    sqlstm.sqhstl[153] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[153] = (         int  )0;
    sqlstm.sqindv[153] = (         short *)0;
    sqlstm.sqinds[153] = (         int  )0;
    sqlstm.sqharm[153] = (unsigned long )0;
    sqlstm.sqadto[153] = (unsigned short )0;
    sqlstm.sqtdso[153] = (unsigned short )0;
    sqlstm.sqhstv[154] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_ljlybbxx).bbxx_zfhsjljl);
    sqlstm.sqhstl[154] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[154] = (         int  )0;
    sqlstm.sqindv[154] = (         short *)0;
    sqlstm.sqinds[154] = (         int  )0;
    sqlstm.sqharm[154] = (unsigned long )0;
    sqlstm.sqadto[154] = (unsigned short )0;
    sqlstm.sqtdso[154] = (unsigned short )0;
    sqlstm.sqhstv[155] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_ljlybbxx).bbxx_dzzdsjljl);
    sqlstm.sqhstl[155] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[155] = (         int  )0;
    sqlstm.sqindv[155] = (         short *)0;
    sqlstm.sqinds[155] = (         int  )0;
    sqlstm.sqharm[155] = (unsigned long )0;
    sqlstm.sqadto[155] = (unsigned short )0;
    sqlstm.sqtdso[155] = (unsigned short )0;
    sqlstm.sqhstv[156] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_ljlybbxx).bbxx_wjrjbbh);
    sqlstm.sqhstl[156] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[156] = (         int  )0;
    sqlstm.sqindv[156] = (         short *)0;
    sqlstm.sqinds[156] = (         int  )0;
    sqlstm.sqharm[156] = (unsigned long )0;
    sqlstm.sqadto[156] = (unsigned short )0;
    sqlstm.sqtdso[156] = (unsigned short )0;
    sqlstm.sqhstv[157] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_ljlybbxx).bbxx_wjrjbbhry);
    sqlstm.sqhstl[157] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[157] = (         int  )0;
    sqlstm.sqindv[157] = (         short *)0;
    sqlstm.sqinds[157] = (         int  )0;
    sqlstm.sqharm[157] = (unsigned long )0;
    sqlstm.sqadto[157] = (unsigned short )0;
    sqlstm.sqtdso[157] = (unsigned short )0;
    sqlstm.sqhstv[158] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_ljlybbxx).bbxx_wg_gwm_rjbbh);
    sqlstm.sqhstl[158] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[158] = (         int  )0;
    sqlstm.sqindv[158] = (         short *)0;
    sqlstm.sqinds[158] = (         int  )0;
    sqlstm.sqharm[158] = (unsigned long )0;
    sqlstm.sqadto[158] = (unsigned short )0;
    sqlstm.sqtdso[158] = (unsigned short )0;
    sqlstm.sqhstv[159] = (unsigned char  *)&(((data_3g->str_tcms_nr_v20).str_ljlybbxx).bbxx_wg_gwm_rjbbh_ry);
    sqlstm.sqhstl[159] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[159] = (         int  )0;
    sqlstm.sqindv[159] = (         short *)0;
    sqlstm.sqinds[159] = (         int  )0;
    sqlstm.sqharm[159] = (unsigned long )0;
    sqlstm.sqadto[159] = (unsigned short )0;
    sqlstm.sqtdso[159] = (unsigned short )0;
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



    if (sqlca.sqlcode == 0)
    {
        //			memset(temp,0,1024);
        //			sprintf(temp,"loco.%s-%s:内燃机车V2.0 update success !!!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no ,sqlca.sqlcode);
		//			lprintf(disp.e,temp);
        //			lprintf(disp.v,temp);
        //			cclog('e',temp);

        return 0;
    }
    else
    {
        memset(temp,0,1024);
        sprintf(temp,"loco.%s-%s:内燃机车V2.0 update failed!!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no ,sqlca.sqlcode);
        lprintf(disp.e,temp);
        lprintf(disp.g,temp);
        cclog('e',temp);

        printf("loco.%s-%s:内燃机车V2.0 update failed!!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no ,sqlca.sqlcode);

        return 1;
    }
}



unsigned char update_ITF_TCMS_HXN3_V10()//TCMS 内燃机车1.0
{
    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

    /* EXEC SQL UPDATE AP_TCMS_HXN3_V10_LASTSTATUS SET 
               idx			= :data_3g->idx                 ,/oCHAR(32) not nullo/
               t_type_id	= :data_3g->t_type_id            ,/oCHAR(3) not nullo/
               loco_no		= :data_3g->loco_no              ,/oCHAR(4) not nullo/
               ab			= :data_3g->ab                   ,/oNUMBER(1) default 0 not nullo/
               btsj			= to_date(:data_3g->btsj ,'yyyy-mm-dd hh24:mi:ss'),
               rksj			= to_date(:data_3g->rksj ,'yyyy-mm-dd hh24:mi:ss'),
               xtsj	= to_date(:data_3g->tcms_xtsj ,'yyyy-mm-dd hh24:mi:ss'),
               ver		= :data_3g->tcms_ver               ,/oNUMBER(3)o/

               jb_ss		= :data_3g->str_tcms_v10.str_basic.jb_ss              ,/oNUMBER(1)o/
               jb_kzhx		= :data_3g->str_tcms_v10.str_basic.jb_kzhx            ,/oNUMBER(1)o/
               jb_zdh		= :data_3g->str_tcms_v10.str_basic.jb_zdh             ,/oNUMBER(1)o/
               jb_sdg		= :data_3g->str_tcms_v10.str_basic.jb_sdg             ,/oNUMBER(1)o/
               jb_czd		= :data_3g->str_tcms_v10.str_basic.jb_czd             ,/oNUMBER(1)o/
               jb_yxfx		= :data_3g->str_tcms_v10.str_basic.jb_yxfx            ,/oNUMBER(1)o/
               jb_gk		= :data_3g->str_tcms_v10.str_basic.jb_gk              ,/oNUMBER(1)o/
               jb_gfx		= :data_3g->str_tcms_v10.str_basic.jb_gfx             ,/oNUMBER(1)o/
               jb_sbjw		= :data_3g->str_tcms_v10.str_basic.jb_sbjw            ,/oNUMBER(6,1)o/
               jb_qyzdl_jh  = :data_3g->str_tcms_v10.str_basic.jb_qyzdl_jh        ,/oNUMBER(6,1)o/
               jb_qyzdl_sj  = :data_3g->str_tcms_v10.str_basic.jb_qyzdl_sj        ,/oNUMBER(6,1)o/
               jb_sdsdz		= :data_3g->str_tcms_v10.str_basic.jb_sdsdz           ,/oNUMBER(6,1)o/
               jb_sdsjz		= :data_3g->str_tcms_v10.str_basic.jb_sdsjz           ,/oNUMBER(6,1)o/
               jb_wyzfdy	= :data_3g->str_tcms_v10.str_basic.jb_wyzfdy          ,/oNUMBER(5)o/
               jb_wyzfdl	= :data_3g->str_tcms_v10.str_basic.jb_wyzfdl          ,/oNUMBER(5)o/
               jb_zfgyl		= :data_3g->str_tcms_v10.str_basic.jb_zfgyl           ,/oNUMBER(5)o/
               jb_lcgyl		= :data_3g->str_tcms_v10.str_basic.jb_lcgyl           ,/oNUMBER(5)o/
               jb_zdgyl		= :data_3g->str_tcms_v10.str_basic.jb_zdgyl           ,/oNUMBER(5)o/
               jb_jhfgyl	= :data_3g->str_tcms_v10.str_basic.jb_jhfgyl          ,/oNUMBER(5)o/
               jb_xdcyl		= :data_3g->str_tcms_v10.str_basic.jb_xdcyl           ,/oNUMBER(5,1)o/
               jb_cyjzs		= :data_3g->str_tcms_v10.str_basic.jb_cyjzs           ,/oNUMBER(5)o/
               jb_zlc		= :data_3g->str_tcms_v10.str_basic.jb_zlc             ,/oNUMBER(5)o/

               cyj_jcsd			= :data_3g->str_tcms_v10.str_desel.cyj_jcsd           ,/oNUMBER(5,1)o/
               cyj_hlqfjwd		= :data_3g->str_tcms_v10.str_desel.cyj_hlqfjwd        ,/oNUMBER(5)o/
               cyj_zcqzxyl		= :data_3g->str_tcms_v10.str_desel.cyj_zcqzxyl        ,/oNUMBER(5,2)o/
               cyj_ycqzxyl		= :data_3g->str_tcms_v10.str_desel.cyj_ycqzxyl        ,/oNUMBER(5,2)o/
               cyj_zcjfkkqyl	= :data_3g->str_tcms_v10.str_desel.cyj_zcjfkkqyl      ,/oNUMBER(5)o/
               cyj_ycjfkkqyl	= :data_3g->str_tcms_v10.str_desel.cyj_ycjfkkqyl      ,/oNUMBER(5)o/
               cyj_jfkkqwd		= :data_3g->str_tcms_v10.str_desel.cyj_jfkkqwd        ,/oNUMBER(5)o/
               cyj_zcjfkkqwd	= :data_3g->str_tcms_v10.str_desel.cyj_zcjfkkqwd      ,/oNUMBER(5)o/
               cyj_ycjfkkqwd	= :data_3g->str_tcms_v10.str_desel.cyj_ycjfkkqwd      ,/oNUMBER(5)o/
               cyj_kqjkwd		= :data_3g->str_tcms_v10.str_desel.cyj_kqjkwd         ,/oNUMBER(5)o/
               cyj_jywd			= :data_3g->str_tcms_v10.str_desel.cyj_jywd           ,/oNUMBER(5)o/
               cyj_jkryyl		= :data_3g->str_tcms_v10.str_desel.cyj_jkryyl         ,/oNUMBER(5)o/
               cyj_jyjkyl		= :data_3g->str_tcms_v10.str_desel.cyj_jyjkyl         ,/oNUMBER(5)o/
               cyj_zyq_zcjyjkyl = :data_3g->str_tcms_v10.str_desel.cyj_zyq_zcjyjkyl   ,/oNUMBER(5)o/
               cyj_zyq_ycjyjkyl = :data_3g->str_tcms_v10.str_desel.cyj_zyq_ycjyjkyl   ,/oNUMBER(5)o/
               cyj_jkjywd		= :data_3g->str_tcms_v10.str_desel.cyj_jkjywd         ,/oNUMBER(5)o/
               cyj_zclqsckyl	= :data_3g->str_tcms_v10.str_desel.cyj_zclqsckyl      ,/oNUMBER(5)o/
               cyj_yclqsckyl	= :data_3g->str_tcms_v10.str_desel.cyj_yclqsckyl      ,/oNUMBER(5)o/
               cyj_zclqsjkyl	= :data_3g->str_tcms_v10.str_desel.cyj_zclqsjkyl      ,/oNUMBER(5)o/
               cyj_yclqsjkyl	= :data_3g->str_tcms_v10.str_desel.cyj_yclqsjkyl      ,/oNUMBER(5)o/
               cyj_cksyl		= :data_3g->str_tcms_v10.str_desel.cyj_cksyl          ,/oNUMBER(5)o/
               cyj_dqyl			= :data_3g->str_tcms_v10.str_desel.cyj_dqyl           ,/oNUMBER(5,3)o/
               cyj_ryyl			= :data_3g->str_tcms_v10.str_desel.cyj_ryyl           ,/oNUMBER(5)o/
               cyj_ryyw			= :data_3g->str_tcms_v10.str_desel.cyj_ryyw           ,/oNUMBER(5)o/
               cyj_fzfkxh		= :data_3g->str_tcms_v10.str_desel.cyj_fzfkxh         ,/oNUMBER(5,3)o/
               cyj_zfglsc		= :data_3g->str_tcms_v10.str_desel.cyj_zfglsc         ,/oNUMBER(5)o/
               cyj_glsczs		= :data_3g->str_tcms_v10.str_desel.cyj_glsczs         ,/oNUMBER(9)o/
               cyj_qyl			= :data_3g->str_tcms_v10.str_desel.cyj_qyl            ,/oNUMBER(5)o/

               qy_sdsd  = :data_3g->str_tcms_v10.str_qianyin.qy_sdsd            ,/oNUMBER(6,1)o/
               qy_sjsd  = :data_3g->str_tcms_v10.str_qianyin.qy_sjsd            ,/oNUMBER(6,1)o/
               qy_fx	= :data_3g->str_tcms_v10.str_qianyin.qy_fx              ,/oNUMBER(3)o/
               qy_zgl	= :data_3g->str_tcms_v10.str_qianyin.qy_zgl             ,/oNUMBER(3)o/
               qy_qyzdlsdz_1bg1mt  = :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsdz_1bg1mt ,/oNUMBER(5,1)o/
               qy_qyzdlsdz_1bg2mt  = :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsdz_1bg2mt ,/oNUMBER(5,1)o/
               qy_qyzdlsdz_1bg3mt  = :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsdz_1bg3mt ,/oNUMBER(5,1)o/
               qy_qyzdlsdz_2bg1mt  = :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsdz_2bg1mt ,/oNUMBER(5,1)o/
               qy_qyzdlsdz_2bg2mt  = :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsdz_2bg2mt ,/oNUMBER(5,1)o/
               qy_qyzdlsdz_2bg3mt  = :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsdz_2bg3mt ,/oNUMBER(5,1)o/
               qy_sjsd_1bg1mt  = :data_3g->str_tcms_v10.str_qianyin.qy_sjsd_1bg1mt     ,/oNUMBER(5,1)o/
               qy_sjsd_1bg2mt  = :data_3g->str_tcms_v10.str_qianyin.qy_sjsd_1bg2mt     ,/oNUMBER(5,1)o/
               qy_sjsd_1bg3mt  = :data_3g->str_tcms_v10.str_qianyin.qy_sjsd_1bg3mt     ,/oNUMBER(5,1)o/
               qy_sjsd_2bg1mt  = :data_3g->str_tcms_v10.str_qianyin.qy_sjsd_2bg1mt     ,/oNUMBER(5,1)o/
               qy_sjsd_2bg2mt  = :data_3g->str_tcms_v10.str_qianyin.qy_sjsd_2bg2mt     ,/oNUMBER(5,1)o/
               qy_sjsd_2bg3mt  = :data_3g->str_tcms_v10.str_qianyin.qy_sjsd_2bg3mt     ,/oNUMBER(5,1)o/
               qy_fdjdy		   = :data_3g->str_tcms_v10.str_qianyin.qy_fdjdy           ,/oNUMBER(5)o/
               qy_fdjdl		   = :data_3g->str_tcms_v10.str_qianyin.qy_fdjdl           ,/oNUMBER(5)o/
               qy_qyblq1_zjdy  = :data_3g->str_tcms_v10.str_qianyin.qy_qyblq1_zjdy     ,/oNUMBER(5)o/
               qy_qyblq1_zjdl  = :data_3g->str_tcms_v10.str_qianyin.qy_qyblq1_zjdl     ,/oNUMBER(5)o/
               qy_qyblq2_zjdy  = :data_3g->str_tcms_v10.str_qianyin.qy_qyblq2_zjdy     ,/oNUMBER(5)o/
               qy_qyblq2_zjdl  = :data_3g->str_tcms_v10.str_qianyin.qy_qyblq2_zjdl     ,/oNUMBER(5)o/
               qy_qyblq1_lqsyl  = :data_3g->str_tcms_v10.str_qianyin.qy_qyblq1_lqsyl    ,/oNUMBER(5,2)o/
               qy_qyblq1_lqswd  = :data_3g->str_tcms_v10.str_qianyin.qy_qyblq1_lqswd    ,/oNUMBER(5)o/
               qy_qyblq2_lqsyl  = :data_3g->str_tcms_v10.str_qianyin.qy_qyblq2_lqsyl    ,/oNUMBER(5,2)o/
               qy_qyblq2_lqswd  = :data_3g->str_tcms_v10.str_qianyin.qy_qyblq2_lqswd    ,/oNUMBER(5)o/
               qy_qybyqyw1		= :data_3g->str_tcms_v10.str_qianyin.qy_qybyqyw1        ,/oNUMBER(5)o/
               qy_qybyqyw2		= :data_3g->str_tcms_v10.str_qianyin.qy_qybyqyw2        ,/oNUMBER(5)o/
               qy_qyzdlsjz_1bg1mt  = :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsjz_1bg1mt ,/oNUMBER(5,1)o/
               qy_qyzdlsjz_1bg2mt  = :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsjz_1bg2mt ,/oNUMBER(5,1)o/
               qy_qyzdlsjz_1bg3mt  = :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsjz_1bg3mt ,/oNUMBER(5,1)o/
               qy_qyzdlsjz_2bg1mt  = :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsjz_2bg1mt ,/oNUMBER(5,1)o/
               qy_qyzdlsjz_2bg2mt  = :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsjz_2bg2mt ,/oNUMBER(5,1)o/
               qy_qyzdlsjz_2bg3mt  = :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsjz_2bg3mt ,/oNUMBER(5,1)o/
               qy_djwd_1bg1mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djwd_1bg1mt     ,/oNUMBER(5)o/
               qy_djwd_1bg2mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djwd_1bg2mt     ,/oNUMBER(5)o/
               qy_djwd_1bg3mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djwd_1bg3mt     ,/oNUMBER(5)o/
               qy_djwd_2bg1mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djwd_2bg1mt     ,/oNUMBER(5)o/
               qy_djwd_2bg2mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djwd_2bg2mt     ,/oNUMBER(5)o/
               qy_djwd_2bg3mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djwd_2bg3mt     ,/oNUMBER(5)o/
               qy_djdl_1bg1mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djdl_1bg1mt     ,/oNUMBER(5)o/
               qy_djdl_1bg2mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djdl_1bg2mt     ,/oNUMBER(5)o/
               qy_djdl_1bg3mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djdl_1bg3mt     ,/oNUMBER(5)o/
               qy_djdl_2bg1mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djdl_2bg1mt     ,/oNUMBER(5)o/
               qy_djdl_2bg2mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djdl_2bg2mt     ,/oNUMBER(5)o/
               qy_djdl_2bg3mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djdl_2bg3mt     ,/oNUMBER(5)o/
               qy_djdy_1bg1mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djdy_1bg1mt     ,/oNUMBER(5)o/
               qy_djdy_1bg2mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djdy_1bg2mt     ,/oNUMBER(5)o/
               qy_djdy_1bg3mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djdy_1bg3mt     ,/oNUMBER(5)o/
               qy_djdy_2bg1mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djdy_2bg1mt     ,/oNUMBER(5)o/
               qy_djdy_2bg2mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djdy_2bg2mt     ,/oNUMBER(5)o/
               qy_djdy_2bg3mt  = :data_3g->str_tcms_v10.str_qianyin.qy_djdy_2bg3mt     ,/oNUMBER(5)o/
               qy_cdjcq		   = :data_3g->str_tcms_v10.str_qianyin.qy_cdjcq           ,/oNUMBER(3)o/
               qy_djjcq		   = :data_3g->str_tcms_v10.str_qianyin.qy_djjcq           ,/oNUMBER(3)o/
               qy_djgl		   = :data_3g->str_tcms_v10.str_qianyin.qy_djgl            ,/oNUMBER(3)o/
               qy_kz		   = :data_3g->str_tcms_v10.str_qianyin.qy_kz              ,/oNUMBER(3)o/

               fz_bppvsdz	   = :data_3g->str_tcms_v10.str_fuzhu.fz_bppvsdz         ,/oNUMBER(5)o/
               fz_dppvsdz	   = :data_3g->str_tcms_v10.str_fuzhu.fz_dppvsdz         ,/oNUMBER(5)o/
               fz_fb1zt		   = :data_3g->str_tcms_v10.str_fuzhu.fz_fb1zt           ,/oNUMBER(3)o/
               fz_fb2zt		   = :data_3g->str_tcms_v10.str_fuzhu.fz_fb2zt           ,/oNUMBER(3)o/
               fz_fb1_zlqsrdy  = :data_3g->str_tcms_v10.str_fuzhu.fz_fb1_zlqsrdy     ,/oNUMBER(5)o/
               fz_fb1_zlqsrdl  = :data_3g->str_tcms_v10.str_fuzhu.fz_fb1_zlqsrdl     ,/oNUMBER(5)o/
               fz_fb1_zjzldy   = :data_3g->str_tcms_v10.str_fuzhu.fz_fb1_zjzldy      ,/oNUMBER(5)o/
               fz_fb1_nbqscdy  = :data_3g->str_tcms_v10.str_fuzhu.fz_fb1_nbqscdy     ,/oNUMBER(5)o/
               fz_fb1_nbqscdl  = :data_3g->str_tcms_v10.str_fuzhu.fz_fb1_nbqscdl     ,/oNUMBER(5)o/
               fz_fb1_nbqscpl  = :data_3g->str_tcms_v10.str_fuzhu.fz_fb1_nbqscpl     ,/oNUMBER(5)o/
               fz_fb2_zlqsrdy  = :data_3g->str_tcms_v10.str_fuzhu.fz_fb2_zlqsrdy     ,/oNUMBER(5)o/
               fz_fb2_zlqsrdl  = :data_3g->str_tcms_v10.str_fuzhu.fz_fb2_zlqsrdl     ,/oNUMBER(5)o/
               fz_fb2_zjzldy   = :data_3g->str_tcms_v10.str_fuzhu.fz_fb2_zjzldy      ,/oNUMBER(5)o/
               fz_fb2_nbqscdy  = :data_3g->str_tcms_v10.str_fuzhu.fz_fb2_nbqscdy     ,/oNUMBER(5)o/
               fz_fb2_nbqscdl  = :data_3g->str_tcms_v10.str_fuzhu.fz_fb2_nbqscdl     ,/oNUMBER(5)o/
               fz_fb2_nbqscpl  = :data_3g->str_tcms_v10.str_fuzhu.fz_fb2_nbqscpl     ,/oNUMBER(5)o/

               zd_sdsd		= :data_3g->str_tcms_v10.str_zhidong.zd_sdsd            ,/oNUMBER(5,1)o/
               zd_sjsd		= :data_3g->str_tcms_v10.str_zhidong.zd_sjsd            ,/oNUMBER(5,1)o/
               zd_fxzd		= :data_3g->str_tcms_v10.str_zhidong.zd_fxzd            ,/oNUMBER(3)o/
               zd_abh		= :data_3g->str_tcms_v10.str_zhidong.zd_abh             ,/oNUMBER(3)o/
               zd_ibh		= :data_3g->str_tcms_v10.str_zhidong.zd_ibh             ,/oNUMBER(3)o/
               zd_zdqq		= :data_3g->str_tcms_v10.str_zhidong.zd_zdqq            ,/oNUMBER(3)o/
               zd_bcu		= :data_3g->str_tcms_v10.str_zhidong.zd_bcu             ,/oNUMBER(3)o/
               zd_dzdsdz	= :data_3g->str_tcms_v10.str_zhidong.zd_dzdsdz          ,/oNUMBER(5)o/
               zd_zfgyl		= :data_3g->str_tcms_v10.str_zhidong.zd_zfgyl           ,/oNUMBER(5)o/
               zd_jhfgyl	= :data_3g->str_tcms_v10.str_zhidong.zd_jhfgyl          ,/oNUMBER(5)o/
               zd_lcgyl		= :data_3g->str_tcms_v10.str_zhidong.zd_lcgyl           ,/oNUMBER(5)o/
               zd_zdfg1yl	= :data_3g->str_tcms_v10.str_zhidong.zd_zdfg1yl         ,/oNUMBER(5)o/
               zd_zdfg2yl	= :data_3g->str_tcms_v10.str_zhidong.zd_zdfg2yl         ,/oNUMBER(5)o/
               zd_zdjzt		= :data_3g->str_tcms_v10.str_zhidong.zd_zdjzt            /oNUMBER(5)o/; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlbuft((void **)0,
      "update AP_TCMS_HXN3_V10_LASTSTATUS  set idx=:b0,t_type_id=:b1,loco_no\
=:b2,ab=:b3,btsj=to_date(:b4,'yyyy-mm-dd hh24:mi:ss'),rksj=to_date(:b5,'yyyy\
-mm-dd hh24:mi:ss'),xtsj=to_date(:b6,'yyyy-mm-dd hh24:mi:ss'),ver=:b7,jb_ss=\
:b8,jb_kzhx=:b9,jb_zdh=:b10,jb_sdg=:b11,jb_czd=:b12,jb_yxfx=:b13,jb_gk=:b14,\
jb_gfx=:b15,jb_sbjw=:b16,jb_qyzdl_jh=:b17,jb_qyzdl_sj=:b18,jb_sdsdz=:b19,jb_\
sdsjz=:b20,jb_wyzfdy=:b21,jb_wyzfdl=:b22,jb_zfgyl=:b23,jb_lcgyl=:b24,jb_zdgy\
l=:b25,jb_jhfgyl=:b26,jb_xdcyl=:b27,jb_cyjzs=:b28,jb_zlc=:b29,cyj_jcsd=:b30,\
cyj_hlqfjwd=:b31,cyj_zcqzxyl=:b32,cyj_ycqzxyl=:b33,cyj_zcjfkkqyl=:b34,cyj_yc\
jfkkqyl=:b35,cyj_jfkkqwd=:b36,cyj_zcjfkkqwd=:b37,cyj_ycjfkkqwd=:b38,cyj_kqjk\
wd=:b39,cyj_jywd=:b40,cyj_jkryyl=:b41,cyj_jyjkyl=:b42,cyj_zyq_zcjyjkyl=:b43,\
cyj_zyq_ycjyjkyl=:b44,cyj_jkjywd=:b45,cyj_zclqsckyl=:b46,cyj_yclqsckyl=:b47,\
cyj_zclqsjkyl=:b48,cyj_yclqsjkyl=:b49,cyj_cksyl=:b50,cyj_dqyl=:b51,cyj_ryyl=\
:b52,cyj_ryyw=:b53,cyj_fzfkxh=:b54,cyj_zfglsc=:b55,cyj_glsczs=:b56,cyj_qyl=:\
b57,qy_sdsd=:b58,qy_sjsd=:b59,qy_fx=:b60,qy");
    sqlbuft((void **)0,
      "_zgl=:b61,qy_qyzdlsdz_1bg1mt=:b62,qy_qyzdlsdz_1bg2mt=:b63,qy_qyzdlsdz\
_1bg3mt=:b64,qy_qyzdlsdz_2bg1mt=:b65,qy_qyzdlsdz_2bg2mt=:b66,qy_qyzdlsdz_2bg\
3mt=:b67,qy_sjsd_1bg1mt=:b68,qy_sjsd_1bg2mt=:b69,qy_sjsd_1bg3mt=:b70,qy_sjsd\
_2bg1mt=:b71,qy_sjsd_2bg2mt=:b72,qy_sjsd_2bg3mt=:b73,qy_fdjdy=:b74,qy_fdjdl=\
:b75,qy_qyblq1_zjdy=:b76,qy_qyblq1_zjdl=:b77,qy_qyblq2_zjdy=:b78,qy_qyblq2_z\
jdl=:b79,qy_qyblq1_lqsyl=:b80,qy_qyblq1_lqswd=:b81,qy_qyblq2_lqsyl=:b82,qy_q\
yblq2_lqswd=:b83,qy_qybyqyw1=:b84,qy_qybyqyw2=:b85,qy_qyzdlsjz_1bg1mt=:b86,q\
y_qyzdlsjz_1bg2mt=:b87,qy_qyzdlsjz_1bg3mt=:b88,qy_qyzdlsjz_2bg1mt=:b89,qy_qy\
zdlsjz_2bg2mt=:b90,qy_qyzdlsjz_2bg3mt=:b91,qy_djwd_1bg1mt=:b92,qy_djwd_1bg2m\
t=:b93,qy_djwd_1bg3mt=:b94,qy_djwd_2bg1mt=:b95,qy_djwd_2bg2mt=:b96,qy_djwd_2\
bg3mt=:b97,qy_djdl_1bg1mt=:b98,qy_djdl_1bg2mt=:b99,qy_djdl_1bg3mt=:b100,qy_d\
jdl_2bg1mt=:b101,qy_djdl_2bg2mt=:b102,qy_djdl_2bg3mt=:b103,qy_djdy_1bg1mt=:b\
104,qy_djdy_1bg2mt=:b105,qy_djdy_1bg3mt=:b106,qy_djdy_2bg1mt=:b107,qy_djdy_2\
bg2mt=:b108,qy_djdy_2bg3mt=:b109,qy_cdjcq=:");
    sqlstm.stmt = "b110,qy_djjcq=:b111,qy_djgl=:b112,qy_kz=:b113,fz_bppvsdz\
=:b114,fz_dppvsdz=:b115,fz_fb1zt=:b116,fz_fb2zt=:b117,fz_fb1_zlqsrdy=:b118,fz\
_fb1_zlqsrdl=:b119,fz_fb1_zjzldy=:b120,fz_fb1_nbqscdy=:b121,fz_fb1_nbqscdl=:b\
122,fz_fb1_nbqscpl=:b123,fz_fb2_zlqsrdy=:b124,fz_fb2_zlqsrdl=:b125,fz_fb2_zjz\
ldy=:b126,fz_fb2_nbqscdy=:b127,fz_fb2_nbqscdl=:b128,fz_fb2_nbqscpl=:b129,zd_s\
dsd=:b130,zd_sjsd=:b131,zd_fxzd=:b132,zd_abh=:b133,zd_ibh=:b134,zd_zdqq=:b135\
,zd_bcu=:b136,zd_dzdsdz=:b137,zd_zfgyl=:b138,zd_jhfgyl=:b139,zd_lcgyl=:b140,z\
d_zdfg1yl=:b141,zd_zdfg2yl=:b142,zd_zdjzt=:b143";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1904;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)(data_3g->idx);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_3g->t_type_id);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_3g->loco_no);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_3g->ab);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_3g->btsj);
    sqlstm.sqhstl[4] = (unsigned long )21;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_3g->rksj);
    sqlstm.sqhstl[5] = (unsigned long )21;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)(data_3g->tcms_xtsj);
    sqlstm.sqhstl[6] = (unsigned long )21;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&(data_3g->tcms_ver);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_ss);
    sqlstm.sqhstl[8] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_kzhx);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_zdh);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_sdg);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_czd);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_yxfx);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_gk);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_gfx);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_sbjw);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_qyzdl_jh);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_qyzdl_sj);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_sdsdz);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_sdsjz);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_wyzfdy);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_wyzfdl);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_zfgyl);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_lcgyl);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_zdgyl);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_jhfgyl);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_xdcyl);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_cyjzs);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_zlc);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_jcsd);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_hlqfjwd);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_zcqzxyl);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_ycqzxyl);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_zcjfkkqyl);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_ycjfkkqyl);
    sqlstm.sqhstl[35] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_jfkkqwd);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_zcjfkkqwd);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_ycjfkkqwd);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_kqjkwd);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_jywd);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_jkryyl);
    sqlstm.sqhstl[41] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_jyjkyl);
    sqlstm.sqhstl[42] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_zyq_zcjyjkyl);
    sqlstm.sqhstl[43] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_zyq_ycjyjkyl);
    sqlstm.sqhstl[44] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_jkjywd);
    sqlstm.sqhstl[45] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_zclqsckyl);
    sqlstm.sqhstl[46] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_yclqsckyl);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
    sqlstm.sqhstv[48] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_zclqsjkyl);
    sqlstm.sqhstl[48] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[48] = (         int  )0;
    sqlstm.sqindv[48] = (         short *)0;
    sqlstm.sqinds[48] = (         int  )0;
    sqlstm.sqharm[48] = (unsigned long )0;
    sqlstm.sqadto[48] = (unsigned short )0;
    sqlstm.sqtdso[48] = (unsigned short )0;
    sqlstm.sqhstv[49] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_yclqsjkyl);
    sqlstm.sqhstl[49] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[49] = (         int  )0;
    sqlstm.sqindv[49] = (         short *)0;
    sqlstm.sqinds[49] = (         int  )0;
    sqlstm.sqharm[49] = (unsigned long )0;
    sqlstm.sqadto[49] = (unsigned short )0;
    sqlstm.sqtdso[49] = (unsigned short )0;
    sqlstm.sqhstv[50] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_cksyl);
    sqlstm.sqhstl[50] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[50] = (         int  )0;
    sqlstm.sqindv[50] = (         short *)0;
    sqlstm.sqinds[50] = (         int  )0;
    sqlstm.sqharm[50] = (unsigned long )0;
    sqlstm.sqadto[50] = (unsigned short )0;
    sqlstm.sqtdso[50] = (unsigned short )0;
    sqlstm.sqhstv[51] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_dqyl);
    sqlstm.sqhstl[51] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[51] = (         int  )0;
    sqlstm.sqindv[51] = (         short *)0;
    sqlstm.sqinds[51] = (         int  )0;
    sqlstm.sqharm[51] = (unsigned long )0;
    sqlstm.sqadto[51] = (unsigned short )0;
    sqlstm.sqtdso[51] = (unsigned short )0;
    sqlstm.sqhstv[52] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_ryyl);
    sqlstm.sqhstl[52] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[52] = (         int  )0;
    sqlstm.sqindv[52] = (         short *)0;
    sqlstm.sqinds[52] = (         int  )0;
    sqlstm.sqharm[52] = (unsigned long )0;
    sqlstm.sqadto[52] = (unsigned short )0;
    sqlstm.sqtdso[52] = (unsigned short )0;
    sqlstm.sqhstv[53] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_ryyw);
    sqlstm.sqhstl[53] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[53] = (         int  )0;
    sqlstm.sqindv[53] = (         short *)0;
    sqlstm.sqinds[53] = (         int  )0;
    sqlstm.sqharm[53] = (unsigned long )0;
    sqlstm.sqadto[53] = (unsigned short )0;
    sqlstm.sqtdso[53] = (unsigned short )0;
    sqlstm.sqhstv[54] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_fzfkxh);
    sqlstm.sqhstl[54] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[54] = (         int  )0;
    sqlstm.sqindv[54] = (         short *)0;
    sqlstm.sqinds[54] = (         int  )0;
    sqlstm.sqharm[54] = (unsigned long )0;
    sqlstm.sqadto[54] = (unsigned short )0;
    sqlstm.sqtdso[54] = (unsigned short )0;
    sqlstm.sqhstv[55] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_zfglsc);
    sqlstm.sqhstl[55] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[55] = (         int  )0;
    sqlstm.sqindv[55] = (         short *)0;
    sqlstm.sqinds[55] = (         int  )0;
    sqlstm.sqharm[55] = (unsigned long )0;
    sqlstm.sqadto[55] = (unsigned short )0;
    sqlstm.sqtdso[55] = (unsigned short )0;
    sqlstm.sqhstv[56] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_glsczs);
    sqlstm.sqhstl[56] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[56] = (         int  )0;
    sqlstm.sqindv[56] = (         short *)0;
    sqlstm.sqinds[56] = (         int  )0;
    sqlstm.sqharm[56] = (unsigned long )0;
    sqlstm.sqadto[56] = (unsigned short )0;
    sqlstm.sqtdso[56] = (unsigned short )0;
    sqlstm.sqhstv[57] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_desel).cyj_qyl);
    sqlstm.sqhstl[57] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[57] = (         int  )0;
    sqlstm.sqindv[57] = (         short *)0;
    sqlstm.sqinds[57] = (         int  )0;
    sqlstm.sqharm[57] = (unsigned long )0;
    sqlstm.sqadto[57] = (unsigned short )0;
    sqlstm.sqtdso[57] = (unsigned short )0;
    sqlstm.sqhstv[58] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sdsd);
    sqlstm.sqhstl[58] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[58] = (         int  )0;
    sqlstm.sqindv[58] = (         short *)0;
    sqlstm.sqinds[58] = (         int  )0;
    sqlstm.sqharm[58] = (unsigned long )0;
    sqlstm.sqadto[58] = (unsigned short )0;
    sqlstm.sqtdso[58] = (unsigned short )0;
    sqlstm.sqhstv[59] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sjsd);
    sqlstm.sqhstl[59] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[59] = (         int  )0;
    sqlstm.sqindv[59] = (         short *)0;
    sqlstm.sqinds[59] = (         int  )0;
    sqlstm.sqharm[59] = (unsigned long )0;
    sqlstm.sqadto[59] = (unsigned short )0;
    sqlstm.sqtdso[59] = (unsigned short )0;
    sqlstm.sqhstv[60] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_fx);
    sqlstm.sqhstl[60] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[60] = (         int  )0;
    sqlstm.sqindv[60] = (         short *)0;
    sqlstm.sqinds[60] = (         int  )0;
    sqlstm.sqharm[60] = (unsigned long )0;
    sqlstm.sqadto[60] = (unsigned short )0;
    sqlstm.sqtdso[60] = (unsigned short )0;
    sqlstm.sqhstv[61] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_zgl);
    sqlstm.sqhstl[61] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[61] = (         int  )0;
    sqlstm.sqindv[61] = (         short *)0;
    sqlstm.sqinds[61] = (         int  )0;
    sqlstm.sqharm[61] = (unsigned long )0;
    sqlstm.sqadto[61] = (unsigned short )0;
    sqlstm.sqtdso[61] = (unsigned short )0;
    sqlstm.sqhstv[62] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsdz_1bg1mt);
    sqlstm.sqhstl[62] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[62] = (         int  )0;
    sqlstm.sqindv[62] = (         short *)0;
    sqlstm.sqinds[62] = (         int  )0;
    sqlstm.sqharm[62] = (unsigned long )0;
    sqlstm.sqadto[62] = (unsigned short )0;
    sqlstm.sqtdso[62] = (unsigned short )0;
    sqlstm.sqhstv[63] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsdz_1bg2mt);
    sqlstm.sqhstl[63] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[63] = (         int  )0;
    sqlstm.sqindv[63] = (         short *)0;
    sqlstm.sqinds[63] = (         int  )0;
    sqlstm.sqharm[63] = (unsigned long )0;
    sqlstm.sqadto[63] = (unsigned short )0;
    sqlstm.sqtdso[63] = (unsigned short )0;
    sqlstm.sqhstv[64] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsdz_1bg3mt);
    sqlstm.sqhstl[64] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[64] = (         int  )0;
    sqlstm.sqindv[64] = (         short *)0;
    sqlstm.sqinds[64] = (         int  )0;
    sqlstm.sqharm[64] = (unsigned long )0;
    sqlstm.sqadto[64] = (unsigned short )0;
    sqlstm.sqtdso[64] = (unsigned short )0;
    sqlstm.sqhstv[65] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsdz_2bg1mt);
    sqlstm.sqhstl[65] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[65] = (         int  )0;
    sqlstm.sqindv[65] = (         short *)0;
    sqlstm.sqinds[65] = (         int  )0;
    sqlstm.sqharm[65] = (unsigned long )0;
    sqlstm.sqadto[65] = (unsigned short )0;
    sqlstm.sqtdso[65] = (unsigned short )0;
    sqlstm.sqhstv[66] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsdz_2bg2mt);
    sqlstm.sqhstl[66] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[66] = (         int  )0;
    sqlstm.sqindv[66] = (         short *)0;
    sqlstm.sqinds[66] = (         int  )0;
    sqlstm.sqharm[66] = (unsigned long )0;
    sqlstm.sqadto[66] = (unsigned short )0;
    sqlstm.sqtdso[66] = (unsigned short )0;
    sqlstm.sqhstv[67] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsdz_2bg3mt);
    sqlstm.sqhstl[67] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[67] = (         int  )0;
    sqlstm.sqindv[67] = (         short *)0;
    sqlstm.sqinds[67] = (         int  )0;
    sqlstm.sqharm[67] = (unsigned long )0;
    sqlstm.sqadto[67] = (unsigned short )0;
    sqlstm.sqtdso[67] = (unsigned short )0;
    sqlstm.sqhstv[68] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sjsd_1bg1mt);
    sqlstm.sqhstl[68] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[68] = (         int  )0;
    sqlstm.sqindv[68] = (         short *)0;
    sqlstm.sqinds[68] = (         int  )0;
    sqlstm.sqharm[68] = (unsigned long )0;
    sqlstm.sqadto[68] = (unsigned short )0;
    sqlstm.sqtdso[68] = (unsigned short )0;
    sqlstm.sqhstv[69] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sjsd_1bg2mt);
    sqlstm.sqhstl[69] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[69] = (         int  )0;
    sqlstm.sqindv[69] = (         short *)0;
    sqlstm.sqinds[69] = (         int  )0;
    sqlstm.sqharm[69] = (unsigned long )0;
    sqlstm.sqadto[69] = (unsigned short )0;
    sqlstm.sqtdso[69] = (unsigned short )0;
    sqlstm.sqhstv[70] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sjsd_1bg3mt);
    sqlstm.sqhstl[70] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[70] = (         int  )0;
    sqlstm.sqindv[70] = (         short *)0;
    sqlstm.sqinds[70] = (         int  )0;
    sqlstm.sqharm[70] = (unsigned long )0;
    sqlstm.sqadto[70] = (unsigned short )0;
    sqlstm.sqtdso[70] = (unsigned short )0;
    sqlstm.sqhstv[71] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sjsd_2bg1mt);
    sqlstm.sqhstl[71] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[71] = (         int  )0;
    sqlstm.sqindv[71] = (         short *)0;
    sqlstm.sqinds[71] = (         int  )0;
    sqlstm.sqharm[71] = (unsigned long )0;
    sqlstm.sqadto[71] = (unsigned short )0;
    sqlstm.sqtdso[71] = (unsigned short )0;
    sqlstm.sqhstv[72] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sjsd_2bg2mt);
    sqlstm.sqhstl[72] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[72] = (         int  )0;
    sqlstm.sqindv[72] = (         short *)0;
    sqlstm.sqinds[72] = (         int  )0;
    sqlstm.sqharm[72] = (unsigned long )0;
    sqlstm.sqadto[72] = (unsigned short )0;
    sqlstm.sqtdso[72] = (unsigned short )0;
    sqlstm.sqhstv[73] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sjsd_2bg3mt);
    sqlstm.sqhstl[73] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[73] = (         int  )0;
    sqlstm.sqindv[73] = (         short *)0;
    sqlstm.sqinds[73] = (         int  )0;
    sqlstm.sqharm[73] = (unsigned long )0;
    sqlstm.sqadto[73] = (unsigned short )0;
    sqlstm.sqtdso[73] = (unsigned short )0;
    sqlstm.sqhstv[74] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_fdjdy);
    sqlstm.sqhstl[74] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[74] = (         int  )0;
    sqlstm.sqindv[74] = (         short *)0;
    sqlstm.sqinds[74] = (         int  )0;
    sqlstm.sqharm[74] = (unsigned long )0;
    sqlstm.sqadto[74] = (unsigned short )0;
    sqlstm.sqtdso[74] = (unsigned short )0;
    sqlstm.sqhstv[75] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_fdjdl);
    sqlstm.sqhstl[75] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[75] = (         int  )0;
    sqlstm.sqindv[75] = (         short *)0;
    sqlstm.sqinds[75] = (         int  )0;
    sqlstm.sqharm[75] = (unsigned long )0;
    sqlstm.sqadto[75] = (unsigned short )0;
    sqlstm.sqtdso[75] = (unsigned short )0;
    sqlstm.sqhstv[76] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq1_zjdy);
    sqlstm.sqhstl[76] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[76] = (         int  )0;
    sqlstm.sqindv[76] = (         short *)0;
    sqlstm.sqinds[76] = (         int  )0;
    sqlstm.sqharm[76] = (unsigned long )0;
    sqlstm.sqadto[76] = (unsigned short )0;
    sqlstm.sqtdso[76] = (unsigned short )0;
    sqlstm.sqhstv[77] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq1_zjdl);
    sqlstm.sqhstl[77] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[77] = (         int  )0;
    sqlstm.sqindv[77] = (         short *)0;
    sqlstm.sqinds[77] = (         int  )0;
    sqlstm.sqharm[77] = (unsigned long )0;
    sqlstm.sqadto[77] = (unsigned short )0;
    sqlstm.sqtdso[77] = (unsigned short )0;
    sqlstm.sqhstv[78] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq2_zjdy);
    sqlstm.sqhstl[78] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[78] = (         int  )0;
    sqlstm.sqindv[78] = (         short *)0;
    sqlstm.sqinds[78] = (         int  )0;
    sqlstm.sqharm[78] = (unsigned long )0;
    sqlstm.sqadto[78] = (unsigned short )0;
    sqlstm.sqtdso[78] = (unsigned short )0;
    sqlstm.sqhstv[79] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq2_zjdl);
    sqlstm.sqhstl[79] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[79] = (         int  )0;
    sqlstm.sqindv[79] = (         short *)0;
    sqlstm.sqinds[79] = (         int  )0;
    sqlstm.sqharm[79] = (unsigned long )0;
    sqlstm.sqadto[79] = (unsigned short )0;
    sqlstm.sqtdso[79] = (unsigned short )0;
    sqlstm.sqhstv[80] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq1_lqsyl);
    sqlstm.sqhstl[80] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[80] = (         int  )0;
    sqlstm.sqindv[80] = (         short *)0;
    sqlstm.sqinds[80] = (         int  )0;
    sqlstm.sqharm[80] = (unsigned long )0;
    sqlstm.sqadto[80] = (unsigned short )0;
    sqlstm.sqtdso[80] = (unsigned short )0;
    sqlstm.sqhstv[81] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq1_lqswd);
    sqlstm.sqhstl[81] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[81] = (         int  )0;
    sqlstm.sqindv[81] = (         short *)0;
    sqlstm.sqinds[81] = (         int  )0;
    sqlstm.sqharm[81] = (unsigned long )0;
    sqlstm.sqadto[81] = (unsigned short )0;
    sqlstm.sqtdso[81] = (unsigned short )0;
    sqlstm.sqhstv[82] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq2_lqsyl);
    sqlstm.sqhstl[82] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[82] = (         int  )0;
    sqlstm.sqindv[82] = (         short *)0;
    sqlstm.sqinds[82] = (         int  )0;
    sqlstm.sqharm[82] = (unsigned long )0;
    sqlstm.sqadto[82] = (unsigned short )0;
    sqlstm.sqtdso[82] = (unsigned short )0;
    sqlstm.sqhstv[83] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq2_lqswd);
    sqlstm.sqhstl[83] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[83] = (         int  )0;
    sqlstm.sqindv[83] = (         short *)0;
    sqlstm.sqinds[83] = (         int  )0;
    sqlstm.sqharm[83] = (unsigned long )0;
    sqlstm.sqadto[83] = (unsigned short )0;
    sqlstm.sqtdso[83] = (unsigned short )0;
    sqlstm.sqhstv[84] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qybyqyw1);
    sqlstm.sqhstl[84] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[84] = (         int  )0;
    sqlstm.sqindv[84] = (         short *)0;
    sqlstm.sqinds[84] = (         int  )0;
    sqlstm.sqharm[84] = (unsigned long )0;
    sqlstm.sqadto[84] = (unsigned short )0;
    sqlstm.sqtdso[84] = (unsigned short )0;
    sqlstm.sqhstv[85] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qybyqyw2);
    sqlstm.sqhstl[85] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[85] = (         int  )0;
    sqlstm.sqindv[85] = (         short *)0;
    sqlstm.sqinds[85] = (         int  )0;
    sqlstm.sqharm[85] = (unsigned long )0;
    sqlstm.sqadto[85] = (unsigned short )0;
    sqlstm.sqtdso[85] = (unsigned short )0;
    sqlstm.sqhstv[86] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsjz_1bg1mt);
    sqlstm.sqhstl[86] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[86] = (         int  )0;
    sqlstm.sqindv[86] = (         short *)0;
    sqlstm.sqinds[86] = (         int  )0;
    sqlstm.sqharm[86] = (unsigned long )0;
    sqlstm.sqadto[86] = (unsigned short )0;
    sqlstm.sqtdso[86] = (unsigned short )0;
    sqlstm.sqhstv[87] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsjz_1bg2mt);
    sqlstm.sqhstl[87] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[87] = (         int  )0;
    sqlstm.sqindv[87] = (         short *)0;
    sqlstm.sqinds[87] = (         int  )0;
    sqlstm.sqharm[87] = (unsigned long )0;
    sqlstm.sqadto[87] = (unsigned short )0;
    sqlstm.sqtdso[87] = (unsigned short )0;
    sqlstm.sqhstv[88] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsjz_1bg3mt);
    sqlstm.sqhstl[88] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[88] = (         int  )0;
    sqlstm.sqindv[88] = (         short *)0;
    sqlstm.sqinds[88] = (         int  )0;
    sqlstm.sqharm[88] = (unsigned long )0;
    sqlstm.sqadto[88] = (unsigned short )0;
    sqlstm.sqtdso[88] = (unsigned short )0;
    sqlstm.sqhstv[89] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsjz_2bg1mt);
    sqlstm.sqhstl[89] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[89] = (         int  )0;
    sqlstm.sqindv[89] = (         short *)0;
    sqlstm.sqinds[89] = (         int  )0;
    sqlstm.sqharm[89] = (unsigned long )0;
    sqlstm.sqadto[89] = (unsigned short )0;
    sqlstm.sqtdso[89] = (unsigned short )0;
    sqlstm.sqhstv[90] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsjz_2bg2mt);
    sqlstm.sqhstl[90] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[90] = (         int  )0;
    sqlstm.sqindv[90] = (         short *)0;
    sqlstm.sqinds[90] = (         int  )0;
    sqlstm.sqharm[90] = (unsigned long )0;
    sqlstm.sqadto[90] = (unsigned short )0;
    sqlstm.sqtdso[90] = (unsigned short )0;
    sqlstm.sqhstv[91] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsjz_2bg3mt);
    sqlstm.sqhstl[91] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[91] = (         int  )0;
    sqlstm.sqindv[91] = (         short *)0;
    sqlstm.sqinds[91] = (         int  )0;
    sqlstm.sqharm[91] = (unsigned long )0;
    sqlstm.sqadto[91] = (unsigned short )0;
    sqlstm.sqtdso[91] = (unsigned short )0;
    sqlstm.sqhstv[92] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djwd_1bg1mt);
    sqlstm.sqhstl[92] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[92] = (         int  )0;
    sqlstm.sqindv[92] = (         short *)0;
    sqlstm.sqinds[92] = (         int  )0;
    sqlstm.sqharm[92] = (unsigned long )0;
    sqlstm.sqadto[92] = (unsigned short )0;
    sqlstm.sqtdso[92] = (unsigned short )0;
    sqlstm.sqhstv[93] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djwd_1bg2mt);
    sqlstm.sqhstl[93] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[93] = (         int  )0;
    sqlstm.sqindv[93] = (         short *)0;
    sqlstm.sqinds[93] = (         int  )0;
    sqlstm.sqharm[93] = (unsigned long )0;
    sqlstm.sqadto[93] = (unsigned short )0;
    sqlstm.sqtdso[93] = (unsigned short )0;
    sqlstm.sqhstv[94] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djwd_1bg3mt);
    sqlstm.sqhstl[94] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[94] = (         int  )0;
    sqlstm.sqindv[94] = (         short *)0;
    sqlstm.sqinds[94] = (         int  )0;
    sqlstm.sqharm[94] = (unsigned long )0;
    sqlstm.sqadto[94] = (unsigned short )0;
    sqlstm.sqtdso[94] = (unsigned short )0;
    sqlstm.sqhstv[95] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djwd_2bg1mt);
    sqlstm.sqhstl[95] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[95] = (         int  )0;
    sqlstm.sqindv[95] = (         short *)0;
    sqlstm.sqinds[95] = (         int  )0;
    sqlstm.sqharm[95] = (unsigned long )0;
    sqlstm.sqadto[95] = (unsigned short )0;
    sqlstm.sqtdso[95] = (unsigned short )0;
    sqlstm.sqhstv[96] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djwd_2bg2mt);
    sqlstm.sqhstl[96] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[96] = (         int  )0;
    sqlstm.sqindv[96] = (         short *)0;
    sqlstm.sqinds[96] = (         int  )0;
    sqlstm.sqharm[96] = (unsigned long )0;
    sqlstm.sqadto[96] = (unsigned short )0;
    sqlstm.sqtdso[96] = (unsigned short )0;
    sqlstm.sqhstv[97] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djwd_2bg3mt);
    sqlstm.sqhstl[97] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[97] = (         int  )0;
    sqlstm.sqindv[97] = (         short *)0;
    sqlstm.sqinds[97] = (         int  )0;
    sqlstm.sqharm[97] = (unsigned long )0;
    sqlstm.sqadto[97] = (unsigned short )0;
    sqlstm.sqtdso[97] = (unsigned short )0;
    sqlstm.sqhstv[98] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdl_1bg1mt);
    sqlstm.sqhstl[98] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[98] = (         int  )0;
    sqlstm.sqindv[98] = (         short *)0;
    sqlstm.sqinds[98] = (         int  )0;
    sqlstm.sqharm[98] = (unsigned long )0;
    sqlstm.sqadto[98] = (unsigned short )0;
    sqlstm.sqtdso[98] = (unsigned short )0;
    sqlstm.sqhstv[99] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdl_1bg2mt);
    sqlstm.sqhstl[99] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[99] = (         int  )0;
    sqlstm.sqindv[99] = (         short *)0;
    sqlstm.sqinds[99] = (         int  )0;
    sqlstm.sqharm[99] = (unsigned long )0;
    sqlstm.sqadto[99] = (unsigned short )0;
    sqlstm.sqtdso[99] = (unsigned short )0;
    sqlstm.sqhstv[100] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdl_1bg3mt);
    sqlstm.sqhstl[100] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[100] = (         int  )0;
    sqlstm.sqindv[100] = (         short *)0;
    sqlstm.sqinds[100] = (         int  )0;
    sqlstm.sqharm[100] = (unsigned long )0;
    sqlstm.sqadto[100] = (unsigned short )0;
    sqlstm.sqtdso[100] = (unsigned short )0;
    sqlstm.sqhstv[101] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdl_2bg1mt);
    sqlstm.sqhstl[101] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[101] = (         int  )0;
    sqlstm.sqindv[101] = (         short *)0;
    sqlstm.sqinds[101] = (         int  )0;
    sqlstm.sqharm[101] = (unsigned long )0;
    sqlstm.sqadto[101] = (unsigned short )0;
    sqlstm.sqtdso[101] = (unsigned short )0;
    sqlstm.sqhstv[102] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdl_2bg2mt);
    sqlstm.sqhstl[102] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[102] = (         int  )0;
    sqlstm.sqindv[102] = (         short *)0;
    sqlstm.sqinds[102] = (         int  )0;
    sqlstm.sqharm[102] = (unsigned long )0;
    sqlstm.sqadto[102] = (unsigned short )0;
    sqlstm.sqtdso[102] = (unsigned short )0;
    sqlstm.sqhstv[103] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdl_2bg3mt);
    sqlstm.sqhstl[103] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[103] = (         int  )0;
    sqlstm.sqindv[103] = (         short *)0;
    sqlstm.sqinds[103] = (         int  )0;
    sqlstm.sqharm[103] = (unsigned long )0;
    sqlstm.sqadto[103] = (unsigned short )0;
    sqlstm.sqtdso[103] = (unsigned short )0;
    sqlstm.sqhstv[104] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdy_1bg1mt);
    sqlstm.sqhstl[104] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[104] = (         int  )0;
    sqlstm.sqindv[104] = (         short *)0;
    sqlstm.sqinds[104] = (         int  )0;
    sqlstm.sqharm[104] = (unsigned long )0;
    sqlstm.sqadto[104] = (unsigned short )0;
    sqlstm.sqtdso[104] = (unsigned short )0;
    sqlstm.sqhstv[105] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdy_1bg2mt);
    sqlstm.sqhstl[105] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[105] = (         int  )0;
    sqlstm.sqindv[105] = (         short *)0;
    sqlstm.sqinds[105] = (         int  )0;
    sqlstm.sqharm[105] = (unsigned long )0;
    sqlstm.sqadto[105] = (unsigned short )0;
    sqlstm.sqtdso[105] = (unsigned short )0;
    sqlstm.sqhstv[106] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdy_1bg3mt);
    sqlstm.sqhstl[106] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[106] = (         int  )0;
    sqlstm.sqindv[106] = (         short *)0;
    sqlstm.sqinds[106] = (         int  )0;
    sqlstm.sqharm[106] = (unsigned long )0;
    sqlstm.sqadto[106] = (unsigned short )0;
    sqlstm.sqtdso[106] = (unsigned short )0;
    sqlstm.sqhstv[107] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdy_2bg1mt);
    sqlstm.sqhstl[107] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[107] = (         int  )0;
    sqlstm.sqindv[107] = (         short *)0;
    sqlstm.sqinds[107] = (         int  )0;
    sqlstm.sqharm[107] = (unsigned long )0;
    sqlstm.sqadto[107] = (unsigned short )0;
    sqlstm.sqtdso[107] = (unsigned short )0;
    sqlstm.sqhstv[108] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdy_2bg2mt);
    sqlstm.sqhstl[108] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[108] = (         int  )0;
    sqlstm.sqindv[108] = (         short *)0;
    sqlstm.sqinds[108] = (         int  )0;
    sqlstm.sqharm[108] = (unsigned long )0;
    sqlstm.sqadto[108] = (unsigned short )0;
    sqlstm.sqtdso[108] = (unsigned short )0;
    sqlstm.sqhstv[109] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdy_2bg3mt);
    sqlstm.sqhstl[109] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[109] = (         int  )0;
    sqlstm.sqindv[109] = (         short *)0;
    sqlstm.sqinds[109] = (         int  )0;
    sqlstm.sqharm[109] = (unsigned long )0;
    sqlstm.sqadto[109] = (unsigned short )0;
    sqlstm.sqtdso[109] = (unsigned short )0;
    sqlstm.sqhstv[110] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_cdjcq);
    sqlstm.sqhstl[110] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[110] = (         int  )0;
    sqlstm.sqindv[110] = (         short *)0;
    sqlstm.sqinds[110] = (         int  )0;
    sqlstm.sqharm[110] = (unsigned long )0;
    sqlstm.sqadto[110] = (unsigned short )0;
    sqlstm.sqtdso[110] = (unsigned short )0;
    sqlstm.sqhstv[111] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djjcq);
    sqlstm.sqhstl[111] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[111] = (         int  )0;
    sqlstm.sqindv[111] = (         short *)0;
    sqlstm.sqinds[111] = (         int  )0;
    sqlstm.sqharm[111] = (unsigned long )0;
    sqlstm.sqadto[111] = (unsigned short )0;
    sqlstm.sqtdso[111] = (unsigned short )0;
    sqlstm.sqhstv[112] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djgl);
    sqlstm.sqhstl[112] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[112] = (         int  )0;
    sqlstm.sqindv[112] = (         short *)0;
    sqlstm.sqinds[112] = (         int  )0;
    sqlstm.sqharm[112] = (unsigned long )0;
    sqlstm.sqadto[112] = (unsigned short )0;
    sqlstm.sqtdso[112] = (unsigned short )0;
    sqlstm.sqhstv[113] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_kz);
    sqlstm.sqhstl[113] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[113] = (         int  )0;
    sqlstm.sqindv[113] = (         short *)0;
    sqlstm.sqinds[113] = (         int  )0;
    sqlstm.sqharm[113] = (unsigned long )0;
    sqlstm.sqadto[113] = (unsigned short )0;
    sqlstm.sqtdso[113] = (unsigned short )0;
    sqlstm.sqhstv[114] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_bppvsdz);
    sqlstm.sqhstl[114] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[114] = (         int  )0;
    sqlstm.sqindv[114] = (         short *)0;
    sqlstm.sqinds[114] = (         int  )0;
    sqlstm.sqharm[114] = (unsigned long )0;
    sqlstm.sqadto[114] = (unsigned short )0;
    sqlstm.sqtdso[114] = (unsigned short )0;
    sqlstm.sqhstv[115] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_dppvsdz);
    sqlstm.sqhstl[115] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[115] = (         int  )0;
    sqlstm.sqindv[115] = (         short *)0;
    sqlstm.sqinds[115] = (         int  )0;
    sqlstm.sqharm[115] = (unsigned long )0;
    sqlstm.sqadto[115] = (unsigned short )0;
    sqlstm.sqtdso[115] = (unsigned short )0;
    sqlstm.sqhstv[116] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb1zt);
    sqlstm.sqhstl[116] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[116] = (         int  )0;
    sqlstm.sqindv[116] = (         short *)0;
    sqlstm.sqinds[116] = (         int  )0;
    sqlstm.sqharm[116] = (unsigned long )0;
    sqlstm.sqadto[116] = (unsigned short )0;
    sqlstm.sqtdso[116] = (unsigned short )0;
    sqlstm.sqhstv[117] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb2zt);
    sqlstm.sqhstl[117] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[117] = (         int  )0;
    sqlstm.sqindv[117] = (         short *)0;
    sqlstm.sqinds[117] = (         int  )0;
    sqlstm.sqharm[117] = (unsigned long )0;
    sqlstm.sqadto[117] = (unsigned short )0;
    sqlstm.sqtdso[117] = (unsigned short )0;
    sqlstm.sqhstv[118] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb1_zlqsrdy);
    sqlstm.sqhstl[118] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[118] = (         int  )0;
    sqlstm.sqindv[118] = (         short *)0;
    sqlstm.sqinds[118] = (         int  )0;
    sqlstm.sqharm[118] = (unsigned long )0;
    sqlstm.sqadto[118] = (unsigned short )0;
    sqlstm.sqtdso[118] = (unsigned short )0;
    sqlstm.sqhstv[119] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb1_zlqsrdl);
    sqlstm.sqhstl[119] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[119] = (         int  )0;
    sqlstm.sqindv[119] = (         short *)0;
    sqlstm.sqinds[119] = (         int  )0;
    sqlstm.sqharm[119] = (unsigned long )0;
    sqlstm.sqadto[119] = (unsigned short )0;
    sqlstm.sqtdso[119] = (unsigned short )0;
    sqlstm.sqhstv[120] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb1_zjzldy);
    sqlstm.sqhstl[120] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[120] = (         int  )0;
    sqlstm.sqindv[120] = (         short *)0;
    sqlstm.sqinds[120] = (         int  )0;
    sqlstm.sqharm[120] = (unsigned long )0;
    sqlstm.sqadto[120] = (unsigned short )0;
    sqlstm.sqtdso[120] = (unsigned short )0;
    sqlstm.sqhstv[121] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb1_nbqscdy);
    sqlstm.sqhstl[121] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[121] = (         int  )0;
    sqlstm.sqindv[121] = (         short *)0;
    sqlstm.sqinds[121] = (         int  )0;
    sqlstm.sqharm[121] = (unsigned long )0;
    sqlstm.sqadto[121] = (unsigned short )0;
    sqlstm.sqtdso[121] = (unsigned short )0;
    sqlstm.sqhstv[122] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb1_nbqscdl);
    sqlstm.sqhstl[122] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[122] = (         int  )0;
    sqlstm.sqindv[122] = (         short *)0;
    sqlstm.sqinds[122] = (         int  )0;
    sqlstm.sqharm[122] = (unsigned long )0;
    sqlstm.sqadto[122] = (unsigned short )0;
    sqlstm.sqtdso[122] = (unsigned short )0;
    sqlstm.sqhstv[123] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb1_nbqscpl);
    sqlstm.sqhstl[123] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[123] = (         int  )0;
    sqlstm.sqindv[123] = (         short *)0;
    sqlstm.sqinds[123] = (         int  )0;
    sqlstm.sqharm[123] = (unsigned long )0;
    sqlstm.sqadto[123] = (unsigned short )0;
    sqlstm.sqtdso[123] = (unsigned short )0;
    sqlstm.sqhstv[124] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb2_zlqsrdy);
    sqlstm.sqhstl[124] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[124] = (         int  )0;
    sqlstm.sqindv[124] = (         short *)0;
    sqlstm.sqinds[124] = (         int  )0;
    sqlstm.sqharm[124] = (unsigned long )0;
    sqlstm.sqadto[124] = (unsigned short )0;
    sqlstm.sqtdso[124] = (unsigned short )0;
    sqlstm.sqhstv[125] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb2_zlqsrdl);
    sqlstm.sqhstl[125] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[125] = (         int  )0;
    sqlstm.sqindv[125] = (         short *)0;
    sqlstm.sqinds[125] = (         int  )0;
    sqlstm.sqharm[125] = (unsigned long )0;
    sqlstm.sqadto[125] = (unsigned short )0;
    sqlstm.sqtdso[125] = (unsigned short )0;
    sqlstm.sqhstv[126] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb2_zjzldy);
    sqlstm.sqhstl[126] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[126] = (         int  )0;
    sqlstm.sqindv[126] = (         short *)0;
    sqlstm.sqinds[126] = (         int  )0;
    sqlstm.sqharm[126] = (unsigned long )0;
    sqlstm.sqadto[126] = (unsigned short )0;
    sqlstm.sqtdso[126] = (unsigned short )0;
    sqlstm.sqhstv[127] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb2_nbqscdy);
    sqlstm.sqhstl[127] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[127] = (         int  )0;
    sqlstm.sqindv[127] = (         short *)0;
    sqlstm.sqinds[127] = (         int  )0;
    sqlstm.sqharm[127] = (unsigned long )0;
    sqlstm.sqadto[127] = (unsigned short )0;
    sqlstm.sqtdso[127] = (unsigned short )0;
    sqlstm.sqhstv[128] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb2_nbqscdl);
    sqlstm.sqhstl[128] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[128] = (         int  )0;
    sqlstm.sqindv[128] = (         short *)0;
    sqlstm.sqinds[128] = (         int  )0;
    sqlstm.sqharm[128] = (unsigned long )0;
    sqlstm.sqadto[128] = (unsigned short )0;
    sqlstm.sqtdso[128] = (unsigned short )0;
    sqlstm.sqhstv[129] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb2_nbqscpl);
    sqlstm.sqhstl[129] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[129] = (         int  )0;
    sqlstm.sqindv[129] = (         short *)0;
    sqlstm.sqinds[129] = (         int  )0;
    sqlstm.sqharm[129] = (unsigned long )0;
    sqlstm.sqadto[129] = (unsigned short )0;
    sqlstm.sqtdso[129] = (unsigned short )0;
    sqlstm.sqhstv[130] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_sdsd);
    sqlstm.sqhstl[130] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[130] = (         int  )0;
    sqlstm.sqindv[130] = (         short *)0;
    sqlstm.sqinds[130] = (         int  )0;
    sqlstm.sqharm[130] = (unsigned long )0;
    sqlstm.sqadto[130] = (unsigned short )0;
    sqlstm.sqtdso[130] = (unsigned short )0;
    sqlstm.sqhstv[131] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_sjsd);
    sqlstm.sqhstl[131] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[131] = (         int  )0;
    sqlstm.sqindv[131] = (         short *)0;
    sqlstm.sqinds[131] = (         int  )0;
    sqlstm.sqharm[131] = (unsigned long )0;
    sqlstm.sqadto[131] = (unsigned short )0;
    sqlstm.sqtdso[131] = (unsigned short )0;
    sqlstm.sqhstv[132] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_fxzd);
    sqlstm.sqhstl[132] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[132] = (         int  )0;
    sqlstm.sqindv[132] = (         short *)0;
    sqlstm.sqinds[132] = (         int  )0;
    sqlstm.sqharm[132] = (unsigned long )0;
    sqlstm.sqadto[132] = (unsigned short )0;
    sqlstm.sqtdso[132] = (unsigned short )0;
    sqlstm.sqhstv[133] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_abh);
    sqlstm.sqhstl[133] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[133] = (         int  )0;
    sqlstm.sqindv[133] = (         short *)0;
    sqlstm.sqinds[133] = (         int  )0;
    sqlstm.sqharm[133] = (unsigned long )0;
    sqlstm.sqadto[133] = (unsigned short )0;
    sqlstm.sqtdso[133] = (unsigned short )0;
    sqlstm.sqhstv[134] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_ibh);
    sqlstm.sqhstl[134] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[134] = (         int  )0;
    sqlstm.sqindv[134] = (         short *)0;
    sqlstm.sqinds[134] = (         int  )0;
    sqlstm.sqharm[134] = (unsigned long )0;
    sqlstm.sqadto[134] = (unsigned short )0;
    sqlstm.sqtdso[134] = (unsigned short )0;
    sqlstm.sqhstv[135] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_zdqq);
    sqlstm.sqhstl[135] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[135] = (         int  )0;
    sqlstm.sqindv[135] = (         short *)0;
    sqlstm.sqinds[135] = (         int  )0;
    sqlstm.sqharm[135] = (unsigned long )0;
    sqlstm.sqadto[135] = (unsigned short )0;
    sqlstm.sqtdso[135] = (unsigned short )0;
    sqlstm.sqhstv[136] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_bcu);
    sqlstm.sqhstl[136] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[136] = (         int  )0;
    sqlstm.sqindv[136] = (         short *)0;
    sqlstm.sqinds[136] = (         int  )0;
    sqlstm.sqharm[136] = (unsigned long )0;
    sqlstm.sqadto[136] = (unsigned short )0;
    sqlstm.sqtdso[136] = (unsigned short )0;
    sqlstm.sqhstv[137] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_dzdsdz);
    sqlstm.sqhstl[137] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[137] = (         int  )0;
    sqlstm.sqindv[137] = (         short *)0;
    sqlstm.sqinds[137] = (         int  )0;
    sqlstm.sqharm[137] = (unsigned long )0;
    sqlstm.sqadto[137] = (unsigned short )0;
    sqlstm.sqtdso[137] = (unsigned short )0;
    sqlstm.sqhstv[138] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_zfgyl);
    sqlstm.sqhstl[138] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[138] = (         int  )0;
    sqlstm.sqindv[138] = (         short *)0;
    sqlstm.sqinds[138] = (         int  )0;
    sqlstm.sqharm[138] = (unsigned long )0;
    sqlstm.sqadto[138] = (unsigned short )0;
    sqlstm.sqtdso[138] = (unsigned short )0;
    sqlstm.sqhstv[139] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_jhfgyl);
    sqlstm.sqhstl[139] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[139] = (         int  )0;
    sqlstm.sqindv[139] = (         short *)0;
    sqlstm.sqinds[139] = (         int  )0;
    sqlstm.sqharm[139] = (unsigned long )0;
    sqlstm.sqadto[139] = (unsigned short )0;
    sqlstm.sqtdso[139] = (unsigned short )0;
    sqlstm.sqhstv[140] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_lcgyl);
    sqlstm.sqhstl[140] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[140] = (         int  )0;
    sqlstm.sqindv[140] = (         short *)0;
    sqlstm.sqinds[140] = (         int  )0;
    sqlstm.sqharm[140] = (unsigned long )0;
    sqlstm.sqadto[140] = (unsigned short )0;
    sqlstm.sqtdso[140] = (unsigned short )0;
    sqlstm.sqhstv[141] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_zdfg1yl);
    sqlstm.sqhstl[141] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[141] = (         int  )0;
    sqlstm.sqindv[141] = (         short *)0;
    sqlstm.sqinds[141] = (         int  )0;
    sqlstm.sqharm[141] = (unsigned long )0;
    sqlstm.sqadto[141] = (unsigned short )0;
    sqlstm.sqtdso[141] = (unsigned short )0;
    sqlstm.sqhstv[142] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_zdfg2yl);
    sqlstm.sqhstl[142] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[142] = (         int  )0;
    sqlstm.sqindv[142] = (         short *)0;
    sqlstm.sqinds[142] = (         int  )0;
    sqlstm.sqharm[142] = (unsigned long )0;
    sqlstm.sqadto[142] = (unsigned short )0;
    sqlstm.sqtdso[142] = (unsigned short )0;
    sqlstm.sqhstv[143] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_zdjzt);
    sqlstm.sqhstl[143] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[143] = (         int  )0;
    sqlstm.sqindv[143] = (         short *)0;
    sqlstm.sqinds[143] = (         int  )0;
    sqlstm.sqharm[143] = (unsigned long )0;
    sqlstm.sqadto[143] = (unsigned short )0;
    sqlstm.sqtdso[143] = (unsigned short )0;
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



    if (sqlca.sqlcode == 0)
    {
        //			memset(temp,0,1024);
        //			sprintf(temp,"loco.%s-%s,内燃机车V1.0 update success !!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no ,sqlca.sqlcode);
		//			lprintf(disp.e,temp);
        //			lprintf(disp.v,temp);
        //			cclog('e',temp);

        return 0;
    }
    else
    {
        memset(temp,0,1024);
        printf("loco.%s-%s:内燃机车V1.0 update failed !!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no ,sqlca.sqlcode);
		
        /*printf("1=%d,2=%d,3=%d,4=%d,5=%d,6=%d,7=%d,8=%d,9=%f,10=%f,11=%f,12=%f,13=%f,14=%d,15=%d,16=%d,17=%d,18=%d,19=%d,20=%f,21=%d,22=%d\n",
               data_3g->str_tcms_v10.str_basic.jb_ss              ,
               data_3g->str_tcms_v10.str_basic.jb_kzhx            ,
               data_3g->str_tcms_v10.str_basic.jb_zdh             ,
               data_3g->str_tcms_v10.str_basic.jb_sdg             ,
               data_3g->str_tcms_v10.str_basic.jb_czd             ,
               data_3g->str_tcms_v10.str_basic.jb_yxfx            ,
               data_3g->str_tcms_v10.str_basic.jb_gk              ,
               data_3g->str_tcms_v10.str_basic.jb_gfx             ,
               data_3g->str_tcms_v10.str_basic.jb_sbjw            ,
               data_3g->str_tcms_v10.str_basic.jb_qyzdl_jh        ,
               data_3g->str_tcms_v10.str_basic.jb_qyzdl_sj        ,
               data_3g->str_tcms_v10.str_basic.jb_sdsdz           ,
               data_3g->str_tcms_v10.str_basic.jb_sdsjz           ,
               data_3g->str_tcms_v10.str_basic.jb_wyzfdy          ,
               data_3g->str_tcms_v10.str_basic.jb_wyzfdl          ,
               data_3g->str_tcms_v10.str_basic.jb_zfgyl           ,
               data_3g->str_tcms_v10.str_basic.jb_lcgyl           ,
               data_3g->str_tcms_v10.str_basic.jb_zdgyl           ,
               data_3g->str_tcms_v10.str_basic.jb_jhfgyl          ,
               data_3g->str_tcms_v10.str_basic.jb_xdcyl           ,
               data_3g->str_tcms_v10.str_basic.jb_cyjzs           ,
               data_3g->str_tcms_v10.str_basic.jb_zlc);*/

        sprintf(temp,"loco.%s-%s:内燃机车V1.0 update failed !!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no ,sqlca.sqlcode);
        lprintf(disp.e,temp);
        lprintf(disp.g,temp);
        cclog('e',temp);

        return 1;
    }
}



unsigned char update_ITF_TCMS_V10()
{
    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

    /* EXEC SQL UPDATE AP_TCMS_V10_LASTSTATUS SET 

              idx		 =  :data_3g->idx                 ,/oCHAR(32) not nullo/
              t_type_id  =  :data_3g->t_type_id            ,/oCHAR(3) not null o/
              loco_no    =  :data_3g->loco_no              ,/oCHAR(4) not nullo/
              ab		 =  :data_3g->ab                   ,/oNUMBER(1) default 0 not nullo/
              btsj		 =  to_date(:data_3g->btsj ,'yyyy-mm-dd hh24:mi:ss'),
              rksj		 =  to_date(:data_3g->rksj ,'yyyy-mm-dd hh24:mi:ss'),
              xtsj  =  to_date(:data_3g->tcms_xtsj ,'yyyy-mm-dd hh24:mi:ss'),
              ver   =  :data_3g->tcms_ver               ,/oNUMBER(3)o/

              jb_ss			=  :data_3g->str_tcms_v10.str_basic.jb_ss              ,/oNUMBER(1)o/
              jb_kzhx		=  :data_3g->str_tcms_v10.str_basic.jb_kzhx            ,/oNUMBER(1)o/
              jb_zdh		=  :data_3g->str_tcms_v10.str_basic.jb_zdh             ,/oNUMBER(1)o/
              jb_sdg		=  :data_3g->str_tcms_v10.str_basic.jb_sdg             ,/oNUMBER(1)o/
              jb_czd		=  :data_3g->str_tcms_v10.str_basic.jb_czd             ,/oNUMBER(1)o/
              jb_yxfx		=  :data_3g->str_tcms_v10.str_basic.jb_yxfx            ,/oNUMBER(1)o/
              jb_gk			=  :data_3g->str_tcms_v10.str_basic.jb_gk              ,/oNUMBER(1)o/
              jb_gfx		=  :data_3g->str_tcms_v10.str_basic.jb_gfx             ,/oNUMBER(1)o/
              jb_sbjw		=  :data_3g->str_tcms_v10.str_basic.jb_sbjw            ,/oNUMBER(6,1)o/
              jb_qyzdl_jh   =  :data_3g->str_tcms_v10.str_basic.jb_qyzdl_jh        ,/oNUMBER(6,1)o/
              jb_qyzdl_sj   =  :data_3g->str_tcms_v10.str_basic.jb_qyzdl_sj        ,/oNUMBER(6,1)o/
              jb_sdsdz		=  :data_3g->str_tcms_v10.str_basic.jb_sdsdz           ,/oNUMBER(6,1)o/
              jb_sdsjz		=  :data_3g->str_tcms_v10.str_basic.jb_sdsjz           ,/oNUMBER(6,1)o/
              jb_wyzfdy		=  :data_3g->str_tcms_v10.str_basic.jb_wyzfdy          ,/oNUMBER(5)o/
              jb_wyzfdl		=  :data_3g->str_tcms_v10.str_basic.jb_wyzfdl          ,/oNUMBER(5)o/
              jb_zfgyl		=  :data_3g->str_tcms_v10.str_basic.jb_zfgyl           ,/oNUMBER(5)o/
              jb_lcgyl		=  :data_3g->str_tcms_v10.str_basic.jb_lcgyl           ,/oNUMBER(5)o/
              jb_zdgyl		=  :data_3g->str_tcms_v10.str_basic.jb_zdgyl           ,/oNUMBER(5)o/
              jb_jhfgyl		=  :data_3g->str_tcms_v10.str_basic.jb_jhfgyl          ,/oNUMBER(5)o/
              jb_xdcyl		=  :data_3g->str_tcms_v10.str_basic.jb_xdcyl           ,/oNUMBER(5,1)o/
              jb_cyjzs		=  :data_3g->str_tcms_v10.str_basic.jb_cyjzs           ,/oNUMBER(5)o/
              jb_zlc		=  :data_3g->str_tcms_v10.str_basic.jb_zlc             ,/oNUMBER(5)o/

              qy_sdsd    =  :data_3g->str_tcms_v10.str_qianyin.qy_sdsd            ,/oNUMBER(6,1)o/
              qy_sjsd    =  :data_3g->str_tcms_v10.str_qianyin.qy_sjsd            ,/oNUMBER(6,1)o/
              qy_fx      =  :data_3g->str_tcms_v10.str_qianyin.qy_fx              ,/oNUMBER(3)o/
              qy_zgl     =  :data_3g->str_tcms_v10.str_qianyin.qy_zgl             ,/oNUMBER(3)o/
              qy_qyzdlsdz_1bg1mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsdz_1bg1mt ,/oNUMBER(5,1)o/
              qy_qyzdlsdz_1bg2mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsdz_1bg2mt ,/oNUMBER(5,1)o/
              qy_qyzdlsdz_1bg3mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsdz_1bg3mt ,/oNUMBER(5,1)o/
              qy_qyzdlsdz_2bg1mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsdz_2bg1mt ,/oNUMBER(5,1)o/
              qy_qyzdlsdz_2bg2mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsdz_2bg2mt ,/oNUMBER(5,1)o/
              qy_qyzdlsdz_2bg3mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsdz_2bg3mt ,/oNUMBER(5,1)o/
              qy_sjsd_1bg1mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_sjsd_1bg1mt     ,/oNUMBER(5,1)o/
              qy_sjsd_1bg2mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_sjsd_1bg2mt     ,/oNUMBER(5,1)o/
              qy_sjsd_1bg3mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_sjsd_1bg3mt     ,/oNUMBER(5,1)o/
              qy_sjsd_2bg1mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_sjsd_2bg1mt     ,/oNUMBER(5,1)o/
              qy_sjsd_2bg2mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_sjsd_2bg2mt     ,/oNUMBER(5,1)o/
              qy_sjsd_2bg3mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_sjsd_2bg3mt     ,/oNUMBER(5,1)o/
              qy_fdjdy			=  :data_3g->str_tcms_v10.str_qianyin.qy_fdjdy           ,/oNUMBER(5)o/
              qy_fdjdl			=  :data_3g->str_tcms_v10.str_qianyin.qy_fdjdl           ,/oNUMBER(5)o/
              qy_qyblq1_zjdy    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyblq1_zjdy     ,/oNUMBER(5)o/
              qy_qyblq1_zjdl    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyblq1_zjdl     ,/oNUMBER(5)o/
              qy_qyblq2_zjdy    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyblq2_zjdy     ,/oNUMBER(5)o/
              qy_qyblq2_zjdl    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyblq2_zjdl     ,/oNUMBER(5)o/
              qy_qyblq1_lqsyl   =  :data_3g->str_tcms_v10.str_qianyin.qy_qyblq1_lqsyl    ,/oNUMBER(5,2)o/
              qy_qyblq1_lqswd   =  :data_3g->str_tcms_v10.str_qianyin.qy_qyblq1_lqswd    ,/oNUMBER(5)o/
              qy_qyblq2_lqsyl   =  :data_3g->str_tcms_v10.str_qianyin.qy_qyblq2_lqsyl    ,/oNUMBER(5,2)o/
              qy_qyblq2_lqswd   =  :data_3g->str_tcms_v10.str_qianyin.qy_qyblq2_lqswd    ,/oNUMBER(5)o/
              qy_qybyqyw1		=  :data_3g->str_tcms_v10.str_qianyin.qy_qybyqyw1        ,/oNUMBER(5)o/
              qy_qybyqyw2		=  :data_3g->str_tcms_v10.str_qianyin.qy_qybyqyw2        ,/oNUMBER(5)o/
              qy_qyzdlsjz_1bg1mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsjz_1bg1mt ,/oNUMBER(5,1)o/
              qy_qyzdlsjz_1bg2mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsjz_1bg2mt ,/oNUMBER(5,1)o/
              qy_qyzdlsjz_1bg3mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsjz_1bg3mt ,/oNUMBER(5,1)o/
              qy_qyzdlsjz_2bg1mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsjz_2bg1mt ,/oNUMBER(5,1)o/
              qy_qyzdlsjz_2bg2mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsjz_2bg2mt ,/oNUMBER(5,1)o/
              qy_qyzdlsjz_2bg3mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_qyzdlsjz_2bg3mt ,/oNUMBER(5,1)o/
              qy_djwd_1bg1mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djwd_1bg1mt     ,/oNUMBER(5)o/
              qy_djwd_1bg2mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djwd_1bg2mt     ,/oNUMBER(5)o/
              qy_djwd_1bg3mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djwd_1bg3mt     ,/oNUMBER(5)o/
              qy_djwd_2bg1mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djwd_2bg1mt     ,/oNUMBER(5)o/
              qy_djwd_2bg2mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djwd_2bg2mt     ,/oNUMBER(5)o/
              qy_djwd_2bg3mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djwd_2bg3mt     ,/oNUMBER(5)o/
              qy_djdl_1bg1mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djdl_1bg1mt     ,/oNUMBER(5)o/
              qy_djdl_1bg2mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djdl_1bg2mt     ,/oNUMBER(5)o/
              qy_djdl_1bg3mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djdl_1bg3mt     ,/oNUMBER(5)o/
              qy_djdl_2bg1mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djdl_2bg1mt     ,/oNUMBER(5)o/
              qy_djdl_2bg2mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djdl_2bg2mt     ,/oNUMBER(5)o/
              qy_djdl_2bg3mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djdl_2bg3mt     ,/oNUMBER(5)o/
              qy_djdy_1bg1mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djdy_1bg1mt     ,/oNUMBER(5)o/
              qy_djdy_1bg2mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djdy_1bg2mt     ,/oNUMBER(5)o/
              qy_djdy_1bg3mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djdy_1bg3mt     ,/oNUMBER(5)o/
              qy_djdy_2bg1mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djdy_2bg1mt     ,/oNUMBER(5)o/
              qy_djdy_2bg2mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djdy_2bg2mt     ,/oNUMBER(5)o/
              qy_djdy_2bg3mt    =  :data_3g->str_tcms_v10.str_qianyin.qy_djdy_2bg3mt     ,/oNUMBER(5)o/
              qy_cdjcq			=  :data_3g->str_tcms_v10.str_qianyin.qy_cdjcq           ,/oNUMBER(3)o/
              qy_djjcq			=  :data_3g->str_tcms_v10.str_qianyin.qy_djjcq           ,/oNUMBER(3)o/
              qy_djgl			=  :data_3g->str_tcms_v10.str_qianyin.qy_djgl            ,/oNUMBER(3)o/
              qy_kz				=  :data_3g->str_tcms_v10.str_qianyin.qy_kz              ,/oNUMBER(3)o/

              fz_bppvsdz		=  :data_3g->str_tcms_v10.str_fuzhu.fz_bppvsdz         ,/oNUMBER(5)o/
              fz_dppvsdz		=  :data_3g->str_tcms_v10.str_fuzhu.fz_dppvsdz         ,/oNUMBER(5)o/
              fz_fb1zt			=  :data_3g->str_tcms_v10.str_fuzhu.fz_fb1zt           ,/oNUMBER(3)o/
              fz_fb2zt			=  :data_3g->str_tcms_v10.str_fuzhu.fz_fb2zt           ,/oNUMBER(3)o/
              fz_fb1_zlqsrdy    =  :data_3g->str_tcms_v10.str_fuzhu.fz_fb1_zlqsrdy     ,/oNUMBER(5)o/
              fz_fb1_zlqsrdl    =  :data_3g->str_tcms_v10.str_fuzhu.fz_fb1_zlqsrdl     ,/oNUMBER(5)o/
              fz_fb1_zjzldy     =  :data_3g->str_tcms_v10.str_fuzhu.fz_fb1_zjzldy      ,/oNUMBER(5)o/
              fz_fb1_nbqscdy    =  :data_3g->str_tcms_v10.str_fuzhu.fz_fb1_nbqscdy     ,/oNUMBER(5)o/
              fz_fb1_nbqscdl    =  :data_3g->str_tcms_v10.str_fuzhu.fz_fb1_nbqscdl     ,/oNUMBER(5)o/
              fz_fb1_nbqscpl    =  :data_3g->str_tcms_v10.str_fuzhu.fz_fb1_nbqscpl     ,/oNUMBER(5)o/
              fz_fb2_zlqsrdy    =  :data_3g->str_tcms_v10.str_fuzhu.fz_fb2_zlqsrdy     ,/oNUMBER(5)o/
              fz_fb2_zlqsrdl    =  :data_3g->str_tcms_v10.str_fuzhu.fz_fb2_zlqsrdl     ,/oNUMBER(5)o/
              fz_fb2_zjzldy     =  :data_3g->str_tcms_v10.str_fuzhu.fz_fb2_zjzldy      ,/oNUMBER(5)o/
              fz_fb2_nbqscdy    =  :data_3g->str_tcms_v10.str_fuzhu.fz_fb2_nbqscdy     ,/oNUMBER(5)o/
              fz_fb2_nbqscdl    =  :data_3g->str_tcms_v10.str_fuzhu.fz_fb2_nbqscdl     ,/oNUMBER(5)o/
              fz_fb2_nbqscpl    =  :data_3g->str_tcms_v10.str_fuzhu.fz_fb2_nbqscpl     ,/oNUMBER(5)o/

              zd_sdsd		=  :data_3g->str_tcms_v10.str_zhidong.zd_sdsd            ,/oNUMBER(5,1)o/
              zd_sjsd		=  :data_3g->str_tcms_v10.str_zhidong.zd_sjsd            ,/oNUMBER(5,1)o/
              zd_fxzd		=  :data_3g->str_tcms_v10.str_zhidong.zd_fxzd            ,/oNUMBER(3)o/
              zd_abh		=  :data_3g->str_tcms_v10.str_zhidong.zd_abh             ,/oNUMBER(3)o/
              zd_ibh		=  :data_3g->str_tcms_v10.str_zhidong.zd_ibh             ,/oNUMBER(3)o/
              zd_zdqq		=  :data_3g->str_tcms_v10.str_zhidong.zd_zdqq            ,/oNUMBER(3)o/
              zd_bcu		=  :data_3g->str_tcms_v10.str_zhidong.zd_bcu             ,/oNUMBER(3)o/
              zd_dzdsdz		=  :data_3g->str_tcms_v10.str_zhidong.zd_dzdsdz          ,/oNUMBER(5)o/
              zd_zfgyl		=  :data_3g->str_tcms_v10.str_zhidong.zd_zfgyl           ,/oNUMBER(5)o/
              zd_jhfgyl		=  :data_3g->str_tcms_v10.str_zhidong.zd_jhfgyl          ,/oNUMBER(5)o/
              zd_lcgyl		=  :data_3g->str_tcms_v10.str_zhidong.zd_lcgyl           ,/oNUMBER(5)o/
              zd_zdfg1yl    =  :data_3g->str_tcms_v10.str_zhidong.zd_zdfg1yl         ,/oNUMBER(5)o/
              zd_zdfg2yl    =  :data_3g->str_tcms_v10.str_zhidong.zd_zdfg2yl         ,/oNUMBER(5)o/
              zd_zdjzt		=  :data_3g->str_tcms_v10.str_zhidong.zd_zdjzt            /oNUMBER(5)o/; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlbuft((void **)0,
      "update AP_TCMS_V10_LASTSTATUS  set idx=:b0,t_type_id=:b1,loco_no=:b2,\
ab=:b3,btsj=to_date(:b4,'yyyy-mm-dd hh24:mi:ss'),rksj=to_date(:b5,'yyyy-mm-d\
d hh24:mi:ss'),xtsj=to_date(:b6,'yyyy-mm-dd hh24:mi:ss'),ver=:b7,jb_ss=:b8,j\
b_kzhx=:b9,jb_zdh=:b10,jb_sdg=:b11,jb_czd=:b12,jb_yxfx=:b13,jb_gk=:b14,jb_gf\
x=:b15,jb_sbjw=:b16,jb_qyzdl_jh=:b17,jb_qyzdl_sj=:b18,jb_sdsdz=:b19,jb_sdsjz\
=:b20,jb_wyzfdy=:b21,jb_wyzfdl=:b22,jb_zfgyl=:b23,jb_lcgyl=:b24,jb_zdgyl=:b2\
5,jb_jhfgyl=:b26,jb_xdcyl=:b27,jb_cyjzs=:b28,jb_zlc=:b29,qy_sdsd=:b30,qy_sjs\
d=:b31,qy_fx=:b32,qy_zgl=:b33,qy_qyzdlsdz_1bg1mt=:b34,qy_qyzdlsdz_1bg2mt=:b3\
5,qy_qyzdlsdz_1bg3mt=:b36,qy_qyzdlsdz_2bg1mt=:b37,qy_qyzdlsdz_2bg2mt=:b38,qy\
_qyzdlsdz_2bg3mt=:b39,qy_sjsd_1bg1mt=:b40,qy_sjsd_1bg2mt=:b41,qy_sjsd_1bg3mt\
=:b42,qy_sjsd_2bg1mt=:b43,qy_sjsd_2bg2mt=:b44,qy_sjsd_2bg3mt=:b45,qy_fdjdy=:\
b46,qy_fdjdl=:b47,qy_qyblq1_zjdy=:b48,qy_qyblq1_zjdl=:b49,qy_qyblq2_zjdy=:b5\
0,qy_qyblq2_zjdl=:b51,qy_qyblq1_lqsyl=:b52,qy_qyblq1_lqswd=:b53,qy_qyblq2_lq\
syl=:b54,qy_qyblq2_lqswd=:b55,qy_qybyqyw1=:");
    sqlbuft((void **)0,
      "b56,qy_qybyqyw2=:b57,qy_qyzdlsjz_1bg1mt=:b58,qy_qyzdlsjz_1bg2mt=:b59,\
qy_qyzdlsjz_1bg3mt=:b60,qy_qyzdlsjz_2bg1mt=:b61,qy_qyzdlsjz_2bg2mt=:b62,qy_q\
yzdlsjz_2bg3mt=:b63,qy_djwd_1bg1mt=:b64,qy_djwd_1bg2mt=:b65,qy_djwd_1bg3mt=:\
b66,qy_djwd_2bg1mt=:b67,qy_djwd_2bg2mt=:b68,qy_djwd_2bg3mt=:b69,qy_djdl_1bg1\
mt=:b70,qy_djdl_1bg2mt=:b71,qy_djdl_1bg3mt=:b72,qy_djdl_2bg1mt=:b73,qy_djdl_\
2bg2mt=:b74,qy_djdl_2bg3mt=:b75,qy_djdy_1bg1mt=:b76,qy_djdy_1bg2mt=:b77,qy_d\
jdy_1bg3mt=:b78,qy_djdy_2bg1mt=:b79,qy_djdy_2bg2mt=:b80,qy_djdy_2bg3mt=:b81,\
qy_cdjcq=:b82,qy_djjcq=:b83,qy_djgl=:b84,qy_kz=:b85,fz_bppvsdz=:b86,fz_dppvs\
dz=:b87,fz_fb1zt=:b88,fz_fb2zt=:b89,fz_fb1_zlqsrdy=:b90,fz_fb1_zlqsrdl=:b91,\
fz_fb1_zjzldy=:b92,fz_fb1_nbqscdy=:b93,fz_fb1_nbqscdl=:b94,fz_fb1_nbqscpl=:b\
95,fz_fb2_zlqsrdy=:b96,fz_fb2_zlqsrdl=:b97,fz_fb2_zjzldy=:b98,fz_fb2_nbqscdy\
=:b99,fz_fb2_nbqscdl=:b100,fz_fb2_nbqscpl=:b101,zd_sdsd=:b102,zd_sjsd=:b103,\
zd_fxzd=:b104,zd_abh=:b105,zd_ibh=:b106,zd_zdqq=:b107,zd_bcu=:b108,zd_dzdsdz\
=:b109,zd_zfgyl=:b110,zd_jhfgyl=:b111,zd_lc");
    sqlstm.stmt = "gyl=:b112,zd_zdfg1yl=:b113,zd_zdfg2yl=:b114,zd_zdjzt=:b1\
15";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2495;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)(data_3g->idx);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_3g->t_type_id);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_3g->loco_no);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_3g->ab);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_3g->btsj);
    sqlstm.sqhstl[4] = (unsigned long )21;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_3g->rksj);
    sqlstm.sqhstl[5] = (unsigned long )21;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)(data_3g->tcms_xtsj);
    sqlstm.sqhstl[6] = (unsigned long )21;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&(data_3g->tcms_ver);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_ss);
    sqlstm.sqhstl[8] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_kzhx);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_zdh);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_sdg);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_czd);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_yxfx);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_gk);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_gfx);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_sbjw);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_qyzdl_jh);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_qyzdl_sj);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_sdsdz);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_sdsjz);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_wyzfdy);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_wyzfdl);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_zfgyl);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_lcgyl);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_zdgyl);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_jhfgyl);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_xdcyl);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_cyjzs);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_basic).jb_zlc);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sdsd);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sjsd);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_fx);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_zgl);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsdz_1bg1mt);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsdz_1bg2mt);
    sqlstm.sqhstl[35] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsdz_1bg3mt);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsdz_2bg1mt);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsdz_2bg2mt);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsdz_2bg3mt);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sjsd_1bg1mt);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sjsd_1bg2mt);
    sqlstm.sqhstl[41] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sjsd_1bg3mt);
    sqlstm.sqhstl[42] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sjsd_2bg1mt);
    sqlstm.sqhstl[43] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sjsd_2bg2mt);
    sqlstm.sqhstl[44] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_sjsd_2bg3mt);
    sqlstm.sqhstl[45] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_fdjdy);
    sqlstm.sqhstl[46] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_fdjdl);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
    sqlstm.sqhstv[48] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq1_zjdy);
    sqlstm.sqhstl[48] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[48] = (         int  )0;
    sqlstm.sqindv[48] = (         short *)0;
    sqlstm.sqinds[48] = (         int  )0;
    sqlstm.sqharm[48] = (unsigned long )0;
    sqlstm.sqadto[48] = (unsigned short )0;
    sqlstm.sqtdso[48] = (unsigned short )0;
    sqlstm.sqhstv[49] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq1_zjdl);
    sqlstm.sqhstl[49] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[49] = (         int  )0;
    sqlstm.sqindv[49] = (         short *)0;
    sqlstm.sqinds[49] = (         int  )0;
    sqlstm.sqharm[49] = (unsigned long )0;
    sqlstm.sqadto[49] = (unsigned short )0;
    sqlstm.sqtdso[49] = (unsigned short )0;
    sqlstm.sqhstv[50] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq2_zjdy);
    sqlstm.sqhstl[50] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[50] = (         int  )0;
    sqlstm.sqindv[50] = (         short *)0;
    sqlstm.sqinds[50] = (         int  )0;
    sqlstm.sqharm[50] = (unsigned long )0;
    sqlstm.sqadto[50] = (unsigned short )0;
    sqlstm.sqtdso[50] = (unsigned short )0;
    sqlstm.sqhstv[51] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq2_zjdl);
    sqlstm.sqhstl[51] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[51] = (         int  )0;
    sqlstm.sqindv[51] = (         short *)0;
    sqlstm.sqinds[51] = (         int  )0;
    sqlstm.sqharm[51] = (unsigned long )0;
    sqlstm.sqadto[51] = (unsigned short )0;
    sqlstm.sqtdso[51] = (unsigned short )0;
    sqlstm.sqhstv[52] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq1_lqsyl);
    sqlstm.sqhstl[52] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[52] = (         int  )0;
    sqlstm.sqindv[52] = (         short *)0;
    sqlstm.sqinds[52] = (         int  )0;
    sqlstm.sqharm[52] = (unsigned long )0;
    sqlstm.sqadto[52] = (unsigned short )0;
    sqlstm.sqtdso[52] = (unsigned short )0;
    sqlstm.sqhstv[53] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq1_lqswd);
    sqlstm.sqhstl[53] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[53] = (         int  )0;
    sqlstm.sqindv[53] = (         short *)0;
    sqlstm.sqinds[53] = (         int  )0;
    sqlstm.sqharm[53] = (unsigned long )0;
    sqlstm.sqadto[53] = (unsigned short )0;
    sqlstm.sqtdso[53] = (unsigned short )0;
    sqlstm.sqhstv[54] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq2_lqsyl);
    sqlstm.sqhstl[54] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[54] = (         int  )0;
    sqlstm.sqindv[54] = (         short *)0;
    sqlstm.sqinds[54] = (         int  )0;
    sqlstm.sqharm[54] = (unsigned long )0;
    sqlstm.sqadto[54] = (unsigned short )0;
    sqlstm.sqtdso[54] = (unsigned short )0;
    sqlstm.sqhstv[55] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyblq2_lqswd);
    sqlstm.sqhstl[55] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[55] = (         int  )0;
    sqlstm.sqindv[55] = (         short *)0;
    sqlstm.sqinds[55] = (         int  )0;
    sqlstm.sqharm[55] = (unsigned long )0;
    sqlstm.sqadto[55] = (unsigned short )0;
    sqlstm.sqtdso[55] = (unsigned short )0;
    sqlstm.sqhstv[56] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qybyqyw1);
    sqlstm.sqhstl[56] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[56] = (         int  )0;
    sqlstm.sqindv[56] = (         short *)0;
    sqlstm.sqinds[56] = (         int  )0;
    sqlstm.sqharm[56] = (unsigned long )0;
    sqlstm.sqadto[56] = (unsigned short )0;
    sqlstm.sqtdso[56] = (unsigned short )0;
    sqlstm.sqhstv[57] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qybyqyw2);
    sqlstm.sqhstl[57] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[57] = (         int  )0;
    sqlstm.sqindv[57] = (         short *)0;
    sqlstm.sqinds[57] = (         int  )0;
    sqlstm.sqharm[57] = (unsigned long )0;
    sqlstm.sqadto[57] = (unsigned short )0;
    sqlstm.sqtdso[57] = (unsigned short )0;
    sqlstm.sqhstv[58] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsjz_1bg1mt);
    sqlstm.sqhstl[58] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[58] = (         int  )0;
    sqlstm.sqindv[58] = (         short *)0;
    sqlstm.sqinds[58] = (         int  )0;
    sqlstm.sqharm[58] = (unsigned long )0;
    sqlstm.sqadto[58] = (unsigned short )0;
    sqlstm.sqtdso[58] = (unsigned short )0;
    sqlstm.sqhstv[59] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsjz_1bg2mt);
    sqlstm.sqhstl[59] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[59] = (         int  )0;
    sqlstm.sqindv[59] = (         short *)0;
    sqlstm.sqinds[59] = (         int  )0;
    sqlstm.sqharm[59] = (unsigned long )0;
    sqlstm.sqadto[59] = (unsigned short )0;
    sqlstm.sqtdso[59] = (unsigned short )0;
    sqlstm.sqhstv[60] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsjz_1bg3mt);
    sqlstm.sqhstl[60] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[60] = (         int  )0;
    sqlstm.sqindv[60] = (         short *)0;
    sqlstm.sqinds[60] = (         int  )0;
    sqlstm.sqharm[60] = (unsigned long )0;
    sqlstm.sqadto[60] = (unsigned short )0;
    sqlstm.sqtdso[60] = (unsigned short )0;
    sqlstm.sqhstv[61] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsjz_2bg1mt);
    sqlstm.sqhstl[61] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[61] = (         int  )0;
    sqlstm.sqindv[61] = (         short *)0;
    sqlstm.sqinds[61] = (         int  )0;
    sqlstm.sqharm[61] = (unsigned long )0;
    sqlstm.sqadto[61] = (unsigned short )0;
    sqlstm.sqtdso[61] = (unsigned short )0;
    sqlstm.sqhstv[62] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsjz_2bg2mt);
    sqlstm.sqhstl[62] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[62] = (         int  )0;
    sqlstm.sqindv[62] = (         short *)0;
    sqlstm.sqinds[62] = (         int  )0;
    sqlstm.sqharm[62] = (unsigned long )0;
    sqlstm.sqadto[62] = (unsigned short )0;
    sqlstm.sqtdso[62] = (unsigned short )0;
    sqlstm.sqhstv[63] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_qyzdlsjz_2bg3mt);
    sqlstm.sqhstl[63] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[63] = (         int  )0;
    sqlstm.sqindv[63] = (         short *)0;
    sqlstm.sqinds[63] = (         int  )0;
    sqlstm.sqharm[63] = (unsigned long )0;
    sqlstm.sqadto[63] = (unsigned short )0;
    sqlstm.sqtdso[63] = (unsigned short )0;
    sqlstm.sqhstv[64] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djwd_1bg1mt);
    sqlstm.sqhstl[64] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[64] = (         int  )0;
    sqlstm.sqindv[64] = (         short *)0;
    sqlstm.sqinds[64] = (         int  )0;
    sqlstm.sqharm[64] = (unsigned long )0;
    sqlstm.sqadto[64] = (unsigned short )0;
    sqlstm.sqtdso[64] = (unsigned short )0;
    sqlstm.sqhstv[65] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djwd_1bg2mt);
    sqlstm.sqhstl[65] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[65] = (         int  )0;
    sqlstm.sqindv[65] = (         short *)0;
    sqlstm.sqinds[65] = (         int  )0;
    sqlstm.sqharm[65] = (unsigned long )0;
    sqlstm.sqadto[65] = (unsigned short )0;
    sqlstm.sqtdso[65] = (unsigned short )0;
    sqlstm.sqhstv[66] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djwd_1bg3mt);
    sqlstm.sqhstl[66] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[66] = (         int  )0;
    sqlstm.sqindv[66] = (         short *)0;
    sqlstm.sqinds[66] = (         int  )0;
    sqlstm.sqharm[66] = (unsigned long )0;
    sqlstm.sqadto[66] = (unsigned short )0;
    sqlstm.sqtdso[66] = (unsigned short )0;
    sqlstm.sqhstv[67] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djwd_2bg1mt);
    sqlstm.sqhstl[67] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[67] = (         int  )0;
    sqlstm.sqindv[67] = (         short *)0;
    sqlstm.sqinds[67] = (         int  )0;
    sqlstm.sqharm[67] = (unsigned long )0;
    sqlstm.sqadto[67] = (unsigned short )0;
    sqlstm.sqtdso[67] = (unsigned short )0;
    sqlstm.sqhstv[68] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djwd_2bg2mt);
    sqlstm.sqhstl[68] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[68] = (         int  )0;
    sqlstm.sqindv[68] = (         short *)0;
    sqlstm.sqinds[68] = (         int  )0;
    sqlstm.sqharm[68] = (unsigned long )0;
    sqlstm.sqadto[68] = (unsigned short )0;
    sqlstm.sqtdso[68] = (unsigned short )0;
    sqlstm.sqhstv[69] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djwd_2bg3mt);
    sqlstm.sqhstl[69] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[69] = (         int  )0;
    sqlstm.sqindv[69] = (         short *)0;
    sqlstm.sqinds[69] = (         int  )0;
    sqlstm.sqharm[69] = (unsigned long )0;
    sqlstm.sqadto[69] = (unsigned short )0;
    sqlstm.sqtdso[69] = (unsigned short )0;
    sqlstm.sqhstv[70] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdl_1bg1mt);
    sqlstm.sqhstl[70] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[70] = (         int  )0;
    sqlstm.sqindv[70] = (         short *)0;
    sqlstm.sqinds[70] = (         int  )0;
    sqlstm.sqharm[70] = (unsigned long )0;
    sqlstm.sqadto[70] = (unsigned short )0;
    sqlstm.sqtdso[70] = (unsigned short )0;
    sqlstm.sqhstv[71] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdl_1bg2mt);
    sqlstm.sqhstl[71] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[71] = (         int  )0;
    sqlstm.sqindv[71] = (         short *)0;
    sqlstm.sqinds[71] = (         int  )0;
    sqlstm.sqharm[71] = (unsigned long )0;
    sqlstm.sqadto[71] = (unsigned short )0;
    sqlstm.sqtdso[71] = (unsigned short )0;
    sqlstm.sqhstv[72] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdl_1bg3mt);
    sqlstm.sqhstl[72] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[72] = (         int  )0;
    sqlstm.sqindv[72] = (         short *)0;
    sqlstm.sqinds[72] = (         int  )0;
    sqlstm.sqharm[72] = (unsigned long )0;
    sqlstm.sqadto[72] = (unsigned short )0;
    sqlstm.sqtdso[72] = (unsigned short )0;
    sqlstm.sqhstv[73] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdl_2bg1mt);
    sqlstm.sqhstl[73] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[73] = (         int  )0;
    sqlstm.sqindv[73] = (         short *)0;
    sqlstm.sqinds[73] = (         int  )0;
    sqlstm.sqharm[73] = (unsigned long )0;
    sqlstm.sqadto[73] = (unsigned short )0;
    sqlstm.sqtdso[73] = (unsigned short )0;
    sqlstm.sqhstv[74] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdl_2bg2mt);
    sqlstm.sqhstl[74] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[74] = (         int  )0;
    sqlstm.sqindv[74] = (         short *)0;
    sqlstm.sqinds[74] = (         int  )0;
    sqlstm.sqharm[74] = (unsigned long )0;
    sqlstm.sqadto[74] = (unsigned short )0;
    sqlstm.sqtdso[74] = (unsigned short )0;
    sqlstm.sqhstv[75] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdl_2bg3mt);
    sqlstm.sqhstl[75] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[75] = (         int  )0;
    sqlstm.sqindv[75] = (         short *)0;
    sqlstm.sqinds[75] = (         int  )0;
    sqlstm.sqharm[75] = (unsigned long )0;
    sqlstm.sqadto[75] = (unsigned short )0;
    sqlstm.sqtdso[75] = (unsigned short )0;
    sqlstm.sqhstv[76] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdy_1bg1mt);
    sqlstm.sqhstl[76] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[76] = (         int  )0;
    sqlstm.sqindv[76] = (         short *)0;
    sqlstm.sqinds[76] = (         int  )0;
    sqlstm.sqharm[76] = (unsigned long )0;
    sqlstm.sqadto[76] = (unsigned short )0;
    sqlstm.sqtdso[76] = (unsigned short )0;
    sqlstm.sqhstv[77] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdy_1bg2mt);
    sqlstm.sqhstl[77] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[77] = (         int  )0;
    sqlstm.sqindv[77] = (         short *)0;
    sqlstm.sqinds[77] = (         int  )0;
    sqlstm.sqharm[77] = (unsigned long )0;
    sqlstm.sqadto[77] = (unsigned short )0;
    sqlstm.sqtdso[77] = (unsigned short )0;
    sqlstm.sqhstv[78] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdy_1bg3mt);
    sqlstm.sqhstl[78] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[78] = (         int  )0;
    sqlstm.sqindv[78] = (         short *)0;
    sqlstm.sqinds[78] = (         int  )0;
    sqlstm.sqharm[78] = (unsigned long )0;
    sqlstm.sqadto[78] = (unsigned short )0;
    sqlstm.sqtdso[78] = (unsigned short )0;
    sqlstm.sqhstv[79] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdy_2bg1mt);
    sqlstm.sqhstl[79] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[79] = (         int  )0;
    sqlstm.sqindv[79] = (         short *)0;
    sqlstm.sqinds[79] = (         int  )0;
    sqlstm.sqharm[79] = (unsigned long )0;
    sqlstm.sqadto[79] = (unsigned short )0;
    sqlstm.sqtdso[79] = (unsigned short )0;
    sqlstm.sqhstv[80] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdy_2bg2mt);
    sqlstm.sqhstl[80] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[80] = (         int  )0;
    sqlstm.sqindv[80] = (         short *)0;
    sqlstm.sqinds[80] = (         int  )0;
    sqlstm.sqharm[80] = (unsigned long )0;
    sqlstm.sqadto[80] = (unsigned short )0;
    sqlstm.sqtdso[80] = (unsigned short )0;
    sqlstm.sqhstv[81] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djdy_2bg3mt);
    sqlstm.sqhstl[81] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[81] = (         int  )0;
    sqlstm.sqindv[81] = (         short *)0;
    sqlstm.sqinds[81] = (         int  )0;
    sqlstm.sqharm[81] = (unsigned long )0;
    sqlstm.sqadto[81] = (unsigned short )0;
    sqlstm.sqtdso[81] = (unsigned short )0;
    sqlstm.sqhstv[82] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_cdjcq);
    sqlstm.sqhstl[82] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[82] = (         int  )0;
    sqlstm.sqindv[82] = (         short *)0;
    sqlstm.sqinds[82] = (         int  )0;
    sqlstm.sqharm[82] = (unsigned long )0;
    sqlstm.sqadto[82] = (unsigned short )0;
    sqlstm.sqtdso[82] = (unsigned short )0;
    sqlstm.sqhstv[83] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djjcq);
    sqlstm.sqhstl[83] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[83] = (         int  )0;
    sqlstm.sqindv[83] = (         short *)0;
    sqlstm.sqinds[83] = (         int  )0;
    sqlstm.sqharm[83] = (unsigned long )0;
    sqlstm.sqadto[83] = (unsigned short )0;
    sqlstm.sqtdso[83] = (unsigned short )0;
    sqlstm.sqhstv[84] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_djgl);
    sqlstm.sqhstl[84] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[84] = (         int  )0;
    sqlstm.sqindv[84] = (         short *)0;
    sqlstm.sqinds[84] = (         int  )0;
    sqlstm.sqharm[84] = (unsigned long )0;
    sqlstm.sqadto[84] = (unsigned short )0;
    sqlstm.sqtdso[84] = (unsigned short )0;
    sqlstm.sqhstv[85] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_qianyin).qy_kz);
    sqlstm.sqhstl[85] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[85] = (         int  )0;
    sqlstm.sqindv[85] = (         short *)0;
    sqlstm.sqinds[85] = (         int  )0;
    sqlstm.sqharm[85] = (unsigned long )0;
    sqlstm.sqadto[85] = (unsigned short )0;
    sqlstm.sqtdso[85] = (unsigned short )0;
    sqlstm.sqhstv[86] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_bppvsdz);
    sqlstm.sqhstl[86] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[86] = (         int  )0;
    sqlstm.sqindv[86] = (         short *)0;
    sqlstm.sqinds[86] = (         int  )0;
    sqlstm.sqharm[86] = (unsigned long )0;
    sqlstm.sqadto[86] = (unsigned short )0;
    sqlstm.sqtdso[86] = (unsigned short )0;
    sqlstm.sqhstv[87] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_dppvsdz);
    sqlstm.sqhstl[87] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[87] = (         int  )0;
    sqlstm.sqindv[87] = (         short *)0;
    sqlstm.sqinds[87] = (         int  )0;
    sqlstm.sqharm[87] = (unsigned long )0;
    sqlstm.sqadto[87] = (unsigned short )0;
    sqlstm.sqtdso[87] = (unsigned short )0;
    sqlstm.sqhstv[88] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb1zt);
    sqlstm.sqhstl[88] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[88] = (         int  )0;
    sqlstm.sqindv[88] = (         short *)0;
    sqlstm.sqinds[88] = (         int  )0;
    sqlstm.sqharm[88] = (unsigned long )0;
    sqlstm.sqadto[88] = (unsigned short )0;
    sqlstm.sqtdso[88] = (unsigned short )0;
    sqlstm.sqhstv[89] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb2zt);
    sqlstm.sqhstl[89] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[89] = (         int  )0;
    sqlstm.sqindv[89] = (         short *)0;
    sqlstm.sqinds[89] = (         int  )0;
    sqlstm.sqharm[89] = (unsigned long )0;
    sqlstm.sqadto[89] = (unsigned short )0;
    sqlstm.sqtdso[89] = (unsigned short )0;
    sqlstm.sqhstv[90] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb1_zlqsrdy);
    sqlstm.sqhstl[90] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[90] = (         int  )0;
    sqlstm.sqindv[90] = (         short *)0;
    sqlstm.sqinds[90] = (         int  )0;
    sqlstm.sqharm[90] = (unsigned long )0;
    sqlstm.sqadto[90] = (unsigned short )0;
    sqlstm.sqtdso[90] = (unsigned short )0;
    sqlstm.sqhstv[91] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb1_zlqsrdl);
    sqlstm.sqhstl[91] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[91] = (         int  )0;
    sqlstm.sqindv[91] = (         short *)0;
    sqlstm.sqinds[91] = (         int  )0;
    sqlstm.sqharm[91] = (unsigned long )0;
    sqlstm.sqadto[91] = (unsigned short )0;
    sqlstm.sqtdso[91] = (unsigned short )0;
    sqlstm.sqhstv[92] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb1_zjzldy);
    sqlstm.sqhstl[92] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[92] = (         int  )0;
    sqlstm.sqindv[92] = (         short *)0;
    sqlstm.sqinds[92] = (         int  )0;
    sqlstm.sqharm[92] = (unsigned long )0;
    sqlstm.sqadto[92] = (unsigned short )0;
    sqlstm.sqtdso[92] = (unsigned short )0;
    sqlstm.sqhstv[93] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb1_nbqscdy);
    sqlstm.sqhstl[93] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[93] = (         int  )0;
    sqlstm.sqindv[93] = (         short *)0;
    sqlstm.sqinds[93] = (         int  )0;
    sqlstm.sqharm[93] = (unsigned long )0;
    sqlstm.sqadto[93] = (unsigned short )0;
    sqlstm.sqtdso[93] = (unsigned short )0;
    sqlstm.sqhstv[94] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb1_nbqscdl);
    sqlstm.sqhstl[94] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[94] = (         int  )0;
    sqlstm.sqindv[94] = (         short *)0;
    sqlstm.sqinds[94] = (         int  )0;
    sqlstm.sqharm[94] = (unsigned long )0;
    sqlstm.sqadto[94] = (unsigned short )0;
    sqlstm.sqtdso[94] = (unsigned short )0;
    sqlstm.sqhstv[95] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb1_nbqscpl);
    sqlstm.sqhstl[95] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[95] = (         int  )0;
    sqlstm.sqindv[95] = (         short *)0;
    sqlstm.sqinds[95] = (         int  )0;
    sqlstm.sqharm[95] = (unsigned long )0;
    sqlstm.sqadto[95] = (unsigned short )0;
    sqlstm.sqtdso[95] = (unsigned short )0;
    sqlstm.sqhstv[96] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb2_zlqsrdy);
    sqlstm.sqhstl[96] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[96] = (         int  )0;
    sqlstm.sqindv[96] = (         short *)0;
    sqlstm.sqinds[96] = (         int  )0;
    sqlstm.sqharm[96] = (unsigned long )0;
    sqlstm.sqadto[96] = (unsigned short )0;
    sqlstm.sqtdso[96] = (unsigned short )0;
    sqlstm.sqhstv[97] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb2_zlqsrdl);
    sqlstm.sqhstl[97] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[97] = (         int  )0;
    sqlstm.sqindv[97] = (         short *)0;
    sqlstm.sqinds[97] = (         int  )0;
    sqlstm.sqharm[97] = (unsigned long )0;
    sqlstm.sqadto[97] = (unsigned short )0;
    sqlstm.sqtdso[97] = (unsigned short )0;
    sqlstm.sqhstv[98] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb2_zjzldy);
    sqlstm.sqhstl[98] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[98] = (         int  )0;
    sqlstm.sqindv[98] = (         short *)0;
    sqlstm.sqinds[98] = (         int  )0;
    sqlstm.sqharm[98] = (unsigned long )0;
    sqlstm.sqadto[98] = (unsigned short )0;
    sqlstm.sqtdso[98] = (unsigned short )0;
    sqlstm.sqhstv[99] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb2_nbqscdy);
    sqlstm.sqhstl[99] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[99] = (         int  )0;
    sqlstm.sqindv[99] = (         short *)0;
    sqlstm.sqinds[99] = (         int  )0;
    sqlstm.sqharm[99] = (unsigned long )0;
    sqlstm.sqadto[99] = (unsigned short )0;
    sqlstm.sqtdso[99] = (unsigned short )0;
    sqlstm.sqhstv[100] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb2_nbqscdl);
    sqlstm.sqhstl[100] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[100] = (         int  )0;
    sqlstm.sqindv[100] = (         short *)0;
    sqlstm.sqinds[100] = (         int  )0;
    sqlstm.sqharm[100] = (unsigned long )0;
    sqlstm.sqadto[100] = (unsigned short )0;
    sqlstm.sqtdso[100] = (unsigned short )0;
    sqlstm.sqhstv[101] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_fuzhu).fz_fb2_nbqscpl);
    sqlstm.sqhstl[101] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[101] = (         int  )0;
    sqlstm.sqindv[101] = (         short *)0;
    sqlstm.sqinds[101] = (         int  )0;
    sqlstm.sqharm[101] = (unsigned long )0;
    sqlstm.sqadto[101] = (unsigned short )0;
    sqlstm.sqtdso[101] = (unsigned short )0;
    sqlstm.sqhstv[102] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_sdsd);
    sqlstm.sqhstl[102] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[102] = (         int  )0;
    sqlstm.sqindv[102] = (         short *)0;
    sqlstm.sqinds[102] = (         int  )0;
    sqlstm.sqharm[102] = (unsigned long )0;
    sqlstm.sqadto[102] = (unsigned short )0;
    sqlstm.sqtdso[102] = (unsigned short )0;
    sqlstm.sqhstv[103] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_sjsd);
    sqlstm.sqhstl[103] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[103] = (         int  )0;
    sqlstm.sqindv[103] = (         short *)0;
    sqlstm.sqinds[103] = (         int  )0;
    sqlstm.sqharm[103] = (unsigned long )0;
    sqlstm.sqadto[103] = (unsigned short )0;
    sqlstm.sqtdso[103] = (unsigned short )0;
    sqlstm.sqhstv[104] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_fxzd);
    sqlstm.sqhstl[104] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[104] = (         int  )0;
    sqlstm.sqindv[104] = (         short *)0;
    sqlstm.sqinds[104] = (         int  )0;
    sqlstm.sqharm[104] = (unsigned long )0;
    sqlstm.sqadto[104] = (unsigned short )0;
    sqlstm.sqtdso[104] = (unsigned short )0;
    sqlstm.sqhstv[105] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_abh);
    sqlstm.sqhstl[105] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[105] = (         int  )0;
    sqlstm.sqindv[105] = (         short *)0;
    sqlstm.sqinds[105] = (         int  )0;
    sqlstm.sqharm[105] = (unsigned long )0;
    sqlstm.sqadto[105] = (unsigned short )0;
    sqlstm.sqtdso[105] = (unsigned short )0;
    sqlstm.sqhstv[106] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_ibh);
    sqlstm.sqhstl[106] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[106] = (         int  )0;
    sqlstm.sqindv[106] = (         short *)0;
    sqlstm.sqinds[106] = (         int  )0;
    sqlstm.sqharm[106] = (unsigned long )0;
    sqlstm.sqadto[106] = (unsigned short )0;
    sqlstm.sqtdso[106] = (unsigned short )0;
    sqlstm.sqhstv[107] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_zdqq);
    sqlstm.sqhstl[107] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[107] = (         int  )0;
    sqlstm.sqindv[107] = (         short *)0;
    sqlstm.sqinds[107] = (         int  )0;
    sqlstm.sqharm[107] = (unsigned long )0;
    sqlstm.sqadto[107] = (unsigned short )0;
    sqlstm.sqtdso[107] = (unsigned short )0;
    sqlstm.sqhstv[108] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_bcu);
    sqlstm.sqhstl[108] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[108] = (         int  )0;
    sqlstm.sqindv[108] = (         short *)0;
    sqlstm.sqinds[108] = (         int  )0;
    sqlstm.sqharm[108] = (unsigned long )0;
    sqlstm.sqadto[108] = (unsigned short )0;
    sqlstm.sqtdso[108] = (unsigned short )0;
    sqlstm.sqhstv[109] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_dzdsdz);
    sqlstm.sqhstl[109] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[109] = (         int  )0;
    sqlstm.sqindv[109] = (         short *)0;
    sqlstm.sqinds[109] = (         int  )0;
    sqlstm.sqharm[109] = (unsigned long )0;
    sqlstm.sqadto[109] = (unsigned short )0;
    sqlstm.sqtdso[109] = (unsigned short )0;
    sqlstm.sqhstv[110] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_zfgyl);
    sqlstm.sqhstl[110] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[110] = (         int  )0;
    sqlstm.sqindv[110] = (         short *)0;
    sqlstm.sqinds[110] = (         int  )0;
    sqlstm.sqharm[110] = (unsigned long )0;
    sqlstm.sqadto[110] = (unsigned short )0;
    sqlstm.sqtdso[110] = (unsigned short )0;
    sqlstm.sqhstv[111] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_jhfgyl);
    sqlstm.sqhstl[111] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[111] = (         int  )0;
    sqlstm.sqindv[111] = (         short *)0;
    sqlstm.sqinds[111] = (         int  )0;
    sqlstm.sqharm[111] = (unsigned long )0;
    sqlstm.sqadto[111] = (unsigned short )0;
    sqlstm.sqtdso[111] = (unsigned short )0;
    sqlstm.sqhstv[112] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_lcgyl);
    sqlstm.sqhstl[112] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[112] = (         int  )0;
    sqlstm.sqindv[112] = (         short *)0;
    sqlstm.sqinds[112] = (         int  )0;
    sqlstm.sqharm[112] = (unsigned long )0;
    sqlstm.sqadto[112] = (unsigned short )0;
    sqlstm.sqtdso[112] = (unsigned short )0;
    sqlstm.sqhstv[113] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_zdfg1yl);
    sqlstm.sqhstl[113] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[113] = (         int  )0;
    sqlstm.sqindv[113] = (         short *)0;
    sqlstm.sqinds[113] = (         int  )0;
    sqlstm.sqharm[113] = (unsigned long )0;
    sqlstm.sqadto[113] = (unsigned short )0;
    sqlstm.sqtdso[113] = (unsigned short )0;
    sqlstm.sqhstv[114] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_zdfg2yl);
    sqlstm.sqhstl[114] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[114] = (         int  )0;
    sqlstm.sqindv[114] = (         short *)0;
    sqlstm.sqinds[114] = (         int  )0;
    sqlstm.sqharm[114] = (unsigned long )0;
    sqlstm.sqadto[114] = (unsigned short )0;
    sqlstm.sqtdso[114] = (unsigned short )0;
    sqlstm.sqhstv[115] = (unsigned char  *)&(((data_3g->str_tcms_v10).str_zhidong).zd_zdjzt);
    sqlstm.sqhstl[115] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[115] = (         int  )0;
    sqlstm.sqindv[115] = (         short *)0;
    sqlstm.sqinds[115] = (         int  )0;
    sqlstm.sqharm[115] = (unsigned long )0;
    sqlstm.sqadto[115] = (unsigned short )0;
    sqlstm.sqtdso[115] = (unsigned short )0;
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



    if (sqlca.sqlcode == 0)
    {
        //			memset(temp,0,1024);
        //			sprintf(temp,"loco.%s-%s:电力机车V1.0 update success !!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no ,sqlca.sqlcode);
		//			lprintf(disp.e,temp);
        //			lprintf(disp.v,temp);
        //			cclog('e',temp);

        return 0;
    }	    
	else
	{
        printf("loco.%s-%s:电力机车V1.0 update failed !!!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no ,sqlca.sqlcode);
        memset(temp,0,1024);
        sprintf(temp,"loco.%s-%s:电力机车V1.0 update failed !!!,ORACLE返回值：%d\n",data_3g->t_type_id,data_3g->loco_no ,sqlca.sqlcode);
		lprintf(disp.e,temp);
        lprintf(disp.g,temp);
        cclog('e',temp);

        return 1;
    }
}

unsigned char insert_to_ITF_LDPFAULT_START(int index)
{
    char temp[1024];

    //printf("1\n");
    //printf("111 ITF_LDPFAULT_START data_fault->CRK = %d\n",data_fault->CRK);

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

    /* EXEC SQL
            INSERT INTO ITF_LDPFAULT_START(

                IDX         ,/oCHAR(32) not null,                o/

                GZDM        ,/oNUMBER(10),                       o/

                GZMC        ,/oVARCHAR2(100),                    o/

                GZKSSJ      ,/oDATE,                             o/

                GZDJ        ,/oNUMBER(2),                        o/

                VER         ,/oNUMBER(3) default 10 not null,    o/

                T_TYPE_ID   ,/oCHAR(3),                          o/

                LOCO_NO     ,/oCHAR(4),                          o/

                AB          ,/oNUMBER(1) default 0,              o/

                D_ID        ,/oCHAR(4),                          o/

                BTSJ        ,/oDATE,                             o/

                RKSJ        ,/oDATE default SYSDATE,             o/

                CZH         ,/oNUMBER(5),                        o/

                SJJLH       ,/oNUMBER(5),                        o/

                SJSD        ,/oNUMBER(7,2),                      o/

                JCGKZ       ,/oNUMBER(5),                        o/

                XHJBH       ,/oNUMBER(5),                        o/

                XHJZLZ      ,/oNUMBER(5),                        o/

                CC          ,/oVARCHAR2(20),                     o/

                ZSJH        ,/oNUMBER(10),                       o/

                FSJH        ,/oNUMBER(10),                       o/

                GLB         ,/oNUMBER(10),                       o/

                JKZT        ,/oNUMBER(5),                        o/

                DRIVERNAME  ,/oVARCHAR2(30),                     o/

                DRIVERTEL   ,/oVARCHAR2(32),                     o/

                LINENO      ,/oNUMBER(5),                        o/

                LINENAME    ,/oVARCHAR2(32),                     o/

                STATIONNAME ,/oVARCHAR2(32),                     o/

                GPSJD       ,/oNUMBER(12,6),                     o/

                GPSWD       ,/oNUMBER(12,6),                     o/

                GPSHB       ,/oNUMBER(8,2),                      o/

                GPSSD       ,/oNUMBER(8,2),                      o/

                D_ID2       ,/oCHAR(4),                          o/

                B_ID        ,/oCHAR(2),                          o/

                B_ID2       , /oCHAR(2),                          o/

                SEND_TYPE

                ,CRK

                )

            VALUES(

                :data_fault->str_fault[index].IDX         ,/oCHAR(32) not null,               o/

                :data_fault->str_fault[index].GZDM        ,/oNUMBER(10),                      o/

                trim(:data_fault->str_fault[index].GZMC)        ,/oVARCHAR2(100),                   o/

                to_date(:data_fault->str_fault[index].GZKSSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->str_fault[index].GZDJ        ,/oNUMBER(2),                       o/

                :data_fault->VER         ,/oNUMBER(3) default 10 not null,   o/

                :data_fault->T_TYPE_ID   ,/oCHAR(3),                         o/

                :data_fault->LOCO_NO     ,/oCHAR(4),                         o/

                :data_fault->AB          ,/oNUMBER(1) default 0,             o/

                trim(:data_fault->D_ID)        ,/oCHAR(4),                         o/

                to_date(:data_fault->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_fault->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->CZH         ,/oNUMBER(5),                       o/

                :data_fault->SJJLH       ,/oNUMBER(5),                       o/

                :data_fault->SJSD        ,/oNUMBER(7,2),                     o/

                :data_fault->JCGKZ       ,/oNUMBER(5),                       o/

                :data_fault->XHJBH       ,/oNUMBER(5),                       o/

                :data_fault->XHJZLZ      ,/oNUMBER(5),                       o/

                :data_fault->CC          ,/oVARCHAR2(20),                    o/

                :data_fault->ZSJH        ,/oNUMBER(10),                      o/

                :data_fault->FSJH        ,/oNUMBER(10),                      o/

                :data_fault->GLB         ,/oNUMBER(10),                      o/

                :data_fault->JKZT        ,/oNUMBER(3),                       o/

                trim(:data_fault->DRIVERNAME)  ,/oVARCHAR2(30),                    o/

                trim(:data_fault->DRIVERTEL )  ,/oVARCHAR2(32),                    o/

                trim(:data_fault->LINENO)      ,/oNUMBER(5),                       o/

                trim(:data_fault->LINENAME)    ,/oVARCHAR2(32),                    o/

                trim(:data_fault->STATIONNAME) ,/oVARCHAR2(32),                    o/

                :data_fault->GPSJD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSWD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSHB       ,/oNUMBER(8,2),                     o/

                :data_fault->GPSSD       ,/oNUMBER(8,2),                     o/

                trim(:data_fault->D_ID2)       ,/oCHAR(4),                         o/

                trim(:data_fault->B_ID)        ,/oCHAR(2),                         o/

                trim(:data_fault->B_ID2)       , /oCHAR(2),                         o/

                :data_fault->str_fault[index].SEND_TYPE

                ,:data_fault->CRK

                //,0

                ); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_LDPFAULT_START (IDX,GZDM,GZMC,GZKSSJ,GZD\
J,VER,T_TYPE_ID,LOCO_NO,AB,D_ID,BTSJ,RKSJ,CZH,SJJLH,SJSD,JCGKZ,XHJBH,XHJZLZ,C\
C,ZSJH,FSJH,GLB,JKZT,DRIVERNAME,DRIVERTEL,LINENO,LINENAME,STATIONNAME,GPSJD,G\
PSWD,GPSHB,GPSSD,D_ID2,B_ID,B_ID2,SEND_TYPE,CRK) values (:b0,:b1,trim(:b2),to\
_date(:b3,'yyyy-mm-dd hh24:mi:ss'),:b4,:b5,:b6,:b7,:b8,trim(:b9),to_date(:b10\
,'yyyy-mm-dd hh24:mi:ss'),to_date(:b11,'yyyy-mm-dd hh24:mi:ss'),:b12,:b13,:b1\
4,:b15,:b16,:b17,:b18,:b19,:b20,:b21,:b22,trim(:b23),trim(:b24),trim(:b25),tr\
im(:b26),trim(:b27),:b28,:b29,:b30,:b31,trim(:b32),trim(:b33),trim(:b34),:b35\
,:b36)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2974;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_fault->str_fault)[index].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM);
    sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)((data_fault->str_fault)[index].GZMC);
    sqlstm.sqhstl[2] = (unsigned long )101;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)((data_fault->str_fault)[index].GZKSSJ);
    sqlstm.sqhstl[3] = (unsigned long )21;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&((data_fault->str_fault)[index].GZDJ);
    sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&(data_fault->VER);
    sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)(data_fault->T_TYPE_ID);
    sqlstm.sqhstl[6] = (unsigned long )5;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)(data_fault->LOCO_NO);
    sqlstm.sqhstl[7] = (unsigned long )5;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&(data_fault->AB);
    sqlstm.sqhstl[8] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)(data_fault->D_ID);
    sqlstm.sqhstl[9] = (unsigned long )5;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)(data_fault->RKSJ);
    sqlstm.sqhstl[10] = (unsigned long )21;
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)(data_fault->BTSJ);
    sqlstm.sqhstl[11] = (unsigned long )21;
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_fault->CZH);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_fault->SJJLH);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_fault->SJSD);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(data_fault->JCGKZ);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(data_fault->XHJBH);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(data_fault->XHJZLZ);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)(data_fault->CC);
    sqlstm.sqhstl[18] = (unsigned long )21;
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&(data_fault->ZSJH);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&(data_fault->FSJH);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(data_fault->GLB);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(data_fault->JKZT);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)(data_fault->DRIVERNAME);
    sqlstm.sqhstl[23] = (unsigned long )33;
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)(data_fault->DRIVERTEL);
    sqlstm.sqhstl[24] = (unsigned long )33;
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&(data_fault->LINENO);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)(data_fault->LINENAME);
    sqlstm.sqhstl[26] = (unsigned long )33;
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)(data_fault->STATIONNAME);
    sqlstm.sqhstl[27] = (unsigned long )33;
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&(data_fault->GPSJD);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&(data_fault->GPSWD);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(data_fault->GPSHB);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&(data_fault->GPSSD);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)(data_fault->D_ID2);
    sqlstm.sqhstl[32] = (unsigned long )5;
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)(data_fault->B_ID);
    sqlstm.sqhstl[33] = (unsigned long )5;
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)(data_fault->B_ID2);
    sqlstm.sqhstl[34] = (unsigned long )5;
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)&((data_fault->str_fault)[index].SEND_TYPE);
    sqlstm.sqhstl[35] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&(data_fault->CRK);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
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



    if (sqlca.sqlcode == 0)

    {

        //		memset(temp,0,1024);

        //		sprintf(temp,"loco.%s-%s:TCMSFAULT_START：故障入库成功\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO);

        //		lprintf(disp.e,temp);

        //		lprintf(disp.f,temp);

        //		cclog('e',temp);

        return 0;

    }

    else

    {

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:LDPFAULT_START：故障入库失败,ORACLE返回值：%d\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.f,temp);

        cclog('e',temp);

        return 1;

    }

}



unsigned char insert_to_ITF_LDPFAULT_STOP(int index)

{

    char temp[1024];

    //printf("2\n");

    //printf("111 ITF_LDPFAULT_STOP data_fault->CRK = %d\n",data_fault->CRK);

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_LDPFAULT_STOP(

                IDX       ,/oCHAR(32) not null,              o/

                GZDM      ,/oNUMBER(10),                     o/

                GZJSSJ    ,/oDATE,                           o/

                VER       ,/oNUMBER(3) default 10 not null,  o/

                T_TYPE_ID ,/oCHAR(3),                        o/

                LOCO_NO   ,/oCHAR(4),                        o/

                AB        ,/oNUMBER(1) default 0,            o/

                BTSJ      ,/oDATE,                           o/

                RKSJ      ,/oDATE default SYSDATE,           o/

                CZH       ,/oNUMBER(5),                      o/

                SJJLH     ,/oNUMBER(5),                      o/

                SJSD      ,/oNUMBER(7,2),                    o/

                JCGKZ     ,/oNUMBER(5),                      o/

                XHJBH     ,/oNUMBER(5),                      o/

                XHJZLZ    ,/oNUMBER(5),                      o/

                CC        ,/oVARCHAR2(20),                   o/

                ZSJH      ,/oNUMBER(10),                     o/

                FSJH      ,/oNUMBER(10),                     o/

                GLB       ,/oNUMBER(10),                     o/

                JKZT      ,/oNUMBER(3),                      o/

                GPSJD     ,/oNUMBER(12,6),                   o/

                GPSWD     ,/oNUMBER(12,6),                   o/

                GPSHB     ,/oNUMBER(8,2),                    o/

                GPSSD     ,/oNUMBER(8,2),                    o/

                D_ID2     ,/oCHAR(4),                        o/

                B_ID      ,/oCHAR(2),                        o/

                D_ID      ,/oCHAR(4)                         o/

                SEND_TYPE

                ,CRK

                )

            VALUES(

                :data_fault->str_fault[index].IDX         ,/oCHAR(32) not null,               o/

                :data_fault->str_fault[index].GZDM        ,/oNUMBER(10),                      o/

                to_date(:data_fault->str_fault[index].GZKSSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->VER         ,/oNUMBER(3) default 10 not null,   o/

                :data_fault->T_TYPE_ID   ,/oCHAR(3),                         o/

                :data_fault->LOCO_NO     ,/oCHAR(4),                         o/

                :data_fault->AB          ,/oNUMBER(1) default 0,             o/

                to_date(:data_fault->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_fault->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->CZH         ,/oNUMBER(5),                       o/

                :data_fault->SJJLH       ,/oNUMBER(5),                       o/

                :data_fault->SJSD        ,/oNUMBER(7,2),                     o/

                :data_fault->JCGKZ       ,/oNUMBER(5),                       o/

                :data_fault->XHJBH       ,/oNUMBER(5),                       o/

                :data_fault->XHJZLZ      ,/oNUMBER(5),                       o/

                :data_fault->CC          ,/oVARCHAR2(20),                    o/

                :data_fault->ZSJH        ,/oNUMBER(10),                      o/

                :data_fault->FSJH        ,/oNUMBER(10),                      o/

                :data_fault->GLB         ,/oNUMBER(10),                      o/

                :data_fault->JKZT        ,/oNUMBER(3),                       o/

                :data_fault->GPSJD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSWD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSHB       ,/oNUMBER(8,2),                     o/

                :data_fault->GPSSD       ,/oNUMBER(8,2),                     o/

                trim(:data_fault->D_ID2)       ,/oCHAR(4),                         o/

                trim(:data_fault->B_ID)        ,/oCHAR(2),                         o/

                trim(:data_fault->D_ID)        ,/oCHAR(4),                         o/

                :data_fault->str_fault[index].SEND_TYPE

                ,:data_fault->CRK

                //,0

                ); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_LDPFAULT_STOP (IDX,GZDM,GZJSSJ,VER,T_TYP\
E_ID,LOCO_NO,AB,BTSJ,RKSJ,CZH,SJJLH,SJSD,JCGKZ,XHJBH,XHJZLZ,CC,ZSJH,FSJH,GLB,\
JKZT,GPSJD,GPSWD,GPSHB,GPSSD,D_ID2,B_ID,D_ID,SEND_TYPE,CRK) values (:b0,:b1,t\
o_date(:b2,'yyyy-mm-dd hh24:mi:ss'),:b3,:b4,:b5,:b6,to_date(:b7,'yyyy-mm-dd h\
h24:mi:ss'),to_date(:b8,'yyyy-mm-dd hh24:mi:ss'),:b9,:b10,:b11,:b12,:b13,:b14\
,:b15,:b16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,trim(:b24),trim(:b25),trim(:b26\
),:b27,:b28)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3137;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_fault->str_fault)[index].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM);
    sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)((data_fault->str_fault)[index].GZKSSJ);
    sqlstm.sqhstl[2] = (unsigned long )21;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_fault->VER);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_fault->T_TYPE_ID);
    sqlstm.sqhstl[4] = (unsigned long )5;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_fault->LOCO_NO);
    sqlstm.sqhstl[5] = (unsigned long )5;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&(data_fault->AB);
    sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)(data_fault->RKSJ);
    sqlstm.sqhstl[7] = (unsigned long )21;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)(data_fault->BTSJ);
    sqlstm.sqhstl[8] = (unsigned long )21;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&(data_fault->CZH);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&(data_fault->SJJLH);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_fault->SJSD);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_fault->JCGKZ);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_fault->XHJBH);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_fault->XHJZLZ);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)(data_fault->CC);
    sqlstm.sqhstl[15] = (unsigned long )21;
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(data_fault->ZSJH);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(data_fault->FSJH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(data_fault->GLB);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&(data_fault->JKZT);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&(data_fault->GPSJD);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(data_fault->GPSWD);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(data_fault->GPSHB);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(data_fault->GPSSD);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)(data_fault->D_ID2);
    sqlstm.sqhstl[24] = (unsigned long )5;
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)(data_fault->B_ID);
    sqlstm.sqhstl[25] = (unsigned long )5;
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)(data_fault->D_ID);
    sqlstm.sqhstl[26] = (unsigned long )5;
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&((data_fault->str_fault)[index].SEND_TYPE);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&(data_fault->CRK);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
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





    if (sqlca.sqlcode == 0)

    {

        //		memset(temp,0,1024);

        //		sprintf(temp,"loco.%s-%s:TCMSFAULT_STOP：故障入库成功\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO);

        //		lprintf(disp.e,temp);

        //		lprintf(disp.f,temp);

        //		cclog('e',temp);

        return 0;

    }

    else

    {

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:LDPFAULT_STOP：故障入库失败,ORACLE返回值：%d\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.f,temp);

        cclog('e',temp);

        return 1;

    }

}



unsigned char insert_to_ITF_TCMSFAULT_START(int index)

{

    char temp[1024];

    //printf("3\n");

    //printf("111 ITF_TCMSFAULT_START data_fault->CRK = %d\n",data_fault->CRK);

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_TCMSFAULT_START(

                IDX         ,/oCHAR(32) not null,                o/

                GZDM        ,/oNUMBER(10),                       o/

                GZMC        ,/oVARCHAR2(100),                    o/

                GZKSSJ      ,/oDATE,                             o/

                GZDJ        ,/oNUMBER(2),                        o/

                GZDM_WM     ,/oNUMBER(5),                        o/

                VER         ,/oNUMBER(3) default 10 not null,    o/

                T_TYPE_ID   ,/oCHAR(3),                          o/

                LOCO_NO     ,/oCHAR(4),                          o/

                AB          ,/oNUMBER(1) default 0,              o/

                D_ID        ,/oCHAR(4),                          o/

                BTSJ        ,/oDATE,                             o/

                RKSJ        ,/oDATE default SYSDATE,             o/

                CZH         ,/oNUMBER(5),                        o/

                SJJLH       ,/oNUMBER(5),                        o/

                SJSD        ,/oNUMBER(7,2),                      o/

                JCGKZ       ,/oNUMBER(5),                        o/

                XHJBH       ,/oNUMBER(5),                        o/

                XHJZLZ      ,/oNUMBER(5),                        o/

                CC          ,/oVARCHAR2(20),                     o/

                ZSJH        ,/oNUMBER(10),                       o/

                FSJH        ,/oNUMBER(10),                       o/

                GLB         ,/oNUMBER(10),                       o/

                JKZT        ,/oNUMBER(5),                        o/

                DRIVERNAME  ,/oVARCHAR2(30),                     o/

                DRIVERTEL   ,/oVARCHAR2(32),                     o/

                LINENO      ,/oNUMBER(5),                        o/

                LINENAME    ,/oVARCHAR2(32),                     o/

                STATIONNAME ,/oVARCHAR2(32),                     o/

                GPSJD       ,/oNUMBER(12,6),                     o/

                GPSWD       ,/oNUMBER(12,6),                     o/

                GPSHB       ,/oNUMBER(8,2),                      o/

                GPSSD       ,/oNUMBER(8,2),                      o/

                D_ID2       ,/oCHAR(4),                          o/

                B_ID        ,/oCHAR(2),                          o/

                B_ID2       , /oCHAR(2),                          o/

                GZDMSHOW,

                SEND_TYPE

                ,CRK

                )

            VALUES(

                :data_fault->str_fault[index].IDX         ,/oCHAR(32) not null,               o/

                :data_fault->str_fault[index].GZDM        ,/oNUMBER(10),                      o/

                trim(:data_fault->str_fault[index].GZMC)        ,/oVARCHAR2(100),                   o/

                to_date(:data_fault->str_fault[index].GZKSSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->str_fault[index].GZDJ        ,/oNUMBER(2),                       o/

                :data_fault->str_fault[index].GZDM_WM     ,/oNUMBER(5),                       o/

                :data_fault->VER         ,/oNUMBER(3) default 10 not null,   o/

                :data_fault->T_TYPE_ID   ,/oCHAR(3),                         o/

                :data_fault->LOCO_NO     ,/oCHAR(4),                         o/

                :data_fault->AB          ,/oNUMBER(1) default 0,             o/

                trim(:data_fault->D_ID)        ,/oCHAR(4),                         o/

                to_date(:data_fault->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_fault->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->CZH         ,/oNUMBER(5),                       o/

                :data_fault->SJJLH       ,/oNUMBER(5),                       o/

                :data_fault->SJSD        ,/oNUMBER(7,2),                     o/

                :data_fault->JCGKZ       ,/oNUMBER(5),                       o/

                :data_fault->XHJBH       ,/oNUMBER(5),                       o/

                :data_fault->XHJZLZ      ,/oNUMBER(5),                       o/

                :data_fault->CC          ,/oVARCHAR2(20),                    o/

                :data_fault->ZSJH        ,/oNUMBER(10),                      o/

                :data_fault->FSJH        ,/oNUMBER(10),                      o/

                :data_fault->GLB         ,/oNUMBER(10),                      o/

                :data_fault->JKZT        ,/oNUMBER(3),                       o/

                trim(:data_fault->DRIVERNAME)  ,/oVARCHAR2(30),                    o/

                trim(:data_fault->DRIVERTEL )  ,/oVARCHAR2(32),                    o/

                trim(:data_fault->LINENO)      ,/oNUMBER(5),                       o/

                trim(:data_fault->LINENAME)    ,/oVARCHAR2(32),                    o/

                trim(:data_fault->STATIONNAME) ,/oVARCHAR2(32),                    o/

                :data_fault->GPSJD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSWD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSHB       ,/oNUMBER(8,2),                     o/

                :data_fault->GPSSD       ,/oNUMBER(8,2),                     o/

                trim(:data_fault->D_ID2)       ,/oCHAR(4),                         o/

                trim(:data_fault->B_ID)        ,/oCHAR(2),                         o/

                trim(:data_fault->B_ID2)        ,/oCHAR(2),                         o/

                trim(:data_fault->str_fault[index].CODESHOW)  ,  /oVARCHAR2(20),                       o/

                :data_fault->str_fault[index].SEND_TYPE

                ,:data_fault->CRK

                //,0

                ); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_TCMSFAULT_START (IDX,GZDM,GZMC,GZKSSJ,GZ\
DJ,GZDM_WM,VER,T_TYPE_ID,LOCO_NO,AB,D_ID,BTSJ,RKSJ,CZH,SJJLH,SJSD,JCGKZ,XHJBH\
,XHJZLZ,CC,ZSJH,FSJH,GLB,JKZT,DRIVERNAME,DRIVERTEL,LINENO,LINENAME,STATIONNAM\
E,GPSJD,GPSWD,GPSHB,GPSSD,D_ID2,B_ID,B_ID2,GZDMSHOW,SEND_TYPE,CRK) values (:b\
0,:b1,trim(:b2),to_date(:b3,'yyyy-mm-dd hh24:mi:ss'),:b4,:b5,:b6,:b7,:b8,:b9,\
trim(:b10),to_date(:b11,'yyyy-mm-dd hh24:mi:ss'),to_date(:b12,'yyyy-mm-dd hh2\
4:mi:ss'),:b13,:b14,:b15,:b16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,trim(:b24),t\
rim(:b25),trim(:b26),trim(:b27),trim(:b28),:b29,:b30,:b31,:b32,trim(:b33),tri\
m(:b34),trim(:b35),trim(:b36),:b37,:b38)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3268;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_fault->str_fault)[index].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM);
    sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)((data_fault->str_fault)[index].GZMC);
    sqlstm.sqhstl[2] = (unsigned long )101;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)((data_fault->str_fault)[index].GZKSSJ);
    sqlstm.sqhstl[3] = (unsigned long )21;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&((data_fault->str_fault)[index].GZDJ);
    sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM_WM);
    sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&(data_fault->VER);
    sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)(data_fault->T_TYPE_ID);
    sqlstm.sqhstl[7] = (unsigned long )5;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)(data_fault->LOCO_NO);
    sqlstm.sqhstl[8] = (unsigned long )5;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&(data_fault->AB);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)(data_fault->D_ID);
    sqlstm.sqhstl[10] = (unsigned long )5;
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)(data_fault->RKSJ);
    sqlstm.sqhstl[11] = (unsigned long )21;
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)(data_fault->BTSJ);
    sqlstm.sqhstl[12] = (unsigned long )21;
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_fault->CZH);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_fault->SJJLH);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(data_fault->SJSD);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(data_fault->JCGKZ);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(data_fault->XHJBH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(data_fault->XHJZLZ);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)(data_fault->CC);
    sqlstm.sqhstl[19] = (unsigned long )21;
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&(data_fault->ZSJH);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(data_fault->FSJH);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(data_fault->GLB);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(data_fault->JKZT);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)(data_fault->DRIVERNAME);
    sqlstm.sqhstl[24] = (unsigned long )33;
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)(data_fault->DRIVERTEL);
    sqlstm.sqhstl[25] = (unsigned long )33;
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&(data_fault->LINENO);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)(data_fault->LINENAME);
    sqlstm.sqhstl[27] = (unsigned long )33;
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)(data_fault->STATIONNAME);
    sqlstm.sqhstl[28] = (unsigned long )33;
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&(data_fault->GPSJD);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(data_fault->GPSWD);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&(data_fault->GPSHB);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&(data_fault->GPSSD);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)(data_fault->D_ID2);
    sqlstm.sqhstl[33] = (unsigned long )5;
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)(data_fault->B_ID);
    sqlstm.sqhstl[34] = (unsigned long )5;
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)(data_fault->B_ID2);
    sqlstm.sqhstl[35] = (unsigned long )5;
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)((data_fault->str_fault)[index].CODESHOW);
    sqlstm.sqhstl[36] = (unsigned long )21;
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&((data_fault->str_fault)[index].SEND_TYPE);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&(data_fault->CRK);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
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



    if (sqlca.sqlcode == 0)

    {

        //		memset(temp,0,1024);

        //		sprintf(temp,"loco.%s-%s:TCMSFAULT_START：故障入库成功\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO);

        //		lprintf(disp.e,temp);

        //		lprintf(disp.f,temp);

        //		cclog('e',temp);

        return 0;

    }

    else

    {

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:TCMSFAULT_START：故障入库失败,ORACLE返回值：%d\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.f,temp);

        cclog('e',temp);

        return 1;

    }

}



unsigned char insert_to_ITF_TCMSFAULT_D_START(int index)

{

    char temp[1024];

    //printf("4\n");

    //printf("111 ITF_TCMSFAULT_D_START data_fault->CRK = %d\n",data_fault->CRK);

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_TCMSFAULT_D_START(

                IDX         ,/oCHAR(32) not null,                o/

                GZDM        ,/oNUMBER(10),                       o/

                GZMC        ,/oVARCHAR2(100),                    o/

                GZKSSJ      ,/oDATE,                             o/

                GZDJ        ,/oNUMBER(2),                        o/

                GZDM_WM     ,/oNUMBER(5),                        o/

                VER         ,/oNUMBER(3) default 10 not null,    o/

                T_TYPE_ID   ,/oCHAR(3),                          o/

                LOCO_NO     ,/oCHAR(4),                          o/

                AB          ,/oNUMBER(1) default 0,              o/

                D_ID        ,/oCHAR(4),                          o/

                BTSJ        ,/oDATE,                             o/

                RKSJ        ,/oDATE default SYSDATE,             o/

                CZH         ,/oNUMBER(5),                        o/

                SJJLH       ,/oNUMBER(5),                        o/

                SJSD        ,/oNUMBER(7,2),                      o/

                JCGKZ       ,/oNUMBER(5),                        o/

                XHJBH       ,/oNUMBER(5),                        o/

                XHJZLZ      ,/oNUMBER(5),                        o/

                CC          ,/oVARCHAR2(20),                     o/

                ZSJH        ,/oNUMBER(10),                       o/

                FSJH        ,/oNUMBER(10),                       o/

                GLB         ,/oNUMBER(10),                       o/

                JKZT        ,/oNUMBER(5),                        o/

                DRIVERNAME  ,/oVARCHAR2(30),                     o/

                DRIVERTEL   ,/oVARCHAR2(32),                     o/

                LINENO      ,/oNUMBER(5),                        o/

                LINENAME    ,/oVARCHAR2(32),                     o/

                STATIONNAME ,/oVARCHAR2(32),                     o/

                GPSJD       ,/oNUMBER(12,6),                     o/

                GPSWD       ,/oNUMBER(12,6),                     o/

                GPSHB       ,/oNUMBER(8,2),                      o/

                GPSSD       ,/oNUMBER(8,2),                      o/

                D_ID2       ,/oCHAR(4),                          o/

                B_ID        ,/oCHAR(2),                          o/

                B_ID2       , /oCHAR(2),                          o/

                GZDMSHOW,

                SEND_TYPE

                ,CRK

                )

            VALUES(

                :data_fault->str_fault[index].IDX         ,/oCHAR(32) not null,               o/

                :data_fault->str_fault[index].GZDM        ,/oNUMBER(10),                      o/

                trim(:data_fault->str_fault[index].GZMC)        ,/oVARCHAR2(100),                   o/

                to_date(:data_fault->str_fault[index].GZKSSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->str_fault[index].GZDJ        ,/oNUMBER(2),                       o/

                :data_fault->str_fault[index].GZDM_WM     ,/oNUMBER(5),                       o/

                :data_fault->VER         ,/oNUMBER(3) default 10 not null,   o/

                :data_fault->T_TYPE_ID   ,/oCHAR(3),                         o/

                :data_fault->LOCO_NO     ,/oCHAR(4),                         o/

                :data_fault->AB          ,/oNUMBER(1) default 0,             o/

                trim(:data_fault->D_ID)        ,/oCHAR(4),                         o/

                to_date(:data_fault->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_fault->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->CZH         ,/oNUMBER(5),                       o/

                :data_fault->SJJLH       ,/oNUMBER(5),                       o/

                :data_fault->SJSD        ,/oNUMBER(7,2),                     o/

                :data_fault->JCGKZ       ,/oNUMBER(5),                       o/

                :data_fault->XHJBH       ,/oNUMBER(5),                       o/

                :data_fault->XHJZLZ      ,/oNUMBER(5),                       o/

                :data_fault->CC          ,/oVARCHAR2(20),                    o/

                :data_fault->ZSJH        ,/oNUMBER(10),                      o/

                :data_fault->FSJH        ,/oNUMBER(10),                      o/

                :data_fault->GLB         ,/oNUMBER(10),                      o/

                :data_fault->JKZT        ,/oNUMBER(3),                       o/

                trim(:data_fault->DRIVERNAME)  ,/oVARCHAR2(30),                    o/

                trim(:data_fault->DRIVERTEL)   ,/oVARCHAR2(32),                    o/

                :data_fault->LINENO      ,/oNUMBER(5),                       o/

                trim(:data_fault->LINENAME)    ,/oVARCHAR2(32),                    o/

                trim(:data_fault->STATIONNAME) ,/oVARCHAR2(32),                    o/

                :data_fault->GPSJD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSWD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSHB       ,/oNUMBER(8,2),                     o/

                :data_fault->GPSSD       ,/oNUMBER(8,2),                     o/

                trim(:data_fault->D_ID2)       ,/oCHAR(4),                         o/

                trim(:data_fault->B_ID)        ,/oCHAR(2),                         o/

                trim(:data_fault->B_ID2)       ,/oCHAR(2),                         o/

                trim(:data_fault->str_fault[index].CODESHOW),     /oVARCHAR2(20),                       o/

                :data_fault->str_fault[index].SEND_TYPE

                ,:data_fault->CRK

                //,0

                ); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_TCMSFAULT_D_START (IDX,GZDM,GZMC,GZKSSJ,\
GZDJ,GZDM_WM,VER,T_TYPE_ID,LOCO_NO,AB,D_ID,BTSJ,RKSJ,CZH,SJJLH,SJSD,JCGKZ,XHJ\
BH,XHJZLZ,CC,ZSJH,FSJH,GLB,JKZT,DRIVERNAME,DRIVERTEL,LINENO,LINENAME,STATIONN\
AME,GPSJD,GPSWD,GPSHB,GPSSD,D_ID2,B_ID,B_ID2,GZDMSHOW,SEND_TYPE,CRK) values (\
:b0,:b1,trim(:b2),to_date(:b3,'yyyy-mm-dd hh24:mi:ss'),:b4,:b5,:b6,:b7,:b8,:b\
9,trim(:b10),to_date(:b11,'yyyy-mm-dd hh24:mi:ss'),to_date(:b12,'yyyy-mm-dd h\
h24:mi:ss'),:b13,:b14,:b15,:b16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,trim(:b24)\
,trim(:b25),:b26,trim(:b27),trim(:b28),:b29,:b30,:b31,:b32,trim(:b33),trim(:b\
34),trim(:b35),trim(:b36),:b37,:b38)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3439;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_fault->str_fault)[index].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM);
    sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)((data_fault->str_fault)[index].GZMC);
    sqlstm.sqhstl[2] = (unsigned long )101;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)((data_fault->str_fault)[index].GZKSSJ);
    sqlstm.sqhstl[3] = (unsigned long )21;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&((data_fault->str_fault)[index].GZDJ);
    sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM_WM);
    sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&(data_fault->VER);
    sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)(data_fault->T_TYPE_ID);
    sqlstm.sqhstl[7] = (unsigned long )5;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)(data_fault->LOCO_NO);
    sqlstm.sqhstl[8] = (unsigned long )5;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&(data_fault->AB);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)(data_fault->D_ID);
    sqlstm.sqhstl[10] = (unsigned long )5;
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)(data_fault->RKSJ);
    sqlstm.sqhstl[11] = (unsigned long )21;
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)(data_fault->BTSJ);
    sqlstm.sqhstl[12] = (unsigned long )21;
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_fault->CZH);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_fault->SJJLH);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(data_fault->SJSD);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(data_fault->JCGKZ);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(data_fault->XHJBH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(data_fault->XHJZLZ);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)(data_fault->CC);
    sqlstm.sqhstl[19] = (unsigned long )21;
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&(data_fault->ZSJH);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(data_fault->FSJH);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(data_fault->GLB);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(data_fault->JKZT);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)(data_fault->DRIVERNAME);
    sqlstm.sqhstl[24] = (unsigned long )33;
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)(data_fault->DRIVERTEL);
    sqlstm.sqhstl[25] = (unsigned long )33;
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&(data_fault->LINENO);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)(data_fault->LINENAME);
    sqlstm.sqhstl[27] = (unsigned long )33;
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)(data_fault->STATIONNAME);
    sqlstm.sqhstl[28] = (unsigned long )33;
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&(data_fault->GPSJD);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(data_fault->GPSWD);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&(data_fault->GPSHB);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&(data_fault->GPSSD);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)(data_fault->D_ID2);
    sqlstm.sqhstl[33] = (unsigned long )5;
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)(data_fault->B_ID);
    sqlstm.sqhstl[34] = (unsigned long )5;
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)(data_fault->B_ID2);
    sqlstm.sqhstl[35] = (unsigned long )5;
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)((data_fault->str_fault)[index].CODESHOW);
    sqlstm.sqhstl[36] = (unsigned long )21;
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&((data_fault->str_fault)[index].SEND_TYPE);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&(data_fault->CRK);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
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





    if (sqlca.sqlcode == 0)

    {

        //		memset(temp,0,1024);

        //		sprintf(temp,"loco.%s-%s:TCMSFAULT_D_START：故障入库成功\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO);

        //		lprintf(disp.e,temp);

        //		lprintf(disp.f,temp);

        //		cclog('e',temp);

        return 0;

    }

    else

    {

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:TCMSFAULT_D_START：故障入库失败,ORACLE返回值：%d\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.f,temp);

        cclog('e',temp);

        return 1;

    }

}



unsigned char insert_to_ITF_TCMSFAULT_STOP(int index)

{

    char temp[1024];

    //printf("5\n");

    //printf("111 ITF_TCMSFAULT_STOP data_fault->CRK = %d\n",data_fault->CRK);

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_TCMSFAULT_STOP(

                IDX       ,/oCHAR(32) not null,              o/

                GZDM      ,/oNUMBER(10),                     o/

                GZJSSJ    ,/oDATE,                           o/

                GZDM_WM   ,/oNUMBER(5),                      o/

                VER       ,/oNUMBER(3) default 10 not null,  o/

                T_TYPE_ID ,/oCHAR(3),                        o/

                LOCO_NO   ,/oCHAR(4),                        o/

                AB        ,/oNUMBER(1) default 0,            o/

                BTSJ      ,/oDATE,                           o/

                RKSJ      ,/oDATE default SYSDATE,           o/

                CZH       ,/oNUMBER(5),                      o/

                SJJLH     ,/oNUMBER(5),                      o/

                SJSD      ,/oNUMBER(7,2),                    o/

                JCGKZ     ,/oNUMBER(5),                      o/

                XHJBH     ,/oNUMBER(5),                      o/

                XHJZLZ    ,/oNUMBER(5),                      o/

                CC        ,/oVARCHAR2(20),                   o/

                ZSJH      ,/oNUMBER(10),                     o/

                FSJH      ,/oNUMBER(10),                     o/

                GLB       ,/oNUMBER(10),                     o/

                JKZT      ,/oNUMBER(3),                      o/

                GPSJD     ,/oNUMBER(12,6),                   o/

                GPSWD     ,/oNUMBER(12,6),                   o/

                GPSHB     ,/oNUMBER(8,2),                    o/

                GPSSD     ,/oNUMBER(8,2),                    o/

                D_ID2     ,/oCHAR(4),                        o/

                B_ID      ,/oCHAR(2),                        o/

                D_ID      ,/oCHAR(4)                         o/

                GZDMSHOW,

                SEND_TYPE

                ,CRK

                )

            VALUES(

                :data_fault->str_fault[index].IDX         ,/oCHAR(32) not null,               o/

                :data_fault->str_fault[index].GZDM        ,/oNUMBER(10),                      o/

                to_date(:data_fault->str_fault[index].GZKSSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->str_fault[index].GZDM_WM     ,/oNUMBER(5),                       o/

                :data_fault->VER         ,/oNUMBER(3) default 10 not null,   o/

                :data_fault->T_TYPE_ID   ,/oCHAR(3),                         o/

                :data_fault->LOCO_NO     ,/oCHAR(4),                         o/

                :data_fault->AB          ,/oNUMBER(1) default 0,             o/

                to_date(:data_fault->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_fault->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->CZH         ,/oNUMBER(5),                       o/

                :data_fault->SJJLH       ,/oNUMBER(5),                       o/

                :data_fault->SJSD        ,/oNUMBER(7,2),                     o/

                :data_fault->JCGKZ       ,/oNUMBER(5),                       o/

                :data_fault->XHJBH       ,/oNUMBER(5),                       o/

                :data_fault->XHJZLZ      ,/oNUMBER(5),                       o/

                :data_fault->CC          ,/oVARCHAR2(20),                    o/

                :data_fault->ZSJH        ,/oNUMBER(10),                      o/

                :data_fault->FSJH        ,/oNUMBER(10),                      o/

                :data_fault->GLB         ,/oNUMBER(10),                      o/

                :data_fault->JKZT        ,/oNUMBER(3),                       o/

                :data_fault->GPSJD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSWD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSHB       ,/oNUMBER(8,2),                     o/

                :data_fault->GPSSD       ,/oNUMBER(8,2),                     o/

                trim(:data_fault->D_ID2)       ,/oCHAR(4),                         o/

                trim(:data_fault->B_ID)        ,/oCHAR(2),                         o/

                trim(:data_fault->D_ID)        ,/oCHAR(4),                         o/

                trim(:data_fault->str_fault[index].CODESHOW),     /oVARCHAR2(20),                       o/

                :data_fault->str_fault[index].SEND_TYPE

                ,:data_fault->CRK

                //,0

                ); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_TCMSFAULT_STOP (IDX,GZDM,GZJSSJ,GZDM_WM,\
VER,T_TYPE_ID,LOCO_NO,AB,BTSJ,RKSJ,CZH,SJJLH,SJSD,JCGKZ,XHJBH,XHJZLZ,CC,ZSJH,\
FSJH,GLB,JKZT,GPSJD,GPSWD,GPSHB,GPSSD,D_ID2,B_ID,D_ID,GZDMSHOW,SEND_TYPE,CRK)\
 values (:b0,:b1,to_date(:b2,'yyyy-mm-dd hh24:mi:ss'),:b3,:b4,:b5,:b6,:b7,to_\
date(:b8,'yyyy-mm-dd hh24:mi:ss'),to_date(:b9,'yyyy-mm-dd hh24:mi:ss'),:b10,:\
b11,:b12,:b13,:b14,:b15,:b16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,:b24,trim(:b2\
5),trim(:b26),trim(:b27),trim(:b28),:b29,:b30)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3610;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_fault->str_fault)[index].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM);
    sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)((data_fault->str_fault)[index].GZKSSJ);
    sqlstm.sqhstl[2] = (unsigned long )21;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM_WM);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)&(data_fault->VER);
    sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_fault->T_TYPE_ID);
    sqlstm.sqhstl[5] = (unsigned long )5;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)(data_fault->LOCO_NO);
    sqlstm.sqhstl[6] = (unsigned long )5;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&(data_fault->AB);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)(data_fault->RKSJ);
    sqlstm.sqhstl[8] = (unsigned long )21;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)(data_fault->BTSJ);
    sqlstm.sqhstl[9] = (unsigned long )21;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&(data_fault->CZH);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_fault->SJJLH);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_fault->SJSD);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_fault->JCGKZ);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_fault->XHJBH);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(data_fault->XHJZLZ);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)(data_fault->CC);
    sqlstm.sqhstl[16] = (unsigned long )21;
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(data_fault->ZSJH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(data_fault->FSJH);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&(data_fault->GLB);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&(data_fault->JKZT);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(data_fault->GPSJD);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(data_fault->GPSWD);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(data_fault->GPSHB);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&(data_fault->GPSSD);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)(data_fault->D_ID2);
    sqlstm.sqhstl[25] = (unsigned long )5;
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)(data_fault->B_ID);
    sqlstm.sqhstl[26] = (unsigned long )5;
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)(data_fault->D_ID);
    sqlstm.sqhstl[27] = (unsigned long )5;
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)((data_fault->str_fault)[index].CODESHOW);
    sqlstm.sqhstl[28] = (unsigned long )21;
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&((data_fault->str_fault)[index].SEND_TYPE);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(data_fault->CRK);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
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





    if (sqlca.sqlcode == 0)

    {

        //		memset(temp,0,1024);

        //		sprintf(temp,"loco.%s-%s:TCMSFAULT_STOP：故障入库成功\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO);

        //		lprintf(disp.e,temp);

        //		lprintf(disp.f,temp);

        //		cclog('e',temp);

        return 0;

    }

    else

    {

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:TCMSFAULT_STOP：故障入库失败,ORACLE返回值：%d\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.f,temp);

        cclog('e',temp);

        return 1;

    }

}



unsigned char insert_to_ITF_6AFAULT_START(int index)

{

    char temp[1024];

    //printf("111 ITF_6AFAULT_START data_fault->CRK = %d\n",data_fault->CRK);

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_6AFAULT_START(

                IDX         ,/oCHAR(32) not null,              o/

                GZDM        ,/oNUMBER(10),                     o/

                GZMC        ,/oVARCHAR2(100),                  o/

                GZKSSJ      ,/oDATE,                           o/

                BTSJ        ,/oDATE,                           o/

                RKSJ        ,/oDATE default SYSDATE,           o/

                GZDJ        ,/oNUMBER(2),                      o/

                GZDM_WM     ,/oNUMBER(5),                      o/

                VER         ,/oNUMBER(3) default 10 not null,  o/

                D_ID        ,/oCHAR(4),                        o/

                T_TYPE_ID   ,/oCHAR(3),                        o/

                LOCO_NO     ,/oCHAR(4),                        o/

                AB          ,/oNUMBER(1) default 0,            o/

                CZH         ,/oNUMBER(5),                      o/

                SJJLH       ,/oNUMBER(5),                      o/

                SJSD        ,/oNUMBER(7,2),                    o/

                JCGKZ       ,/oNUMBER(5),                      o/

                XHJBH       ,/oNUMBER(5),                      o/

                XHJZLZ      ,/oNUMBER(5),                      o/

                CC          ,/oVARCHAR2(20),                   o/

                ZSJH        ,/oNUMBER(10),                     o/

                FSJH        ,/oNUMBER(10),                     o/

                GLB         ,/oNUMBER(10),                     o/

                JKZT        ,/oNUMBER(3),                      o/

                DRIVERNAME  ,/oVARCHAR2(30),                   o/

                DRIVERTEL   ,/oVARCHAR2(32),                   o/

                LINENO      ,/oNUMBER(5),                      o/

                LINENAME    ,/oVARCHAR2(32),                   o/

                STATIONNAME ,/oVARCHAR2(32),                   o/

                GPSJD       ,/oNUMBER(12,6),                   o/

                GPSWD       ,/oNUMBER(12,6),                   o/

                GPSHB       ,/oNUMBER(8,2),                    o/

                GPSSD       ,/oNUMBER(8,2),                    o/

                D_ID2       ,/oCHAR(4),                        o/

                B_ID        ,/oCHAR(2),                        o/

                B_ID2       ,/oCHAR(2),                        o/

                GZDMSHOW,

                SEND_TYPE

                ,CRK

                )

            VALUES(

                :data_fault->str_fault[index].IDX         ,/oCHAR(32) not null,               o/

                :data_fault->str_fault[index].GZDM        ,/oNUMBER(10),                      o/

                trim(:data_fault->str_fault[index].GZMC)        ,/oVARCHAR2(100),                   o/

                to_date(:data_fault->str_fault[index].GZKSSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_fault->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_fault->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->str_fault[index].GZDJ        ,/oNUMBER(2),                       o/

                :data_fault->str_fault[index].GZDM_WM     ,/oNUMBER(5),                       o/

                :data_fault->VER         ,/oNUMBER(3) default 10 not null,   o/

                trim(:data_fault->D_ID)        ,/oCHAR(4),                         o/

                :data_fault->T_TYPE_ID   ,/oCHAR(3),                         o/

                :data_fault->LOCO_NO     ,/oCHAR(4),                         o/

                :data_fault->AB          ,/oNUMBER(1) default 0,             o/

                :data_fault->CZH         ,/oNUMBER(5),                       o/

                :data_fault->SJJLH       ,/oNUMBER(5),                       o/

                :data_fault->SJSD        ,/oNUMBER(7,2),                     o/

                :data_fault->JCGKZ       ,/oNUMBER(5),                       o/

                :data_fault->XHJBH       ,/oNUMBER(5),                       o/

                :data_fault->XHJZLZ      ,/oNUMBER(5),                       o/

                :data_fault->CC          ,/oVARCHAR2(20),                    o/

                :data_fault->ZSJH        ,/oNUMBER(10),                      o/

                :data_fault->FSJH        ,/oNUMBER(10),                      o/

                :data_fault->GLB         ,/oNUMBER(10),                      o/

                :data_fault->JKZT        ,/oNUMBER(3),                       o/

                trim(:data_fault->DRIVERNAME)  ,/oVARCHAR2(30),                    o/

                trim(:data_fault->DRIVERTEL)   ,/oVARCHAR2(32),                    o/

                :data_fault->LINENO      ,/oNUMBER(5),                       o/

                trim(:data_fault->LINENAME)    ,/oVARCHAR2(32),                    o/

                trim(:data_fault->STATIONNAME) ,/oVARCHAR2(32),                    o/

                :data_fault->GPSJD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSWD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSHB       ,/oNUMBER(8,2),                     o/

                :data_fault->GPSSD       ,/oNUMBER(8,2),                     o/

                trim(:data_fault->D_ID2)       ,/oCHAR(4),                         o/

                trim(:data_fault->B_ID)        ,/oCHAR(2),                         o/

                trim(:data_fault->B_ID2)       , /oCHAR(2),                         o/

                trim(:data_fault->str_fault[index].CODESHOW)  ,   /oVARCHAR2(20),                       o/

                :data_fault->str_fault[index].SEND_TYPE

                ,:data_fault->CRK

                //,0

                ); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_6AFAULT_START (IDX,GZDM,GZMC,GZKSSJ,BTSJ\
,RKSJ,GZDJ,GZDM_WM,VER,D_ID,T_TYPE_ID,LOCO_NO,AB,CZH,SJJLH,SJSD,JCGKZ,XHJBH,X\
HJZLZ,CC,ZSJH,FSJH,GLB,JKZT,DRIVERNAME,DRIVERTEL,LINENO,LINENAME,STATIONNAME,\
GPSJD,GPSWD,GPSHB,GPSSD,D_ID2,B_ID,B_ID2,GZDMSHOW,SEND_TYPE,CRK) values (:b0,\
:b1,trim(:b2),to_date(:b3,'yyyy-mm-dd hh24:mi:ss'),to_date(:b4,'yyyy-mm-dd hh\
24:mi:ss'),to_date(:b5,'yyyy-mm-dd hh24:mi:ss'),:b6,:b7,:b8,trim(:b9),:b10,:b\
11,:b12,:b13,:b14,:b15,:b16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,trim(:b24),tri\
m(:b25),:b26,trim(:b27),trim(:b28),:b29,:b30,:b31,:b32,trim(:b33),trim(:b34),\
trim(:b35),trim(:b36),:b37,:b38)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3749;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_fault->str_fault)[index].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM);
    sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)((data_fault->str_fault)[index].GZMC);
    sqlstm.sqhstl[2] = (unsigned long )101;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)((data_fault->str_fault)[index].GZKSSJ);
    sqlstm.sqhstl[3] = (unsigned long )21;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_fault->RKSJ);
    sqlstm.sqhstl[4] = (unsigned long )21;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_fault->BTSJ);
    sqlstm.sqhstl[5] = (unsigned long )21;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&((data_fault->str_fault)[index].GZDJ);
    sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM_WM);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&(data_fault->VER);
    sqlstm.sqhstl[8] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)(data_fault->D_ID);
    sqlstm.sqhstl[9] = (unsigned long )5;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)(data_fault->T_TYPE_ID);
    sqlstm.sqhstl[10] = (unsigned long )5;
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)(data_fault->LOCO_NO);
    sqlstm.sqhstl[11] = (unsigned long )5;
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_fault->AB);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_fault->CZH);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_fault->SJJLH);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(data_fault->SJSD);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(data_fault->JCGKZ);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(data_fault->XHJBH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(data_fault->XHJZLZ);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)(data_fault->CC);
    sqlstm.sqhstl[19] = (unsigned long )21;
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&(data_fault->ZSJH);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(data_fault->FSJH);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(data_fault->GLB);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(data_fault->JKZT);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)(data_fault->DRIVERNAME);
    sqlstm.sqhstl[24] = (unsigned long )33;
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)(data_fault->DRIVERTEL);
    sqlstm.sqhstl[25] = (unsigned long )33;
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&(data_fault->LINENO);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)(data_fault->LINENAME);
    sqlstm.sqhstl[27] = (unsigned long )33;
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)(data_fault->STATIONNAME);
    sqlstm.sqhstl[28] = (unsigned long )33;
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&(data_fault->GPSJD);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(data_fault->GPSWD);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&(data_fault->GPSHB);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&(data_fault->GPSSD);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)(data_fault->D_ID2);
    sqlstm.sqhstl[33] = (unsigned long )5;
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)(data_fault->B_ID);
    sqlstm.sqhstl[34] = (unsigned long )5;
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)(data_fault->B_ID2);
    sqlstm.sqhstl[35] = (unsigned long )5;
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)((data_fault->str_fault)[index].CODESHOW);
    sqlstm.sqhstl[36] = (unsigned long )21;
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&((data_fault->str_fault)[index].SEND_TYPE);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&(data_fault->CRK);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
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



    //printf("ITF_6AFAULT_START data_fault->CRK = %d\n",data_fault->CRK);

    if (sqlca.sqlcode == 0)

    {

        //		memset(temp,0,1024);

        //		sprintf(temp,"loco.%s-%s:6AFAULT_START：故障入库成功\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO);

        //		lprintf(disp.e,temp);

        //		lprintf(disp.f,temp);

        //		cclog('e',temp);

        return 0;

    }

    else

    {

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:6AFAULT_START：故障入库失败,ORACLE返回值：%d\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.f,temp);

        cclog('e',temp);

        return 1;

    }

}



unsigned char insert_to_ITF_6AFAULT_STOP(int index)

{

    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_6AFAULT_STOP(

                IDX       ,/oCHAR(32) not null,               o/

                GZDM      ,/oNUMBER(10),                      o/

                GZJSSJ    ,/oDATE,                            o/

                BTSJ      ,/oDATE,                            o/

                RKSJ      ,/oDATE default SYSDATE,            o/

                GZDM_WM   ,/oNUMBER(5),                       o/

                VER       ,/oNUMBER(3) default 10 not null,   o/

                T_TYPE_ID ,/oCHAR(3),                         o/

                LOCO_NO   ,/oCHAR(4),                         o/

                AB        ,/oNUMBER(1) default 0 not null,    o/

                CZH       ,/oNUMBER(5),                       o/

                SJJLH     ,/oNUMBER(5),                       o/

                SJSD      ,/oNUMBER(7,2),                     o/

                JCGKZ     ,/oNUMBER(5),                       o/

                XHJBH     ,/oNUMBER(5),                       o/

                XHJZLZ    ,/oNUMBER(5),                       o/

                CC        ,/oVARCHAR2(20),                    o/

                ZSJH      ,/oNUMBER(10),                      o/

                FSJH      ,/oNUMBER(10),                      o/

                GLB       ,/oNUMBER(10),                      o/

                JKZT      ,/oNUMBER(3),                       o/

                GPSJD     ,/oNUMBER(12,6),                    o/

                GPSWD     ,/oNUMBER(12,6),                    o/

                GPSHB     ,/oNUMBER(8,2),                     o/

                GPSSD     ,/oNUMBER(8,2),                     o/

                D_ID2     ,/oCHAR(4),                         o/

                B_ID      ,/oCHAR(2),                         o/

                D_ID      ,/oCHAR(4)                          o/

                GZDMSHOW,

                SEND_TYPE

                ,CRK

                )

            VALUES(

                :data_fault->str_fault[index].IDX         ,/oCHAR(32) not null,               o/

                :data_fault->str_fault[index].GZDM        ,/oNUMBER(10),                      o/

                to_date(:data_fault->str_fault[index].GZKSSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_fault->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_fault->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->str_fault[index].GZDM_WM     ,/oNUMBER(5),                       o/

                :data_fault->VER         ,/oNUMBER(3) default 10 not null,   o/

                :data_fault->T_TYPE_ID   ,/oCHAR(3),                         o/

                :data_fault->LOCO_NO     ,/oCHAR(4),                         o/

                :data_fault->AB          ,/oNUMBER(1) default 0,             o/

                :data_fault->CZH         ,/oNUMBER(5),                       o/

                :data_fault->SJJLH       ,/oNUMBER(5),                       o/

                :data_fault->SJSD        ,/oNUMBER(7,2),                     o/

                :data_fault->JCGKZ       ,/oNUMBER(5),                       o/

                :data_fault->XHJBH       ,/oNUMBER(5),                       o/

                :data_fault->XHJZLZ      ,/oNUMBER(5),                       o/

                :data_fault->CC          ,/oVARCHAR2(20),                    o/

                :data_fault->ZSJH        ,/oNUMBER(10),                      o/

                :data_fault->FSJH        ,/oNUMBER(10),                      o/

                :data_fault->GLB         ,/oNUMBER(10),                      o/

                :data_fault->JKZT        ,/oNUMBER(3),                       o/

                :data_fault->GPSJD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSWD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSHB       ,/oNUMBER(8,2),                     o/

                :data_fault->GPSSD       ,/oNUMBER(8,2),                     o/

                trim(:data_fault->D_ID2)       ,/oCHAR(4),                         o/

                trim(:data_fault->B_ID)        ,/oCHAR(2),                         o/

                trim(:data_fault->D_ID)        ,/oCHAR(4),                         o/

                trim(:data_fault->str_fault[index].CODESHOW)    , /oVARCHAR2(20),                       o/

                :data_fault->str_fault[index].SEND_TYPE

                ,:data_fault->CRK

                //,0

                ); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_6AFAULT_STOP (IDX,GZDM,GZJSSJ,BTSJ,RKSJ,\
GZDM_WM,VER,T_TYPE_ID,LOCO_NO,AB,CZH,SJJLH,SJSD,JCGKZ,XHJBH,XHJZLZ,CC,ZSJH,FS\
JH,GLB,JKZT,GPSJD,GPSWD,GPSHB,GPSSD,D_ID2,B_ID,D_ID,GZDMSHOW,SEND_TYPE,CRK) v\
alues (:b0,:b1,to_date(:b2,'yyyy-mm-dd hh24:mi:ss'),to_date(:b3,'yyyy-mm-dd h\
h24:mi:ss'),to_date(:b4,'yyyy-mm-dd hh24:mi:ss'),:b5,:b6,:b7,:b8,:b9,:b10,:b1\
1,:b12,:b13,:b14,:b15,:b16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,:b24,trim(:b25)\
,trim(:b26),trim(:b27),trim(:b28),:b29,:b30)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3920;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_fault->str_fault)[index].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM);
    sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)((data_fault->str_fault)[index].GZKSSJ);
    sqlstm.sqhstl[2] = (unsigned long )21;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)(data_fault->RKSJ);
    sqlstm.sqhstl[3] = (unsigned long )21;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_fault->BTSJ);
    sqlstm.sqhstl[4] = (unsigned long )21;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM_WM);
    sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&(data_fault->VER);
    sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)(data_fault->T_TYPE_ID);
    sqlstm.sqhstl[7] = (unsigned long )5;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)(data_fault->LOCO_NO);
    sqlstm.sqhstl[8] = (unsigned long )5;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&(data_fault->AB);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&(data_fault->CZH);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_fault->SJJLH);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_fault->SJSD);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_fault->JCGKZ);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_fault->XHJBH);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(data_fault->XHJZLZ);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)(data_fault->CC);
    sqlstm.sqhstl[16] = (unsigned long )21;
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(data_fault->ZSJH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(data_fault->FSJH);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&(data_fault->GLB);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&(data_fault->JKZT);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(data_fault->GPSJD);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(data_fault->GPSWD);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(data_fault->GPSHB);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&(data_fault->GPSSD);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)(data_fault->D_ID2);
    sqlstm.sqhstl[25] = (unsigned long )5;
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)(data_fault->B_ID);
    sqlstm.sqhstl[26] = (unsigned long )5;
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)(data_fault->D_ID);
    sqlstm.sqhstl[27] = (unsigned long )5;
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)((data_fault->str_fault)[index].CODESHOW);
    sqlstm.sqhstl[28] = (unsigned long )21;
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&((data_fault->str_fault)[index].SEND_TYPE);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(data_fault->CRK);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
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



    if (sqlca.sqlcode == 0)

    {

        //		memset(temp,0,1024);

        //		sprintf(temp,"loco.%s-%s:6AFAULT_STOP：故障入库成功\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO);

        //		lprintf(disp.e,temp);

        //		lprintf(disp.f,temp);

        //		cclog('e',temp);

        return 0;

    }

    else

    {

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:6AFAULT_STOP：故障入库失败,ORACLE返回值：%d\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.f,temp);

        cclog('e',temp);

        return 1;

    }

}



unsigned char insert_to_ITF_FAULT_UNTREATED(int index)

{

    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_FAULT_UNTREATED(

                IDX         ,/oCHAR(32) not null,               o/

                VER         ,/oNUMBER(3) default 10 not null,   o/

                D_ID        ,/oCHAR(4),                         o/

                T_TYPE_ID   ,/oCHAR(3),                         o/

                LOCO_NO     ,/oCHAR(4),                         o/

                AB          ,/oNUMBER(1),                       o/

                BTSJ        ,/oDATE,                            o/

                RKSJ        ,/oDATE default SYSDATE,            o/

                GZKSSJ      ,/oDATE,                            o/

                CZH         ,/oNUMBER(5),                       o/

                SJJLH       ,/oNUMBER(5),                       o/

                SJSD        ,/oNUMBER(7,2),                     o/

                JCGKZ       ,/oNUMBER(5),                       o/

                XHJBH       ,/oNUMBER(5),                       o/

                XHJZLZ      ,/oNUMBER(5),                       o/

                CC          ,/oVARCHAR2(20),                    o/

                ZSJH        ,/oNUMBER(10),                      o/

                FSJH        ,/oNUMBER(10),                      o/

                GLB         ,/oNUMBER(10),                      o/

                GZDM        ,/oNUMBER(10),                      o/

                GZLY        ,/oNUMBER(2),                       o/

                GZMC        ,/oVARCHAR2(100),                   o/

                GZDJ        ,/oNUMBER(2) default 0,             o/

                GZDM_WM     ,/oNUMBER(5),                       o/

                DRIVERNAME  ,/oVARCHAR2(30),                    o/

                DRIVERTEL   ,/oVARCHAR2(32),                    o/

                LINENO      ,/oNUMBER(5),                       o/

                LINENAME    ,/oVARCHAR2(32),                    o/

                STATIONNAME ,/oVARCHAR2(32),                    o/

                JKZT        ,/oNUMBER(3),                       o/

                GPSJD       ,/oNUMBER(12,6),                    o/

                GPSWD       ,/oNUMBER(12,6),                    o/

                GPSHB       ,/oNUMBER(8,2),                     o/

                GPSSD       ,/oNUMBER(8,2),                     o/

                D_ID2       ,/oCHAR(4),                         o/

                B_ID        ,/oCHAR(2)                          o/

                B_ID2       , /oCHAR(2)                          o/

                GZDMSHOW,

                SEND_TYPE

                ,CRK

                )

            VALUES(

                :data_fault->str_fault[index].IDX         ,/oCHAR(32) not null,               o/

                :data_fault->VER         ,/oNUMBER(3) default 10 not null,   o/

                trim(:data_fault->D_ID )       ,/oCHAR(4),                         o/

                :data_fault->T_TYPE_ID   ,/oCHAR(3),                         o/

                :data_fault->LOCO_NO     ,/oCHAR(4),                         o/

                :data_fault->AB          ,/oNUMBER(1) default 0,             o/

                to_date(:data_fault->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_fault->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_fault->str_fault[index].GZKSSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->CZH         ,/oNUMBER(5),                       o/

                :data_fault->SJJLH       ,/oNUMBER(5),                       o/

                :data_fault->SJSD        ,/oNUMBER(7,2),                     o/

                :data_fault->JCGKZ       ,/oNUMBER(5),                       o/

                :data_fault->XHJBH       ,/oNUMBER(5),                       o/

                :data_fault->XHJZLZ      ,/oNUMBER(5),                       o/

                :data_fault->CC          ,/oVARCHAR2(20),                    o/

                :data_fault->ZSJH        ,/oNUMBER(10),                      o/

                :data_fault->FSJH        ,/oNUMBER(10),                      o/

                :data_fault->GLB         ,/oNUMBER(10),                      o/

                :data_fault->str_fault[index].GZDM        ,/oNUMBER(10),                      o/

                :data_fault->str_fault[index].GZSB,

                trim(:data_fault->str_fault[index].GZMC)        ,/oVARCHAR2(100),                   o/

                :data_fault->str_fault[index].GZDJ        ,/oNUMBER(2),                       o/

                :data_fault->str_fault[index].GZDM_WM     ,/oNUMBER(5),                       o/

                trim(:data_fault->DRIVERNAME ) ,/oVARCHAR2(30),                    o/

                trim(:data_fault->DRIVERTEL)   ,/oVARCHAR2(32),                    o/

                :data_fault->LINENO      ,/oNUMBER(5),                       o/

                trim(:data_fault->LINENAME)    ,/oVARCHAR2(32),                    o/

                trim(:data_fault->STATIONNAME) ,/oVARCHAR2(32),                    o/

                :data_fault->JKZT        ,/oNUMBER(3),                       o/

                :data_fault->GPSJD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSWD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSHB       ,/oNUMBER(8,2),                     o/

                :data_fault->GPSSD       ,/oNUMBER(8,2),                     o/

                trim(:data_fault->D_ID2 )      ,/oCHAR(4),                         o/

                trim(:data_fault->B_ID)        ,/oCHAR(2),                         o/

                trim(:data_fault->B_ID2)       ,/oCHAR(2),                         o/

                trim(:data_fault->str_fault[index].CODESHOW)  ,   /oVARCHAR2(20),                       o/

                :data_fault->str_fault[index].SEND_TYPE

                ,:data_fault->CRK

                //,0

                ); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_FAULT_UNTREATED (IDX,VER,D_ID,T_TYPE_ID,\
LOCO_NO,AB,BTSJ,RKSJ,GZKSSJ,CZH,SJJLH,SJSD,JCGKZ,XHJBH,XHJZLZ,CC,ZSJH,FSJH,GL\
B,GZDM,GZLY,GZMC,GZDJ,GZDM_WM,DRIVERNAME,DRIVERTEL,LINENO,LINENAME,STATIONNAM\
E,JKZT,GPSJD,GPSWD,GPSHB,GPSSD,D_ID2,B_ID,B_ID2,GZDMSHOW,SEND_TYPE,CRK) value\
s (:b0,:b1,trim(:b2),:b3,:b4,:b5,to_date(:b6,'yyyy-mm-dd hh24:mi:ss'),to_date\
(:b7,'yyyy-mm-dd hh24:mi:ss'),to_date(:b8,'yyyy-mm-dd hh24:mi:ss'),:b9,:b10,:\
b11,:b12,:b13,:b14,:b15,:b16,:b17,:b18,:b19,:b20,trim(:b21),:b22,:b23,trim(:b\
24),trim(:b25),:b26,trim(:b27),trim(:b28),:b29,:b30,:b31,:b32,:b33,trim(:b34)\
,trim(:b35),trim(:b36),trim(:b37),:b38,:b39)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )4059;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_fault->str_fault)[index].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&(data_fault->VER);
    sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_fault->D_ID);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)(data_fault->T_TYPE_ID);
    sqlstm.sqhstl[3] = (unsigned long )5;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_fault->LOCO_NO);
    sqlstm.sqhstl[4] = (unsigned long )5;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&(data_fault->AB);
    sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)(data_fault->RKSJ);
    sqlstm.sqhstl[6] = (unsigned long )21;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)(data_fault->BTSJ);
    sqlstm.sqhstl[7] = (unsigned long )21;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)((data_fault->str_fault)[index].GZKSSJ);
    sqlstm.sqhstl[8] = (unsigned long )21;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&(data_fault->CZH);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&(data_fault->SJJLH);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_fault->SJSD);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_fault->JCGKZ);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_fault->XHJBH);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_fault->XHJZLZ);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)(data_fault->CC);
    sqlstm.sqhstl[15] = (unsigned long )21;
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(data_fault->ZSJH);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(data_fault->FSJH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(data_fault->GLB);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&((data_fault->str_fault)[index].GZSB);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)((data_fault->str_fault)[index].GZMC);
    sqlstm.sqhstl[21] = (unsigned long )101;
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&((data_fault->str_fault)[index].GZDJ);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM_WM);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)(data_fault->DRIVERNAME);
    sqlstm.sqhstl[24] = (unsigned long )33;
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)(data_fault->DRIVERTEL);
    sqlstm.sqhstl[25] = (unsigned long )33;
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&(data_fault->LINENO);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)(data_fault->LINENAME);
    sqlstm.sqhstl[27] = (unsigned long )33;
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)(data_fault->STATIONNAME);
    sqlstm.sqhstl[28] = (unsigned long )33;
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&(data_fault->JKZT);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(data_fault->GPSJD);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&(data_fault->GPSWD);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&(data_fault->GPSHB);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&(data_fault->GPSSD);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)(data_fault->D_ID2);
    sqlstm.sqhstl[34] = (unsigned long )5;
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)(data_fault->B_ID);
    sqlstm.sqhstl[35] = (unsigned long )5;
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)(data_fault->B_ID2);
    sqlstm.sqhstl[36] = (unsigned long )5;
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)((data_fault->str_fault)[index].CODESHOW);
    sqlstm.sqhstl[37] = (unsigned long )21;
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&((data_fault->str_fault)[index].SEND_TYPE);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&(data_fault->CRK);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
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





    if (sqlca.sqlcode == 0)

    {

        //		memset(temp,0,1024);

        //		sprintf(temp,"loco.%s-%s:FAULT_UNTREATED：故障入库成功\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO);

        //		lprintf(disp.e,temp);

        //		lprintf(disp.f,temp);

        //		cclog('e',temp);

        return 0;

    }

    else

    {

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:FAULT_UNTREATED：故障入库失败,ORACLE返回值：%d\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.f,temp);

        cclog('e',temp);

        return 1;

    }

}



unsigned char insert_to_ITF_FAULT_INVALID(int index)

{

    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_FAULT_INVALID(

                IDX         ,/oCHAR(32) not null,                o/

                GZDM        ,/oNUMBER(10),                       o/

                GZLY        ,/oNUMBER(2),                       o/

                GZMC        ,/oVARCHAR2(100),                    o/

                GZKSSJ      ,/oDATE,                             o/

                GZDJ        ,/oNUMBER(2),                        o/

                GZDM_WM     ,/oNUMBER(5),                        o/

                VER         ,/oNUMBER(3) default 10 not null,    o/

                D_ID        ,/oCHAR(4),                          o/

                T_TYPE_ID   ,/oCHAR(3),                          o/

                LOCO_NO     ,/oCHAR(4),                          o/

                AB          ,/oNUMBER(1) default 0,              o/

                BTSJ        ,/oDATE,                             o/

                RKSJ        ,/oDATE default SYSDATE,             o/

                CZH         ,/oNUMBER(5),                        o/

                SJJLH       ,/oNUMBER(5),                        o/

                SJSD        ,/oNUMBER(7,2),                      o/

                JCGKZ       ,/oNUMBER(5),                        o/

                XHJBH       ,/oNUMBER(5),                        o/

                XHJZLZ      ,/oNUMBER(5),                        o/

                CC          ,/oVARCHAR2(20),                     o/

                ZSJH        ,/oNUMBER(10),                       o/

                FSJH        ,/oNUMBER(10),                       o/

                GLB         ,/oNUMBER(10),                       o/

                JKZT        ,/oNUMBER(3),                        o/

                DRIVERNAME  ,/oVARCHAR2(30),                     o/

                DRIVERTEL   ,/oVARCHAR2(32),                     o/

                LINENO      ,/oNUMBER(5),                        o/

                LINENAME    ,/oVARCHAR2(32),                     o/

                STATIONNAME ,/oVARCHAR2(32),                     o/

                GPSJD       ,/oNUMBER(12,6),                     o/

                GPSWD       ,/oNUMBER(12,6),                     o/

                GPSHB       ,/oNUMBER(8,2),                      o/

                GPSSD       ,/oNUMBER(8,2),                      o/

                D_ID2       ,/oCHAR(4),                          o/

                B_ID        ,/oCHAR(2)                           o/

                GZDMSHOW,

                SEND_TYPE

                ,CRK

                )

            VALUES(

                :data_fault->str_fault[index].IDX         ,/oCHAR(32) not null,               o/

                :data_fault->str_fault[index].GZDM        ,/oNUMBER(10),                      o/

                :data_fault->str_fault[index].GZSB,

                trim(:data_fault->str_fault[index].GZMC)        ,/oVARCHAR2(100),                   o/

                to_date(:data_fault->str_fault[index].GZKSSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->str_fault[index].GZDJ        ,/oNUMBER(2),                       o/

                :data_fault->str_fault[index].GZDM_WM     ,/oNUMBER(5),                       o/

                :data_fault->VER         ,/oNUMBER(3) default 10 not null,   o/

                trim(:data_fault->D_ID)        ,/oCHAR(4),                         o/

                :data_fault->T_TYPE_ID   ,/oCHAR(3),                         o/

                :data_fault->LOCO_NO     ,/oCHAR(4),                         o/

                :data_fault->AB          ,/oNUMBER(1) default 0,             o/

                to_date(:data_fault->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_fault->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->CZH         ,/oNUMBER(5),                       o/

                :data_fault->SJJLH       ,/oNUMBER(5),                       o/

                :data_fault->SJSD        ,/oNUMBER(7,2),                     o/

                :data_fault->JCGKZ       ,/oNUMBER(5),                       o/

                :data_fault->XHJBH       ,/oNUMBER(5),                       o/

                :data_fault->XHJZLZ      ,/oNUMBER(5),                       o/

                :data_fault->CC          ,/oVARCHAR2(20),                    o/

                :data_fault->ZSJH        ,/oNUMBER(10),                      o/

                :data_fault->FSJH        ,/oNUMBER(10),                      o/

                :data_fault->GLB         ,/oNUMBER(10),                      o/

                :data_fault->JKZT        ,/oNUMBER(3),                       o/

                trim(:data_fault->DRIVERNAME)  ,/oVARCHAR2(30),                    o/

                trim(:data_fault->DRIVERTEL)   ,/oVARCHAR2(32),                    o/

                :data_fault->LINENO      ,/oNUMBER(5),                       o/

                trim(:data_fault->LINENAME)    ,/oVARCHAR2(32),                    o/

                trim(:data_fault->STATIONNAME) ,/oVARCHAR2(32),                    o/

                :data_fault->GPSJD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSWD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSHB       ,/oNUMBER(8,2),                     o/

                :data_fault->GPSSD       ,/oNUMBER(8,2),                     o/

                trim(:data_fault->D_ID2)       ,/oCHAR(4),                         o/

                trim(:data_fault->B_ID)        ,/oCHAR(2),                         o/

                trim(:data_fault->str_fault[index].CODESHOW) ,    /oVARCHAR2(20),                       o/

                :data_fault->str_fault[index].SEND_TYPE

                ,:data_fault->CRK

                //,0

                ); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_FAULT_INVALID (IDX,GZDM,GZLY,GZMC,GZKSSJ\
,GZDJ,GZDM_WM,VER,D_ID,T_TYPE_ID,LOCO_NO,AB,BTSJ,RKSJ,CZH,SJJLH,SJSD,JCGKZ,XH\
JBH,XHJZLZ,CC,ZSJH,FSJH,GLB,JKZT,DRIVERNAME,DRIVERTEL,LINENO,LINENAME,STATION\
NAME,GPSJD,GPSWD,GPSHB,GPSSD,D_ID2,B_ID,GZDMSHOW,SEND_TYPE,CRK) values (:b0,:\
b1,:b2,trim(:b3),to_date(:b4,'yyyy-mm-dd hh24:mi:ss'),:b5,:b6,:b7,trim(:b8),:\
b9,:b10,:b11,to_date(:b12,'yyyy-mm-dd hh24:mi:ss'),to_date(:b13,'yyyy-mm-dd h\
h24:mi:ss'),:b14,:b15,:b16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,:b24,trim(:b25)\
,trim(:b26),:b27,trim(:b28),trim(:b29),:b30,:b31,:b32,:b33,trim(:b34),trim(:b\
35),trim(:b36),:b37,:b38)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )4234;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_fault->str_fault)[index].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM);
    sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&((data_fault->str_fault)[index].GZSB);
    sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)((data_fault->str_fault)[index].GZMC);
    sqlstm.sqhstl[3] = (unsigned long )101;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)((data_fault->str_fault)[index].GZKSSJ);
    sqlstm.sqhstl[4] = (unsigned long )21;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&((data_fault->str_fault)[index].GZDJ);
    sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM_WM);
    sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&(data_fault->VER);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)(data_fault->D_ID);
    sqlstm.sqhstl[8] = (unsigned long )5;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)(data_fault->T_TYPE_ID);
    sqlstm.sqhstl[9] = (unsigned long )5;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)(data_fault->LOCO_NO);
    sqlstm.sqhstl[10] = (unsigned long )5;
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_fault->AB);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)(data_fault->RKSJ);
    sqlstm.sqhstl[12] = (unsigned long )21;
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)(data_fault->BTSJ);
    sqlstm.sqhstl[13] = (unsigned long )21;
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_fault->CZH);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(data_fault->SJJLH);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(data_fault->SJSD);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(data_fault->JCGKZ);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(data_fault->XHJBH);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&(data_fault->XHJZLZ);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)(data_fault->CC);
    sqlstm.sqhstl[20] = (unsigned long )21;
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(data_fault->ZSJH);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(data_fault->FSJH);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(data_fault->GLB);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&(data_fault->JKZT);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)(data_fault->DRIVERNAME);
    sqlstm.sqhstl[25] = (unsigned long )33;
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)(data_fault->DRIVERTEL);
    sqlstm.sqhstl[26] = (unsigned long )33;
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&(data_fault->LINENO);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)(data_fault->LINENAME);
    sqlstm.sqhstl[28] = (unsigned long )33;
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)(data_fault->STATIONNAME);
    sqlstm.sqhstl[29] = (unsigned long )33;
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(data_fault->GPSJD);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&(data_fault->GPSWD);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&(data_fault->GPSHB);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&(data_fault->GPSSD);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)(data_fault->D_ID2);
    sqlstm.sqhstl[34] = (unsigned long )5;
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)(data_fault->B_ID);
    sqlstm.sqhstl[35] = (unsigned long )5;
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)((data_fault->str_fault)[index].CODESHOW);
    sqlstm.sqhstl[36] = (unsigned long )21;
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&((data_fault->str_fault)[index].SEND_TYPE);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&(data_fault->CRK);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
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



    if (sqlca.sqlcode == 0)

    {

        //		memset(temp,0,1024);

        //		sprintf(temp,"loco.%s-%s:FAULT_INVALID故障入库成功\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO);

        //		lprintf(disp.e,temp);

        //		lprintf(disp.f,temp);

        //		cclog('e',temp);

        return 0;

    }

    else

    {

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:FAULT_INVALID故障入库失败,ORACLE返回值：%d\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.f,temp);

        cclog('e',temp);

        return 1;

    }

}



/* add by linw 2010325 */

unsigned char insert_to_ITF_FAULT_INVALID_NOPERSON(int index)

{

    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_FAULT_INVALID_NOPERSON(

                IDX         ,/oCHAR(32) not null,                o/

                GZDM        ,/oNUMBER(10),                       o/

                GZLY        ,/oNUMBER(2),                       o/

                GZMC        ,/oVARCHAR2(100),                    o/

                GZKSSJ      ,/oDATE,                             o/

                GZDJ        ,/oNUMBER(2),                        o/

                GZDM_WM     ,/oNUMBER(5),                        o/

                VER         ,/oNUMBER(3) default 10 not null,    o/

                D_ID        ,/oCHAR(4),                          o/

                T_TYPE_ID   ,/oCHAR(3),                          o/

                LOCO_NO     ,/oCHAR(4),                          o/

                AB          ,/oNUMBER(1) default 0,              o/

                BTSJ        ,/oDATE,                             o/

                RKSJ        ,/oDATE default SYSDATE,             o/

                CZH         ,/oNUMBER(5),                        o/

                SJJLH       ,/oNUMBER(5),                        o/

                SJSD        ,/oNUMBER(7,2),                      o/

                JCGKZ       ,/oNUMBER(5),                        o/

                XHJBH       ,/oNUMBER(5),                        o/

                XHJZLZ      ,/oNUMBER(5),                        o/

                CC          ,/oVARCHAR2(20),                     o/

                ZSJH        ,/oNUMBER(10),                       o/

                FSJH        ,/oNUMBER(10),                       o/

                GLB         ,/oNUMBER(10),                       o/

                JKZT        ,/oNUMBER(3),                        o/

                LINENO      ,/oNUMBER(5),                        o/

                LINENAME    ,/oVARCHAR2(32),                     o/

                STATIONNAME ,/oVARCHAR2(32),                     o/

                GPSJD       ,/oNUMBER(12,6),                     o/

                GPSWD       ,/oNUMBER(12,6),                     o/

                GPSHB       ,/oNUMBER(8,2),                      o/

                GPSSD       ,/oNUMBER(8,2),                      o/

                D_ID2       ,/oCHAR(4),                          o/

                B_ID        ,/oCHAR(2)                           o/

                GZDMSHOW,

                SEND_TYPE

                ,CRK

                )

            VALUES(

                :data_fault->str_fault[index].IDX         ,/oCHAR(32) not null,               o/

                :data_fault->str_fault[index].GZDM        ,/oNUMBER(10),                      o/

                :data_fault->str_fault[index].GZSB,

                trim(:data_fault->str_fault[index].GZMC)        ,/oVARCHAR2(100),                   o/

                to_date(:data_fault->str_fault[index].GZKSSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->str_fault[index].GZDJ        ,/oNUMBER(2),                       o/

                :data_fault->str_fault[index].GZDM_WM     ,/oNUMBER(5),                       o/

                :data_fault->VER         ,/oNUMBER(3) default 10 not null,   o/

                trim(:data_fault->D_ID)        ,/oCHAR(4),                         o/

                :data_fault->T_TYPE_ID   ,/oCHAR(3),                         o/

                :data_fault->LOCO_NO     ,/oCHAR(4),                         o/

                :data_fault->AB          ,/oNUMBER(1) default 0,             o/

                to_date(:data_fault->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_fault->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_fault->CZH         ,/oNUMBER(5),                       o/

                :data_fault->SJJLH       ,/oNUMBER(5),                       o/

                :data_fault->SJSD        ,/oNUMBER(7,2),                     o/

                :data_fault->JCGKZ       ,/oNUMBER(5),                       o/

                :data_fault->XHJBH       ,/oNUMBER(5),                       o/

                :data_fault->XHJZLZ      ,/oNUMBER(5),                       o/

                :data_fault->CC          ,/oVARCHAR2(20),                    o/

                :data_fault->ZSJH        ,/oNUMBER(10),                      o/

                :data_fault->FSJH        ,/oNUMBER(10),                      o/

                :data_fault->GLB         ,/oNUMBER(10),                      o/

                :data_fault->JKZT        ,/oNUMBER(3),                       o/

                :data_fault->LINENO      ,/oNUMBER(5),                       o/

                trim(:data_fault->LINENAME)    ,/oVARCHAR2(32),                    o/

                trim(:data_fault->STATIONNAME) ,/oVARCHAR2(32),                    o/

                :data_fault->GPSJD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSWD       ,/oNUMBER(12,6),                    o/

                :data_fault->GPSHB       ,/oNUMBER(8,2),                     o/

                :data_fault->GPSSD       ,/oNUMBER(8,2),                     o/

                trim(:data_fault->D_ID2)       ,/oCHAR(4),                         o/

                trim(:data_fault->B_ID)        ,/oCHAR(2),                         o/

                trim(:data_fault->str_fault[index].CODESHOW) ,    /oVARCHAR2(20),                       o/

                :data_fault->str_fault[index].SEND_TYPE

                ,:data_fault->CRK

                ); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_FAULT_INVALID_NOPERSON (IDX,GZDM,GZLY,GZ\
MC,GZKSSJ,GZDJ,GZDM_WM,VER,D_ID,T_TYPE_ID,LOCO_NO,AB,BTSJ,RKSJ,CZH,SJJLH,SJSD\
,JCGKZ,XHJBH,XHJZLZ,CC,ZSJH,FSJH,GLB,JKZT,LINENO,LINENAME,STATIONNAME,GPSJD,G\
PSWD,GPSHB,GPSSD,D_ID2,B_ID,GZDMSHOW,SEND_TYPE,CRK) values (:b0,:b1,:b2,trim(\
:b3),to_date(:b4,'yyyy-mm-dd hh24:mi:ss'),:b5,:b6,:b7,trim(:b8),:b9,:b10,:b11\
,to_date(:b12,'yyyy-mm-dd hh24:mi:ss'),to_date(:b13,'yyyy-mm-dd hh24:mi:ss'),\
:b14,:b15,:b16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,:b24,:b25,trim(:b26),trim(:\
b27),:b28,:b29,:b30,:b31,trim(:b32),trim(:b33),trim(:b34),:b35,:b36)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )4405;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_fault->str_fault)[index].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM);
    sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)&((data_fault->str_fault)[index].GZSB);
    sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)((data_fault->str_fault)[index].GZMC);
    sqlstm.sqhstl[3] = (unsigned long )101;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)((data_fault->str_fault)[index].GZKSSJ);
    sqlstm.sqhstl[4] = (unsigned long )21;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&((data_fault->str_fault)[index].GZDJ);
    sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&((data_fault->str_fault)[index].GZDM_WM);
    sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&(data_fault->VER);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)(data_fault->D_ID);
    sqlstm.sqhstl[8] = (unsigned long )5;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)(data_fault->T_TYPE_ID);
    sqlstm.sqhstl[9] = (unsigned long )5;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)(data_fault->LOCO_NO);
    sqlstm.sqhstl[10] = (unsigned long )5;
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_fault->AB);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)(data_fault->RKSJ);
    sqlstm.sqhstl[12] = (unsigned long )21;
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)(data_fault->BTSJ);
    sqlstm.sqhstl[13] = (unsigned long )21;
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_fault->CZH);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(data_fault->SJJLH);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(data_fault->SJSD);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(data_fault->JCGKZ);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(data_fault->XHJBH);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&(data_fault->XHJZLZ);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)(data_fault->CC);
    sqlstm.sqhstl[20] = (unsigned long )21;
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(data_fault->ZSJH);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(data_fault->FSJH);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(data_fault->GLB);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&(data_fault->JKZT);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&(data_fault->LINENO);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)(data_fault->LINENAME);
    sqlstm.sqhstl[26] = (unsigned long )33;
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)(data_fault->STATIONNAME);
    sqlstm.sqhstl[27] = (unsigned long )33;
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&(data_fault->GPSJD);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&(data_fault->GPSWD);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(data_fault->GPSHB);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&(data_fault->GPSSD);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)(data_fault->D_ID2);
    sqlstm.sqhstl[32] = (unsigned long )5;
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)(data_fault->B_ID);
    sqlstm.sqhstl[33] = (unsigned long )5;
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)((data_fault->str_fault)[index].CODESHOW);
    sqlstm.sqhstl[34] = (unsigned long )21;
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)&((data_fault->str_fault)[index].SEND_TYPE);
    sqlstm.sqhstl[35] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&(data_fault->CRK);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
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



    if (sqlca.sqlcode == 0)

    {

        //		memset(temp,0,1024);

        //		sprintf(temp,"loco.%s-%s:FAULT_INVALID故障入库成功\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO);

        //		lprintf(disp.e,temp);

        //		lprintf(disp.f,temp);

        //		cclog('e',temp);

        return 0;

    }

    else

    {

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:FAULT_INVALID_NOPERSON故障入库失败,ORACLE返回值：%d\n",data_fault->T_TYPE_ID,data_fault->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.f,temp);

        cclog('e',temp);

        return 1;

    }

}



static unsigned char insert_to_ITF_EVENT_LKJALARM_UNTREATED_SJ(int num)

{

    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_EVENT_LKJALARM_UNTREATED (

                IDX         ,/oCHAR(32) not null,       o/

                T_TYPE_ID   ,/oCHAR(3 CHAR),            o/

                LOCO_NO     ,/oCHAR(4 CHAR),            o/

                AB          ,/oNUMBER(1) not null,      o/

                D_ID        ,/oCHAR(4),                 o/

                BTSJ        ,/oDATE,                    o/

                RKSJ        ,/oDATE default SYSDATE,    o/

                ETYPE       ,/oNUMBER(5),               o/

                SJMC        ,/oVARCHAR2(32) default 0,  o/

                SJDJ        ,/oNUMBER(2),               o/

                GPSJD       ,/oNUMBER(12,6),            o/

                GPSWD       ,/oNUMBER(12,6),            o/

                GPSSD       ,/oNUMBER(5,2),             o/

                GPSHB       ,/oNUMBER(8,2),             o/

                SJ          ,/oDATE,                    o/

                CC          ,/oVARCHAR2(20 CHAR),       o/

                CZH         ,/oNUMBER(5),               o/

                SJH         ,/oNUMBER(10),              o/

                FSJH        ,/oNUMBER(10),              o/

                SJJLH       ,/oNUMBER(5),               o/

                KHBB        ,/oNUMBER(3),               o/

                SJSD        ,/oNUMBER(5,2),             o/

                JCXH        ,/oNUMBER(5),               o/

                GK          ,/oNUMBER(3),               o/

                XHJBH       ,/oNUMBER(5),               o/

                XHJLB       ,/oNUMBER(5),               o/

                GLB         ,/oNUMBER(10),              o/

                ZZ          ,/oNUMBER(5),               o/

                JC          ,/oNUMBER(6,2),             o/

                LS          ,/oNUMBER(5),               o/

                LCGYL       ,/oNUMBER(5),               o/

                ZZZT        ,/oNUMBER(5),               o/

                SRJLH       ,/oNUMBER(5),               o/

                JLQFXHJJL   ,/oNUMBER(5),               o/

                XS          ,/oNUMBER(5),               o/

                ZDSC        ,/oNUMBER(3),               o/

                DQXLHBZ     ,/oNUMBER(3),               o/

                DQXLH       ,/oNUMBER(5),               o/

                QFXLHBZ     ,/oNUMBER(3),               o/

                QFXLH       ,/oNUMBER(5),               o/

                DQ_TMIS     ,/oNUMBER(8),               o/

                QF_TIME     ,/oNUMBER(8),               o/

                QFCZJLH     ,/oNUMBER(3),               o/

                QFCHZH      ,/oNUMBER(5),               o/

                JKZT        ,/oNUMBER(3),               o/

                LJWY        ,/oNUMBER(5),               o/

                BFQZX       ,/oNUMBER(3),               o/

                BFQCX       ,/oNUMBER(3),               o/

                QFFQZX      ,/oNUMBER(3),               o/

                QFFQCX      ,/oNUMBER(3),               o/

                DRIVERNAME  ,/oVARCHAR2(30),            o/

                DRIVERTEL   ,/oVARCHAR2(32),            o/

                LINENO      ,/oNUMBER(5),               o/

                LINENAME    ,/oVARCHAR2(32),            o/

                STATIONNAME ,/oVARCHAR2(32),            o/

                D_ID2       ,/oCHAR(4),                 o/

                B_ID        ,/oCHAR(2),                 o/

                B_ID2       ,/oCHAR(2),                 o/

                LKJ_TYPE    ,/oNUMBER(3)                o/

                LKJSYSTIME,

                OTHERSYSTIME /oOTHERSSYSTIME edit by guo 2016.5.17o/

                )

            VALUES(

                :data_event->str_event[num].IDX         ,/oCHAR(32 CHAR) not null,   o/

                :data_event->T_TYPE_ID   ,/oCHAR(3 CHAR),           o/

                :data_event->LOCO_NO     ,/oCHAR(4 CHAR),           o/

                :data_event->AB          ,/oNUMBER(1),              o/

                trim(:data_event->D_ID)   ,/oCHAR(4),                o/

                to_date(:data_event->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_event->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_event->str_event[num].ETYPE       ,/oNUMBER(5),              o/

                trim(:data_event->str_event[num].SJMC),/oVARCHAR2(32),           o/

                :data_event->str_event[num].SJDJ        ,/oNUMBER(2),              o/





                :data_event->GPSJD       ,/oNUMBER(12,6),           o/

                :data_event->GPSWD       ,/oNUMBER(12,6),           o/

                :data_event->GPSSD       ,/oNUMBER(5,2),            o/

                :data_event->GPSHB       ,/oNUMBER(8,2),            o/

                to_date(:data_event->str_event[num].SJ,'yyyy-mm-dd hh24:mi:ss'),



                trim(:data_event->str_event[num].CC)         ,/oVARCHAR2(20 CHAR),      o/

                :data_event->str_event[num].CZH         ,/oNUMBER(5),              o/

                :data_event->str_event[num].SJH         ,/oNUMBER(10),             o/

                :data_event->str_event[num].FSJH        ,/oNUMBER(10),             o/

                :data_event->str_event[num].SJJLH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].KHBB        ,/oNUMBER(3),              o/

                :data_event->str_event[num].SJSU        ,/oNUMBER(5,2),            o/

                :data_event->str_event[num].JCXHZ       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GK          ,/oNUMBER(3),              o/

                :data_event->str_event[num].XHJBH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].XHJLB       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GLB         ,/oNUMBER(10),             o/

                :data_event->str_event[num].ZZ          ,/oNUMBER(5),              o/

                :data_event->str_event[num].JC          ,/oNUMBER(6,2),            o/

                :data_event->str_event[num].LS          ,/oNUMBER(5),              o/

                :data_event->str_event[num].LCGYL       ,/oNUMBER(5),              o/

                :data_event->str_event[num].ZZZT        ,/oNUMBER(3),              o/



                :data_event->str_event[num].SRJLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].JLQFXHJJL   ,/oNUMBER(5),           o/

                :data_event->str_event[num].XS          ,/oNUMBER(5),           o/

                :data_event->str_event[num].ZDSC        ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].QFXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].DQ_TMIS     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QF_TIME     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QFCZJLH     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFCHZH      ,/oNUMBER(5),           o/

                :data_event->str_event[num].JKZT        ,/oNUMBER(3),           o/

                :data_event->str_event[num].LJWY        ,/oNUMBER(5),           o/

                :data_event->str_event[num].BFQZX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].BFQCX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQZX      ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQCX      ,/oNUMBER(3),           o/

                trim(:data_event->DRIVERNAME)  ,/oVARCHAR2(30),        o/

                trim(:data_event->DRIVERTEL)   ,/oVARCHAR2(32),        o/

                trim(:data_event->LINENO)      ,/oNUMBER(5),           o/

                trim(:data_event->LINENAME)    ,/oVARCHAR2(32),        o/

                trim(:data_event->STATIONNAME) ,/oVARCHAR2(32),        o/

                trim(:data_event->D_ID2)       ,/oCHAR(4),             o/

                trim(:data_event->B_ID )       ,/oCHAR(2)              o/

                trim(:data_event->B_ID2)       ,/oCHAR(2)              o/

                :data_event->str_event[num].LKJ_TYPE  ,    /oNUMBER(3),           o/

                to_date(:data_event->str_event[num].LKJ_SJ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_event->str_event[num].QT_SJ,'yyyy-mm-dd hh24:mi:ss')

                ) ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_EVENT_LKJALARM_UNTREATED (IDX,T_TYPE_ID,\
LOCO_NO,AB,D_ID,BTSJ,RKSJ,ETYPE,SJMC,SJDJ,GPSJD,GPSWD,GPSSD,GPSHB,SJ,CC,CZH,S\
JH,FSJH,SJJLH,KHBB,SJSD,JCXH,GK,XHJBH,XHJLB,GLB,ZZ,JC,LS,LCGYL,ZZZT,SRJLH,JLQ\
FXHJJL,XS,ZDSC,DQXLHBZ,DQXLH,QFXLHBZ,QFXLH,DQ_TMIS,QF_TIME,QFCZJLH,QFCHZH,JKZ\
T,LJWY,BFQZX,BFQCX,QFFQZX,QFFQCX,DRIVERNAME,DRIVERTEL,LINENO,LINENAME,STATION\
NAME,D_ID2,B_ID,B_ID2,LKJ_TYPE,LKJSYSTIME,OTHERSYSTIME) values (:b0,:b1,:b2,:\
b3,trim(:b4),to_date(:b5,'yyyy-mm-dd hh24:mi:ss'),to_date(:b6,'yyyy-mm-dd hh2\
4:mi:ss'),:b7,trim(:b8),:b9,:b10,:b11,:b12,:b13,to_date(:b14,'yyyy-mm-dd hh24\
:mi:ss'),trim(:b15),:b16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,:b24,:b25,:b26,:b\
27,:b28,:b29,:b30,:b31,:b32,:b33,:b34,:b35,:b36,:b37,:b38,:b39,:b40,:b41,:b42\
,:b43,:b44,:b45,:b46,:b47,:b48,:b49,trim(:b50),trim(:b51),trim(:b52),trim(:b5\
3),trim(:b54),trim(:b55),trim(:b56),trim(:b57),:b58,to_date(:b59,'yyyy-mm-dd \
hh24:mi:ss'),to_date(:b60,'yyyy-mm-dd hh24:mi:ss'))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )4568;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_event->str_event)[num].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_event->T_TYPE_ID);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_event->LOCO_NO);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_event->AB);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_event->D_ID);
    sqlstm.sqhstl[4] = (unsigned long )5;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_event->RKSJ);
    sqlstm.sqhstl[5] = (unsigned long )21;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)(data_event->BTSJ);
    sqlstm.sqhstl[6] = (unsigned long )21;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&((data_event->str_event)[num].ETYPE);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)((data_event->str_event)[num].SJMC);
    sqlstm.sqhstl[8] = (unsigned long )33;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&((data_event->str_event)[num].SJDJ);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&(data_event->GPSJD);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_event->GPSWD);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_event->GPSSD);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_event->GPSHB);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)((data_event->str_event)[num].SJ);
    sqlstm.sqhstl[14] = (unsigned long )21;
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)((data_event->str_event)[num].CC);
    sqlstm.sqhstl[15] = (unsigned long )21;
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&((data_event->str_event)[num].CZH);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&((data_event->str_event)[num].SJH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&((data_event->str_event)[num].FSJH);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&((data_event->str_event)[num].SJJLH);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&((data_event->str_event)[num].KHBB);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&((data_event->str_event)[num].SJSU);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&((data_event->str_event)[num].JCXHZ);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&((data_event->str_event)[num].GK);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&((data_event->str_event)[num].XHJBH);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&((data_event->str_event)[num].XHJLB);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&((data_event->str_event)[num].GLB);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&((data_event->str_event)[num].ZZ);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&((data_event->str_event)[num].JC);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&((data_event->str_event)[num].LS);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&((data_event->str_event)[num].LCGYL);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&((data_event->str_event)[num].ZZZT);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&((data_event->str_event)[num].SRJLH);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&((data_event->str_event)[num].JLQFXHJJL);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&((data_event->str_event)[num].XS);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)&((data_event->str_event)[num].ZDSC);
    sqlstm.sqhstl[35] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&((data_event->str_event)[num].DQXLHBZ);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&((data_event->str_event)[num].DQXLH);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&((data_event->str_event)[num].QFXLHBZ);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&((data_event->str_event)[num].QFXLH);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&((data_event->str_event)[num].DQ_TMIS);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)&((data_event->str_event)[num].QF_TIME);
    sqlstm.sqhstl[41] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)&((data_event->str_event)[num].QFCZJLH);
    sqlstm.sqhstl[42] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)&((data_event->str_event)[num].QFCHZH);
    sqlstm.sqhstl[43] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)&((data_event->str_event)[num].JKZT);
    sqlstm.sqhstl[44] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)&((data_event->str_event)[num].LJWY);
    sqlstm.sqhstl[45] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)&((data_event->str_event)[num].BFQZX);
    sqlstm.sqhstl[46] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&((data_event->str_event)[num].BFQCX);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
    sqlstm.sqhstv[48] = (unsigned char  *)&((data_event->str_event)[num].QFFQZX);
    sqlstm.sqhstl[48] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[48] = (         int  )0;
    sqlstm.sqindv[48] = (         short *)0;
    sqlstm.sqinds[48] = (         int  )0;
    sqlstm.sqharm[48] = (unsigned long )0;
    sqlstm.sqadto[48] = (unsigned short )0;
    sqlstm.sqtdso[48] = (unsigned short )0;
    sqlstm.sqhstv[49] = (unsigned char  *)&((data_event->str_event)[num].QFFQCX);
    sqlstm.sqhstl[49] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[49] = (         int  )0;
    sqlstm.sqindv[49] = (         short *)0;
    sqlstm.sqinds[49] = (         int  )0;
    sqlstm.sqharm[49] = (unsigned long )0;
    sqlstm.sqadto[49] = (unsigned short )0;
    sqlstm.sqtdso[49] = (unsigned short )0;
    sqlstm.sqhstv[50] = (unsigned char  *)(data_event->DRIVERNAME);
    sqlstm.sqhstl[50] = (unsigned long )33;
    sqlstm.sqhsts[50] = (         int  )0;
    sqlstm.sqindv[50] = (         short *)0;
    sqlstm.sqinds[50] = (         int  )0;
    sqlstm.sqharm[50] = (unsigned long )0;
    sqlstm.sqadto[50] = (unsigned short )0;
    sqlstm.sqtdso[50] = (unsigned short )0;
    sqlstm.sqhstv[51] = (unsigned char  *)(data_event->DRIVERTEL);
    sqlstm.sqhstl[51] = (unsigned long )33;
    sqlstm.sqhsts[51] = (         int  )0;
    sqlstm.sqindv[51] = (         short *)0;
    sqlstm.sqinds[51] = (         int  )0;
    sqlstm.sqharm[51] = (unsigned long )0;
    sqlstm.sqadto[51] = (unsigned short )0;
    sqlstm.sqtdso[51] = (unsigned short )0;
    sqlstm.sqhstv[52] = (unsigned char  *)&(data_event->LINENO);
    sqlstm.sqhstl[52] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[52] = (         int  )0;
    sqlstm.sqindv[52] = (         short *)0;
    sqlstm.sqinds[52] = (         int  )0;
    sqlstm.sqharm[52] = (unsigned long )0;
    sqlstm.sqadto[52] = (unsigned short )0;
    sqlstm.sqtdso[52] = (unsigned short )0;
    sqlstm.sqhstv[53] = (unsigned char  *)(data_event->LINENAME);
    sqlstm.sqhstl[53] = (unsigned long )33;
    sqlstm.sqhsts[53] = (         int  )0;
    sqlstm.sqindv[53] = (         short *)0;
    sqlstm.sqinds[53] = (         int  )0;
    sqlstm.sqharm[53] = (unsigned long )0;
    sqlstm.sqadto[53] = (unsigned short )0;
    sqlstm.sqtdso[53] = (unsigned short )0;
    sqlstm.sqhstv[54] = (unsigned char  *)(data_event->STATIONNAME);
    sqlstm.sqhstl[54] = (unsigned long )33;
    sqlstm.sqhsts[54] = (         int  )0;
    sqlstm.sqindv[54] = (         short *)0;
    sqlstm.sqinds[54] = (         int  )0;
    sqlstm.sqharm[54] = (unsigned long )0;
    sqlstm.sqadto[54] = (unsigned short )0;
    sqlstm.sqtdso[54] = (unsigned short )0;
    sqlstm.sqhstv[55] = (unsigned char  *)(data_event->D_ID2);
    sqlstm.sqhstl[55] = (unsigned long )5;
    sqlstm.sqhsts[55] = (         int  )0;
    sqlstm.sqindv[55] = (         short *)0;
    sqlstm.sqinds[55] = (         int  )0;
    sqlstm.sqharm[55] = (unsigned long )0;
    sqlstm.sqadto[55] = (unsigned short )0;
    sqlstm.sqtdso[55] = (unsigned short )0;
    sqlstm.sqhstv[56] = (unsigned char  *)(data_event->B_ID);
    sqlstm.sqhstl[56] = (unsigned long )5;
    sqlstm.sqhsts[56] = (         int  )0;
    sqlstm.sqindv[56] = (         short *)0;
    sqlstm.sqinds[56] = (         int  )0;
    sqlstm.sqharm[56] = (unsigned long )0;
    sqlstm.sqadto[56] = (unsigned short )0;
    sqlstm.sqtdso[56] = (unsigned short )0;
    sqlstm.sqhstv[57] = (unsigned char  *)(data_event->B_ID2);
    sqlstm.sqhstl[57] = (unsigned long )5;
    sqlstm.sqhsts[57] = (         int  )0;
    sqlstm.sqindv[57] = (         short *)0;
    sqlstm.sqinds[57] = (         int  )0;
    sqlstm.sqharm[57] = (unsigned long )0;
    sqlstm.sqadto[57] = (unsigned short )0;
    sqlstm.sqtdso[57] = (unsigned short )0;
    sqlstm.sqhstv[58] = (unsigned char  *)&((data_event->str_event)[num].LKJ_TYPE);
    sqlstm.sqhstl[58] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[58] = (         int  )0;
    sqlstm.sqindv[58] = (         short *)0;
    sqlstm.sqinds[58] = (         int  )0;
    sqlstm.sqharm[58] = (unsigned long )0;
    sqlstm.sqadto[58] = (unsigned short )0;
    sqlstm.sqtdso[58] = (unsigned short )0;
    sqlstm.sqhstv[59] = (unsigned char  *)((data_event->str_event)[num].LKJ_SJ);
    sqlstm.sqhstl[59] = (unsigned long )21;
    sqlstm.sqhsts[59] = (         int  )0;
    sqlstm.sqindv[59] = (         short *)0;
    sqlstm.sqinds[59] = (         int  )0;
    sqlstm.sqharm[59] = (unsigned long )0;
    sqlstm.sqadto[59] = (unsigned short )0;
    sqlstm.sqtdso[59] = (unsigned short )0;
    sqlstm.sqhstv[60] = (unsigned char  *)((data_event->str_event)[num].QT_SJ);
    sqlstm.sqhstl[60] = (unsigned long )21;
    sqlstm.sqhsts[60] = (         int  )0;
    sqlstm.sqindv[60] = (         short *)0;
    sqlstm.sqinds[60] = (         int  )0;
    sqlstm.sqharm[60] = (unsigned long )0;
    sqlstm.sqadto[60] = (unsigned short )0;
    sqlstm.sqtdso[60] = (unsigned short )0;
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





    if (sqlca.sqlcode == 0)

    {

        if(data_event->key == 14550920)

        {

            //printf("loco.%s-%s:事件EVENT_LKJALARM_UNTREATED入库成功\n",data_event->T_TYPE_ID,data_event->LOCO_NO);

        }





        return 0;

    }

    else

    {

        if(data_event->key == 14550920)

        {

            //printf("loco.%s-%s:事件EVENT_LKJALARM_UNTREATED入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        }

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:事件EVENT_LKJALARM_UNTREATED入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.v,temp);

        cclog('e',temp);

        return 1;

    }

}



static unsigned char insert_to_ITF_EVENT_LKJALARM_UNTREATED(int num)

{

    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_EVENT_LKJALARM_UNTREATED (

                IDX         ,/oCHAR(32) not null,       o/

                T_TYPE_ID   ,/oCHAR(3 CHAR),            o/

                LOCO_NO     ,/oCHAR(4 CHAR),            o/

                AB          ,/oNUMBER(1) not null,      o/

                D_ID        ,/oCHAR(4),                 o/

                BTSJ        ,/oDATE,                    o/

                RKSJ        ,/oDATE default SYSDATE,    o/

                ETYPE       ,/oNUMBER(5),               o/

                SJMC        ,/oVARCHAR2(32) default 0,  o/

                SJDJ        ,/oNUMBER(2),               o/

                GPSJD       ,/oNUMBER(12,6),            o/

                GPSWD       ,/oNUMBER(12,6),            o/

                GPSSD       ,/oNUMBER(5,2),             o/

                GPSHB       ,/oNUMBER(8,2),             o/

                SJ          ,/oDATE,                    o/

                CC          ,/oVARCHAR2(20 CHAR),       o/

                CZH         ,/oNUMBER(5),               o/

                SJH         ,/oNUMBER(10),              o/

                FSJH        ,/oNUMBER(10),              o/

                SJJLH       ,/oNUMBER(5),               o/

                KHBB        ,/oNUMBER(3),               o/

                SJSD        ,/oNUMBER(5,2),             o/

                JCXH        ,/oNUMBER(5),               o/

                GK          ,/oNUMBER(3),               o/

                XHJBH       ,/oNUMBER(5),               o/

                XHJLB       ,/oNUMBER(5),               o/

                GLB         ,/oNUMBER(10),              o/

                ZZ          ,/oNUMBER(5),               o/

                JC          ,/oNUMBER(6,2),             o/

                LS          ,/oNUMBER(5),               o/

                LCGYL       ,/oNUMBER(5),               o/

                ZZZT        ,/oNUMBER(5),               o/

                SRJLH       ,/oNUMBER(5),               o/

                JLQFXHJJL   ,/oNUMBER(5),               o/

                XS          ,/oNUMBER(5),               o/

                ZDSC        ,/oNUMBER(3),               o/

                DQXLHBZ     ,/oNUMBER(3),               o/

                DQXLH       ,/oNUMBER(5),               o/

                QFXLHBZ     ,/oNUMBER(3),               o/

                QFXLH       ,/oNUMBER(5),               o/

                DQ_TMIS     ,/oNUMBER(8),               o/

                QF_TIME     ,/oNUMBER(8),               o/

                QFCZJLH     ,/oNUMBER(3),               o/

                QFCHZH      ,/oNUMBER(5),               o/

                JKZT        ,/oNUMBER(3),               o/

                LJWY        ,/oNUMBER(5),               o/

                BFQZX       ,/oNUMBER(3),               o/

                BFQCX       ,/oNUMBER(3),               o/

                QFFQZX      ,/oNUMBER(3),               o/

                QFFQCX      ,/oNUMBER(3),               o/

                DRIVERNAME  ,/oVARCHAR2(30),            o/

                DRIVERTEL   ,/oVARCHAR2(32),            o/

                LINENO      ,/oNUMBER(5),               o/

                LINENAME    ,/oVARCHAR2(32),            o/

                STATIONNAME ,/oVARCHAR2(32),            o/

                D_ID2       ,/oCHAR(4),                 o/

                B_ID        ,/oCHAR(2),                 o/

                B_ID2       ,/oCHAR(2),                 o/

                LKJ_TYPE    /oNUMBER(3)                o/

                ,CRK

                )

            VALUES(

                :data_event->str_event[num].IDX         ,/oCHAR(32 CHAR) not null,   o/

                :data_event->T_TYPE_ID   ,/oCHAR(3 CHAR),           o/

                :data_event->LOCO_NO     ,/oCHAR(4 CHAR),           o/

                :data_event->AB          ,/oNUMBER(1),              o/

                trim(:data_event->D_ID)   ,/oCHAR(4),                o/

                to_date(:data_event->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_event->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_event->str_event[num].ETYPE       ,/oNUMBER(5),              o/

                trim(:data_event->str_event[num].SJMC),/oVARCHAR2(32),           o/

                :data_event->str_event[num].SJDJ        ,/oNUMBER(2),              o/





                :data_event->GPSJD       ,/oNUMBER(12,6),           o/

                :data_event->GPSWD       ,/oNUMBER(12,6),           o/

                :data_event->GPSSD       ,/oNUMBER(5,2),            o/

                :data_event->GPSHB       ,/oNUMBER(8,2),            o/

                to_date(:data_event->str_event[num].SJ,'yyyy-mm-dd hh24:mi:ss'),



                trim(:data_event->str_event[num].CC)         ,/oVARCHAR2(20 CHAR),      o/

                :data_event->str_event[num].CZH         ,/oNUMBER(5),              o/

                :data_event->str_event[num].SJH         ,/oNUMBER(10),             o/

                :data_event->str_event[num].FSJH        ,/oNUMBER(10),             o/

                :data_event->str_event[num].SJJLH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].KHBB        ,/oNUMBER(3),              o/

                :data_event->str_event[num].SJSU        ,/oNUMBER(5,2),            o/

                :data_event->str_event[num].JCXHZ       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GK          ,/oNUMBER(3),              o/

                :data_event->str_event[num].XHJBH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].XHJLB       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GLB         ,/oNUMBER(10),             o/

                :data_event->str_event[num].ZZ          ,/oNUMBER(5),              o/

                :data_event->str_event[num].JC          ,/oNUMBER(6,2),            o/

                :data_event->str_event[num].LS          ,/oNUMBER(5),              o/

                :data_event->str_event[num].LCGYL       ,/oNUMBER(5),              o/

                :data_event->str_event[num].ZZZT        ,/oNUMBER(3),              o/



                :data_event->str_event[num].SRJLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].JLQFXHJJL   ,/oNUMBER(5),           o/

                :data_event->str_event[num].XS          ,/oNUMBER(5),           o/

                :data_event->str_event[num].ZDSC        ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].QFXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].DQ_TMIS     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QF_TIME     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QFCZJLH     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFCHZH      ,/oNUMBER(5),           o/

                :data_event->str_event[num].JKZT        ,/oNUMBER(3),           o/

                :data_event->str_event[num].LJWY        ,/oNUMBER(5),           o/

                :data_event->str_event[num].BFQZX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].BFQCX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQZX      ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQCX      ,/oNUMBER(3),           o/

                trim(:data_event->DRIVERNAME)  ,/oVARCHAR2(30),        o/

                trim(:data_event->DRIVERTEL)   ,/oVARCHAR2(32),        o/

                trim(:data_event->LINENO)      ,/oNUMBER(5),           o/

                trim(:data_event->LINENAME)    ,/oVARCHAR2(32),        o/

                trim(:data_event->STATIONNAME) ,/oVARCHAR2(32),        o/

                trim(:data_event->D_ID2)       ,/oCHAR(4),             o/

                trim(:data_event->B_ID )       ,/oCHAR(2)              o/

                trim(:data_event->B_ID2)       ,/oCHAR(2)              o/

                :data_event->str_event[num].LKJ_TYPE      /oNUMBER(3),           o/

                ,:data_event->CRK

                ) ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_EVENT_LKJALARM_UNTREATED (IDX,T_TYPE_ID,\
LOCO_NO,AB,D_ID,BTSJ,RKSJ,ETYPE,SJMC,SJDJ,GPSJD,GPSWD,GPSSD,GPSHB,SJ,CC,CZH,S\
JH,FSJH,SJJLH,KHBB,SJSD,JCXH,GK,XHJBH,XHJLB,GLB,ZZ,JC,LS,LCGYL,ZZZT,SRJLH,JLQ\
FXHJJL,XS,ZDSC,DQXLHBZ,DQXLH,QFXLHBZ,QFXLH,DQ_TMIS,QF_TIME,QFCZJLH,QFCHZH,JKZ\
T,LJWY,BFQZX,BFQCX,QFFQZX,QFFQCX,DRIVERNAME,DRIVERTEL,LINENO,LINENAME,STATION\
NAME,D_ID2,B_ID,B_ID2,LKJ_TYPE,CRK) values (:b0,:b1,:b2,:b3,trim(:b4),to_date\
(:b5,'yyyy-mm-dd hh24:mi:ss'),to_date(:b6,'yyyy-mm-dd hh24:mi:ss'),:b7,trim(:\
b8),:b9,:b10,:b11,:b12,:b13,to_date(:b14,'yyyy-mm-dd hh24:mi:ss'),trim(:b15),\
:b16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,:b24,:b25,:b26,:b27,:b28,:b29,:b30,:b\
31,:b32,:b33,:b34,:b35,:b36,:b37,:b38,:b39,:b40,:b41,:b42,:b43,:b44,:b45,:b46\
,:b47,:b48,:b49,trim(:b50),trim(:b51),trim(:b52),trim(:b53),trim(:b54),trim(:\
b55),trim(:b56),trim(:b57),:b58,:b59)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )4827;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_event->str_event)[num].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_event->T_TYPE_ID);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_event->LOCO_NO);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_event->AB);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_event->D_ID);
    sqlstm.sqhstl[4] = (unsigned long )5;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_event->RKSJ);
    sqlstm.sqhstl[5] = (unsigned long )21;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)(data_event->BTSJ);
    sqlstm.sqhstl[6] = (unsigned long )21;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&((data_event->str_event)[num].ETYPE);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)((data_event->str_event)[num].SJMC);
    sqlstm.sqhstl[8] = (unsigned long )33;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&((data_event->str_event)[num].SJDJ);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&(data_event->GPSJD);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_event->GPSWD);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_event->GPSSD);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_event->GPSHB);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)((data_event->str_event)[num].SJ);
    sqlstm.sqhstl[14] = (unsigned long )21;
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)((data_event->str_event)[num].CC);
    sqlstm.sqhstl[15] = (unsigned long )21;
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&((data_event->str_event)[num].CZH);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&((data_event->str_event)[num].SJH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&((data_event->str_event)[num].FSJH);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&((data_event->str_event)[num].SJJLH);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&((data_event->str_event)[num].KHBB);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&((data_event->str_event)[num].SJSU);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&((data_event->str_event)[num].JCXHZ);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&((data_event->str_event)[num].GK);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&((data_event->str_event)[num].XHJBH);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&((data_event->str_event)[num].XHJLB);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&((data_event->str_event)[num].GLB);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&((data_event->str_event)[num].ZZ);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&((data_event->str_event)[num].JC);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&((data_event->str_event)[num].LS);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&((data_event->str_event)[num].LCGYL);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&((data_event->str_event)[num].ZZZT);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&((data_event->str_event)[num].SRJLH);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&((data_event->str_event)[num].JLQFXHJJL);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&((data_event->str_event)[num].XS);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)&((data_event->str_event)[num].ZDSC);
    sqlstm.sqhstl[35] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&((data_event->str_event)[num].DQXLHBZ);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&((data_event->str_event)[num].DQXLH);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&((data_event->str_event)[num].QFXLHBZ);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&((data_event->str_event)[num].QFXLH);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&((data_event->str_event)[num].DQ_TMIS);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)&((data_event->str_event)[num].QF_TIME);
    sqlstm.sqhstl[41] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)&((data_event->str_event)[num].QFCZJLH);
    sqlstm.sqhstl[42] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)&((data_event->str_event)[num].QFCHZH);
    sqlstm.sqhstl[43] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)&((data_event->str_event)[num].JKZT);
    sqlstm.sqhstl[44] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)&((data_event->str_event)[num].LJWY);
    sqlstm.sqhstl[45] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)&((data_event->str_event)[num].BFQZX);
    sqlstm.sqhstl[46] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&((data_event->str_event)[num].BFQCX);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
    sqlstm.sqhstv[48] = (unsigned char  *)&((data_event->str_event)[num].QFFQZX);
    sqlstm.sqhstl[48] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[48] = (         int  )0;
    sqlstm.sqindv[48] = (         short *)0;
    sqlstm.sqinds[48] = (         int  )0;
    sqlstm.sqharm[48] = (unsigned long )0;
    sqlstm.sqadto[48] = (unsigned short )0;
    sqlstm.sqtdso[48] = (unsigned short )0;
    sqlstm.sqhstv[49] = (unsigned char  *)&((data_event->str_event)[num].QFFQCX);
    sqlstm.sqhstl[49] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[49] = (         int  )0;
    sqlstm.sqindv[49] = (         short *)0;
    sqlstm.sqinds[49] = (         int  )0;
    sqlstm.sqharm[49] = (unsigned long )0;
    sqlstm.sqadto[49] = (unsigned short )0;
    sqlstm.sqtdso[49] = (unsigned short )0;
    sqlstm.sqhstv[50] = (unsigned char  *)(data_event->DRIVERNAME);
    sqlstm.sqhstl[50] = (unsigned long )33;
    sqlstm.sqhsts[50] = (         int  )0;
    sqlstm.sqindv[50] = (         short *)0;
    sqlstm.sqinds[50] = (         int  )0;
    sqlstm.sqharm[50] = (unsigned long )0;
    sqlstm.sqadto[50] = (unsigned short )0;
    sqlstm.sqtdso[50] = (unsigned short )0;
    sqlstm.sqhstv[51] = (unsigned char  *)(data_event->DRIVERTEL);
    sqlstm.sqhstl[51] = (unsigned long )33;
    sqlstm.sqhsts[51] = (         int  )0;
    sqlstm.sqindv[51] = (         short *)0;
    sqlstm.sqinds[51] = (         int  )0;
    sqlstm.sqharm[51] = (unsigned long )0;
    sqlstm.sqadto[51] = (unsigned short )0;
    sqlstm.sqtdso[51] = (unsigned short )0;
    sqlstm.sqhstv[52] = (unsigned char  *)&(data_event->LINENO);
    sqlstm.sqhstl[52] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[52] = (         int  )0;
    sqlstm.sqindv[52] = (         short *)0;
    sqlstm.sqinds[52] = (         int  )0;
    sqlstm.sqharm[52] = (unsigned long )0;
    sqlstm.sqadto[52] = (unsigned short )0;
    sqlstm.sqtdso[52] = (unsigned short )0;
    sqlstm.sqhstv[53] = (unsigned char  *)(data_event->LINENAME);
    sqlstm.sqhstl[53] = (unsigned long )33;
    sqlstm.sqhsts[53] = (         int  )0;
    sqlstm.sqindv[53] = (         short *)0;
    sqlstm.sqinds[53] = (         int  )0;
    sqlstm.sqharm[53] = (unsigned long )0;
    sqlstm.sqadto[53] = (unsigned short )0;
    sqlstm.sqtdso[53] = (unsigned short )0;
    sqlstm.sqhstv[54] = (unsigned char  *)(data_event->STATIONNAME);
    sqlstm.sqhstl[54] = (unsigned long )33;
    sqlstm.sqhsts[54] = (         int  )0;
    sqlstm.sqindv[54] = (         short *)0;
    sqlstm.sqinds[54] = (         int  )0;
    sqlstm.sqharm[54] = (unsigned long )0;
    sqlstm.sqadto[54] = (unsigned short )0;
    sqlstm.sqtdso[54] = (unsigned short )0;
    sqlstm.sqhstv[55] = (unsigned char  *)(data_event->D_ID2);
    sqlstm.sqhstl[55] = (unsigned long )5;
    sqlstm.sqhsts[55] = (         int  )0;
    sqlstm.sqindv[55] = (         short *)0;
    sqlstm.sqinds[55] = (         int  )0;
    sqlstm.sqharm[55] = (unsigned long )0;
    sqlstm.sqadto[55] = (unsigned short )0;
    sqlstm.sqtdso[55] = (unsigned short )0;
    sqlstm.sqhstv[56] = (unsigned char  *)(data_event->B_ID);
    sqlstm.sqhstl[56] = (unsigned long )5;
    sqlstm.sqhsts[56] = (         int  )0;
    sqlstm.sqindv[56] = (         short *)0;
    sqlstm.sqinds[56] = (         int  )0;
    sqlstm.sqharm[56] = (unsigned long )0;
    sqlstm.sqadto[56] = (unsigned short )0;
    sqlstm.sqtdso[56] = (unsigned short )0;
    sqlstm.sqhstv[57] = (unsigned char  *)(data_event->B_ID2);
    sqlstm.sqhstl[57] = (unsigned long )5;
    sqlstm.sqhsts[57] = (         int  )0;
    sqlstm.sqindv[57] = (         short *)0;
    sqlstm.sqinds[57] = (         int  )0;
    sqlstm.sqharm[57] = (unsigned long )0;
    sqlstm.sqadto[57] = (unsigned short )0;
    sqlstm.sqtdso[57] = (unsigned short )0;
    sqlstm.sqhstv[58] = (unsigned char  *)&((data_event->str_event)[num].LKJ_TYPE);
    sqlstm.sqhstl[58] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[58] = (         int  )0;
    sqlstm.sqindv[58] = (         short *)0;
    sqlstm.sqinds[58] = (         int  )0;
    sqlstm.sqharm[58] = (unsigned long )0;
    sqlstm.sqadto[58] = (unsigned short )0;
    sqlstm.sqtdso[58] = (unsigned short )0;
    sqlstm.sqhstv[59] = (unsigned char  *)&(data_event->CRK);
    sqlstm.sqhstl[59] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[59] = (         int  )0;
    sqlstm.sqindv[59] = (         short *)0;
    sqlstm.sqinds[59] = (         int  )0;
    sqlstm.sqharm[59] = (unsigned long )0;
    sqlstm.sqadto[59] = (unsigned short )0;
    sqlstm.sqtdso[59] = (unsigned short )0;
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





    if (sqlca.sqlcode == 0)

    {

        if(data_event->key == 14550920)

        {

            //printf("loco.%s-%s:事件EVENT_LKJALARM_UNTREATED入库成功\n",data_event->T_TYPE_ID,data_event->LOCO_NO);

        }





        return 0;

    }

    else

    {

        if(data_event->key == 14550920)

        {

            //printf("loco.%s-%s:事件EVENT_LKJALARM_UNTREATED入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        }

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:事件EVENT_LKJALARM_UNTREATED入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.v,temp);

        cclog('e',temp);

        return 1;

    }

}



static unsigned char insert_to_ITF_EVENT_LKJALARM_SJ(int num)

{

    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_EVENT_LKJALARM (

                IDX          ,/oCHAR(32) not null,                     o/

                T_TYPE_ID    ,/oCHAR(3 CHAR),                          o/

                LOCO_NO      ,/oCHAR(4 CHAR),                          o/

                AB           ,/oNUMBER(1) not null,                    o/

                D_ID         ,/oCHAR(4),                               o/

                BTSJ         ,/oDATE,                                  o/

                RKSJ         ,/oDATE default SYSDATE,                  o/

                ETYPE        ,/oNUMBER(5),                             o/

                VER          ,/oNUMBER(3),                             o/

                SJMC         ,/oVARCHAR2(30),                          o/

                SJDJ         ,/oNUMBER(2),                             o/

                GPSJD        ,/oNUMBER(12,6),                          o/

                GPSWD        ,/oNUMBER(12,6),                          o/

                GPSSD        ,/oNUMBER(5,2),                           o/

                GPSHB        ,/oNUMBER(8,2),                           o/

                SJ           ,/oDATE,                                  o/

                CC           ,/oVARCHAR2(20 CHAR),                     o/

                CZH          ,/oNUMBER(5),                             o/

                SJH          ,/oNUMBER(10),                            o/

                FSJH         ,/oNUMBER(10),                            o/

                SJJLH        ,/oNUMBER(5),                             o/

                KHBB         ,/oNUMBER(3),                             o/

                SJSD         ,/oNUMBER(5,2),                           o/

                JCXH         ,/oNUMBER(5),                             o/

                GK           ,/oNUMBER(3),                             o/

                XHJBH        ,/oNUMBER(5),                             o/

                XHJLB        ,/oNUMBER(5),                             o/

                GLB          ,/oNUMBER(10),                            o/

                ZZ           ,/oNUMBER(5),                             o/

                JC           ,/oNUMBER(6,2),                           o/

                LS           ,/oNUMBER(5),                             o/

                LCGYL        ,/oNUMBER(5),                             o/

                ZZZT         ,/oNUMBER(5),                             o/

                STATIONNAME  ,/oVARCHAR2(32),                          o/

                SRJLH        ,/oNUMBER(5),                             o/

                JLQFXHJJL    ,/oNUMBER(5),                             o/

                XS           ,/oNUMBER(5),                             o/

                ZDSC         ,/oNUMBER(3),                             o/

                DQXLHBZ      ,/oNUMBER(3),                             o/

                DQXLH        ,/oNUMBER(5),                             o/

                QFXLHBZ      ,/oNUMBER(3),                             o/

                QFXLH        ,/oNUMBER(5),                             o/

                DQ_TMIS      ,/oNUMBER(8),                             o/

                QF_TIME      ,/oNUMBER(8),                             o/

                QFCZJLH      ,/oNUMBER(3),                             o/

                QFCHZH       ,/oNUMBER(5),                             o/

                JKZT         ,/oNUMBER(3),                             o/

                LJWY         ,/oNUMBER(5),                             o/

                BFQZX        ,/oNUMBER(3),                             o/

                BFQCX        ,/oNUMBER(3),                             o/

                QFFQZX       ,/oNUMBER(3),                             o/

                QFFQCX       ,/oNUMBER(3),                             o/

                DRIVERNAME   ,/oVARCHAR2(30),                          o/

                DRIVERTEL    ,/oVARCHAR2(32),                          o/

                LINENO       ,/oNUMBER(5),                             o/

                LINENAME     ,/oVARCHAR2(32),                          o/

                STATIONNAME2 ,/oVARCHAR2(32),                          o/

                D_ID2        ,/oCHAR(4),                               o/

                B_ID         ,/oCHAR(2),                               o/

                B_ID2        ,/oCHAR(2),                               o/

                LKJ_TYPE    , /oNUMBER(3)                              o/

                LKJSYSTIME,

                OTHERSYSTIME /oOTHERSSYSTIME edit by guo 2016.5.17o/

                )

            VALUES(

                :data_event->str_event[num].IDX         ,/oCHAR(32 CHAR) not null,   o/

                :data_event->T_TYPE_ID   ,/oCHAR(3 CHAR),           o/

                :data_event->LOCO_NO     ,/oCHAR(4 CHAR),           o/

                :data_event->AB          ,/oNUMBER(1),              o/

                trim(:data_event->D_ID)        ,/oCHAR(4),                o/

                to_date(:data_event->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_event->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_event->str_event[num].ETYPE       ,/oNUMBER(5),              o/

                :data_event->str_event[num].VER       ,

                trim(:data_event->str_event[num].SJMC)        ,/oVARCHAR2(30),           o/

                :data_event->str_event[num].SJDJ        ,/oNUMBER(2),              o/



                :data_event->GPSJD       ,/oNUMBER(12,6),           o/

                :data_event->GPSWD       ,/oNUMBER(12,6),           o/

                :data_event->GPSSD       ,/oNUMBER(5,2),            o/

                :data_event->GPSHB       ,/oNUMBER(8,2),            o/

                to_date(:data_event->str_event[num].SJ ,'yyyy-mm-dd hh24:mi:ss'),



                :data_event->str_event[num].CC          ,/oVARCHAR2(20 CHAR),      o/

                :data_event->str_event[num].CZH         ,/oNUMBER(5),              o/

                :data_event->str_event[num].SJH         ,/oNUMBER(10),             o/

                :data_event->str_event[num].FSJH        ,/oNUMBER(10),             o/

                :data_event->str_event[num].SJJLH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].KHBB        ,/oNUMBER(3),              o/

                :data_event->str_event[num].SJSU        ,/oNUMBER(5,2),            o/

                :data_event->str_event[num].JCXHZ       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GK          ,/oNUMBER(3),              o/

                :data_event->str_event[num].XHJBH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].XHJLB       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GLB         ,/oNUMBER(10),             o/

                :data_event->str_event[num].ZZ          ,/oNUMBER(5),              o/

                :data_event->str_event[num].JC          ,/oNUMBER(6,2),            o/

                :data_event->str_event[num].LS          ,/oNUMBER(5),              o/

                :data_event->str_event[num].LCGYL       ,/oNUMBER(5),              o/

                :data_event->str_event[num].ZZZT        ,/oNUMBER(3),              o/

                trim(:data_event->STATIONNAME) ,/oVARCHAR2(32),        o/

                :data_event->str_event[num].SRJLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].JLQFXHJJL   ,/oNUMBER(5),           o/

                :data_event->str_event[num].XS          ,/oNUMBER(5),           o/

                :data_event->str_event[num].ZDSC        ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].QFXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].DQ_TMIS     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QF_TIME     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QFCZJLH     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFCHZH      ,/oNUMBER(5),           o/

                :data_event->str_event[num].JKZT        ,/oNUMBER(3),           o/

                :data_event->str_event[num].LJWY        ,/oNUMBER(5),           o/

                :data_event->str_event[num].BFQZX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].BFQCX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQZX      ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQCX      ,/oNUMBER(3),           o/

                trim(:data_event->DRIVERNAME)  ,/oVARCHAR2(30),        o/

                trim(:data_event->DRIVERTEL)   ,/oVARCHAR2(32),        o/

                trim(:data_event->LINENO)      ,/oNUMBER(5),           o/

                trim(:data_event->LINENAME)    ,/oVARCHAR2(32),        o/

                trim(:data_event->STATIONNAME2) ,/oVARCHAR2(32),        o/

                trim(:data_event->D_ID2)       ,/oCHAR(4),             o/

                trim(:data_event->B_ID)        ,/oCHAR(2)              o/

                trim(:data_event->B_ID2)       ,/oCHAR(2)              o/

                :data_event->str_event[num].LKJ_TYPE  ,    /oNUMBER(3),           o/

                to_date(:data_event->str_event[num].LKJ_SJ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_event->str_event[num].QT_SJ,'yyyy-mm-dd hh24:mi:ss')

                ) ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_EVENT_LKJALARM (IDX,T_TYPE_ID,LOCO_NO,AB\
,D_ID,BTSJ,RKSJ,ETYPE,VER,SJMC,SJDJ,GPSJD,GPSWD,GPSSD,GPSHB,SJ,CC,CZH,SJH,FSJ\
H,SJJLH,KHBB,SJSD,JCXH,GK,XHJBH,XHJLB,GLB,ZZ,JC,LS,LCGYL,ZZZT,STATIONNAME,SRJ\
LH,JLQFXHJJL,XS,ZDSC,DQXLHBZ,DQXLH,QFXLHBZ,QFXLH,DQ_TMIS,QF_TIME,QFCZJLH,QFCH\
ZH,JKZT,LJWY,BFQZX,BFQCX,QFFQZX,QFFQCX,DRIVERNAME,DRIVERTEL,LINENO,LINENAME,S\
TATIONNAME2,D_ID2,B_ID,B_ID2,LKJ_TYPE,LKJSYSTIME,OTHERSYSTIME) values (:b0,:b\
1,:b2,:b3,trim(:b4),to_date(:b5,'yyyy-mm-dd hh24:mi:ss'),to_date(:b6,'yyyy-mm\
-dd hh24:mi:ss'),:b7,:b8,trim(:b9),:b10,:b11,:b12,:b13,:b14,to_date(:b15,'yyy\
y-mm-dd hh24:mi:ss'),:b16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,:b24,:b25,:b26,:\
b27,:b28,:b29,:b30,:b31,:b32,trim(:b33),:b34,:b35,:b36,:b37,:b38,:b39,:b40,:b\
41,:b42,:b43,:b44,:b45,:b46,:b47,:b48,:b49,:b50,:b51,trim(:b52),trim(:b53),tr\
im(:b54),trim(:b55),trim(:b56),trim(:b57),trim(:b58),trim(:b59),:b60,to_date(\
:b61,'yyyy-mm-dd hh24:mi:ss'),to_date(:b62,'yyyy-mm-dd hh24:mi:ss'))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )5082;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_event->str_event)[num].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_event->T_TYPE_ID);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_event->LOCO_NO);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_event->AB);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_event->D_ID);
    sqlstm.sqhstl[4] = (unsigned long )5;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_event->RKSJ);
    sqlstm.sqhstl[5] = (unsigned long )21;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)(data_event->BTSJ);
    sqlstm.sqhstl[6] = (unsigned long )21;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&((data_event->str_event)[num].ETYPE);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&((data_event->str_event)[num].VER);
    sqlstm.sqhstl[8] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)((data_event->str_event)[num].SJMC);
    sqlstm.sqhstl[9] = (unsigned long )33;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&((data_event->str_event)[num].SJDJ);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_event->GPSJD);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_event->GPSWD);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_event->GPSSD);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_event->GPSHB);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)((data_event->str_event)[num].SJ);
    sqlstm.sqhstl[15] = (unsigned long )21;
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)((data_event->str_event)[num].CC);
    sqlstm.sqhstl[16] = (unsigned long )21;
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&((data_event->str_event)[num].CZH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&((data_event->str_event)[num].SJH);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&((data_event->str_event)[num].FSJH);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&((data_event->str_event)[num].SJJLH);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&((data_event->str_event)[num].KHBB);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&((data_event->str_event)[num].SJSU);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&((data_event->str_event)[num].JCXHZ);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&((data_event->str_event)[num].GK);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&((data_event->str_event)[num].XHJBH);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&((data_event->str_event)[num].XHJLB);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&((data_event->str_event)[num].GLB);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&((data_event->str_event)[num].ZZ);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&((data_event->str_event)[num].JC);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&((data_event->str_event)[num].LS);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&((data_event->str_event)[num].LCGYL);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&((data_event->str_event)[num].ZZZT);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)(data_event->STATIONNAME);
    sqlstm.sqhstl[33] = (unsigned long )33;
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&((data_event->str_event)[num].SRJLH);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)&((data_event->str_event)[num].JLQFXHJJL);
    sqlstm.sqhstl[35] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&((data_event->str_event)[num].XS);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&((data_event->str_event)[num].ZDSC);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&((data_event->str_event)[num].DQXLHBZ);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&((data_event->str_event)[num].DQXLH);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&((data_event->str_event)[num].QFXLHBZ);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)&((data_event->str_event)[num].QFXLH);
    sqlstm.sqhstl[41] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)&((data_event->str_event)[num].DQ_TMIS);
    sqlstm.sqhstl[42] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)&((data_event->str_event)[num].QF_TIME);
    sqlstm.sqhstl[43] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)&((data_event->str_event)[num].QFCZJLH);
    sqlstm.sqhstl[44] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)&((data_event->str_event)[num].QFCHZH);
    sqlstm.sqhstl[45] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)&((data_event->str_event)[num].JKZT);
    sqlstm.sqhstl[46] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&((data_event->str_event)[num].LJWY);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
    sqlstm.sqhstv[48] = (unsigned char  *)&((data_event->str_event)[num].BFQZX);
    sqlstm.sqhstl[48] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[48] = (         int  )0;
    sqlstm.sqindv[48] = (         short *)0;
    sqlstm.sqinds[48] = (         int  )0;
    sqlstm.sqharm[48] = (unsigned long )0;
    sqlstm.sqadto[48] = (unsigned short )0;
    sqlstm.sqtdso[48] = (unsigned short )0;
    sqlstm.sqhstv[49] = (unsigned char  *)&((data_event->str_event)[num].BFQCX);
    sqlstm.sqhstl[49] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[49] = (         int  )0;
    sqlstm.sqindv[49] = (         short *)0;
    sqlstm.sqinds[49] = (         int  )0;
    sqlstm.sqharm[49] = (unsigned long )0;
    sqlstm.sqadto[49] = (unsigned short )0;
    sqlstm.sqtdso[49] = (unsigned short )0;
    sqlstm.sqhstv[50] = (unsigned char  *)&((data_event->str_event)[num].QFFQZX);
    sqlstm.sqhstl[50] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[50] = (         int  )0;
    sqlstm.sqindv[50] = (         short *)0;
    sqlstm.sqinds[50] = (         int  )0;
    sqlstm.sqharm[50] = (unsigned long )0;
    sqlstm.sqadto[50] = (unsigned short )0;
    sqlstm.sqtdso[50] = (unsigned short )0;
    sqlstm.sqhstv[51] = (unsigned char  *)&((data_event->str_event)[num].QFFQCX);
    sqlstm.sqhstl[51] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[51] = (         int  )0;
    sqlstm.sqindv[51] = (         short *)0;
    sqlstm.sqinds[51] = (         int  )0;
    sqlstm.sqharm[51] = (unsigned long )0;
    sqlstm.sqadto[51] = (unsigned short )0;
    sqlstm.sqtdso[51] = (unsigned short )0;
    sqlstm.sqhstv[52] = (unsigned char  *)(data_event->DRIVERNAME);
    sqlstm.sqhstl[52] = (unsigned long )33;
    sqlstm.sqhsts[52] = (         int  )0;
    sqlstm.sqindv[52] = (         short *)0;
    sqlstm.sqinds[52] = (         int  )0;
    sqlstm.sqharm[52] = (unsigned long )0;
    sqlstm.sqadto[52] = (unsigned short )0;
    sqlstm.sqtdso[52] = (unsigned short )0;
    sqlstm.sqhstv[53] = (unsigned char  *)(data_event->DRIVERTEL);
    sqlstm.sqhstl[53] = (unsigned long )33;
    sqlstm.sqhsts[53] = (         int  )0;
    sqlstm.sqindv[53] = (         short *)0;
    sqlstm.sqinds[53] = (         int  )0;
    sqlstm.sqharm[53] = (unsigned long )0;
    sqlstm.sqadto[53] = (unsigned short )0;
    sqlstm.sqtdso[53] = (unsigned short )0;
    sqlstm.sqhstv[54] = (unsigned char  *)&(data_event->LINENO);
    sqlstm.sqhstl[54] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[54] = (         int  )0;
    sqlstm.sqindv[54] = (         short *)0;
    sqlstm.sqinds[54] = (         int  )0;
    sqlstm.sqharm[54] = (unsigned long )0;
    sqlstm.sqadto[54] = (unsigned short )0;
    sqlstm.sqtdso[54] = (unsigned short )0;
    sqlstm.sqhstv[55] = (unsigned char  *)(data_event->LINENAME);
    sqlstm.sqhstl[55] = (unsigned long )33;
    sqlstm.sqhsts[55] = (         int  )0;
    sqlstm.sqindv[55] = (         short *)0;
    sqlstm.sqinds[55] = (         int  )0;
    sqlstm.sqharm[55] = (unsigned long )0;
    sqlstm.sqadto[55] = (unsigned short )0;
    sqlstm.sqtdso[55] = (unsigned short )0;
    sqlstm.sqhstv[56] = (unsigned char  *)(data_event->STATIONNAME2);
    sqlstm.sqhstl[56] = (unsigned long )33;
    sqlstm.sqhsts[56] = (         int  )0;
    sqlstm.sqindv[56] = (         short *)0;
    sqlstm.sqinds[56] = (         int  )0;
    sqlstm.sqharm[56] = (unsigned long )0;
    sqlstm.sqadto[56] = (unsigned short )0;
    sqlstm.sqtdso[56] = (unsigned short )0;
    sqlstm.sqhstv[57] = (unsigned char  *)(data_event->D_ID2);
    sqlstm.sqhstl[57] = (unsigned long )5;
    sqlstm.sqhsts[57] = (         int  )0;
    sqlstm.sqindv[57] = (         short *)0;
    sqlstm.sqinds[57] = (         int  )0;
    sqlstm.sqharm[57] = (unsigned long )0;
    sqlstm.sqadto[57] = (unsigned short )0;
    sqlstm.sqtdso[57] = (unsigned short )0;
    sqlstm.sqhstv[58] = (unsigned char  *)(data_event->B_ID);
    sqlstm.sqhstl[58] = (unsigned long )5;
    sqlstm.sqhsts[58] = (         int  )0;
    sqlstm.sqindv[58] = (         short *)0;
    sqlstm.sqinds[58] = (         int  )0;
    sqlstm.sqharm[58] = (unsigned long )0;
    sqlstm.sqadto[58] = (unsigned short )0;
    sqlstm.sqtdso[58] = (unsigned short )0;
    sqlstm.sqhstv[59] = (unsigned char  *)(data_event->B_ID2);
    sqlstm.sqhstl[59] = (unsigned long )5;
    sqlstm.sqhsts[59] = (         int  )0;
    sqlstm.sqindv[59] = (         short *)0;
    sqlstm.sqinds[59] = (         int  )0;
    sqlstm.sqharm[59] = (unsigned long )0;
    sqlstm.sqadto[59] = (unsigned short )0;
    sqlstm.sqtdso[59] = (unsigned short )0;
    sqlstm.sqhstv[60] = (unsigned char  *)&((data_event->str_event)[num].LKJ_TYPE);
    sqlstm.sqhstl[60] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[60] = (         int  )0;
    sqlstm.sqindv[60] = (         short *)0;
    sqlstm.sqinds[60] = (         int  )0;
    sqlstm.sqharm[60] = (unsigned long )0;
    sqlstm.sqadto[60] = (unsigned short )0;
    sqlstm.sqtdso[60] = (unsigned short )0;
    sqlstm.sqhstv[61] = (unsigned char  *)((data_event->str_event)[num].LKJ_SJ);
    sqlstm.sqhstl[61] = (unsigned long )21;
    sqlstm.sqhsts[61] = (         int  )0;
    sqlstm.sqindv[61] = (         short *)0;
    sqlstm.sqinds[61] = (         int  )0;
    sqlstm.sqharm[61] = (unsigned long )0;
    sqlstm.sqadto[61] = (unsigned short )0;
    sqlstm.sqtdso[61] = (unsigned short )0;
    sqlstm.sqhstv[62] = (unsigned char  *)((data_event->str_event)[num].QT_SJ);
    sqlstm.sqhstl[62] = (unsigned long )21;
    sqlstm.sqhsts[62] = (         int  )0;
    sqlstm.sqindv[62] = (         short *)0;
    sqlstm.sqinds[62] = (         int  )0;
    sqlstm.sqharm[62] = (unsigned long )0;
    sqlstm.sqadto[62] = (unsigned short )0;
    sqlstm.sqtdso[62] = (unsigned short )0;
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





    if (sqlca.sqlcode == 0)

    {

        if(data_event->key == 14550920)

        {

            //printf("loco.%s-%s:事件EVENT_LKJALARM入库成功\n",data_event->T_TYPE_ID,data_event->LOCO_NO);

        }





        return 0;

    }

    else

    {

        if(data_event->key == 14550920)

        {

            //printf("loco.%s-%s:事件EVENT_LKJALARM入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        }

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:事件EVENT_LKJALARM入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.v,temp);

        cclog('e',temp);

        return 1;

    }

}	



static unsigned char insert_to_ITF_EVENT_LKJALARM(int num)

{

    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_EVENT_LKJALARM (

                IDX          ,/oCHAR(32) not null,                     o/

                T_TYPE_ID    ,/oCHAR(3 CHAR),                          o/

                LOCO_NO      ,/oCHAR(4 CHAR),                          o/

                AB           ,/oNUMBER(1) not null,                    o/

                D_ID         ,/oCHAR(4),                               o/

                BTSJ         ,/oDATE,                                  o/

                RKSJ         ,/oDATE default SYSDATE,                  o/

                ETYPE        ,/oNUMBER(5),                             o/

                VER          ,/oNUMBER(3),                             o/

                SJMC         ,/oVARCHAR2(30),                          o/

                SJDJ         ,/oNUMBER(2),                             o/

                GPSJD        ,/oNUMBER(12,6),                          o/

                GPSWD        ,/oNUMBER(12,6),                          o/

                GPSSD        ,/oNUMBER(5,2),                           o/

                GPSHB        ,/oNUMBER(8,2),                           o/

                SJ           ,/oDATE,                                  o/

                CC           ,/oVARCHAR2(20 CHAR),                     o/

                CZH          ,/oNUMBER(5),                             o/

                SJH          ,/oNUMBER(10),                            o/

                FSJH         ,/oNUMBER(10),                            o/

                SJJLH        ,/oNUMBER(5),                             o/

                KHBB         ,/oNUMBER(3),                             o/

                SJSD         ,/oNUMBER(5,2),                           o/

                JCXH         ,/oNUMBER(5),                             o/

                GK           ,/oNUMBER(3),                             o/

                XHJBH        ,/oNUMBER(5),                             o/

                XHJLB        ,/oNUMBER(5),                             o/

                GLB          ,/oNUMBER(10),                            o/

                ZZ           ,/oNUMBER(5),                             o/

                JC           ,/oNUMBER(6,2),                           o/

                LS           ,/oNUMBER(5),                             o/

                LCGYL        ,/oNUMBER(5),                             o/

                ZZZT         ,/oNUMBER(5),                             o/

                STATIONNAME  ,/oVARCHAR2(32),                          o/

                SRJLH        ,/oNUMBER(5),                             o/

                JLQFXHJJL    ,/oNUMBER(5),                             o/

                XS           ,/oNUMBER(5),                             o/

                ZDSC         ,/oNUMBER(3),                             o/

                DQXLHBZ      ,/oNUMBER(3),                             o/

                DQXLH        ,/oNUMBER(5),                             o/

                QFXLHBZ      ,/oNUMBER(3),                             o/

                QFXLH        ,/oNUMBER(5),                             o/

                DQ_TMIS      ,/oNUMBER(8),                             o/

                QF_TIME      ,/oNUMBER(8),                             o/

                QFCZJLH      ,/oNUMBER(3),                             o/

                QFCHZH       ,/oNUMBER(5),                             o/

                JKZT         ,/oNUMBER(3),                             o/

                LJWY         ,/oNUMBER(5),                             o/

                BFQZX        ,/oNUMBER(3),                             o/

                BFQCX        ,/oNUMBER(3),                             o/

                QFFQZX       ,/oNUMBER(3),                             o/

                QFFQCX       ,/oNUMBER(3),                             o/

                DRIVERNAME   ,/oVARCHAR2(30),                          o/

                DRIVERTEL    ,/oVARCHAR2(32),                          o/

                LINENO       ,/oNUMBER(5),                             o/

                LINENAME     ,/oVARCHAR2(32),                          o/

                STATIONNAME2 ,/oVARCHAR2(32),                          o/

                D_ID2        ,/oCHAR(4),                               o/

                B_ID         ,/oCHAR(2),                               o/

                B_ID2        ,/oCHAR(2),                               o/

                LKJ_TYPE     /oNUMBER(3)                              o/

                ,CRK

                )

            VALUES(

                :data_event->str_event[num].IDX         ,/oCHAR(32 CHAR) not null,   o/

                :data_event->T_TYPE_ID   ,/oCHAR(3 CHAR),           o/

                :data_event->LOCO_NO     ,/oCHAR(4 CHAR),           o/

                :data_event->AB          ,/oNUMBER(1),              o/

                trim(:data_event->D_ID)        ,/oCHAR(4),                o/

                to_date(:data_event->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_event->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_event->str_event[num].ETYPE       ,/oNUMBER(5),              o/

                :data_event->str_event[num].VER       ,

                trim(:data_event->str_event[num].SJMC)        ,/oVARCHAR2(30),           o/

                :data_event->str_event[num].SJDJ        ,/oNUMBER(2),              o/



                :data_event->GPSJD       ,/oNUMBER(12,6),           o/

                :data_event->GPSWD       ,/oNUMBER(12,6),           o/

                :data_event->GPSSD       ,/oNUMBER(5,2),            o/

                :data_event->GPSHB       ,/oNUMBER(8,2),            o/

                to_date(:data_event->str_event[num].SJ ,'yyyy-mm-dd hh24:mi:ss'),



                :data_event->str_event[num].CC          ,/oVARCHAR2(20 CHAR),      o/

                :data_event->str_event[num].CZH         ,/oNUMBER(5),              o/

                :data_event->str_event[num].SJH         ,/oNUMBER(10),             o/

                :data_event->str_event[num].FSJH        ,/oNUMBER(10),             o/

                :data_event->str_event[num].SJJLH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].KHBB        ,/oNUMBER(3),              o/

                :data_event->str_event[num].SJSU        ,/oNUMBER(5,2),            o/

                :data_event->str_event[num].JCXHZ       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GK          ,/oNUMBER(3),              o/

                :data_event->str_event[num].XHJBH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].XHJLB       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GLB         ,/oNUMBER(10),             o/

                :data_event->str_event[num].ZZ          ,/oNUMBER(5),              o/

                :data_event->str_event[num].JC          ,/oNUMBER(6,2),            o/

                :data_event->str_event[num].LS          ,/oNUMBER(5),              o/

                :data_event->str_event[num].LCGYL       ,/oNUMBER(5),              o/

                :data_event->str_event[num].ZZZT        ,/oNUMBER(3),              o/

                trim(:data_event->STATIONNAME) ,/oVARCHAR2(32),        o/

                :data_event->str_event[num].SRJLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].JLQFXHJJL   ,/oNUMBER(5),           o/

                :data_event->str_event[num].XS          ,/oNUMBER(5),           o/

                :data_event->str_event[num].ZDSC        ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].QFXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].DQ_TMIS     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QF_TIME     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QFCZJLH     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFCHZH      ,/oNUMBER(5),           o/

                :data_event->str_event[num].JKZT        ,/oNUMBER(3),           o/

                :data_event->str_event[num].LJWY        ,/oNUMBER(5),           o/

                :data_event->str_event[num].BFQZX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].BFQCX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQZX      ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQCX      ,/oNUMBER(3),           o/

                trim(:data_event->DRIVERNAME)  ,/oVARCHAR2(30),        o/

                trim(:data_event->DRIVERTEL)   ,/oVARCHAR2(32),        o/

                trim(:data_event->LINENO)      ,/oNUMBER(5),           o/

                trim(:data_event->LINENAME)    ,/oVARCHAR2(32),        o/

                trim(:data_event->STATIONNAME2) ,/oVARCHAR2(32),        o/

                trim(:data_event->D_ID2)       ,/oCHAR(4),             o/

                trim(:data_event->B_ID)        ,/oCHAR(2)              o/

                trim(:data_event->B_ID2)       ,/oCHAR(2)              o/

                :data_event->str_event[num].LKJ_TYPE      /oNUMBER(3),           o/

                ,:data_event->CRK

                ) ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_EVENT_LKJALARM (IDX,T_TYPE_ID,LOCO_NO,AB\
,D_ID,BTSJ,RKSJ,ETYPE,VER,SJMC,SJDJ,GPSJD,GPSWD,GPSSD,GPSHB,SJ,CC,CZH,SJH,FSJ\
H,SJJLH,KHBB,SJSD,JCXH,GK,XHJBH,XHJLB,GLB,ZZ,JC,LS,LCGYL,ZZZT,STATIONNAME,SRJ\
LH,JLQFXHJJL,XS,ZDSC,DQXLHBZ,DQXLH,QFXLHBZ,QFXLH,DQ_TMIS,QF_TIME,QFCZJLH,QFCH\
ZH,JKZT,LJWY,BFQZX,BFQCX,QFFQZX,QFFQCX,DRIVERNAME,DRIVERTEL,LINENO,LINENAME,S\
TATIONNAME2,D_ID2,B_ID,B_ID2,LKJ_TYPE,CRK) values (:b0,:b1,:b2,:b3,trim(:b4),\
to_date(:b5,'yyyy-mm-dd hh24:mi:ss'),to_date(:b6,'yyyy-mm-dd hh24:mi:ss'),:b7\
,:b8,trim(:b9),:b10,:b11,:b12,:b13,:b14,to_date(:b15,'yyyy-mm-dd hh24:mi:ss')\
,:b16,:b17,:b18,:b19,:b20,:b21,:b22,:b23,:b24,:b25,:b26,:b27,:b28,:b29,:b30,:\
b31,:b32,trim(:b33),:b34,:b35,:b36,:b37,:b38,:b39,:b40,:b41,:b42,:b43,:b44,:b\
45,:b46,:b47,:b48,:b49,:b50,:b51,trim(:b52),trim(:b53),trim(:b54),trim(:b55),\
trim(:b56),trim(:b57),trim(:b58),trim(:b59),:b60,:b61)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )5349;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_event->str_event)[num].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_event->T_TYPE_ID);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_event->LOCO_NO);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_event->AB);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_event->D_ID);
    sqlstm.sqhstl[4] = (unsigned long )5;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_event->RKSJ);
    sqlstm.sqhstl[5] = (unsigned long )21;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)(data_event->BTSJ);
    sqlstm.sqhstl[6] = (unsigned long )21;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&((data_event->str_event)[num].ETYPE);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&((data_event->str_event)[num].VER);
    sqlstm.sqhstl[8] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)((data_event->str_event)[num].SJMC);
    sqlstm.sqhstl[9] = (unsigned long )33;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&((data_event->str_event)[num].SJDJ);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_event->GPSJD);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_event->GPSWD);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_event->GPSSD);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_event->GPSHB);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)((data_event->str_event)[num].SJ);
    sqlstm.sqhstl[15] = (unsigned long )21;
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)((data_event->str_event)[num].CC);
    sqlstm.sqhstl[16] = (unsigned long )21;
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&((data_event->str_event)[num].CZH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&((data_event->str_event)[num].SJH);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&((data_event->str_event)[num].FSJH);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&((data_event->str_event)[num].SJJLH);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&((data_event->str_event)[num].KHBB);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&((data_event->str_event)[num].SJSU);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&((data_event->str_event)[num].JCXHZ);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&((data_event->str_event)[num].GK);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&((data_event->str_event)[num].XHJBH);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&((data_event->str_event)[num].XHJLB);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&((data_event->str_event)[num].GLB);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&((data_event->str_event)[num].ZZ);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&((data_event->str_event)[num].JC);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&((data_event->str_event)[num].LS);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&((data_event->str_event)[num].LCGYL);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&((data_event->str_event)[num].ZZZT);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)(data_event->STATIONNAME);
    sqlstm.sqhstl[33] = (unsigned long )33;
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&((data_event->str_event)[num].SRJLH);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)&((data_event->str_event)[num].JLQFXHJJL);
    sqlstm.sqhstl[35] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&((data_event->str_event)[num].XS);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&((data_event->str_event)[num].ZDSC);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&((data_event->str_event)[num].DQXLHBZ);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&((data_event->str_event)[num].DQXLH);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&((data_event->str_event)[num].QFXLHBZ);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)&((data_event->str_event)[num].QFXLH);
    sqlstm.sqhstl[41] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)&((data_event->str_event)[num].DQ_TMIS);
    sqlstm.sqhstl[42] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)&((data_event->str_event)[num].QF_TIME);
    sqlstm.sqhstl[43] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)&((data_event->str_event)[num].QFCZJLH);
    sqlstm.sqhstl[44] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)&((data_event->str_event)[num].QFCHZH);
    sqlstm.sqhstl[45] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)&((data_event->str_event)[num].JKZT);
    sqlstm.sqhstl[46] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&((data_event->str_event)[num].LJWY);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
    sqlstm.sqhstv[48] = (unsigned char  *)&((data_event->str_event)[num].BFQZX);
    sqlstm.sqhstl[48] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[48] = (         int  )0;
    sqlstm.sqindv[48] = (         short *)0;
    sqlstm.sqinds[48] = (         int  )0;
    sqlstm.sqharm[48] = (unsigned long )0;
    sqlstm.sqadto[48] = (unsigned short )0;
    sqlstm.sqtdso[48] = (unsigned short )0;
    sqlstm.sqhstv[49] = (unsigned char  *)&((data_event->str_event)[num].BFQCX);
    sqlstm.sqhstl[49] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[49] = (         int  )0;
    sqlstm.sqindv[49] = (         short *)0;
    sqlstm.sqinds[49] = (         int  )0;
    sqlstm.sqharm[49] = (unsigned long )0;
    sqlstm.sqadto[49] = (unsigned short )0;
    sqlstm.sqtdso[49] = (unsigned short )0;
    sqlstm.sqhstv[50] = (unsigned char  *)&((data_event->str_event)[num].QFFQZX);
    sqlstm.sqhstl[50] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[50] = (         int  )0;
    sqlstm.sqindv[50] = (         short *)0;
    sqlstm.sqinds[50] = (         int  )0;
    sqlstm.sqharm[50] = (unsigned long )0;
    sqlstm.sqadto[50] = (unsigned short )0;
    sqlstm.sqtdso[50] = (unsigned short )0;
    sqlstm.sqhstv[51] = (unsigned char  *)&((data_event->str_event)[num].QFFQCX);
    sqlstm.sqhstl[51] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[51] = (         int  )0;
    sqlstm.sqindv[51] = (         short *)0;
    sqlstm.sqinds[51] = (         int  )0;
    sqlstm.sqharm[51] = (unsigned long )0;
    sqlstm.sqadto[51] = (unsigned short )0;
    sqlstm.sqtdso[51] = (unsigned short )0;
    sqlstm.sqhstv[52] = (unsigned char  *)(data_event->DRIVERNAME);
    sqlstm.sqhstl[52] = (unsigned long )33;
    sqlstm.sqhsts[52] = (         int  )0;
    sqlstm.sqindv[52] = (         short *)0;
    sqlstm.sqinds[52] = (         int  )0;
    sqlstm.sqharm[52] = (unsigned long )0;
    sqlstm.sqadto[52] = (unsigned short )0;
    sqlstm.sqtdso[52] = (unsigned short )0;
    sqlstm.sqhstv[53] = (unsigned char  *)(data_event->DRIVERTEL);
    sqlstm.sqhstl[53] = (unsigned long )33;
    sqlstm.sqhsts[53] = (         int  )0;
    sqlstm.sqindv[53] = (         short *)0;
    sqlstm.sqinds[53] = (         int  )0;
    sqlstm.sqharm[53] = (unsigned long )0;
    sqlstm.sqadto[53] = (unsigned short )0;
    sqlstm.sqtdso[53] = (unsigned short )0;
    sqlstm.sqhstv[54] = (unsigned char  *)&(data_event->LINENO);
    sqlstm.sqhstl[54] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[54] = (         int  )0;
    sqlstm.sqindv[54] = (         short *)0;
    sqlstm.sqinds[54] = (         int  )0;
    sqlstm.sqharm[54] = (unsigned long )0;
    sqlstm.sqadto[54] = (unsigned short )0;
    sqlstm.sqtdso[54] = (unsigned short )0;
    sqlstm.sqhstv[55] = (unsigned char  *)(data_event->LINENAME);
    sqlstm.sqhstl[55] = (unsigned long )33;
    sqlstm.sqhsts[55] = (         int  )0;
    sqlstm.sqindv[55] = (         short *)0;
    sqlstm.sqinds[55] = (         int  )0;
    sqlstm.sqharm[55] = (unsigned long )0;
    sqlstm.sqadto[55] = (unsigned short )0;
    sqlstm.sqtdso[55] = (unsigned short )0;
    sqlstm.sqhstv[56] = (unsigned char  *)(data_event->STATIONNAME2);
    sqlstm.sqhstl[56] = (unsigned long )33;
    sqlstm.sqhsts[56] = (         int  )0;
    sqlstm.sqindv[56] = (         short *)0;
    sqlstm.sqinds[56] = (         int  )0;
    sqlstm.sqharm[56] = (unsigned long )0;
    sqlstm.sqadto[56] = (unsigned short )0;
    sqlstm.sqtdso[56] = (unsigned short )0;
    sqlstm.sqhstv[57] = (unsigned char  *)(data_event->D_ID2);
    sqlstm.sqhstl[57] = (unsigned long )5;
    sqlstm.sqhsts[57] = (         int  )0;
    sqlstm.sqindv[57] = (         short *)0;
    sqlstm.sqinds[57] = (         int  )0;
    sqlstm.sqharm[57] = (unsigned long )0;
    sqlstm.sqadto[57] = (unsigned short )0;
    sqlstm.sqtdso[57] = (unsigned short )0;
    sqlstm.sqhstv[58] = (unsigned char  *)(data_event->B_ID);
    sqlstm.sqhstl[58] = (unsigned long )5;
    sqlstm.sqhsts[58] = (         int  )0;
    sqlstm.sqindv[58] = (         short *)0;
    sqlstm.sqinds[58] = (         int  )0;
    sqlstm.sqharm[58] = (unsigned long )0;
    sqlstm.sqadto[58] = (unsigned short )0;
    sqlstm.sqtdso[58] = (unsigned short )0;
    sqlstm.sqhstv[59] = (unsigned char  *)(data_event->B_ID2);
    sqlstm.sqhstl[59] = (unsigned long )5;
    sqlstm.sqhsts[59] = (         int  )0;
    sqlstm.sqindv[59] = (         short *)0;
    sqlstm.sqinds[59] = (         int  )0;
    sqlstm.sqharm[59] = (unsigned long )0;
    sqlstm.sqadto[59] = (unsigned short )0;
    sqlstm.sqtdso[59] = (unsigned short )0;
    sqlstm.sqhstv[60] = (unsigned char  *)&((data_event->str_event)[num].LKJ_TYPE);
    sqlstm.sqhstl[60] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[60] = (         int  )0;
    sqlstm.sqindv[60] = (         short *)0;
    sqlstm.sqinds[60] = (         int  )0;
    sqlstm.sqharm[60] = (unsigned long )0;
    sqlstm.sqadto[60] = (unsigned short )0;
    sqlstm.sqtdso[60] = (unsigned short )0;
    sqlstm.sqhstv[61] = (unsigned char  *)&(data_event->CRK);
    sqlstm.sqhstl[61] = (unsigned long )sizeof(int);
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





    if (sqlca.sqlcode == 0)

    {

        if(data_event->key == 14550920)

        {

            //printf("loco.%s-%s:事件EVENT_LKJALARM入库成功\n",data_event->T_TYPE_ID,data_event->LOCO_NO);

        }





        return 0;

    }

    else

    {

        if(data_event->key == 14550920)

        {

            //printf("loco.%s-%s:事件EVENT_LKJALARM入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        }

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:事件EVENT_LKJALARM入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.v,temp);

        cclog('e',temp);

        return 1;

    }

}



static unsigned char insert_to_ITF_EVENT_LKJ_EVENT(int num)

{

    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_EVENT_LKJ_EVENT (

                IDX         ,/oCHAR(32 CHAR) not null,   o/

                T_TYPE_ID   ,/oCHAR(3 CHAR),           o/

                LOCO_NO     ,/oCHAR(4 CHAR),           o/

                AB          ,/oNUMBER(1),              o/

                D_ID        ,/oCHAR(4),                o/

                ETYPE       ,/oNUMBER(5),              o/

                SJMC        ,/oVARCHAR2(30),           o/

                SJDJ        ,/oNUMBER(2),              o/

                BTSJ        ,/oDATE,                   o/

                RKSJ        ,/oDATE default SYSDATE,   o/

                SJ          ,/oDATE,                   o/

                GPSJD       ,/oNUMBER(12,6),           o/

                GPSWD       ,/oNUMBER(12,6),           o/

                GPSSD       ,/oNUMBER(5,2),            o/

                GPSHB       ,/oNUMBER(8,2),            o/

                CC          ,/oVARCHAR2(20 CHAR),      o/

                CZH         ,/oNUMBER(5),              o/

                SJH         ,/oNUMBER(10),             o/

                FSJH        ,/oNUMBER(10),             o/

                SJJLH       ,/oNUMBER(5),              o/

                KHBB        ,/oNUMBER(3),              o/

                SJSD        ,/oNUMBER(5,2),            o/

                JCXHZ       ,/oNUMBER(5),              o/

                GK          ,/oNUMBER(3),              o/

                XHJBH       ,/oNUMBER(5),              o/

                XHJLB       ,/oNUMBER(5),              o/

                GLB         ,/oNUMBER(10),             o/

                ZZ          ,/oNUMBER(5),              o/

                JC          ,/oNUMBER(6,2),            o/

                LS          ,/oNUMBER(5),              o/

                LCGYL       ,/oNUMBER(5),              o/

                ZZZT        ,/oNUMBER(3),              o/

                CXSJ        ,/oNUMBER(10),             o/

                SJH_BGQ     ,/oNUMBER(10),             o/

                FSJH_BGQ    ,/oNUMBER(10),             o/

                LKJVER      ,/oVARCHAR2(20),        o/

                SRJLH       ,/oNUMBER(5),           o/

                JLQFXHJJL   ,/oNUMBER(5),           o/

                XS          ,/oNUMBER(5),           o/

                ZDSC        ,/oNUMBER(3),           o/

                DQXLHBZ     ,/oNUMBER(3),           o/

                DQXLH       ,/oNUMBER(5),           o/

                QFXLHBZ     ,/oNUMBER(3),           o/

                QFXLH       ,/oNUMBER(5),           o/

                DQ_TMIS     ,/oNUMBER(8),           o/

                QF_TIME     ,/oNUMBER(8),           o/

                QFCZJLH     ,/oNUMBER(3),           o/

                QFCHZH      ,/oNUMBER(5),           o/

                JKZT        ,/oNUMBER(3),           o/

                LJWY        ,/oNUMBER(5),           o/

                BFQZX       ,/oNUMBER(3),           o/

                BFQCX       ,/oNUMBER(3),           o/

                QFFQZX      ,/oNUMBER(3),           o/

                QFFQCX      ,/oNUMBER(3),           o/

                DRIVERNAME  ,/oVARCHAR2(30),        o/

                DRIVERTEL   ,/oVARCHAR2(32),        o/

                LINENO      ,/oNUMBER(5),           o/

                LINENAME    ,/oVARCHAR2(32),        o/

                STATIONNAME ,/oVARCHAR2(32),        o/

                D_ID2       ,/oCHAR(4),             o/

                B_ID        ,/oCHAR(2)              o/

                B_ID2       , /oCHAR(2)              o/

                LKJ_TYPE   ,

                PRE_STATION,

                PRE_CROSSNO,

                PRE_STATIONNAME,

                PRE_CC

                ,CRK

                )

            VALUES(

                :data_event->str_event[num].IDX         ,/oCHAR(32 CHAR) not null,   o/

                :data_event->T_TYPE_ID   ,/oCHAR(3 CHAR),           o/

                :data_event->LOCO_NO     ,/oCHAR(4 CHAR),           o/

                :data_event->AB          ,/oNUMBER(1),              o/

                trim(:data_event->D_ID)        ,/oCHAR(4),                o/

                :data_event->str_event[num].ETYPE       ,/oNUMBER(5),              o/

                trim(:data_event->str_event[num].SJMC)       ,/oVARCHAR2(30),           o/

                :data_event->str_event[num].SJDJ        ,/oNUMBER(2),              o/

                to_date(:data_event->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_event->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_event->str_event[num].SJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_event->GPSJD       ,/oNUMBER(12,6),           o/

                :data_event->GPSWD       ,/oNUMBER(12,6),           o/

                :data_event->GPSSD       ,/oNUMBER(5,2),            o/

                :data_event->GPSHB       ,/oNUMBER(8,2),            o/

                :data_event->str_event[num].CC          ,/oVARCHAR2(20 CHAR),      o/

                :data_event->str_event[num].CZH         ,/oNUMBER(5),              o/

                :data_event->str_event[num].SJH         ,/oNUMBER(10),             o/

                :data_event->str_event[num].FSJH        ,/oNUMBER(10),             o/

                :data_event->str_event[num].SJJLH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].KHBB        ,/oNUMBER(3),              o/

                :data_event->str_event[num].SJSU        ,/oNUMBER(5,2),            o/

                :data_event->str_event[num].JCXHZ       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GK          ,/oNUMBER(3),              o/

                :data_event->str_event[num].XHJBH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].XHJLB       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GLB         ,/oNUMBER(10),             o/

                :data_event->str_event[num].ZZ          ,/oNUMBER(5),              o/

                :data_event->str_event[num].JC          ,/oNUMBER(6,2),            o/

                :data_event->str_event[num].LS          ,/oNUMBER(5),              o/

                :data_event->str_event[num].LCGYL       ,/oNUMBER(5),              o/

                :data_event->str_event[num].ZZZT        ,/oNUMBER(3),              o/

                :data_event->str_event[num].CXSJ        ,/oNUMBER(10),             o/

                :data_event->str_event[num].SJH_BGQ     ,/oNUMBER(10),             o/

                :data_event->str_event[num].FSJH_BGQ    ,/oNUMBER(10),             o/

                trim(:data_event->LKJVER )     ,/oVARCHAR2(20),        o/

                :data_event->str_event[num].SRJLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].JLQFXHJJL   ,/oNUMBER(5),           o/

                :data_event->str_event[num].XS          ,/oNUMBER(5),           o/

                :data_event->str_event[num].ZDSC        ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].QFXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].DQ_TMIS     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QF_TIME     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QFCZJLH     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFCHZH      ,/oNUMBER(5),           o/

                :data_event->str_event[num].JKZT        ,/oNUMBER(3),           o/

                :data_event->str_event[num].LJWY        ,/oNUMBER(5),           o/

                :data_event->str_event[num].BFQZX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].BFQCX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQZX      ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQCX      ,/oNUMBER(3),           o/

                trim(:data_event->DRIVERNAME)  ,/oVARCHAR2(30),        o/

                trim(:data_event->DRIVERTEL)   ,/oVARCHAR2(32),        o/

                trim(:data_event->LINENO)      ,/oNUMBER(5),           o/

                trim(:data_event->LINENAME )   ,/oVARCHAR2(32),        o/

                trim(:data_event->STATIONNAME) ,/oVARCHAR2(32),        o/

                trim(:data_event->D_ID2)       ,/oCHAR(4),             o/

                trim(:data_event->B_ID)        ,/oCHAR(2)              o/

                trim(:data_event->B_ID2)       , /oCHAR(2)              o/

                :data_event->str_event[num].LKJ_TYPE ,     /oNUMBER(3),           o/

                :data_event->str_event[num].PRE_CZH,

                :data_event->str_event[num].PRE_JLH,

                trim(:data_event->str_event[num].PRE_CZM),

                trim(:data_event->str_event[num].PRE_CC)

                ,:data_event->CRK

                ) ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_EVENT_LKJ_EVENT (IDX,T_TYPE_ID,LOCO_NO,A\
B,D_ID,ETYPE,SJMC,SJDJ,BTSJ,RKSJ,SJ,GPSJD,GPSWD,GPSSD,GPSHB,CC,CZH,SJH,FSJH,S\
JJLH,KHBB,SJSD,JCXHZ,GK,XHJBH,XHJLB,GLB,ZZ,JC,LS,LCGYL,ZZZT,CXSJ,SJH_BGQ,FSJH\
_BGQ,LKJVER,SRJLH,JLQFXHJJL,XS,ZDSC,DQXLHBZ,DQXLH,QFXLHBZ,QFXLH,DQ_TMIS,QF_TI\
ME,QFCZJLH,QFCHZH,JKZT,LJWY,BFQZX,BFQCX,QFFQZX,QFFQCX,DRIVERNAME,DRIVERTEL,LI\
NENO,LINENAME,STATIONNAME,D_ID2,B_ID,B_ID2,LKJ_TYPE,PRE_STATION,PRE_CROSSNO,P\
RE_STATIONNAME,PRE_CC,CRK) values (:b0,:b1,:b2,:b3,trim(:b4),:b5,trim(:b6),:b\
7,to_date(:b8,'yyyy-mm-dd hh24:mi:ss'),to_date(:b9,'yyyy-mm-dd hh24:mi:ss'),t\
o_date(:b10,'yyyy-mm-dd hh24:mi:ss'),:b11,:b12,:b13,:b14,:b15,:b16,:b17,:b18,\
:b19,:b20,:b21,:b22,:b23,:b24,:b25,:b26,:b27,:b28,:b29,:b30,:b31,:b32,:b33,:b\
34,trim(:b35),:b36,:b37,:b38,:b39,:b40,:b41,:b42,:b43,:b44,:b45,:b46,:b47,:b4\
8,:b49,:b50,:b51,:b52,:b53,trim(:b54),trim(:b55),trim(:b56),trim(:b57),trim(:\
b58),trim(:b59),trim(:b60),trim(:b61),:b62,:b63,:b64,trim(:b65),trim(:b66),:b\
67)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )5612;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_event->str_event)[num].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_event->T_TYPE_ID);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_event->LOCO_NO);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_event->AB);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_event->D_ID);
    sqlstm.sqhstl[4] = (unsigned long )5;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&((data_event->str_event)[num].ETYPE);
    sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)((data_event->str_event)[num].SJMC);
    sqlstm.sqhstl[6] = (unsigned long )33;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&((data_event->str_event)[num].SJDJ);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)(data_event->RKSJ);
    sqlstm.sqhstl[8] = (unsigned long )21;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)(data_event->BTSJ);
    sqlstm.sqhstl[9] = (unsigned long )21;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)((data_event->str_event)[num].SJ);
    sqlstm.sqhstl[10] = (unsigned long )21;
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_event->GPSJD);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_event->GPSWD);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_event->GPSSD);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_event->GPSHB);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)((data_event->str_event)[num].CC);
    sqlstm.sqhstl[15] = (unsigned long )21;
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&((data_event->str_event)[num].CZH);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&((data_event->str_event)[num].SJH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&((data_event->str_event)[num].FSJH);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&((data_event->str_event)[num].SJJLH);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&((data_event->str_event)[num].KHBB);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&((data_event->str_event)[num].SJSU);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&((data_event->str_event)[num].JCXHZ);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&((data_event->str_event)[num].GK);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&((data_event->str_event)[num].XHJBH);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&((data_event->str_event)[num].XHJLB);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&((data_event->str_event)[num].GLB);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&((data_event->str_event)[num].ZZ);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&((data_event->str_event)[num].JC);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&((data_event->str_event)[num].LS);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&((data_event->str_event)[num].LCGYL);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&((data_event->str_event)[num].ZZZT);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&((data_event->str_event)[num].CXSJ);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&((data_event->str_event)[num].SJH_BGQ);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&((data_event->str_event)[num].FSJH_BGQ);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)(data_event->LKJVER);
    sqlstm.sqhstl[35] = (unsigned long )21;
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&((data_event->str_event)[num].SRJLH);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&((data_event->str_event)[num].JLQFXHJJL);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&((data_event->str_event)[num].XS);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&((data_event->str_event)[num].ZDSC);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&((data_event->str_event)[num].DQXLHBZ);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)&((data_event->str_event)[num].DQXLH);
    sqlstm.sqhstl[41] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)&((data_event->str_event)[num].QFXLHBZ);
    sqlstm.sqhstl[42] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)&((data_event->str_event)[num].QFXLH);
    sqlstm.sqhstl[43] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)&((data_event->str_event)[num].DQ_TMIS);
    sqlstm.sqhstl[44] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)&((data_event->str_event)[num].QF_TIME);
    sqlstm.sqhstl[45] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)&((data_event->str_event)[num].QFCZJLH);
    sqlstm.sqhstl[46] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&((data_event->str_event)[num].QFCHZH);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
    sqlstm.sqhstv[48] = (unsigned char  *)&((data_event->str_event)[num].JKZT);
    sqlstm.sqhstl[48] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[48] = (         int  )0;
    sqlstm.sqindv[48] = (         short *)0;
    sqlstm.sqinds[48] = (         int  )0;
    sqlstm.sqharm[48] = (unsigned long )0;
    sqlstm.sqadto[48] = (unsigned short )0;
    sqlstm.sqtdso[48] = (unsigned short )0;
    sqlstm.sqhstv[49] = (unsigned char  *)&((data_event->str_event)[num].LJWY);
    sqlstm.sqhstl[49] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[49] = (         int  )0;
    sqlstm.sqindv[49] = (         short *)0;
    sqlstm.sqinds[49] = (         int  )0;
    sqlstm.sqharm[49] = (unsigned long )0;
    sqlstm.sqadto[49] = (unsigned short )0;
    sqlstm.sqtdso[49] = (unsigned short )0;
    sqlstm.sqhstv[50] = (unsigned char  *)&((data_event->str_event)[num].BFQZX);
    sqlstm.sqhstl[50] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[50] = (         int  )0;
    sqlstm.sqindv[50] = (         short *)0;
    sqlstm.sqinds[50] = (         int  )0;
    sqlstm.sqharm[50] = (unsigned long )0;
    sqlstm.sqadto[50] = (unsigned short )0;
    sqlstm.sqtdso[50] = (unsigned short )0;
    sqlstm.sqhstv[51] = (unsigned char  *)&((data_event->str_event)[num].BFQCX);
    sqlstm.sqhstl[51] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[51] = (         int  )0;
    sqlstm.sqindv[51] = (         short *)0;
    sqlstm.sqinds[51] = (         int  )0;
    sqlstm.sqharm[51] = (unsigned long )0;
    sqlstm.sqadto[51] = (unsigned short )0;
    sqlstm.sqtdso[51] = (unsigned short )0;
    sqlstm.sqhstv[52] = (unsigned char  *)&((data_event->str_event)[num].QFFQZX);
    sqlstm.sqhstl[52] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[52] = (         int  )0;
    sqlstm.sqindv[52] = (         short *)0;
    sqlstm.sqinds[52] = (         int  )0;
    sqlstm.sqharm[52] = (unsigned long )0;
    sqlstm.sqadto[52] = (unsigned short )0;
    sqlstm.sqtdso[52] = (unsigned short )0;
    sqlstm.sqhstv[53] = (unsigned char  *)&((data_event->str_event)[num].QFFQCX);
    sqlstm.sqhstl[53] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[53] = (         int  )0;
    sqlstm.sqindv[53] = (         short *)0;
    sqlstm.sqinds[53] = (         int  )0;
    sqlstm.sqharm[53] = (unsigned long )0;
    sqlstm.sqadto[53] = (unsigned short )0;
    sqlstm.sqtdso[53] = (unsigned short )0;
    sqlstm.sqhstv[54] = (unsigned char  *)(data_event->DRIVERNAME);
    sqlstm.sqhstl[54] = (unsigned long )33;
    sqlstm.sqhsts[54] = (         int  )0;
    sqlstm.sqindv[54] = (         short *)0;
    sqlstm.sqinds[54] = (         int  )0;
    sqlstm.sqharm[54] = (unsigned long )0;
    sqlstm.sqadto[54] = (unsigned short )0;
    sqlstm.sqtdso[54] = (unsigned short )0;
    sqlstm.sqhstv[55] = (unsigned char  *)(data_event->DRIVERTEL);
    sqlstm.sqhstl[55] = (unsigned long )33;
    sqlstm.sqhsts[55] = (         int  )0;
    sqlstm.sqindv[55] = (         short *)0;
    sqlstm.sqinds[55] = (         int  )0;
    sqlstm.sqharm[55] = (unsigned long )0;
    sqlstm.sqadto[55] = (unsigned short )0;
    sqlstm.sqtdso[55] = (unsigned short )0;
    sqlstm.sqhstv[56] = (unsigned char  *)&(data_event->LINENO);
    sqlstm.sqhstl[56] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[56] = (         int  )0;
    sqlstm.sqindv[56] = (         short *)0;
    sqlstm.sqinds[56] = (         int  )0;
    sqlstm.sqharm[56] = (unsigned long )0;
    sqlstm.sqadto[56] = (unsigned short )0;
    sqlstm.sqtdso[56] = (unsigned short )0;
    sqlstm.sqhstv[57] = (unsigned char  *)(data_event->LINENAME);
    sqlstm.sqhstl[57] = (unsigned long )33;
    sqlstm.sqhsts[57] = (         int  )0;
    sqlstm.sqindv[57] = (         short *)0;
    sqlstm.sqinds[57] = (         int  )0;
    sqlstm.sqharm[57] = (unsigned long )0;
    sqlstm.sqadto[57] = (unsigned short )0;
    sqlstm.sqtdso[57] = (unsigned short )0;
    sqlstm.sqhstv[58] = (unsigned char  *)(data_event->STATIONNAME);
    sqlstm.sqhstl[58] = (unsigned long )33;
    sqlstm.sqhsts[58] = (         int  )0;
    sqlstm.sqindv[58] = (         short *)0;
    sqlstm.sqinds[58] = (         int  )0;
    sqlstm.sqharm[58] = (unsigned long )0;
    sqlstm.sqadto[58] = (unsigned short )0;
    sqlstm.sqtdso[58] = (unsigned short )0;
    sqlstm.sqhstv[59] = (unsigned char  *)(data_event->D_ID2);
    sqlstm.sqhstl[59] = (unsigned long )5;
    sqlstm.sqhsts[59] = (         int  )0;
    sqlstm.sqindv[59] = (         short *)0;
    sqlstm.sqinds[59] = (         int  )0;
    sqlstm.sqharm[59] = (unsigned long )0;
    sqlstm.sqadto[59] = (unsigned short )0;
    sqlstm.sqtdso[59] = (unsigned short )0;
    sqlstm.sqhstv[60] = (unsigned char  *)(data_event->B_ID);
    sqlstm.sqhstl[60] = (unsigned long )5;
    sqlstm.sqhsts[60] = (         int  )0;
    sqlstm.sqindv[60] = (         short *)0;
    sqlstm.sqinds[60] = (         int  )0;
    sqlstm.sqharm[60] = (unsigned long )0;
    sqlstm.sqadto[60] = (unsigned short )0;
    sqlstm.sqtdso[60] = (unsigned short )0;
    sqlstm.sqhstv[61] = (unsigned char  *)(data_event->B_ID2);
    sqlstm.sqhstl[61] = (unsigned long )5;
    sqlstm.sqhsts[61] = (         int  )0;
    sqlstm.sqindv[61] = (         short *)0;
    sqlstm.sqinds[61] = (         int  )0;
    sqlstm.sqharm[61] = (unsigned long )0;
    sqlstm.sqadto[61] = (unsigned short )0;
    sqlstm.sqtdso[61] = (unsigned short )0;
    sqlstm.sqhstv[62] = (unsigned char  *)&((data_event->str_event)[num].LKJ_TYPE);
    sqlstm.sqhstl[62] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[62] = (         int  )0;
    sqlstm.sqindv[62] = (         short *)0;
    sqlstm.sqinds[62] = (         int  )0;
    sqlstm.sqharm[62] = (unsigned long )0;
    sqlstm.sqadto[62] = (unsigned short )0;
    sqlstm.sqtdso[62] = (unsigned short )0;
    sqlstm.sqhstv[63] = (unsigned char  *)&((data_event->str_event)[num].PRE_CZH);
    sqlstm.sqhstl[63] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[63] = (         int  )0;
    sqlstm.sqindv[63] = (         short *)0;
    sqlstm.sqinds[63] = (         int  )0;
    sqlstm.sqharm[63] = (unsigned long )0;
    sqlstm.sqadto[63] = (unsigned short )0;
    sqlstm.sqtdso[63] = (unsigned short )0;
    sqlstm.sqhstv[64] = (unsigned char  *)&((data_event->str_event)[num].PRE_JLH);
    sqlstm.sqhstl[64] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[64] = (         int  )0;
    sqlstm.sqindv[64] = (         short *)0;
    sqlstm.sqinds[64] = (         int  )0;
    sqlstm.sqharm[64] = (unsigned long )0;
    sqlstm.sqadto[64] = (unsigned short )0;
    sqlstm.sqtdso[64] = (unsigned short )0;
    sqlstm.sqhstv[65] = (unsigned char  *)((data_event->str_event)[num].PRE_CZM);
    sqlstm.sqhstl[65] = (unsigned long )33;
    sqlstm.sqhsts[65] = (         int  )0;
    sqlstm.sqindv[65] = (         short *)0;
    sqlstm.sqinds[65] = (         int  )0;
    sqlstm.sqharm[65] = (unsigned long )0;
    sqlstm.sqadto[65] = (unsigned short )0;
    sqlstm.sqtdso[65] = (unsigned short )0;
    sqlstm.sqhstv[66] = (unsigned char  *)((data_event->str_event)[num].PRE_CC);
    sqlstm.sqhstl[66] = (unsigned long )21;
    sqlstm.sqhsts[66] = (         int  )0;
    sqlstm.sqindv[66] = (         short *)0;
    sqlstm.sqinds[66] = (         int  )0;
    sqlstm.sqharm[66] = (unsigned long )0;
    sqlstm.sqadto[66] = (unsigned short )0;
    sqlstm.sqtdso[66] = (unsigned short )0;
    sqlstm.sqhstv[67] = (unsigned char  *)&(data_event->CRK);
    sqlstm.sqhstl[67] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[67] = (         int  )0;
    sqlstm.sqindv[67] = (         short *)0;
    sqlstm.sqinds[67] = (         int  )0;
    sqlstm.sqharm[67] = (unsigned long )0;
    sqlstm.sqadto[67] = (unsigned short )0;
    sqlstm.sqtdso[67] = (unsigned short )0;
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





    if (sqlca.sqlcode == 0)

    {

        if(data_event->key == 14550920)

        {

            //printf("loco.%s-%s:事件LKJ_EVENT入库成功\n",data_event->T_TYPE_ID,data_event->LOCO_NO);

        }





        return 0;

    }

    else

    {

        if(data_event->key == 14550920)

        {

            //printf("loco.%s-%s:事件LKJ_EVENT入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        }

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:事件LKJ_EVENT入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.v,temp);

        cclog('e',temp);

        return 1;

    }

}



/* add by linw 20160329 */

static unsigned char insert_to_ITF_EVENT_LKJ_EVENT_CRD(int num)

{

    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_EVENT_LKJ_EVENT_CRD (

                IDX         ,/oCHAR(32 CHAR) not null,   o/

                T_TYPE_ID   ,/oCHAR(3 CHAR),           o/

                LOCO_NO     ,/oCHAR(4 CHAR),           o/

                AB          ,/oNUMBER(1),              o/

                D_ID        ,/oCHAR(4),                o/

                ETYPE       ,/oNUMBER(5),              o/

                SJMC        ,/oVARCHAR2(30),           o/

                SJDJ        ,/oNUMBER(2),              o/

                BTSJ        ,/oDATE,                   o/

                RKSJ        ,/oDATE default SYSDATE,   o/

                SJ          ,/oDATE,                   o/

                GPSJD       ,/oNUMBER(12,6),           o/

                GPSWD       ,/oNUMBER(12,6),           o/

                GPSSD       ,/oNUMBER(5,2),            o/

                GPSHB       ,/oNUMBER(8,2),            o/

                CC          ,/oVARCHAR2(20 CHAR),      o/

                CZH         ,/oNUMBER(5),              o/

                SJH         ,/oNUMBER(10),             o/

                FSJH        ,/oNUMBER(10),             o/

                SJJLH       ,/oNUMBER(5),              o/

                KHBB        ,/oNUMBER(3),              o/

                SJSD        ,/oNUMBER(5,2),            o/

                JCXHZ       ,/oNUMBER(5),              o/

                GK          ,/oNUMBER(3),              o/

                XHJBH       ,/oNUMBER(5),              o/

                XHJLB       ,/oNUMBER(5),              o/

                GLB         ,/oNUMBER(10),             o/

                ZZ          ,/oNUMBER(5),              o/

                JC          ,/oNUMBER(6,2),            o/

                LS          ,/oNUMBER(5),              o/

                LCGYL       ,/oNUMBER(5),              o/

                ZZZT        ,/oNUMBER(3),              o/

                CXSJ        ,/oNUMBER(10),             o/

                SJH_BGQ     ,/oNUMBER(10),             o/

                FSJH_BGQ    ,/oNUMBER(10),             o/

                LKJVER      ,/oVARCHAR2(20),        o/

                SRJLH       ,/oNUMBER(5),           o/

                JLQFXHJJL   ,/oNUMBER(5),           o/

                XS          ,/oNUMBER(5),           o/

                ZDSC        ,/oNUMBER(3),           o/

                DQXLHBZ     ,/oNUMBER(3),           o/

                DQXLH       ,/oNUMBER(5),           o/

                QFXLHBZ     ,/oNUMBER(3),           o/

                QFXLH       ,/oNUMBER(5),           o/

                DQ_TMIS     ,/oNUMBER(8),           o/

                QF_TIME     ,/oNUMBER(8),           o/

                QFCZJLH     ,/oNUMBER(3),           o/

                QFCHZH      ,/oNUMBER(5),           o/

                JKZT        ,/oNUMBER(3),           o/

                LJWY        ,/oNUMBER(5),           o/

                BFQZX       ,/oNUMBER(3),           o/

                BFQCX       ,/oNUMBER(3),           o/

                QFFQZX      ,/oNUMBER(3),           o/

                QFFQCX      ,/oNUMBER(3),           o/

                DRIVERNAME  ,/oVARCHAR2(30),        o/

                DRIVERTEL   ,/oVARCHAR2(32),        o/

                LINENO      ,/oNUMBER(5),           o/

                LINENAME    ,/oVARCHAR2(32),        o/

                STATIONNAME ,/oVARCHAR2(32),        o/

                D_ID2       ,/oCHAR(4),             o/

                B_ID        ,/oCHAR(2)              o/

                B_ID2       , /oCHAR(2)              o/

                LKJ_TYPE   ,

                PRE_STATION,

                PRE_CROSSNO,

                PRE_STATIONNAME,

                PRE_CC

                ,CRK

                )

            VALUES(

                :data_event->str_event[num].IDX         ,/oCHAR(32 CHAR) not null,   o/

                :data_event->T_TYPE_ID   ,/oCHAR(3 CHAR),           o/

                :data_event->LOCO_NO     ,/oCHAR(4 CHAR),           o/

                :data_event->AB          ,/oNUMBER(1),              o/

                trim(:data_event->D_ID)        ,/oCHAR(4),                o/

                :data_event->str_event[num].ETYPE       ,/oNUMBER(5),              o/

                trim(:data_event->str_event[num].SJMC)       ,/oVARCHAR2(30),           o/

                :data_event->str_event[num].SJDJ        ,/oNUMBER(2),              o/

                to_date(:data_event->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_event->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_event->str_event[num].SJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_event->GPSJD       ,/oNUMBER(12,6),           o/

                :data_event->GPSWD       ,/oNUMBER(12,6),           o/

                :data_event->GPSSD       ,/oNUMBER(5,2),            o/

                :data_event->GPSHB       ,/oNUMBER(8,2),            o/

                :data_event->str_event[num].CC          ,/oVARCHAR2(20 CHAR),      o/

                :data_event->str_event[num].CZH         ,/oNUMBER(5),              o/

                :data_event->str_event[num].SJH         ,/oNUMBER(10),             o/

                :data_event->str_event[num].FSJH        ,/oNUMBER(10),             o/

                :data_event->str_event[num].SJJLH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].KHBB        ,/oNUMBER(3),              o/

                :data_event->str_event[num].SJSU        ,/oNUMBER(5,2),            o/

                :data_event->str_event[num].JCXHZ       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GK          ,/oNUMBER(3),              o/

                :data_event->str_event[num].XHJBH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].XHJLB       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GLB         ,/oNUMBER(10),             o/

                :data_event->str_event[num].ZZ          ,/oNUMBER(5),              o/

                :data_event->str_event[num].JC          ,/oNUMBER(6,2),            o/

                :data_event->str_event[num].LS          ,/oNUMBER(5),              o/

                :data_event->str_event[num].LCGYL       ,/oNUMBER(5),              o/

                :data_event->str_event[num].ZZZT        ,/oNUMBER(3),              o/

                :data_event->str_event[num].CXSJ        ,/oNUMBER(10),             o/

                :data_event->str_event[num].SJH_BGQ     ,/oNUMBER(10),             o/

                :data_event->str_event[num].FSJH_BGQ    ,/oNUMBER(10),             o/

                trim(:data_event->LKJVER )     ,/oVARCHAR2(20),        o/

                :data_event->str_event[num].SRJLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].JLQFXHJJL   ,/oNUMBER(5),           o/

                :data_event->str_event[num].XS          ,/oNUMBER(5),           o/

                :data_event->str_event[num].ZDSC        ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].QFXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].DQ_TMIS     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QF_TIME     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QFCZJLH     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFCHZH      ,/oNUMBER(5),           o/

                :data_event->str_event[num].JKZT        ,/oNUMBER(3),           o/

                :data_event->str_event[num].LJWY        ,/oNUMBER(5),           o/

                :data_event->str_event[num].BFQZX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].BFQCX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQZX      ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQCX      ,/oNUMBER(3),           o/

                trim(:data_event->DRIVERNAME)  ,/oVARCHAR2(30),        o/

                trim(:data_event->DRIVERTEL)   ,/oVARCHAR2(32),        o/

                trim(:data_event->LINENO)      ,/oNUMBER(5),           o/

                trim(:data_event->LINENAME )   ,/oVARCHAR2(32),        o/

                trim(:data_event->STATIONNAME) ,/oVARCHAR2(32),        o/

                trim(:data_event->D_ID2)       ,/oCHAR(4),             o/

                trim(:data_event->B_ID)        ,/oCHAR(2)              o/

                trim(:data_event->B_ID2)       , /oCHAR(2)              o/

                :data_event->str_event[num].LKJ_TYPE ,     /oNUMBER(3),           o/

                :data_event->str_event[num].PRE_CZH,

                :data_event->str_event[num].PRE_JLH,

                trim(:data_event->str_event[num].PRE_CZM),

                trim(:data_event->str_event[num].PRE_CC)

                ,:data_event->CRK

                ) ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_EVENT_LKJ_EVENT_CRD (IDX,T_TYPE_ID,LOCO_\
NO,AB,D_ID,ETYPE,SJMC,SJDJ,BTSJ,RKSJ,SJ,GPSJD,GPSWD,GPSSD,GPSHB,CC,CZH,SJH,FS\
JH,SJJLH,KHBB,SJSD,JCXHZ,GK,XHJBH,XHJLB,GLB,ZZ,JC,LS,LCGYL,ZZZT,CXSJ,SJH_BGQ,\
FSJH_BGQ,LKJVER,SRJLH,JLQFXHJJL,XS,ZDSC,DQXLHBZ,DQXLH,QFXLHBZ,QFXLH,DQ_TMIS,Q\
F_TIME,QFCZJLH,QFCHZH,JKZT,LJWY,BFQZX,BFQCX,QFFQZX,QFFQCX,DRIVERNAME,DRIVERTE\
L,LINENO,LINENAME,STATIONNAME,D_ID2,B_ID,B_ID2,LKJ_TYPE,PRE_STATION,PRE_CROSS\
NO,PRE_STATIONNAME,PRE_CC,CRK) values (:b0,:b1,:b2,:b3,trim(:b4),:b5,trim(:b6\
),:b7,to_date(:b8,'yyyy-mm-dd hh24:mi:ss'),to_date(:b9,'yyyy-mm-dd hh24:mi:ss\
'),to_date(:b10,'yyyy-mm-dd hh24:mi:ss'),:b11,:b12,:b13,:b14,:b15,:b16,:b17,:\
b18,:b19,:b20,:b21,:b22,:b23,:b24,:b25,:b26,:b27,:b28,:b29,:b30,:b31,:b32,:b3\
3,:b34,trim(:b35),:b36,:b37,:b38,:b39,:b40,:b41,:b42,:b43,:b44,:b45,:b46,:b47\
,:b48,:b49,:b50,:b51,:b52,:b53,trim(:b54),trim(:b55),trim(:b56),trim(:b57),tr\
im(:b58),trim(:b59),trim(:b60),trim(:b61),:b62,:b63,:b64,trim(:b65),trim(:b66\
),:b67)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )5899;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_event->str_event)[num].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_event->T_TYPE_ID);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_event->LOCO_NO);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_event->AB);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_event->D_ID);
    sqlstm.sqhstl[4] = (unsigned long )5;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&((data_event->str_event)[num].ETYPE);
    sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)((data_event->str_event)[num].SJMC);
    sqlstm.sqhstl[6] = (unsigned long )33;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&((data_event->str_event)[num].SJDJ);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)(data_event->RKSJ);
    sqlstm.sqhstl[8] = (unsigned long )21;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)(data_event->BTSJ);
    sqlstm.sqhstl[9] = (unsigned long )21;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)((data_event->str_event)[num].SJ);
    sqlstm.sqhstl[10] = (unsigned long )21;
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_event->GPSJD);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_event->GPSWD);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_event->GPSSD);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_event->GPSHB);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)((data_event->str_event)[num].CC);
    sqlstm.sqhstl[15] = (unsigned long )21;
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&((data_event->str_event)[num].CZH);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&((data_event->str_event)[num].SJH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&((data_event->str_event)[num].FSJH);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&((data_event->str_event)[num].SJJLH);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&((data_event->str_event)[num].KHBB);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&((data_event->str_event)[num].SJSU);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&((data_event->str_event)[num].JCXHZ);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&((data_event->str_event)[num].GK);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&((data_event->str_event)[num].XHJBH);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&((data_event->str_event)[num].XHJLB);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&((data_event->str_event)[num].GLB);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&((data_event->str_event)[num].ZZ);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&((data_event->str_event)[num].JC);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&((data_event->str_event)[num].LS);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&((data_event->str_event)[num].LCGYL);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&((data_event->str_event)[num].ZZZT);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&((data_event->str_event)[num].CXSJ);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&((data_event->str_event)[num].SJH_BGQ);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&((data_event->str_event)[num].FSJH_BGQ);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)(data_event->LKJVER);
    sqlstm.sqhstl[35] = (unsigned long )21;
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&((data_event->str_event)[num].SRJLH);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&((data_event->str_event)[num].JLQFXHJJL);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&((data_event->str_event)[num].XS);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&((data_event->str_event)[num].ZDSC);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&((data_event->str_event)[num].DQXLHBZ);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)&((data_event->str_event)[num].DQXLH);
    sqlstm.sqhstl[41] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)&((data_event->str_event)[num].QFXLHBZ);
    sqlstm.sqhstl[42] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)&((data_event->str_event)[num].QFXLH);
    sqlstm.sqhstl[43] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)&((data_event->str_event)[num].DQ_TMIS);
    sqlstm.sqhstl[44] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)&((data_event->str_event)[num].QF_TIME);
    sqlstm.sqhstl[45] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)&((data_event->str_event)[num].QFCZJLH);
    sqlstm.sqhstl[46] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&((data_event->str_event)[num].QFCHZH);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
    sqlstm.sqhstv[48] = (unsigned char  *)&((data_event->str_event)[num].JKZT);
    sqlstm.sqhstl[48] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[48] = (         int  )0;
    sqlstm.sqindv[48] = (         short *)0;
    sqlstm.sqinds[48] = (         int  )0;
    sqlstm.sqharm[48] = (unsigned long )0;
    sqlstm.sqadto[48] = (unsigned short )0;
    sqlstm.sqtdso[48] = (unsigned short )0;
    sqlstm.sqhstv[49] = (unsigned char  *)&((data_event->str_event)[num].LJWY);
    sqlstm.sqhstl[49] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[49] = (         int  )0;
    sqlstm.sqindv[49] = (         short *)0;
    sqlstm.sqinds[49] = (         int  )0;
    sqlstm.sqharm[49] = (unsigned long )0;
    sqlstm.sqadto[49] = (unsigned short )0;
    sqlstm.sqtdso[49] = (unsigned short )0;
    sqlstm.sqhstv[50] = (unsigned char  *)&((data_event->str_event)[num].BFQZX);
    sqlstm.sqhstl[50] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[50] = (         int  )0;
    sqlstm.sqindv[50] = (         short *)0;
    sqlstm.sqinds[50] = (         int  )0;
    sqlstm.sqharm[50] = (unsigned long )0;
    sqlstm.sqadto[50] = (unsigned short )0;
    sqlstm.sqtdso[50] = (unsigned short )0;
    sqlstm.sqhstv[51] = (unsigned char  *)&((data_event->str_event)[num].BFQCX);
    sqlstm.sqhstl[51] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[51] = (         int  )0;
    sqlstm.sqindv[51] = (         short *)0;
    sqlstm.sqinds[51] = (         int  )0;
    sqlstm.sqharm[51] = (unsigned long )0;
    sqlstm.sqadto[51] = (unsigned short )0;
    sqlstm.sqtdso[51] = (unsigned short )0;
    sqlstm.sqhstv[52] = (unsigned char  *)&((data_event->str_event)[num].QFFQZX);
    sqlstm.sqhstl[52] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[52] = (         int  )0;
    sqlstm.sqindv[52] = (         short *)0;
    sqlstm.sqinds[52] = (         int  )0;
    sqlstm.sqharm[52] = (unsigned long )0;
    sqlstm.sqadto[52] = (unsigned short )0;
    sqlstm.sqtdso[52] = (unsigned short )0;
    sqlstm.sqhstv[53] = (unsigned char  *)&((data_event->str_event)[num].QFFQCX);
    sqlstm.sqhstl[53] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[53] = (         int  )0;
    sqlstm.sqindv[53] = (         short *)0;
    sqlstm.sqinds[53] = (         int  )0;
    sqlstm.sqharm[53] = (unsigned long )0;
    sqlstm.sqadto[53] = (unsigned short )0;
    sqlstm.sqtdso[53] = (unsigned short )0;
    sqlstm.sqhstv[54] = (unsigned char  *)(data_event->DRIVERNAME);
    sqlstm.sqhstl[54] = (unsigned long )33;
    sqlstm.sqhsts[54] = (         int  )0;
    sqlstm.sqindv[54] = (         short *)0;
    sqlstm.sqinds[54] = (         int  )0;
    sqlstm.sqharm[54] = (unsigned long )0;
    sqlstm.sqadto[54] = (unsigned short )0;
    sqlstm.sqtdso[54] = (unsigned short )0;
    sqlstm.sqhstv[55] = (unsigned char  *)(data_event->DRIVERTEL);
    sqlstm.sqhstl[55] = (unsigned long )33;
    sqlstm.sqhsts[55] = (         int  )0;
    sqlstm.sqindv[55] = (         short *)0;
    sqlstm.sqinds[55] = (         int  )0;
    sqlstm.sqharm[55] = (unsigned long )0;
    sqlstm.sqadto[55] = (unsigned short )0;
    sqlstm.sqtdso[55] = (unsigned short )0;
    sqlstm.sqhstv[56] = (unsigned char  *)&(data_event->LINENO);
    sqlstm.sqhstl[56] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[56] = (         int  )0;
    sqlstm.sqindv[56] = (         short *)0;
    sqlstm.sqinds[56] = (         int  )0;
    sqlstm.sqharm[56] = (unsigned long )0;
    sqlstm.sqadto[56] = (unsigned short )0;
    sqlstm.sqtdso[56] = (unsigned short )0;
    sqlstm.sqhstv[57] = (unsigned char  *)(data_event->LINENAME);
    sqlstm.sqhstl[57] = (unsigned long )33;
    sqlstm.sqhsts[57] = (         int  )0;
    sqlstm.sqindv[57] = (         short *)0;
    sqlstm.sqinds[57] = (         int  )0;
    sqlstm.sqharm[57] = (unsigned long )0;
    sqlstm.sqadto[57] = (unsigned short )0;
    sqlstm.sqtdso[57] = (unsigned short )0;
    sqlstm.sqhstv[58] = (unsigned char  *)(data_event->STATIONNAME);
    sqlstm.sqhstl[58] = (unsigned long )33;
    sqlstm.sqhsts[58] = (         int  )0;
    sqlstm.sqindv[58] = (         short *)0;
    sqlstm.sqinds[58] = (         int  )0;
    sqlstm.sqharm[58] = (unsigned long )0;
    sqlstm.sqadto[58] = (unsigned short )0;
    sqlstm.sqtdso[58] = (unsigned short )0;
    sqlstm.sqhstv[59] = (unsigned char  *)(data_event->D_ID2);
    sqlstm.sqhstl[59] = (unsigned long )5;
    sqlstm.sqhsts[59] = (         int  )0;
    sqlstm.sqindv[59] = (         short *)0;
    sqlstm.sqinds[59] = (         int  )0;
    sqlstm.sqharm[59] = (unsigned long )0;
    sqlstm.sqadto[59] = (unsigned short )0;
    sqlstm.sqtdso[59] = (unsigned short )0;
    sqlstm.sqhstv[60] = (unsigned char  *)(data_event->B_ID);
    sqlstm.sqhstl[60] = (unsigned long )5;
    sqlstm.sqhsts[60] = (         int  )0;
    sqlstm.sqindv[60] = (         short *)0;
    sqlstm.sqinds[60] = (         int  )0;
    sqlstm.sqharm[60] = (unsigned long )0;
    sqlstm.sqadto[60] = (unsigned short )0;
    sqlstm.sqtdso[60] = (unsigned short )0;
    sqlstm.sqhstv[61] = (unsigned char  *)(data_event->B_ID2);
    sqlstm.sqhstl[61] = (unsigned long )5;
    sqlstm.sqhsts[61] = (         int  )0;
    sqlstm.sqindv[61] = (         short *)0;
    sqlstm.sqinds[61] = (         int  )0;
    sqlstm.sqharm[61] = (unsigned long )0;
    sqlstm.sqadto[61] = (unsigned short )0;
    sqlstm.sqtdso[61] = (unsigned short )0;
    sqlstm.sqhstv[62] = (unsigned char  *)&((data_event->str_event)[num].LKJ_TYPE);
    sqlstm.sqhstl[62] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[62] = (         int  )0;
    sqlstm.sqindv[62] = (         short *)0;
    sqlstm.sqinds[62] = (         int  )0;
    sqlstm.sqharm[62] = (unsigned long )0;
    sqlstm.sqadto[62] = (unsigned short )0;
    sqlstm.sqtdso[62] = (unsigned short )0;
    sqlstm.sqhstv[63] = (unsigned char  *)&((data_event->str_event)[num].PRE_CZH);
    sqlstm.sqhstl[63] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[63] = (         int  )0;
    sqlstm.sqindv[63] = (         short *)0;
    sqlstm.sqinds[63] = (         int  )0;
    sqlstm.sqharm[63] = (unsigned long )0;
    sqlstm.sqadto[63] = (unsigned short )0;
    sqlstm.sqtdso[63] = (unsigned short )0;
    sqlstm.sqhstv[64] = (unsigned char  *)&((data_event->str_event)[num].PRE_JLH);
    sqlstm.sqhstl[64] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[64] = (         int  )0;
    sqlstm.sqindv[64] = (         short *)0;
    sqlstm.sqinds[64] = (         int  )0;
    sqlstm.sqharm[64] = (unsigned long )0;
    sqlstm.sqadto[64] = (unsigned short )0;
    sqlstm.sqtdso[64] = (unsigned short )0;
    sqlstm.sqhstv[65] = (unsigned char  *)((data_event->str_event)[num].PRE_CZM);
    sqlstm.sqhstl[65] = (unsigned long )33;
    sqlstm.sqhsts[65] = (         int  )0;
    sqlstm.sqindv[65] = (         short *)0;
    sqlstm.sqinds[65] = (         int  )0;
    sqlstm.sqharm[65] = (unsigned long )0;
    sqlstm.sqadto[65] = (unsigned short )0;
    sqlstm.sqtdso[65] = (unsigned short )0;
    sqlstm.sqhstv[66] = (unsigned char  *)((data_event->str_event)[num].PRE_CC);
    sqlstm.sqhstl[66] = (unsigned long )21;
    sqlstm.sqhsts[66] = (         int  )0;
    sqlstm.sqindv[66] = (         short *)0;
    sqlstm.sqinds[66] = (         int  )0;
    sqlstm.sqharm[66] = (unsigned long )0;
    sqlstm.sqadto[66] = (unsigned short )0;
    sqlstm.sqtdso[66] = (unsigned short )0;
    sqlstm.sqhstv[67] = (unsigned char  *)&(data_event->CRK);
    sqlstm.sqhstl[67] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[67] = (         int  )0;
    sqlstm.sqindv[67] = (         short *)0;
    sqlstm.sqinds[67] = (         int  )0;
    sqlstm.sqharm[67] = (unsigned long )0;
    sqlstm.sqadto[67] = (unsigned short )0;
    sqlstm.sqtdso[67] = (unsigned short )0;
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





    //printf("data_event->CRK = %d\n",data_event->CRK);

    if (sqlca.sqlcode == 0)

    {

        if(data_event->key == 14550920)

        {

            //printf("loco.%s-%s:事件ITF_EVENT_LKJ_EVENT_CRD入库成功\n",data_event->T_TYPE_ID,data_event->LOCO_NO);

        }





        return 0;

    }

    else

    {

        //        if(data_event->key == 14550920)

        //        {

        //            printf("loco.%s-%s:事件ITF_EVENT_LKJ_EVENT_CRD入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        //        }

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:事件ITF_EVENT_LKJ_EVENT_CRD入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.v,temp);

        cclog('e',temp);

        return 1;

    }

}



/* add by guo 20160612 */

static unsigned char insert_to_ITF_EVENT_LKJ_EVENT_CRD_N(int num,int crk)

{

    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_EVENT_LKJ_EVENT_CRD (

                IDX         ,/oCHAR(32 CHAR) not null,   o/

                T_TYPE_ID   ,/oCHAR(3 CHAR),           o/

                LOCO_NO     ,/oCHAR(4 CHAR),           o/

                AB          ,/oNUMBER(1),              o/

                D_ID        ,/oCHAR(4),                o/

                ETYPE       ,/oNUMBER(5),              o/

                SJMC        ,/oVARCHAR2(30),           o/

                SJDJ        ,/oNUMBER(2),              o/

                BTSJ        ,/oDATE,                   o/

                RKSJ        ,/oDATE default SYSDATE,   o/

                SJ          ,/oDATE,                   o/

                GPSJD       ,/oNUMBER(12,6),           o/

                GPSWD       ,/oNUMBER(12,6),           o/

                GPSSD       ,/oNUMBER(5,2),            o/

                GPSHB       ,/oNUMBER(8,2),            o/

                CC          ,/oVARCHAR2(20 CHAR),      o/

                CZH         ,/oNUMBER(5),              o/

                SJH         ,/oNUMBER(10),             o/

                FSJH        ,/oNUMBER(10),             o/

                SJJLH       ,/oNUMBER(5),              o/

                KHBB        ,/oNUMBER(3),              o/

                SJSD        ,/oNUMBER(5,2),            o/

                JCXHZ       ,/oNUMBER(5),              o/

                GK          ,/oNUMBER(3),              o/

                XHJBH       ,/oNUMBER(5),              o/

                XHJLB       ,/oNUMBER(5),              o/

                GLB         ,/oNUMBER(10),             o/

                ZZ          ,/oNUMBER(5),              o/

                JC          ,/oNUMBER(6,2),            o/

                LS          ,/oNUMBER(5),              o/

                LCGYL       ,/oNUMBER(5),              o/

                ZZZT        ,/oNUMBER(3),              o/

                CXSJ        ,/oNUMBER(10),             o/

                SJH_BGQ     ,/oNUMBER(10),             o/

                FSJH_BGQ    ,/oNUMBER(10),             o/

                LKJVER      ,/oVARCHAR2(20),        o/

                SRJLH       ,/oNUMBER(5),           o/

                JLQFXHJJL   ,/oNUMBER(5),           o/

                XS          ,/oNUMBER(5),           o/

                ZDSC        ,/oNUMBER(3),           o/

                DQXLHBZ     ,/oNUMBER(3),           o/

                DQXLH       ,/oNUMBER(5),           o/

                QFXLHBZ     ,/oNUMBER(3),           o/

                QFXLH       ,/oNUMBER(5),           o/

                DQ_TMIS     ,/oNUMBER(8),           o/

                QF_TIME     ,/oNUMBER(8),           o/

                QFCZJLH     ,/oNUMBER(3),           o/

                QFCHZH      ,/oNUMBER(5),           o/

                JKZT        ,/oNUMBER(3),           o/

                LJWY        ,/oNUMBER(5),           o/

                BFQZX       ,/oNUMBER(3),           o/

                BFQCX       ,/oNUMBER(3),           o/

                QFFQZX      ,/oNUMBER(3),           o/

                QFFQCX      ,/oNUMBER(3),           o/

                DRIVERNAME  ,/oVARCHAR2(30),        o/

                DRIVERTEL   ,/oVARCHAR2(32),        o/

                LINENO      ,/oNUMBER(5),           o/

                LINENAME    ,/oVARCHAR2(32),        o/

                STATIONNAME ,/oVARCHAR2(32),        o/

                D_ID2       ,/oCHAR(4),             o/

                B_ID        ,/oCHAR(2)              o/

                B_ID2       , /oCHAR(2)              o/

                LKJ_TYPE   ,

                PRE_STATION,

                PRE_CROSSNO,

                PRE_STATIONNAME,

                PRE_CC

                ,CRK

                )

            VALUES(

                :data_event->str_event[num].IDX         ,/oCHAR(32 CHAR) not null,   o/

                :data_event->T_TYPE_ID   ,/oCHAR(3 CHAR),           o/

                :data_event->LOCO_NO     ,/oCHAR(4 CHAR),           o/

                :data_event->AB          ,/oNUMBER(1),              o/

                trim(:data_event->D_ID)        ,/oCHAR(4),                o/

                :data_event->str_event[num].ETYPE       ,/oNUMBER(5),              o/

                trim(:data_event->str_event[num].SJMC)       ,/oVARCHAR2(30),           o/

                :data_event->str_event[num].SJDJ        ,/oNUMBER(2),              o/

                to_date(:data_event->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_event->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_event->str_event[num].SJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_event->GPSJD       ,/oNUMBER(12,6),           o/

                :data_event->GPSWD       ,/oNUMBER(12,6),           o/

                :data_event->GPSSD       ,/oNUMBER(5,2),            o/

                :data_event->GPSHB       ,/oNUMBER(8,2),            o/

                :data_event->str_event[num].CC          ,/oVARCHAR2(20 CHAR),      o/

                :data_event->str_event[num].CZH         ,/oNUMBER(5),              o/

                :data_event->str_event[num].SJH         ,/oNUMBER(10),             o/

                :data_event->str_event[num].FSJH        ,/oNUMBER(10),             o/

                :data_event->str_event[num].SJJLH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].KHBB        ,/oNUMBER(3),              o/

                :data_event->str_event[num].SJSU        ,/oNUMBER(5,2),            o/

                :data_event->str_event[num].JCXHZ       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GK          ,/oNUMBER(3),              o/

                :data_event->str_event[num].XHJBH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].XHJLB       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GLB         ,/oNUMBER(10),             o/

                :data_event->str_event[num].ZZ          ,/oNUMBER(5),              o/

                :data_event->str_event[num].JC          ,/oNUMBER(6,2),            o/

                :data_event->str_event[num].LS          ,/oNUMBER(5),              o/

                :data_event->str_event[num].LCGYL       ,/oNUMBER(5),              o/

                :data_event->str_event[num].ZZZT        ,/oNUMBER(3),              o/

                :data_event->str_event[num].CXSJ        ,/oNUMBER(10),             o/

                :data_event->str_event[num].SJH_BGQ     ,/oNUMBER(10),             o/

                :data_event->str_event[num].FSJH_BGQ    ,/oNUMBER(10),             o/

                trim(:data_event->LKJVER )     ,/oVARCHAR2(20),        o/

                :data_event->str_event[num].SRJLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].JLQFXHJJL   ,/oNUMBER(5),           o/

                :data_event->str_event[num].XS          ,/oNUMBER(5),           o/

                :data_event->str_event[num].ZDSC        ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].QFXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].DQ_TMIS     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QF_TIME     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QFCZJLH     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFCHZH      ,/oNUMBER(5),           o/

                :data_event->str_event[num].JKZT        ,/oNUMBER(3),           o/

                :data_event->str_event[num].LJWY        ,/oNUMBER(5),           o/

                :data_event->str_event[num].BFQZX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].BFQCX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQZX      ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQCX      ,/oNUMBER(3),           o/

                trim(:data_event->DRIVERNAME)  ,/oVARCHAR2(30),        o/

                trim(:data_event->DRIVERTEL)   ,/oVARCHAR2(32),        o/

                trim(:data_event->LINENO)      ,/oNUMBER(5),           o/

                trim(:data_event->LINENAME )   ,/oVARCHAR2(32),        o/

                trim(:data_event->STATIONNAME) ,/oVARCHAR2(32),        o/

                trim(:data_event->D_ID2)       ,/oCHAR(4),             o/

                trim(:data_event->B_ID)        ,/oCHAR(2)              o/

                trim(:data_event->B_ID2)       , /oCHAR(2)              o/

                :data_event->str_event[num].LKJ_TYPE ,     /oNUMBER(3),           o/

                :data_event->str_event[num].PRE_CZH,

                :data_event->str_event[num].PRE_JLH,

                trim(:data_event->str_event[num].PRE_CZM),

                trim(:data_event->str_event[num].PRE_CC)

                ,:data_event->CRK

                ) ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_EVENT_LKJ_EVENT_CRD (IDX,T_TYPE_ID,LOCO_\
NO,AB,D_ID,ETYPE,SJMC,SJDJ,BTSJ,RKSJ,SJ,GPSJD,GPSWD,GPSSD,GPSHB,CC,CZH,SJH,FS\
JH,SJJLH,KHBB,SJSD,JCXHZ,GK,XHJBH,XHJLB,GLB,ZZ,JC,LS,LCGYL,ZZZT,CXSJ,SJH_BGQ,\
FSJH_BGQ,LKJVER,SRJLH,JLQFXHJJL,XS,ZDSC,DQXLHBZ,DQXLH,QFXLHBZ,QFXLH,DQ_TMIS,Q\
F_TIME,QFCZJLH,QFCHZH,JKZT,LJWY,BFQZX,BFQCX,QFFQZX,QFFQCX,DRIVERNAME,DRIVERTE\
L,LINENO,LINENAME,STATIONNAME,D_ID2,B_ID,B_ID2,LKJ_TYPE,PRE_STATION,PRE_CROSS\
NO,PRE_STATIONNAME,PRE_CC,CRK) values (:b0,:b1,:b2,:b3,trim(:b4),:b5,trim(:b6\
),:b7,to_date(:b8,'yyyy-mm-dd hh24:mi:ss'),to_date(:b9,'yyyy-mm-dd hh24:mi:ss\
'),to_date(:b10,'yyyy-mm-dd hh24:mi:ss'),:b11,:b12,:b13,:b14,:b15,:b16,:b17,:\
b18,:b19,:b20,:b21,:b22,:b23,:b24,:b25,:b26,:b27,:b28,:b29,:b30,:b31,:b32,:b3\
3,:b34,trim(:b35),:b36,:b37,:b38,:b39,:b40,:b41,:b42,:b43,:b44,:b45,:b46,:b47\
,:b48,:b49,:b50,:b51,:b52,:b53,trim(:b54),trim(:b55),trim(:b56),trim(:b57),tr\
im(:b58),trim(:b59),trim(:b60),trim(:b61),:b62,:b63,:b64,trim(:b65),trim(:b66\
),:b67)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )6186;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_event->str_event)[num].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_event->T_TYPE_ID);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_event->LOCO_NO);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_event->AB);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_event->D_ID);
    sqlstm.sqhstl[4] = (unsigned long )5;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&((data_event->str_event)[num].ETYPE);
    sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)((data_event->str_event)[num].SJMC);
    sqlstm.sqhstl[6] = (unsigned long )33;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&((data_event->str_event)[num].SJDJ);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)(data_event->RKSJ);
    sqlstm.sqhstl[8] = (unsigned long )21;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)(data_event->BTSJ);
    sqlstm.sqhstl[9] = (unsigned long )21;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)((data_event->str_event)[num].SJ);
    sqlstm.sqhstl[10] = (unsigned long )21;
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_event->GPSJD);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_event->GPSWD);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_event->GPSSD);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_event->GPSHB);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)((data_event->str_event)[num].CC);
    sqlstm.sqhstl[15] = (unsigned long )21;
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&((data_event->str_event)[num].CZH);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&((data_event->str_event)[num].SJH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&((data_event->str_event)[num].FSJH);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&((data_event->str_event)[num].SJJLH);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&((data_event->str_event)[num].KHBB);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&((data_event->str_event)[num].SJSU);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&((data_event->str_event)[num].JCXHZ);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&((data_event->str_event)[num].GK);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&((data_event->str_event)[num].XHJBH);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&((data_event->str_event)[num].XHJLB);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&((data_event->str_event)[num].GLB);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&((data_event->str_event)[num].ZZ);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&((data_event->str_event)[num].JC);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&((data_event->str_event)[num].LS);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&((data_event->str_event)[num].LCGYL);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&((data_event->str_event)[num].ZZZT);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&((data_event->str_event)[num].CXSJ);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&((data_event->str_event)[num].SJH_BGQ);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&((data_event->str_event)[num].FSJH_BGQ);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)(data_event->LKJVER);
    sqlstm.sqhstl[35] = (unsigned long )21;
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&((data_event->str_event)[num].SRJLH);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&((data_event->str_event)[num].JLQFXHJJL);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&((data_event->str_event)[num].XS);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&((data_event->str_event)[num].ZDSC);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&((data_event->str_event)[num].DQXLHBZ);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)&((data_event->str_event)[num].DQXLH);
    sqlstm.sqhstl[41] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)&((data_event->str_event)[num].QFXLHBZ);
    sqlstm.sqhstl[42] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)&((data_event->str_event)[num].QFXLH);
    sqlstm.sqhstl[43] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)&((data_event->str_event)[num].DQ_TMIS);
    sqlstm.sqhstl[44] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)&((data_event->str_event)[num].QF_TIME);
    sqlstm.sqhstl[45] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)&((data_event->str_event)[num].QFCZJLH);
    sqlstm.sqhstl[46] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&((data_event->str_event)[num].QFCHZH);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
    sqlstm.sqhstv[48] = (unsigned char  *)&((data_event->str_event)[num].JKZT);
    sqlstm.sqhstl[48] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[48] = (         int  )0;
    sqlstm.sqindv[48] = (         short *)0;
    sqlstm.sqinds[48] = (         int  )0;
    sqlstm.sqharm[48] = (unsigned long )0;
    sqlstm.sqadto[48] = (unsigned short )0;
    sqlstm.sqtdso[48] = (unsigned short )0;
    sqlstm.sqhstv[49] = (unsigned char  *)&((data_event->str_event)[num].LJWY);
    sqlstm.sqhstl[49] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[49] = (         int  )0;
    sqlstm.sqindv[49] = (         short *)0;
    sqlstm.sqinds[49] = (         int  )0;
    sqlstm.sqharm[49] = (unsigned long )0;
    sqlstm.sqadto[49] = (unsigned short )0;
    sqlstm.sqtdso[49] = (unsigned short )0;
    sqlstm.sqhstv[50] = (unsigned char  *)&((data_event->str_event)[num].BFQZX);
    sqlstm.sqhstl[50] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[50] = (         int  )0;
    sqlstm.sqindv[50] = (         short *)0;
    sqlstm.sqinds[50] = (         int  )0;
    sqlstm.sqharm[50] = (unsigned long )0;
    sqlstm.sqadto[50] = (unsigned short )0;
    sqlstm.sqtdso[50] = (unsigned short )0;
    sqlstm.sqhstv[51] = (unsigned char  *)&((data_event->str_event)[num].BFQCX);
    sqlstm.sqhstl[51] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[51] = (         int  )0;
    sqlstm.sqindv[51] = (         short *)0;
    sqlstm.sqinds[51] = (         int  )0;
    sqlstm.sqharm[51] = (unsigned long )0;
    sqlstm.sqadto[51] = (unsigned short )0;
    sqlstm.sqtdso[51] = (unsigned short )0;
    sqlstm.sqhstv[52] = (unsigned char  *)&((data_event->str_event)[num].QFFQZX);
    sqlstm.sqhstl[52] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[52] = (         int  )0;
    sqlstm.sqindv[52] = (         short *)0;
    sqlstm.sqinds[52] = (         int  )0;
    sqlstm.sqharm[52] = (unsigned long )0;
    sqlstm.sqadto[52] = (unsigned short )0;
    sqlstm.sqtdso[52] = (unsigned short )0;
    sqlstm.sqhstv[53] = (unsigned char  *)&((data_event->str_event)[num].QFFQCX);
    sqlstm.sqhstl[53] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[53] = (         int  )0;
    sqlstm.sqindv[53] = (         short *)0;
    sqlstm.sqinds[53] = (         int  )0;
    sqlstm.sqharm[53] = (unsigned long )0;
    sqlstm.sqadto[53] = (unsigned short )0;
    sqlstm.sqtdso[53] = (unsigned short )0;
    sqlstm.sqhstv[54] = (unsigned char  *)(data_event->DRIVERNAME);
    sqlstm.sqhstl[54] = (unsigned long )33;
    sqlstm.sqhsts[54] = (         int  )0;
    sqlstm.sqindv[54] = (         short *)0;
    sqlstm.sqinds[54] = (         int  )0;
    sqlstm.sqharm[54] = (unsigned long )0;
    sqlstm.sqadto[54] = (unsigned short )0;
    sqlstm.sqtdso[54] = (unsigned short )0;
    sqlstm.sqhstv[55] = (unsigned char  *)(data_event->DRIVERTEL);
    sqlstm.sqhstl[55] = (unsigned long )33;
    sqlstm.sqhsts[55] = (         int  )0;
    sqlstm.sqindv[55] = (         short *)0;
    sqlstm.sqinds[55] = (         int  )0;
    sqlstm.sqharm[55] = (unsigned long )0;
    sqlstm.sqadto[55] = (unsigned short )0;
    sqlstm.sqtdso[55] = (unsigned short )0;
    sqlstm.sqhstv[56] = (unsigned char  *)&(data_event->LINENO);
    sqlstm.sqhstl[56] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[56] = (         int  )0;
    sqlstm.sqindv[56] = (         short *)0;
    sqlstm.sqinds[56] = (         int  )0;
    sqlstm.sqharm[56] = (unsigned long )0;
    sqlstm.sqadto[56] = (unsigned short )0;
    sqlstm.sqtdso[56] = (unsigned short )0;
    sqlstm.sqhstv[57] = (unsigned char  *)(data_event->LINENAME);
    sqlstm.sqhstl[57] = (unsigned long )33;
    sqlstm.sqhsts[57] = (         int  )0;
    sqlstm.sqindv[57] = (         short *)0;
    sqlstm.sqinds[57] = (         int  )0;
    sqlstm.sqharm[57] = (unsigned long )0;
    sqlstm.sqadto[57] = (unsigned short )0;
    sqlstm.sqtdso[57] = (unsigned short )0;
    sqlstm.sqhstv[58] = (unsigned char  *)(data_event->STATIONNAME);
    sqlstm.sqhstl[58] = (unsigned long )33;
    sqlstm.sqhsts[58] = (         int  )0;
    sqlstm.sqindv[58] = (         short *)0;
    sqlstm.sqinds[58] = (         int  )0;
    sqlstm.sqharm[58] = (unsigned long )0;
    sqlstm.sqadto[58] = (unsigned short )0;
    sqlstm.sqtdso[58] = (unsigned short )0;
    sqlstm.sqhstv[59] = (unsigned char  *)(data_event->D_ID2);
    sqlstm.sqhstl[59] = (unsigned long )5;
    sqlstm.sqhsts[59] = (         int  )0;
    sqlstm.sqindv[59] = (         short *)0;
    sqlstm.sqinds[59] = (         int  )0;
    sqlstm.sqharm[59] = (unsigned long )0;
    sqlstm.sqadto[59] = (unsigned short )0;
    sqlstm.sqtdso[59] = (unsigned short )0;
    sqlstm.sqhstv[60] = (unsigned char  *)(data_event->B_ID);
    sqlstm.sqhstl[60] = (unsigned long )5;
    sqlstm.sqhsts[60] = (         int  )0;
    sqlstm.sqindv[60] = (         short *)0;
    sqlstm.sqinds[60] = (         int  )0;
    sqlstm.sqharm[60] = (unsigned long )0;
    sqlstm.sqadto[60] = (unsigned short )0;
    sqlstm.sqtdso[60] = (unsigned short )0;
    sqlstm.sqhstv[61] = (unsigned char  *)(data_event->B_ID2);
    sqlstm.sqhstl[61] = (unsigned long )5;
    sqlstm.sqhsts[61] = (         int  )0;
    sqlstm.sqindv[61] = (         short *)0;
    sqlstm.sqinds[61] = (         int  )0;
    sqlstm.sqharm[61] = (unsigned long )0;
    sqlstm.sqadto[61] = (unsigned short )0;
    sqlstm.sqtdso[61] = (unsigned short )0;
    sqlstm.sqhstv[62] = (unsigned char  *)&((data_event->str_event)[num].LKJ_TYPE);
    sqlstm.sqhstl[62] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[62] = (         int  )0;
    sqlstm.sqindv[62] = (         short *)0;
    sqlstm.sqinds[62] = (         int  )0;
    sqlstm.sqharm[62] = (unsigned long )0;
    sqlstm.sqadto[62] = (unsigned short )0;
    sqlstm.sqtdso[62] = (unsigned short )0;
    sqlstm.sqhstv[63] = (unsigned char  *)&((data_event->str_event)[num].PRE_CZH);
    sqlstm.sqhstl[63] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[63] = (         int  )0;
    sqlstm.sqindv[63] = (         short *)0;
    sqlstm.sqinds[63] = (         int  )0;
    sqlstm.sqharm[63] = (unsigned long )0;
    sqlstm.sqadto[63] = (unsigned short )0;
    sqlstm.sqtdso[63] = (unsigned short )0;
    sqlstm.sqhstv[64] = (unsigned char  *)&((data_event->str_event)[num].PRE_JLH);
    sqlstm.sqhstl[64] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[64] = (         int  )0;
    sqlstm.sqindv[64] = (         short *)0;
    sqlstm.sqinds[64] = (         int  )0;
    sqlstm.sqharm[64] = (unsigned long )0;
    sqlstm.sqadto[64] = (unsigned short )0;
    sqlstm.sqtdso[64] = (unsigned short )0;
    sqlstm.sqhstv[65] = (unsigned char  *)((data_event->str_event)[num].PRE_CZM);
    sqlstm.sqhstl[65] = (unsigned long )33;
    sqlstm.sqhsts[65] = (         int  )0;
    sqlstm.sqindv[65] = (         short *)0;
    sqlstm.sqinds[65] = (         int  )0;
    sqlstm.sqharm[65] = (unsigned long )0;
    sqlstm.sqadto[65] = (unsigned short )0;
    sqlstm.sqtdso[65] = (unsigned short )0;
    sqlstm.sqhstv[66] = (unsigned char  *)((data_event->str_event)[num].PRE_CC);
    sqlstm.sqhstl[66] = (unsigned long )21;
    sqlstm.sqhsts[66] = (         int  )0;
    sqlstm.sqindv[66] = (         short *)0;
    sqlstm.sqinds[66] = (         int  )0;
    sqlstm.sqharm[66] = (unsigned long )0;
    sqlstm.sqadto[66] = (unsigned short )0;
    sqlstm.sqtdso[66] = (unsigned short )0;
    sqlstm.sqhstv[67] = (unsigned char  *)&(data_event->CRK);
    sqlstm.sqhstl[67] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[67] = (         int  )0;
    sqlstm.sqindv[67] = (         short *)0;
    sqlstm.sqinds[67] = (         int  )0;
    sqlstm.sqharm[67] = (unsigned long )0;
    sqlstm.sqadto[67] = (unsigned short )0;
    sqlstm.sqtdso[67] = (unsigned short )0;
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



				/* EXEC SQL COMMIT; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )6473;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}





    if (sqlca.sqlcode == 0)

    {

        if(data_event->key == 14550920)

        {

            ///printf("loco.%s-%s:crk事件ITF_EVENT_LKJ_EVENT_CRD入库成功\n",data_event->T_TYPE_ID,data_event->LOCO_NO);

        }

        //printf("loco.%s-%s:crk11事件ITF_EVENT_LKJ_EVENT_CRD入库成功\n",data_event->T_TYPE_ID,data_event->LOCO_NO);

        return 0;

    }

    else

    {

        //printf("loco.%s-%s:crk事件ITF_EVENT_LKJ_EVENT_CRD入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:crk事件ITF_EVENT_LKJ_EVENT_CRD入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.v,temp);

        cclog('e',temp);

        return 1;

    }

}





static unsigned char insert_to_ITF_EVENT_INVALID(int num)

{

    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_EVENT_INVALID (

                IDX         ,/oCHAR(32 CHAR) not null,   o/

                T_TYPE_ID   ,/oCHAR(3 CHAR),           o/

                LOCO_NO     ,/oCHAR(4 CHAR),           o/

                AB          ,/oNUMBER(1),              o/

                D_ID        ,/oCHAR(4),                o/

                ETYPE       ,/oNUMBER(5),              o/

                SJMC        ,/oVARCHAR2(30),           o/

                SJDJ        ,/oNUMBER(2),              o/

                BTSJ        ,/oDATE,                   o/

                RKSJ        ,/oDATE default SYSDATE,   o/



                GPSJD       ,/oNUMBER(12,6),           o/

                GPSWD       ,/oNUMBER(12,6),           o/

                GPSSD       ,/oNUMBER(5,2),            o/

                GPSHB       ,/oNUMBER(8,2),            o/

                SJ          ,/oDATE,                   o/

                CC          ,/oVARCHAR2(20 CHAR),      o/

                CZH         ,/oNUMBER(5),              o/

                SJH         ,/oNUMBER(10),             o/

                FSJH        ,/oNUMBER(10),             o/

                SJJLH       ,/oNUMBER(5),              o/

                KHBB        ,/oNUMBER(3),              o/

                SJSD        ,/oNUMBER(5,2),            o/

                JCXHZ       ,/oNUMBER(5),              o/

                GK          ,/oNUMBER(3),              o/

                XHJBH       ,/oNUMBER(5),              o/

                XHJLB       ,/oNUMBER(5),              o/

                GLB         ,/oNUMBER(10),             o/

                ZZ          ,/oNUMBER(5),              o/

                JC          ,/oNUMBER(6,2),            o/

                LS          ,/oNUMBER(5),              o/

                LCGYL       ,/oNUMBER(5),              o/

                ZZZT        ,/oNUMBER(3),              o/

                CXSJ        ,/oNUMBER(10),             o/

                SJH_BGQ     ,/oNUMBER(10),             o/

                FSJH_BGQ    ,/oNUMBER(10),             o/

                LKJVER      ,/oVARCHAR2(20),        o/

                SRJLH       ,/oNUMBER(5),           o/

                JLQFXHJJL   ,/oNUMBER(5),           o/

                XS          ,/oNUMBER(5),           o/

                ZDSC        ,/oNUMBER(3),           o/

                DQXLHBZ     ,/oNUMBER(3),           o/

                DQXLH       ,/oNUMBER(5),           o/

                QFXLHBZ     ,/oNUMBER(3),           o/

                QFXLH       ,/oNUMBER(5),           o/

                DQ_TMIS     ,/oNUMBER(8),           o/

                QF_TIME     ,/oNUMBER(8),           o/

                QFCZJLH     ,/oNUMBER(3),           o/

                QFCHZH      ,/oNUMBER(5),           o/

                JKZT        ,/oNUMBER(3),           o/

                LJWY        ,/oNUMBER(5),           o/

                BFQZX       ,/oNUMBER(3),           o/

                BFQCX       ,/oNUMBER(3),           o/

                QFFQZX      ,/oNUMBER(3),           o/

                QFFQCX      ,/oNUMBER(3),           o/

                DRIVERNAME  ,/oVARCHAR2(30),        o/

                DRIVERTEL   ,/oVARCHAR2(32),        o/

                LINENO      ,/oNUMBER(5),           o/

                LINENAME    ,/oVARCHAR2(32),        o/

                STATIONNAME ,/oVARCHAR2(32),        o/

                LKJ_TYPE

                ,CRK

                /oD_ID2       ,/oCHAR(4),             o/

                /oB_ID        /oCHAR(2)              o/

                )

            VALUES(

                :data_event->str_event[num].IDX         ,/oCHAR(32 CHAR) not null,   o/

                :data_event->T_TYPE_ID   ,/oCHAR(3 CHAR),           o/

                :data_event->LOCO_NO     ,/oCHAR(4 CHAR),           o/

                :data_event->AB          ,/oNUMBER(1),              o/

                trim(:data_event->D_ID)        ,/oCHAR(4),                o/

                :data_event->str_event[num].ETYPE       ,/oNUMBER(5),              o/

                trim(:data_event->str_event[num].SJMC)        ,/oVARCHAR2(30),           o/

                :data_event->str_event[num].SJDJ        ,/oNUMBER(2),              o/

                to_date(:data_event->RKSJ ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_event->BTSJ ,'yyyy-mm-dd hh24:mi:ss'),



                :data_event->GPSJD       ,/oNUMBER(12,6),           o/

                :data_event->GPSWD       ,/oNUMBER(12,6),           o/

                :data_event->GPSSD       ,/oNUMBER(5,2),            o/

                :data_event->GPSHB       ,/oNUMBER(8,2),            o/

                to_date(:data_event->str_event[num].SJ ,'yyyy-mm-dd hh24:mi:ss'),

                :data_event->str_event[num].CC          ,/oVARCHAR2(20 CHAR),      o/

                :data_event->str_event[num].CZH         ,/oNUMBER(5),              o/

                :data_event->str_event[num].SJH         ,/oNUMBER(10),             o/

                :data_event->str_event[num].FSJH        ,/oNUMBER(10),             o/

                :data_event->str_event[num].SJJLH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].KHBB        ,/oNUMBER(3),              o/

                :data_event->str_event[num].SJSU        ,/oNUMBER(5,2),            o/

                :data_event->str_event[num].JCXHZ       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GK          ,/oNUMBER(3),              o/

                :data_event->str_event[num].XHJBH       ,/oNUMBER(5),              o/

                :data_event->str_event[num].XHJLB       ,/oNUMBER(5),              o/

                :data_event->str_event[num].GLB         ,/oNUMBER(10),             o/

                :data_event->str_event[num].ZZ          ,/oNUMBER(5),              o/

                :data_event->str_event[num].JC          ,/oNUMBER(6,2),            o/

                :data_event->str_event[num].LS          ,/oNUMBER(5),              o/

                :data_event->str_event[num].LCGYL       ,/oNUMBER(5),              o/

                :data_event->str_event[num].ZZZT        ,/oNUMBER(3),              o/

                :data_event->str_event[num].CXSJ        ,/oNUMBER(10),             o/

                :data_event->str_event[num].SJH_BGQ     ,/oNUMBER(10),             o/

                :data_event->str_event[num].FSJH_BGQ    ,/oNUMBER(10),             o/

                trim(:data_event->LKJVER)      ,/oVARCHAR2(20),        o/

                :data_event->str_event[num].SRJLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].JLQFXHJJL   ,/oNUMBER(5),           o/

                :data_event->str_event[num].XS          ,/oNUMBER(5),           o/

                :data_event->str_event[num].ZDSC        ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].DQXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].QFXLHBZ     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFXLH       ,/oNUMBER(5),           o/

                :data_event->str_event[num].DQ_TMIS     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QF_TIME     ,/oNUMBER(8),           o/

                :data_event->str_event[num].QFCZJLH     ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFCHZH      ,/oNUMBER(5),           o/

                :data_event->str_event[num].JKZT        ,/oNUMBER(3),           o/

                :data_event->str_event[num].LJWY        ,/oNUMBER(5),           o/

                :data_event->str_event[num].BFQZX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].BFQCX       ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQZX      ,/oNUMBER(3),           o/

                :data_event->str_event[num].QFFQCX      ,/oNUMBER(3),           o/

                trim(:data_event->DRIVERNAME ) ,/oVARCHAR2(30),        o/

                trim(:data_event->DRIVERTEL  )  ,/oVARCHAR2(32),        o/

                trim(:data_event->LINENO  )     ,/oNUMBER(5),           o/

                trim(:data_event->LINENAME  )   ,/oVARCHAR2(32),        o/

                trim(:data_event->STATIONNAME ) ,/oVARCHAR2(32),        o/

                :data_event->str_event[num].LKJ_TYPE   /oNUMBER(3),           o/

                ,:data_event->CRK

                /o:data_event->D_ID2       ,CHAR(4),             o/

                /o:data_event->B_ID        CHAR(2)              o/

                ) ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_EVENT_INVALID (IDX,T_TYPE_ID,LOCO_NO,AB,\
D_ID,ETYPE,SJMC,SJDJ,BTSJ,RKSJ,GPSJD,GPSWD,GPSSD,GPSHB,SJ,CC,CZH,SJH,FSJH,SJJ\
LH,KHBB,SJSD,JCXHZ,GK,XHJBH,XHJLB,GLB,ZZ,JC,LS,LCGYL,ZZZT,CXSJ,SJH_BGQ,FSJH_B\
GQ,LKJVER,SRJLH,JLQFXHJJL,XS,ZDSC,DQXLHBZ,DQXLH,QFXLHBZ,QFXLH,DQ_TMIS,QF_TIME\
,QFCZJLH,QFCHZH,JKZT,LJWY,BFQZX,BFQCX,QFFQZX,QFFQCX,DRIVERNAME,DRIVERTEL,LINE\
NO,LINENAME,STATIONNAME,LKJ_TYPE,CRK) values (:b0,:b1,:b2,:b3,trim(:b4),:b5,t\
rim(:b6),:b7,to_date(:b8,'yyyy-mm-dd hh24:mi:ss'),to_date(:b9,'yyyy-mm-dd hh2\
4:mi:ss'),:b10,:b11,:b12,:b13,to_date(:b14,'yyyy-mm-dd hh24:mi:ss'),:b15,:b16\
,:b17,:b18,:b19,:b20,:b21,:b22,:b23,:b24,:b25,:b26,:b27,:b28,:b29,:b30,:b31,:\
b32,:b33,:b34,trim(:b35),:b36,:b37,:b38,:b39,:b40,:b41,:b42,:b43,:b44,:b45,:b\
46,:b47,:b48,:b49,:b50,:b51,:b52,:b53,trim(:b54),trim(:b55),trim(:b56),trim(:\
b57),trim(:b58),:b59,:b60)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )6488;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)((data_event->str_event)[num].IDX);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_event->T_TYPE_ID);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_event->LOCO_NO);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_event->AB);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_event->D_ID);
    sqlstm.sqhstl[4] = (unsigned long )5;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)&((data_event->str_event)[num].ETYPE);
    sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)((data_event->str_event)[num].SJMC);
    sqlstm.sqhstl[6] = (unsigned long )33;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&((data_event->str_event)[num].SJDJ);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)(data_event->RKSJ);
    sqlstm.sqhstl[8] = (unsigned long )21;
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)(data_event->BTSJ);
    sqlstm.sqhstl[9] = (unsigned long )21;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&(data_event->GPSJD);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_event->GPSWD);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_event->GPSSD);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_event->GPSHB);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)((data_event->str_event)[num].SJ);
    sqlstm.sqhstl[14] = (unsigned long )21;
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)((data_event->str_event)[num].CC);
    sqlstm.sqhstl[15] = (unsigned long )21;
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&((data_event->str_event)[num].CZH);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&((data_event->str_event)[num].SJH);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&((data_event->str_event)[num].FSJH);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&((data_event->str_event)[num].SJJLH);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&((data_event->str_event)[num].KHBB);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&((data_event->str_event)[num].SJSU);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&((data_event->str_event)[num].JCXHZ);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&((data_event->str_event)[num].GK);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&((data_event->str_event)[num].XHJBH);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&((data_event->str_event)[num].XHJLB);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&((data_event->str_event)[num].GLB);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&((data_event->str_event)[num].ZZ);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&((data_event->str_event)[num].JC);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(float);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&((data_event->str_event)[num].LS);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&((data_event->str_event)[num].LCGYL);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&((data_event->str_event)[num].ZZZT);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&((data_event->str_event)[num].CXSJ);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&((data_event->str_event)[num].SJH_BGQ);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)&((data_event->str_event)[num].FSJH_BGQ);
    sqlstm.sqhstl[34] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)(data_event->LKJVER);
    sqlstm.sqhstl[35] = (unsigned long )21;
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&((data_event->str_event)[num].SRJLH);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
    sqlstm.sqhstv[37] = (unsigned char  *)&((data_event->str_event)[num].JLQFXHJJL);
    sqlstm.sqhstl[37] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[37] = (         int  )0;
    sqlstm.sqindv[37] = (         short *)0;
    sqlstm.sqinds[37] = (         int  )0;
    sqlstm.sqharm[37] = (unsigned long )0;
    sqlstm.sqadto[37] = (unsigned short )0;
    sqlstm.sqtdso[37] = (unsigned short )0;
    sqlstm.sqhstv[38] = (unsigned char  *)&((data_event->str_event)[num].XS);
    sqlstm.sqhstl[38] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[38] = (         int  )0;
    sqlstm.sqindv[38] = (         short *)0;
    sqlstm.sqinds[38] = (         int  )0;
    sqlstm.sqharm[38] = (unsigned long )0;
    sqlstm.sqadto[38] = (unsigned short )0;
    sqlstm.sqtdso[38] = (unsigned short )0;
    sqlstm.sqhstv[39] = (unsigned char  *)&((data_event->str_event)[num].ZDSC);
    sqlstm.sqhstl[39] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[39] = (         int  )0;
    sqlstm.sqindv[39] = (         short *)0;
    sqlstm.sqinds[39] = (         int  )0;
    sqlstm.sqharm[39] = (unsigned long )0;
    sqlstm.sqadto[39] = (unsigned short )0;
    sqlstm.sqtdso[39] = (unsigned short )0;
    sqlstm.sqhstv[40] = (unsigned char  *)&((data_event->str_event)[num].DQXLHBZ);
    sqlstm.sqhstl[40] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[40] = (         int  )0;
    sqlstm.sqindv[40] = (         short *)0;
    sqlstm.sqinds[40] = (         int  )0;
    sqlstm.sqharm[40] = (unsigned long )0;
    sqlstm.sqadto[40] = (unsigned short )0;
    sqlstm.sqtdso[40] = (unsigned short )0;
    sqlstm.sqhstv[41] = (unsigned char  *)&((data_event->str_event)[num].DQXLH);
    sqlstm.sqhstl[41] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[41] = (         int  )0;
    sqlstm.sqindv[41] = (         short *)0;
    sqlstm.sqinds[41] = (         int  )0;
    sqlstm.sqharm[41] = (unsigned long )0;
    sqlstm.sqadto[41] = (unsigned short )0;
    sqlstm.sqtdso[41] = (unsigned short )0;
    sqlstm.sqhstv[42] = (unsigned char  *)&((data_event->str_event)[num].QFXLHBZ);
    sqlstm.sqhstl[42] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[42] = (         int  )0;
    sqlstm.sqindv[42] = (         short *)0;
    sqlstm.sqinds[42] = (         int  )0;
    sqlstm.sqharm[42] = (unsigned long )0;
    sqlstm.sqadto[42] = (unsigned short )0;
    sqlstm.sqtdso[42] = (unsigned short )0;
    sqlstm.sqhstv[43] = (unsigned char  *)&((data_event->str_event)[num].QFXLH);
    sqlstm.sqhstl[43] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[43] = (         int  )0;
    sqlstm.sqindv[43] = (         short *)0;
    sqlstm.sqinds[43] = (         int  )0;
    sqlstm.sqharm[43] = (unsigned long )0;
    sqlstm.sqadto[43] = (unsigned short )0;
    sqlstm.sqtdso[43] = (unsigned short )0;
    sqlstm.sqhstv[44] = (unsigned char  *)&((data_event->str_event)[num].DQ_TMIS);
    sqlstm.sqhstl[44] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[44] = (         int  )0;
    sqlstm.sqindv[44] = (         short *)0;
    sqlstm.sqinds[44] = (         int  )0;
    sqlstm.sqharm[44] = (unsigned long )0;
    sqlstm.sqadto[44] = (unsigned short )0;
    sqlstm.sqtdso[44] = (unsigned short )0;
    sqlstm.sqhstv[45] = (unsigned char  *)&((data_event->str_event)[num].QF_TIME);
    sqlstm.sqhstl[45] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[45] = (         int  )0;
    sqlstm.sqindv[45] = (         short *)0;
    sqlstm.sqinds[45] = (         int  )0;
    sqlstm.sqharm[45] = (unsigned long )0;
    sqlstm.sqadto[45] = (unsigned short )0;
    sqlstm.sqtdso[45] = (unsigned short )0;
    sqlstm.sqhstv[46] = (unsigned char  *)&((data_event->str_event)[num].QFCZJLH);
    sqlstm.sqhstl[46] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[46] = (         int  )0;
    sqlstm.sqindv[46] = (         short *)0;
    sqlstm.sqinds[46] = (         int  )0;
    sqlstm.sqharm[46] = (unsigned long )0;
    sqlstm.sqadto[46] = (unsigned short )0;
    sqlstm.sqtdso[46] = (unsigned short )0;
    sqlstm.sqhstv[47] = (unsigned char  *)&((data_event->str_event)[num].QFCHZH);
    sqlstm.sqhstl[47] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[47] = (         int  )0;
    sqlstm.sqindv[47] = (         short *)0;
    sqlstm.sqinds[47] = (         int  )0;
    sqlstm.sqharm[47] = (unsigned long )0;
    sqlstm.sqadto[47] = (unsigned short )0;
    sqlstm.sqtdso[47] = (unsigned short )0;
    sqlstm.sqhstv[48] = (unsigned char  *)&((data_event->str_event)[num].JKZT);
    sqlstm.sqhstl[48] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[48] = (         int  )0;
    sqlstm.sqindv[48] = (         short *)0;
    sqlstm.sqinds[48] = (         int  )0;
    sqlstm.sqharm[48] = (unsigned long )0;
    sqlstm.sqadto[48] = (unsigned short )0;
    sqlstm.sqtdso[48] = (unsigned short )0;
    sqlstm.sqhstv[49] = (unsigned char  *)&((data_event->str_event)[num].LJWY);
    sqlstm.sqhstl[49] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[49] = (         int  )0;
    sqlstm.sqindv[49] = (         short *)0;
    sqlstm.sqinds[49] = (         int  )0;
    sqlstm.sqharm[49] = (unsigned long )0;
    sqlstm.sqadto[49] = (unsigned short )0;
    sqlstm.sqtdso[49] = (unsigned short )0;
    sqlstm.sqhstv[50] = (unsigned char  *)&((data_event->str_event)[num].BFQZX);
    sqlstm.sqhstl[50] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[50] = (         int  )0;
    sqlstm.sqindv[50] = (         short *)0;
    sqlstm.sqinds[50] = (         int  )0;
    sqlstm.sqharm[50] = (unsigned long )0;
    sqlstm.sqadto[50] = (unsigned short )0;
    sqlstm.sqtdso[50] = (unsigned short )0;
    sqlstm.sqhstv[51] = (unsigned char  *)&((data_event->str_event)[num].BFQCX);
    sqlstm.sqhstl[51] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[51] = (         int  )0;
    sqlstm.sqindv[51] = (         short *)0;
    sqlstm.sqinds[51] = (         int  )0;
    sqlstm.sqharm[51] = (unsigned long )0;
    sqlstm.sqadto[51] = (unsigned short )0;
    sqlstm.sqtdso[51] = (unsigned short )0;
    sqlstm.sqhstv[52] = (unsigned char  *)&((data_event->str_event)[num].QFFQZX);
    sqlstm.sqhstl[52] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[52] = (         int  )0;
    sqlstm.sqindv[52] = (         short *)0;
    sqlstm.sqinds[52] = (         int  )0;
    sqlstm.sqharm[52] = (unsigned long )0;
    sqlstm.sqadto[52] = (unsigned short )0;
    sqlstm.sqtdso[52] = (unsigned short )0;
    sqlstm.sqhstv[53] = (unsigned char  *)&((data_event->str_event)[num].QFFQCX);
    sqlstm.sqhstl[53] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[53] = (         int  )0;
    sqlstm.sqindv[53] = (         short *)0;
    sqlstm.sqinds[53] = (         int  )0;
    sqlstm.sqharm[53] = (unsigned long )0;
    sqlstm.sqadto[53] = (unsigned short )0;
    sqlstm.sqtdso[53] = (unsigned short )0;
    sqlstm.sqhstv[54] = (unsigned char  *)(data_event->DRIVERNAME);
    sqlstm.sqhstl[54] = (unsigned long )33;
    sqlstm.sqhsts[54] = (         int  )0;
    sqlstm.sqindv[54] = (         short *)0;
    sqlstm.sqinds[54] = (         int  )0;
    sqlstm.sqharm[54] = (unsigned long )0;
    sqlstm.sqadto[54] = (unsigned short )0;
    sqlstm.sqtdso[54] = (unsigned short )0;
    sqlstm.sqhstv[55] = (unsigned char  *)(data_event->DRIVERTEL);
    sqlstm.sqhstl[55] = (unsigned long )33;
    sqlstm.sqhsts[55] = (         int  )0;
    sqlstm.sqindv[55] = (         short *)0;
    sqlstm.sqinds[55] = (         int  )0;
    sqlstm.sqharm[55] = (unsigned long )0;
    sqlstm.sqadto[55] = (unsigned short )0;
    sqlstm.sqtdso[55] = (unsigned short )0;
    sqlstm.sqhstv[56] = (unsigned char  *)&(data_event->LINENO);
    sqlstm.sqhstl[56] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[56] = (         int  )0;
    sqlstm.sqindv[56] = (         short *)0;
    sqlstm.sqinds[56] = (         int  )0;
    sqlstm.sqharm[56] = (unsigned long )0;
    sqlstm.sqadto[56] = (unsigned short )0;
    sqlstm.sqtdso[56] = (unsigned short )0;
    sqlstm.sqhstv[57] = (unsigned char  *)(data_event->LINENAME);
    sqlstm.sqhstl[57] = (unsigned long )33;
    sqlstm.sqhsts[57] = (         int  )0;
    sqlstm.sqindv[57] = (         short *)0;
    sqlstm.sqinds[57] = (         int  )0;
    sqlstm.sqharm[57] = (unsigned long )0;
    sqlstm.sqadto[57] = (unsigned short )0;
    sqlstm.sqtdso[57] = (unsigned short )0;
    sqlstm.sqhstv[58] = (unsigned char  *)(data_event->STATIONNAME);
    sqlstm.sqhstl[58] = (unsigned long )33;
    sqlstm.sqhsts[58] = (         int  )0;
    sqlstm.sqindv[58] = (         short *)0;
    sqlstm.sqinds[58] = (         int  )0;
    sqlstm.sqharm[58] = (unsigned long )0;
    sqlstm.sqadto[58] = (unsigned short )0;
    sqlstm.sqtdso[58] = (unsigned short )0;
    sqlstm.sqhstv[59] = (unsigned char  *)&((data_event->str_event)[num].LKJ_TYPE);
    sqlstm.sqhstl[59] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[59] = (         int  )0;
    sqlstm.sqindv[59] = (         short *)0;
    sqlstm.sqinds[59] = (         int  )0;
    sqlstm.sqharm[59] = (unsigned long )0;
    sqlstm.sqadto[59] = (unsigned short )0;
    sqlstm.sqtdso[59] = (unsigned short )0;
    sqlstm.sqhstv[60] = (unsigned char  *)&(data_event->CRK);
    sqlstm.sqhstl[60] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[60] = (         int  )0;
    sqlstm.sqindv[60] = (         short *)0;
    sqlstm.sqinds[60] = (         int  )0;
    sqlstm.sqharm[60] = (unsigned long )0;
    sqlstm.sqadto[60] = (unsigned short )0;
    sqlstm.sqtdso[60] = (unsigned short )0;
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





    if (sqlca.sqlcode == 0)

    {

        if(data_event->key == 14550920)

        {

            //printf("loco.%s-%s:事件EVENT_INVALID入库成功\n",data_event->T_TYPE_ID,data_event->LOCO_NO);

        }





        return 0;

    }

    else

    {

        if(data_event->key == 14550920)

        {

            //printf("loco.%s-%s:事件EVENT_INVALID入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        }

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:事件EVENT_INVALID入库失败,ORACLE返回值：%d\n",data_event->T_TYPE_ID,data_event->LOCO_NO,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.v,temp);

        //cclog('e',temp);

        return 1;

    }

}



static unsigned char insert_to_ITF_BD_HEADER_CT()

{

    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_BD_HEADER (

                IDX       ,/oCHAR(32) not null,               o/

                T_TYPE_ID ,/oCHAR(3),                         o/

                LOCO_NO   ,/oCHAR(4 CHAR),                    o/

                AB        ,/oNUMBER(1),                       o/

                BTSJ      ,/oDATE,                            o/

                RKSJ      ,/oDATE default SYSDATE,            o/

                XXLX      ,/oNUMBER(3),                       o/

                ZH        ,/oNUMBER(5),                       o/

                SJCD      ,/oNUMBER(5),                       o/

                JD        ,/oNUMBER(12,6),                    o/

                WD        ,/oNUMBER(12,6),                    o/

                SD        ,/oNUMBER(8,2),                     o/

                HB        ,/oNUMBER(8,2),                     o/

                VER       ,/oNUMBER(3) default 10 not null,   o/

                GZDM1     ,/oNUMBER(10),                      o/

                GZDM2     ,/oNUMBER(10),                      o/

                GZDM3     ,/oNUMBER(10),                      o/

                SS        ,/oNUMBER(1),                       o/

                KZHX      ,/oNUMBER(1),                       o/

                ZDH       ,/oNUMBER(1),                       o/

                SDGZT     ,/oNUMBER(1),                       o/

                CZD       ,/oNUMBER(1),                       o/

                JCYXFX    ,/oNUMBER(1),                       o/

                JCGK      ,/oNUMBER(1),                       o/

                GFX       ,/oNUMBER(1),                       o/

                SBJW      ,/oNUMBER(5,1),                     o/

                QYZDL     ,/oNUMBER(5),                       o/

                SJSD      ,/oNUMBER(5,2),                     o/

                XDCDY     ,/oNUMBER(5,1),                     o/

                WYZFDY    ,/oNUMBER(5),                       o/

                WLZFDL    ,/oNUMBER(5),                       o/

                ZFGYL     ,/oNUMBER(5),                       o/

                LCGYL     ,/oNUMBER(5),                       o/

                ZDGYL     ,/oNUMBER(5),                       o/

                CC        ,/oVARCHAR2(20),                    o/

                GLB       ,/oNUMBER(11),                      o/

                ZSJH      /oNUMBER(10)                       o/

                )

            VALUES(

                :data_bd->idx         ,/oCHAR(32 CHAR) not null,   o/

                :data_bd->t_type_id   ,/oCHAR(3 CHAR),           o/

                :data_bd->loco_no     ,/oCHAR(4 CHAR),           o/

                :data_bd->ab          ,/oNUMBER(1),              o/

                to_date(:data_bd->rksj ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_bd->btsj ,'yyyy-mm-dd hh24:mi:ss'),

                :data_bd->xxlx    ,/oNUMBER(3),                       o/

                :data_bd->zh        ,/oNUMBER(5),                       o/

                :data_bd->sjcd      ,/oNUMBER(5),                       o/

                :data_bd->jd        ,/oNUMBER(12,6),                    o/

                :data_bd->wd        ,/oNUMBER(12,6),                    o/

                :data_bd->sd        ,/oNUMBER(8,2),                     o/

                :data_bd->hb        ,/oNUMBER(8,2),                     o/

                :data_bd->ver       ,/oNUMBER(3) default 10 not null,   o/

                :data_bd->gzdm1     ,/oNUMBER(10),                      o/

                :data_bd->gzdm2     ,/oNUMBER(10),                      o/

                :data_bd->gzdm3     ,/oNUMBER(10),                      o/

                :data_bd->ss        ,/oNUMBER(1),                       o/

                :data_bd->kzhx      ,/oNUMBER(1),                       o/

                :data_bd->zdh       ,/oNUMBER(1),                       o/

                :data_bd->sdgzt     ,/oNUMBER(1),                       o/

                :data_bd->czd       ,/oNUMBER(1),                       o/

                :data_bd->jcyxfx    ,/oNUMBER(1),                       o/

                :data_bd->jcgk      ,/oNUMBER(1),                       o/

                :data_bd->gfx       ,/oNUMBER(1),                       o/

                :data_bd->sbjw      ,/oNUMBER(5,1),                     o/

                :data_bd->qyzdl     ,/oNUMBER(5),                       o/

                :data_bd->sjsd      ,/oNUMBER(5,2),                     o/

                :data_bd->xdcdy     ,/oNUMBER(5,1),                     o/

                :data_bd->wyzfdy    ,/oNUMBER(5),                       o/

                :data_bd->wlzfdl    ,/oNUMBER(5),                       o/

                :data_bd->zfgyl     ,/oNUMBER(5),                       o/

                :data_bd->lcgyl     ,/oNUMBER(5),                       o/

                :data_bd->zdgyl     ,/oNUMBER(5),                       o/

                :data_bd->cc        ,/oVARCHAR2(20),                    o/

                :data_bd->glb       ,/oNUMBER(11),                      o/

                :data_bd->zsjh      /oNUMBER(10)                       o/

                ) ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_BD_HEADER (IDX,T_TYPE_ID,LOCO_NO,AB,BTSJ\
,RKSJ,XXLX,ZH,SJCD,JD,WD,SD,HB,VER,GZDM1,GZDM2,GZDM3,SS,KZHX,ZDH,SDGZT,CZD,JC\
YXFX,JCGK,GFX,SBJW,QYZDL,SJSD,XDCDY,WYZFDY,WLZFDL,ZFGYL,LCGYL,ZDGYL,CC,GLB,ZS\
JH) values (:b0,:b1,:b2,:b3,to_date(:b4,'yyyy-mm-dd hh24:mi:ss'),to_date(:b5,\
'yyyy-mm-dd hh24:mi:ss'),:b6,:b7,:b8,:b9,:b10,:b11,:b12,:b13,:b14,:b15,:b16,:\
b17,:b18,:b19,:b20,:b21,:b22,:b23,:b24,:b25,:b26,:b27,:b28,:b29,:b30,:b31,:b3\
2,:b33,:b34,:b35,:b36)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )6747;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)(data_bd->idx);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_bd->t_type_id);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_bd->loco_no);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_bd->ab);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_bd->rksj);
    sqlstm.sqhstl[4] = (unsigned long )21;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_bd->btsj);
    sqlstm.sqhstl[5] = (unsigned long )21;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&(data_bd->xxlx);
    sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&(data_bd->zh);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&(data_bd->sjcd);
    sqlstm.sqhstl[8] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&(data_bd->jd);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&(data_bd->wd);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_bd->sd);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_bd->hb);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_bd->ver);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_bd->gzdm1);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(data_bd->gzdm2);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(data_bd->gzdm3);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (unsigned char  *)&(data_bd->ss);
    sqlstm.sqhstl[17] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         short *)0;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned long )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (unsigned char  *)&(data_bd->kzhx);
    sqlstm.sqhstl[18] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         short *)0;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned long )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (unsigned char  *)&(data_bd->zdh);
    sqlstm.sqhstl[19] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         short *)0;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned long )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (unsigned char  *)&(data_bd->sdgzt);
    sqlstm.sqhstl[20] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         short *)0;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned long )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (unsigned char  *)&(data_bd->czd);
    sqlstm.sqhstl[21] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         short *)0;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned long )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (unsigned char  *)&(data_bd->jcyxfx);
    sqlstm.sqhstl[22] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         short *)0;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned long )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (unsigned char  *)&(data_bd->jcgk);
    sqlstm.sqhstl[23] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         short *)0;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned long )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (unsigned char  *)&(data_bd->gfx);
    sqlstm.sqhstl[24] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         short *)0;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned long )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
    sqlstm.sqhstv[25] = (unsigned char  *)&(data_bd->sbjw);
    sqlstm.sqhstl[25] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[25] = (         int  )0;
    sqlstm.sqindv[25] = (         short *)0;
    sqlstm.sqinds[25] = (         int  )0;
    sqlstm.sqharm[25] = (unsigned long )0;
    sqlstm.sqadto[25] = (unsigned short )0;
    sqlstm.sqtdso[25] = (unsigned short )0;
    sqlstm.sqhstv[26] = (unsigned char  *)&(data_bd->qyzdl);
    sqlstm.sqhstl[26] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[26] = (         int  )0;
    sqlstm.sqindv[26] = (         short *)0;
    sqlstm.sqinds[26] = (         int  )0;
    sqlstm.sqharm[26] = (unsigned long )0;
    sqlstm.sqadto[26] = (unsigned short )0;
    sqlstm.sqtdso[26] = (unsigned short )0;
    sqlstm.sqhstv[27] = (unsigned char  *)&(data_bd->sjsd);
    sqlstm.sqhstl[27] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[27] = (         int  )0;
    sqlstm.sqindv[27] = (         short *)0;
    sqlstm.sqinds[27] = (         int  )0;
    sqlstm.sqharm[27] = (unsigned long )0;
    sqlstm.sqadto[27] = (unsigned short )0;
    sqlstm.sqtdso[27] = (unsigned short )0;
    sqlstm.sqhstv[28] = (unsigned char  *)&(data_bd->xdcdy);
    sqlstm.sqhstl[28] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[28] = (         int  )0;
    sqlstm.sqindv[28] = (         short *)0;
    sqlstm.sqinds[28] = (         int  )0;
    sqlstm.sqharm[28] = (unsigned long )0;
    sqlstm.sqadto[28] = (unsigned short )0;
    sqlstm.sqtdso[28] = (unsigned short )0;
    sqlstm.sqhstv[29] = (unsigned char  *)&(data_bd->wyzfdy);
    sqlstm.sqhstl[29] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[29] = (         int  )0;
    sqlstm.sqindv[29] = (         short *)0;
    sqlstm.sqinds[29] = (         int  )0;
    sqlstm.sqharm[29] = (unsigned long )0;
    sqlstm.sqadto[29] = (unsigned short )0;
    sqlstm.sqtdso[29] = (unsigned short )0;
    sqlstm.sqhstv[30] = (unsigned char  *)&(data_bd->wlzfdl);
    sqlstm.sqhstl[30] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[30] = (         int  )0;
    sqlstm.sqindv[30] = (         short *)0;
    sqlstm.sqinds[30] = (         int  )0;
    sqlstm.sqharm[30] = (unsigned long )0;
    sqlstm.sqadto[30] = (unsigned short )0;
    sqlstm.sqtdso[30] = (unsigned short )0;
    sqlstm.sqhstv[31] = (unsigned char  *)&(data_bd->zfgyl);
    sqlstm.sqhstl[31] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[31] = (         int  )0;
    sqlstm.sqindv[31] = (         short *)0;
    sqlstm.sqinds[31] = (         int  )0;
    sqlstm.sqharm[31] = (unsigned long )0;
    sqlstm.sqadto[31] = (unsigned short )0;
    sqlstm.sqtdso[31] = (unsigned short )0;
    sqlstm.sqhstv[32] = (unsigned char  *)&(data_bd->lcgyl);
    sqlstm.sqhstl[32] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[32] = (         int  )0;
    sqlstm.sqindv[32] = (         short *)0;
    sqlstm.sqinds[32] = (         int  )0;
    sqlstm.sqharm[32] = (unsigned long )0;
    sqlstm.sqadto[32] = (unsigned short )0;
    sqlstm.sqtdso[32] = (unsigned short )0;
    sqlstm.sqhstv[33] = (unsigned char  *)&(data_bd->zdgyl);
    sqlstm.sqhstl[33] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[33] = (         int  )0;
    sqlstm.sqindv[33] = (         short *)0;
    sqlstm.sqinds[33] = (         int  )0;
    sqlstm.sqharm[33] = (unsigned long )0;
    sqlstm.sqadto[33] = (unsigned short )0;
    sqlstm.sqtdso[33] = (unsigned short )0;
    sqlstm.sqhstv[34] = (unsigned char  *)(data_bd->cc);
    sqlstm.sqhstl[34] = (unsigned long )21;
    sqlstm.sqhsts[34] = (         int  )0;
    sqlstm.sqindv[34] = (         short *)0;
    sqlstm.sqinds[34] = (         int  )0;
    sqlstm.sqharm[34] = (unsigned long )0;
    sqlstm.sqadto[34] = (unsigned short )0;
    sqlstm.sqtdso[34] = (unsigned short )0;
    sqlstm.sqhstv[35] = (unsigned char  *)&(data_bd->glb);
    sqlstm.sqhstl[35] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[35] = (         int  )0;
    sqlstm.sqindv[35] = (         short *)0;
    sqlstm.sqinds[35] = (         int  )0;
    sqlstm.sqharm[35] = (unsigned long )0;
    sqlstm.sqadto[35] = (unsigned short )0;
    sqlstm.sqtdso[35] = (unsigned short )0;
    sqlstm.sqhstv[36] = (unsigned char  *)&(data_bd->zsjh);
    sqlstm.sqhstl[36] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[36] = (         int  )0;
    sqlstm.sqindv[36] = (         short *)0;
    sqlstm.sqinds[36] = (         int  )0;
    sqlstm.sqharm[36] = (unsigned long )0;
    sqlstm.sqadto[36] = (unsigned short )0;
    sqlstm.sqtdso[36] = (unsigned short )0;
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





    if (sqlca.sqlcode == 0)

    {

        return 0;

    }

    else

    {

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:北斗CT入库失败,ORACLE返回值：%d\n",data_bd->t_type_id,data_bd->loco_no,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.b,temp);

        cclog('e',temp);

        return 1;

    }

}



static unsigned char insert_to_ITF_BD_HEADER_WH()

{

    char temp[1024];

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    /* EXEC SQL

            INSERT INTO ITF_BD_HEADER (

                IDX       ,/oCHAR(32) not null,               o/

                T_TYPE_ID ,/oCHAR(3),                         o/

                LOCO_NO   ,/oCHAR(4 CHAR),                    o/

                AB        ,/oNUMBER(1),                       o/

                BTSJ      ,/oDATE,                            o/

                RKSJ      ,/oDATE default SYSDATE,            o/

                XXLX      ,/oNUMBER(3),                       o/

                ZH        ,/oNUMBER(5),                       o/

                SJCD      ,/oNUMBER(5),                       o/

                JD        ,/oNUMBER(12,6),                    o/

                WD        ,/oNUMBER(12,6),                    o/

                SD        ,/oNUMBER(8,2),                     o/

                HB        ,/oNUMBER(8,2),                     o/

                VER       ,/oNUMBER(3) default 10 not null,   o/

                GZDM1     ,/oNUMBER(10),                      o/

                GZDM2     ,/oNUMBER(10),                      o/

                GZDM3     /oNUMBER(10),                      o/

                )

            VALUES(

                :data_bd->idx         ,/oCHAR(32 CHAR) not null,   o/

                :data_bd->t_type_id   ,/oCHAR(3 CHAR),           o/

                :data_bd->loco_no     ,/oCHAR(4 CHAR),           o/

                :data_bd->ab          ,/oNUMBER(1),              o/

                to_date(:data_bd->rksj ,'yyyy-mm-dd hh24:mi:ss'),

                to_date(:data_bd->btsj ,'yyyy-mm-dd hh24:mi:ss'),

                :data_bd->xxlx     ,/oNUMBER(3),                       o/

                :data_bd->zh        ,/oNUMBER(5),                       o/

                :data_bd->sjcd      ,/oNUMBER(5),                       o/

                :data_bd->jd        ,/oNUMBER(12,6),                    o/

                :data_bd->wd        ,/oNUMBER(12,6),                    o/

                :data_bd->sd        ,/oNUMBER(8,2),                     o/

                :data_bd->hb        ,/oNUMBER(8,2),                     o/

                :data_bd->ver       ,/oNUMBER(3) default 10 not null,   o/

                :data_bd->gzdm1     ,/oNUMBER(10),                      o/

                :data_bd->gzdm2     ,/oNUMBER(10),                      o/

                :data_bd->gzdm3

                ) ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 160;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into ITF_BD_HEADER (IDX,T_TYPE_ID,LOCO_NO,AB,BTSJ\
,RKSJ,XXLX,ZH,SJCD,JD,WD,SD,HB,VER,GZDM1,GZDM2,GZDM3) values (:b0,:b1,:b2,:b3\
,to_date(:b4,'yyyy-mm-dd hh24:mi:ss'),to_date(:b5,'yyyy-mm-dd hh24:mi:ss'),:b\
6,:b7,:b8,:b9,:b10,:b11,:b12,:b13,:b14,:b15,:b16)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )6910;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)(data_bd->idx);
    sqlstm.sqhstl[0] = (unsigned long )33;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)(data_bd->t_type_id);
    sqlstm.sqhstl[1] = (unsigned long )5;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)(data_bd->loco_no);
    sqlstm.sqhstl[2] = (unsigned long )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (unsigned char  *)&(data_bd->ab);
    sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         short *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned long )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (unsigned char  *)(data_bd->rksj);
    sqlstm.sqhstl[4] = (unsigned long )21;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         short *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned long )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (unsigned char  *)(data_bd->btsj);
    sqlstm.sqhstl[5] = (unsigned long )21;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         short *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned long )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (unsigned char  *)&(data_bd->xxlx);
    sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         short *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned long )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (unsigned char  *)&(data_bd->zh);
    sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         short *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned long )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (unsigned char  *)&(data_bd->sjcd);
    sqlstm.sqhstl[8] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         short *)0;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned long )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (unsigned char  *)&(data_bd->jd);
    sqlstm.sqhstl[9] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         short *)0;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned long )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (unsigned char  *)&(data_bd->wd);
    sqlstm.sqhstl[10] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         short *)0;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned long )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (unsigned char  *)&(data_bd->sd);
    sqlstm.sqhstl[11] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         short *)0;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned long )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (unsigned char  *)&(data_bd->hb);
    sqlstm.sqhstl[12] = (unsigned long )sizeof(double);
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         short *)0;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned long )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (unsigned char  *)&(data_bd->ver);
    sqlstm.sqhstl[13] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         short *)0;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned long )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (unsigned char  *)&(data_bd->gzdm1);
    sqlstm.sqhstl[14] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         short *)0;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned long )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (unsigned char  *)&(data_bd->gzdm2);
    sqlstm.sqhstl[15] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         short *)0;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned long )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (unsigned char  *)&(data_bd->gzdm3);
    sqlstm.sqhstl[16] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         short *)0;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned long )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
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





    if (sqlca.sqlcode == 0)

    {

        return 0;

    }

    else

    {

        memset(temp,0,1024);

        sprintf(temp,"loco.%s-%s:北斗WH入库失败,ORACLE返回值：%d\n",data_bd->t_type_id,data_bd->loco_no,sqlca.sqlcode);

        lprintf(disp.e,temp);

        lprintf(disp.b,temp);

        //cclog('e',temp);

        return 1;

    }

}



unsigned char insert_3G(struct STR_TRAIN_DATA_3G data)
{
    unsigned char flag;
    data_3g = &data;

    if(data_3g->flag_datahead)
    {
        //文件头数据块入库
        flag = insert_to_ITF_3G_HEADER();
        if (flag == 1)/*插入失败*/
        {
            return 1;
        }
    }

    if(data_3g->flag_selfcheck == 1)
    {
        insert_to_ITF_LDP_SELFCHECK();
        if(Insert_num >= COMMITNUM)
        {
            /* EXEC SQL COMMIT; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 12;
            sqlstm.arrsiz = 160;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )6993;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)256;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        }
        else
        {
            Insert_num++;
        }
        return 0;
    }

    if (data_3g->flag_6a == 1)
    {
        //insert_to_ITF_6A();
		update_ITF_6A();
    }

    if (data_3g->flag_tax == 1)
    {
        if (data_3g->tax_ver == 10)
        {		
            //insert_to_ITF_TAXV10();
            update_ITF_TAXV10();
        }
        else
        {		
            //insert_to_ITF_TAXV2X();
            update_ITF_TAXV2X();
        }
    }

    if(data_3g->flag_6a_lw == 1)
    {
        insert_to_ITF_6A_AV4();
    }
    if(data_3g->flag_6a_dn == 1)
    {
        insert_to_ITF_6A_DN();
    }
    if(data_3g->flag_6a_yw == 1)
    {
        insert_to_ITF_6A_YW();
    }

    if (data_3g->flag_tcms == 1)
    {
        //insert_to_ITF_TCMS_V10();
        update_ITF_TCMS_V10();
    }
    else if (data_3g->flag_tcms == 2)
    {
        //insert_ITF_TCMS_HXN3_V10();
        update_ITF_TCMS_HXN3_V10();
    }
    else if (data_3g->flag_tcms == 3)
    {
        //insert_ITF_TCMS_HXD_V20();
        update_ITF_TCMS_HXD_V20();
    }
    else if (data_3g->flag_tcms == 4)
    {
        //insert_ITF_TCMS_HXN_V20();
        update_ITF_TCMS_HXN_V20();
    }
    else
    {
        ;
    }



    if(Insert_num >= COMMITNUM)

    {

        /* EXEC SQL COMMIT; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 160;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )7008;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    }

    else

    {

        Insert_num++;

    }

    return 0;

}



unsigned char insert_FAULT(struct STR_TRAIN_DATA_FAULT data)

{

    int i;

    data_fault = &data;



    for (i=0;i<data_fault->faultnum;i++)

    {

        if (data_fault->VALIDECHECK == 1)

        {

            /* add by linw 20160325 */

            insert_to_ITF_FAULT_INVALID_NOPERSON(i);                //未查找到司机号对应司机名

        } else

        {

            if (data_fault->str_fault[i].VALIDECHECK == 1)

            {

                insert_to_ITF_FAULT_INVALID(i);            //未查找到故障名称和故障描述

            } else

            {

                /* add by guoyj 20160325 */

                if((11 == data_fault->VER) ||

                        (21 == data_fault->VER) ||

                        (12 == data_fault->VER) ||

                        (22 == data_fault->VER))

                {

                    if (data_fault->str_fault[i].GZZT == 0)

                    {

                        if (data_fault->str_fault[i].GZSB == 1)

                        {

                            if (data_fault->str_fault[i].GZDJ == 4)

                            {

                                insert_to_ITF_TCMSFAULT_D_START(i);/*TCMS故障D级故障-开始*/



                            } else

                            {

                                insert_to_ITF_TCMSFAULT_START(i);/*TCMS故障A、B、C级故障-开始*/

                            }

                        } else if(data_fault->str_fault[i].GZSB == 2)

                        {

                            insert_to_ITF_6AFAULT_START(i);/*6a故障A、B、C级故障-开始*/

                        } else if(data_fault->str_fault[i].GZSB == 3)

                        {

                            insert_to_ITF_LDPFAULT_START(i);

                        }

                        insert_to_ITF_FAULT_UNTREATED(i);

                    }

                    else

                    {

                        if (data_fault->str_fault[i].GZSB == 1)

                        {

                            insert_to_ITF_TCMSFAULT_STOP(i);/*TCMS故障-结束*/

                        } else if(data_fault->str_fault[i].GZSB == 2)

                        {

                            insert_to_ITF_6AFAULT_STOP(i);/*6A故障-结束*/

                        } else if(data_fault->str_fault[i].GZSB == 3)

                        {

                            insert_to_ITF_LDPFAULT_STOP(i);

                        }

                    }

                } else

                {

                    if (data_fault->str_fault[i].GZZT == 1)

                    {

                        if (data_fault->str_fault[i].GZSB == 1)

                        {

                            if (data_fault->str_fault[i].GZDJ == 4)

                            {

                                insert_to_ITF_TCMSFAULT_D_START(i);//TCMS故障D级故障-开始

                            } else

                            {

                                insert_to_ITF_TCMSFAULT_START(i);  //TCMS故障A、B、C级故障-开始

                            }

                        } else if(data_fault->str_fault[i].GZSB == 2)

                        {

                            insert_to_ITF_6AFAULT_START(i);    //TCMS故障A、B、C级故障-开始

                        } else if(data_fault->str_fault[i].GZSB == 3)

                        {

                            insert_to_ITF_LDPFAULT_START(i);

                        }



                        insert_to_ITF_FAULT_UNTREATED(i);

                    } else

                    {

                        if (data_fault->str_fault[i].GZSB == 1)

                        {

                            insert_to_ITF_TCMSFAULT_STOP(i);   //TCMS故障-结束

                        } else if(data_fault->str_fault[i].GZSB == 2)

                        {

                            insert_to_ITF_6AFAULT_STOP(i);     //6A故障-结束

                        } else if(data_fault->str_fault[i].GZSB == 3)

                        {

                            insert_to_ITF_LDPFAULT_STOP(i);

                        }

                    }

                }

            }

        }

    }



    if(Insert_num >= COMMITNUM)

    {

        /* EXEC SQL COMMIT; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 160;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )7023;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    }

    else

    {

        Insert_num++;

    }

    return 0;

}



unsigned char insert_BD(struct STR_TRAIN_DATA_BD data)

{

    unsigned char flag;

    data_bd = &data;

    if (data_bd->xxlx == 0x01)

    {

        insert_to_ITF_BD_HEADER_CT();/*常态报文插入*/

    }

    else if (data_bd->xxlx == 0x05)

    {

        insert_to_ITF_BD_HEADER_WH();/*掉电回送报文插入*/

    }



    if(Insert_num >= COMMITNUM)

    {

        /* EXEC SQL COMMIT; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 160;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )7038;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    }

    else

    {

        Insert_num++;

    }



    return 0;

}



unsigned char insert_EVENT(struct STR_TRAIN_DATA_EVENT data)

{

    int i;

    data_event = &data;



    for (i=0;i<data_event->eventnum;i++)

    {

        /*add by guo 20160611 start */

        if(409 == data_event->str_event[i].ETYPE)

        {/*1：出库*/

            data_event->CRK = 1;

            update_Train_CRK(1);

            insert_to_ITF_EVENT_LKJ_EVENT_CRD_N(i,1);

        }else if(410 == data_event->str_event[i].ETYPE)

        {/*2：入库*/

            data_event->CRK = 2;

            update_Train_CRK(2);

            insert_to_ITF_EVENT_LKJ_EVENT_CRD_N(i,2);

        }

        /*add by guo 20160611 end */





        /*add by guo 20160523 start */

        //printf("data_event->str_event[i].ETYPE) = %d\n",data_event->str_event[i].ETYPE);

        if((409 == data_event->str_event[i].ETYPE) ||(410 == data_event->str_event[i].ETYPE) )

        {

            ;//insert_to_ITF_EVENT_LKJ_EVENT_CRD(i);

        }

        else if (data_event->VALIDECHECK == 1) /*add by guo 20160523 end */

        {

            insert_to_ITF_EVENT_INVALID(i);                /*未找到司机名事件*/

        }

        else

        {

            if (data_event->str_event->VALIDECHECK == 1)

            {

                insert_to_ITF_EVENT_INVALID(i);            /*未找到事件名、事件描述*/

            }

            else

            {

                if (data_event->str_event->SJDJ == 4)

                {

                    /* add by linw 20160329 */

                    if((409 == data_event->str_event[i].ETYPE) ||

                            (410 == data_event->str_event[i].ETYPE) )

                    {

                        //insert_to_ITF_EVENT_LKJ_EVENT_CRD(i);/*edit by guo 20160523*/

                    } else

                    {

                        insert_to_ITF_EVENT_LKJ_EVENT(i);  /*cmd系统所需数据*/

                    }

                }

                else

                {

                    if((0xE0 == data_event->str_event[i].ETYPE) ||

                            (0xE1 == data_event->str_event[i].ETYPE) )

                    {

                        insert_to_ITF_EVENT_LKJALARM_SJ(i);/*120处理所需数据*/

                        insert_to_ITF_EVENT_LKJALARM_UNTREATED_SJ(i);/*120处理所需数据-未处理表*/

                    }

                    else

                    {

                        insert_to_ITF_EVENT_LKJALARM(i);   /*120处理所需数据*/

                        insert_to_ITF_EVENT_LKJALARM_UNTREATED(i);/*120处理所需数据-未处理表*/

                    }



                }

            }

        }

    }

    if(Insert_num >= COMMITNUM)

    {

        /* EXEC SQL COMMIT; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 160;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )7053;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    }

    else

    {

        Insert_num++;

    }

    return 0;

}

