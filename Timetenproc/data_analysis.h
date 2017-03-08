#ifndef DATA_ANILYSIS_H

#define DATA_ANILYSIS_H

#include "declare.h"

#include "struct.h"

#include "mqcmn.h"

#include "common.h"

#define  SUCCESS     0

#define  ERR         1

#define  NUM_3G		20000

#define  NUM_BD		10000

#define  NUM_FAULT 1000

#define  NUM_EVENT 500

extern struct STR_TRAIN_DATA_3G gloab_3g[NUM_3G];

extern struct STR_TRAIN_DATA_BD gloab_bd[NUM_BD];

extern struct STR_TRAIN_DATA_FAULT gloab_fault[NUM_FAULT];

extern struct STR_TRAIN_DATA_EVENT gloab_event[NUM_EVENT];

extern uchar gloab_3g_flag[NUM_3G];

extern uchar gloab_bd_flag[NUM_BD];

extern uchar gloab_fault_flag[NUM_FAULT];

extern uchar gloab_event_flag[NUM_EVENT];

extern uint16 gloab_3g_usednum;

extern uint16 gloab_bd_usednum;

extern uint16 gloab_fault_usednum;

extern uint16 gloab_event_usednum;

//extern void data_anilysis(char *sub_routine, char *configfile);

extern uchar parse_start(uchar *data,int length);	

#endif

