#ifndef DATA_INSERT_H

#define DATA_INSERT_H



#include "declare.h"

#include "dberr.h"

#include "struct.h"







extern uchar insert_3G(struct STR_TRAIN_DATA_3G data );



extern uchar insert_FAULT(struct STR_TRAIN_DATA_FAULT data );



extern uchar insert_BD(struct STR_TRAIN_DATA_BD data );



extern uchar insert_EVENT(struct STR_TRAIN_DATA_EVENT data);



/* add by linw 20160331 */

extern uchar insert_ap_train_laststatuslog(pboundary_info pboundaryinfo);









#endif

