 /***************************************************************************
  
              (C) Copyright 1995-2011 The Board of Trustees of the
                          University of Illinois
                           All Rights Reserved
  
  ***************************************************************************/
 
 /***************************************************************************
  * RCS INFORMATION:
  *
  *      $RCSfile: hash.h,v $
  *      $Author: johns $        $Locker:  $             $State: Exp $
  *      $Revision: 1.15 $      $Date: 2013/09/09 01:42:35 $
  *
  ***************************************************************************
  * DESCRIPTION:
  *   A simple hash table implementation for strings, contributed by John Stone,
  *   derived from his ray tracer code.
  ***************************************************************************/
 #ifndef HASH_H
 #define HASH_H

#include <malloc.h>

#define HASH_LIMIT 0.5
#define FAULTNUM  10
#define EVENTNUM   5

typedef struct faultCodeNode{
	unsigned int faultcode;
	unsigned char gzzt;
	unsigned int   tm;
	struct faultCodeNode *next;
} *pFaultNode;

typedef struct eventCodeNode{
    //unsigned char eventcode;
    unsigned int eventcode;/*edit by guo 20160718*/
	unsigned int   tm;
	struct eventCodeNode *next;
} *pEventNode;

typedef struct _faultCodeHead{
	unsigned int	faultnum;
	pFaultNode		pFirst;
	pFaultNode		pTail;	
}faultCodeHead;
typedef struct _eventCodeHead{
	unsigned int   eventnum;
	pEventNode		pFirst;
	pEventNode		pTail;
}eventCodeHead;

typedef struct engineStruct{
	 faultCodeHead faultHead;
	 eventCodeHead eventHead;
	 unsigned int   bddate;
}engineStruct;

typedef struct hash_node_t {
	engineStruct data;                           /* data in hash node */
    unsigned int  key;                   /* key for hash lookup */
	struct hash_node_t *next;           /* next node in hash chain */
} hash_node_t;
 


 typedef struct hash_t {
   struct hash_node_t **bucket;      /* array of hash nodes */
   int size;                         /* size of the array */
   int entries;                      /* number of entries in table */
   int downshift;                    /* shift count, used in hash function */
   int mask;                         /* used to select bits for hashing */
 } hash_t;
 
 #define HASH_FAIL   -1
 #define HASH_SAVED  -2
 #define HASH_SUCCESS 0

 
 #if defined(VMDPLUGIN_STATIC)
 #define VMDEXTERNSTATIC static
 #include "hash.c"
 #else
 
 #define VMDEXTERNSTATIC 
 
 #ifdef __cplusplus
 extern "C" {
 #endif
 
 extern void hash_init(hash_t *, int);
 
 extern engineStruct* hash_lookup (const hash_t *, const unsigned int);
 
 extern int hash_insert (hash_t *, const unsigned int, engineStruct);
 
 extern int hash_delete (hash_t *, const unsigned int);
 
 extern int hash_entries(hash_t *);
 
 extern void hash_destroy(hash_t *);
 
 extern char *hash_stats (hash_t *);
 
 #ifdef __cplusplus
 }
 #endif
 
 #endif
 
 #endif
