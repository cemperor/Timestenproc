/*  @(#) include/cmqbc.h, lqm, p000, p000-L020614 1.24 02/06/10 17:32:03 */
 #if !defined(MQBC_INCLUDED)           /* File not yet included?      */
   #define MQBC_INCLUDED               /* Show file now included      */
/**********************************************************************/
/*                                                                    */
/*                  IBM WebSphere MQ for Windows NT and Windows 2000  */
/*                                                                    */
/*  MODULE NAME:    CMQBC                                             */
/*                                                                    */
/*  DESCRIPTION:    Declarations for MQ Administration Interface      */
/*                                                                    */
/**********************************************************************/
/*  <START_COPYRIGHT>                                                 */
/*  Licensed Materials - Property of IBM                              */
/*                                                                    */
/*  5724-B41                                                          */
/*  (C) Copyright IBM Corp. 1994, 2002 All Rights Reserved.           */
/*                                                                    */
/*  US Government Users Restricted Rights - Use, duplication or       */
/*  disclosure restricted by GSA ADP Schedule Contract with           */
/*  IBM Corp.                                                         */
/*  <END_COPYRIGHT>                                                   */
/**********************************************************************/
/*                                                                    */
/*  FUNCTION:       This file declares the functions and named        */
/*                  constants for the MQ administration interface     */
/*                  (MQAI).                                           */
/*                                                                    */
/*  PROCESSOR:      C                                                 */
/*                                                                    */
/**********************************************************************/

 #if defined(__cplusplus)
   extern "C" {
 #endif

 /*********************************************************************/
 /*  Values Related to Specific Functions                             */
 /*********************************************************************/

 /* Create-Bag Options for mqCreateBag */
 #define MQCBO_NONE                   0x00000000
 #define MQCBO_USER_BAG               0x00000000
 #define MQCBO_ADMIN_BAG              0x00000001
 #define MQCBO_COMMAND_BAG            0x00000010
 #define MQCBO_SYSTEM_BAG             0x00000020
 #define MQCBO_LIST_FORM_ALLOWED      0x00000002
 #define MQCBO_LIST_FORM_INHIBITED    0x00000000
 #define MQCBO_REORDER_AS_REQUIRED    0x00000004
 #define MQCBO_DO_NOT_REORDER         0x00000000
 #define MQCBO_CHECK_SELECTORS        0x00000008
 #define MQCBO_DO_NOT_CHECK_SELECTORS 0x00000000

 /* Buffer Length for mqAddString and mqSetString */
 #define MQBL_NULL_TERMINATED (-1)

 /* Item Type for mqInquireItemInfo */
 #define MQIT_INTEGER 1
 #define MQIT_STRING  2
 #define MQIT_BAG     3


 /*********************************************************************/
 /*  Values Related to Most Functions                                 */
 /*********************************************************************/

 /* Integer Selectors for Object Attributes */
 /*   See MQIA_*   values in CMQC   */
 /*   See MQIACF_* values in CMQCFC */
 /*   See MQIACH_* values in CMQCFC */

 /* Character Selectors for Object Attributes */
 /*   See MQCA_*   values in CMQC   */
 /*   See MQCACF_* values in CMQCFC */
 /*   See MQCACH_* values in CMQCFC */

 /* Handle Selectors */
 #define MQHA_FIRST      4001
 #define MQHA_BAG_HANDLE 4001
 #define MQHA_LAST_USED  4001
 #define MQHA_LAST       6000

 /* Limits for Selectors for Object Attributes */
 #define MQOA_FIRST 1
 #define MQOA_LAST  6000

 /* Integer System Selectors */
 #define MQIASY_FIRST             (-1)
 #define MQIASY_CODED_CHAR_SET_ID (-1)
 #define MQIASY_TYPE              (-2)
 #define MQIASY_COMMAND           (-3)
 #define MQIASY_MSG_SEQ_NUMBER    (-4)
 #define MQIASY_CONTROL           (-5)
 #define MQIASY_COMP_CODE         (-6)
 #define MQIASY_REASON            (-7)
 #define MQIASY_BAG_OPTIONS       (-8)
 #define MQIASY_LAST_USED         (-8)
 #define MQIASY_LAST              (-2000)

 /* Special Selector Values */
 #define MQSEL_ANY_SELECTOR         (-30001)
 #define MQSEL_ANY_USER_SELECTOR    (-30002)
 #define MQSEL_ANY_SYSTEM_SELECTOR  (-30003)
 #define MQSEL_ALL_SELECTORS        (-30001)
 #define MQSEL_ALL_USER_SELECTORS   (-30002)
 #define MQSEL_ALL_SYSTEM_SELECTORS (-30003)

 /* Special Index Values */
 #define MQIND_NONE (-1)
 #define MQIND_ALL  (-2)

 /* Bag Handles */
 #define MQHB_UNUSABLE_HBAG (-1)
 #define MQHB_NONE          (-2)


 /*********************************************************************/
 /*  Simple Data Types                                                */
 /*********************************************************************/

 typedef MQLONG MQHBAG;
 typedef MQHBAG MQPOINTER PMQHBAG;


 /*********************************************************************/
 /*  Short Names for Functions                                        */
 /*********************************************************************/

 #define MQADDIQ  mqAddInquiry
 #define MQADDIN  mqAddInteger
 #define MQADDST  mqAddString
 #define MQBG2BF  mqBagToBuffer
 #define MQBF2BG  mqBufferToBag
 #define MQCLRBG  mqClearBag
 #define MQCNTIT  mqCountItems
 #define MQCRTBG  mqCreateBag
 #define MQDELBG  mqDeleteBag
 #define MQDELIT  mqDeleteItem
 #define MQEXEC   mqExecute
 #define MQGETBG  mqGetBag
 #define MQINQBG  mqInquireBag
 #define MQINQIN  mqInquireInteger
 #define MQINQIT  mqInquireItemInfo
 #define MQINQST  mqInquireString
 #define MQPAD    mqPad
 #define MQPUTBG  mqPutBag
 #define MQSETIN  mqSetInteger
 #define MQSETST  mqSetString
 #define MQTRIM   mqTrim
 #define MQTRNBG  mqTruncateBag

 /*********************************************************************/
 /*  mqAddInquiry Function -- Add an Inquiry Item to Bag              */
 /*********************************************************************/

 void MQENTRY mqAddInquiry (
   MQHBAG   Bag,        /* Bag handle */
   MQLONG   Selector,   /* Attribute selector */
   PMQLONG  pCompCode,  /* Completion code */
   PMQLONG  pReason);   /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqAddInteger Function -- Add Integer to Bag                      */
 /*********************************************************************/

 void MQENTRY mqAddInteger (
   MQHBAG   Bag,        /* Bag handle */
   MQLONG   Selector,   /* Item selector */
   MQLONG   ItemValue,  /* Item value */
   PMQLONG  pCompCode,  /* Completion code */
   PMQLONG  pReason);   /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqAddString Function -- Add String to Bag                        */
 /*********************************************************************/

 void MQENTRY mqAddString (
   MQHBAG   Bag,           /* Bag handle */
   MQLONG   Selector,      /* Item selector */
   MQLONG   BufferLength,  /* Length of buffer */
   PMQCHAR  pBuffer,       /* Buffer containing item value */
   PMQLONG  pCompCode,     /* Completion code */
   PMQLONG  pReason);      /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqBagToBuffer Function -- Convert Bag to PCF                     */
 /*********************************************************************/

 void MQENTRY mqBagToBuffer (
   MQHBAG   OptionsBag,    /* Handle of options bag */
   MQHBAG   DataBag,       /* Handle of data bag */
   MQLONG   BufferLength,  /* Length of buffer */
   PMQVOID  pBuffer,       /* Buffer to contain PCF */
   PMQLONG  pDataLength,   /* Length of PCF returned in buffer */
   PMQLONG  pCompCode,     /* Completion code */
   PMQLONG  pReason);      /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqBufferToBag Function -- Convert PCF to Bag                     */
 /*********************************************************************/

 void MQENTRY mqBufferToBag (
   MQHBAG   OptionsBag,    /* Handle of options bag */
   MQLONG   BufferLength,  /* Length of buffer */
   PMQVOID  pBuffer,       /* Buffer containing PCF */
   MQHBAG   DataBag,       /* Handle of bag to contain data */
   PMQLONG  pCompCode,     /* Completion code */
   PMQLONG  pReason);      /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqClearBag Function -- Delete All Items in Bag                   */
 /*********************************************************************/

 void MQENTRY mqClearBag (
   MQHBAG   Bag,        /* Bag handle */
   PMQLONG  pCompCode,  /* Completion code */
   PMQLONG  pReason);   /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqCountItems Function -- Count Items in Bag                      */
 /*********************************************************************/

 void MQENTRY mqCountItems (
   MQHBAG   Bag,         /* Bag handle */
   MQLONG   Selector,    /* Item selector */
   PMQLONG  pItemCount,  /* Number of items */
   PMQLONG  pCompCode,   /* Completion code */
   PMQLONG  pReason);    /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqCreateBag Function -- Create Bag                               */
 /*********************************************************************/

 void MQENTRY mqCreateBag (
   MQLONG   Options,    /* Bag options */
   PMQHBAG  pBag,       /* Handle of bag created */
   PMQLONG  pCompCode,  /* Completion code */
   PMQLONG  pReason);   /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqDeleteBag Function -- Delete Bag                               */
 /*********************************************************************/

 void MQENTRY mqDeleteBag (
   PMQHBAG  pBag,       /* Bag handle */
   PMQLONG  pCompCode,  /* Completion code */
   PMQLONG  pReason);   /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqDeleteItem Function -- Delete Item in Bag                      */
 /*********************************************************************/

 void MQENTRY mqDeleteItem (
   MQHBAG   Bag,        /* Bag handle */
   MQLONG   Selector,   /* Item selector */
   MQLONG   ItemIndex,  /* Item index */
   PMQLONG  pCompCode,  /* Completion code */
   PMQLONG  pReason);   /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqExecute Function -- Send Admin Command and Receive Reponse     */
 /*********************************************************************/

 void MQENTRY mqExecute (
   MQHCONN  Hconn,        /* Connection handle */
   MQLONG   Command,      /* Command identifier */
   MQHBAG   OptionsBag,   /* Handle of options bag */
   MQHBAG   AdminBag,     /* Handle of admin bag */
   MQHBAG   ResponseBag,  /* Handle of response bag */
   MQHOBJ   AdminQ,       /* Handle of admin queue */
   MQHOBJ   ResponseQ,    /* Handle of response queue */
   PMQLONG  pCompCode,    /* Completion code */
   PMQLONG  pReason);     /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqGetBag Function -- Receive PCF Message into Bag                */
 /*********************************************************************/

 void MQENTRY mqGetBag (
   MQHCONN  Hconn,        /* Connection handle */
   MQHOBJ   Hobj,         /* Queue handle */
   PMQVOID  pMsgDesc,     /* Message descriptor */
   PMQVOID  pGetMsgOpts,  /* Get-message options */
   MQHBAG   Bag,          /* Handle of bag to contain message */
   PMQLONG  pCompCode,    /* Completion code */
   PMQLONG  pReason);     /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqInquireBag Function -- Inquire Handle in Bag                   */
 /*********************************************************************/

 void MQENTRY mqInquireBag (
   MQHBAG   Bag,         /* Bag handle */
   MQLONG   Selector,    /* Item selector */
   MQLONG   ItemIndex,   /* Item index */
   PMQHBAG  pItemValue,  /* Item value */
   PMQLONG  pCompCode,   /* Completion code */
   PMQLONG  pReason);    /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqInquireInteger Function -- Inquire Integer in Bag              */
 /*********************************************************************/

 void MQENTRY mqInquireInteger (
   MQHBAG   Bag,         /* Bag handle */
   MQLONG   Selector,    /* Item selector */
   MQLONG   ItemIndex,   /* Item index */
   PMQLONG  pItemValue,  /* Item value */
   PMQLONG  pCompCode,   /* Completion code */
   PMQLONG  pReason);    /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqInquireItemInfo Function -- Inquire Attributes of Item in Bag  */
 /*********************************************************************/

 void MQENTRY mqInquireItemInfo (
   MQHBAG   Bag,           /* Bag handle */
   MQLONG   Selector,      /* Item selector */
   MQLONG   ItemIndex,     /* Item index */
   PMQLONG  pOutSelector,  /* Selector of item */
   PMQLONG  pItemType,     /* Data type of item */
   PMQLONG  pCompCode,     /* Completion code */
   PMQLONG  pReason);      /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqInquireString Function -- Inquire String in Bag                */
 /*********************************************************************/

 void MQENTRY mqInquireString (
   MQHBAG   Bag,              /* Bag handle */
   MQLONG   Selector,         /* Item selector */
   MQLONG   ItemIndex,        /* Item index */
   MQLONG   BufferLength,     /* Length of buffer */
   PMQCHAR  pBuffer,          /* Buffer to contain string */
   PMQLONG  pStringLength,    /* Length of string returned */
   PMQLONG  pCodedCharSetId,  /* Character-set identifier of string */
   PMQLONG  pCompCode,        /* Completion code */
   PMQLONG  pReason);         /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqPad Function -- Pad Null-terminated String with Blanks         */
 /*********************************************************************/

 void MQENTRY mqPad (
   PMQCHAR  pString,       /* Null-terminated string to be padded */
   MQLONG   BufferLength,  /* Length of buffer */
   PMQCHAR  pBuffer,       /* Buffer to contain padded string */
   PMQLONG  pCompCode,     /* Completion code */
   PMQLONG  pReason);      /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqPutBag Function -- Send Bag as PCF Message                     */
 /*********************************************************************/

 void MQENTRY mqPutBag (
   MQHCONN  Hconn,        /* Connection handle */
   MQHOBJ   Hobj,         /* Queue handle */
   PMQVOID  pMsgDesc,     /* Message descriptor */
   PMQVOID  pPutMsgOpts,  /* Put-message options */
   MQHBAG   Bag,          /* Handle of bag containing message data */
   PMQLONG  pCompCode,    /* Completion code */
   PMQLONG  pReason);     /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqSetInteger Function -- Modify Integer in Bag                   */
 /*********************************************************************/

 void MQENTRY mqSetInteger (
   MQHBAG   Bag,        /* Bag handle */
   MQLONG   Selector,   /* Item selector */
   MQLONG   ItemIndex,  /* Item index */
   MQLONG   ItemValue,  /* Item value */
   PMQLONG  pCompCode,  /* Completion code */
   PMQLONG  pReason);   /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqSetString Function -- Modify String in Bag                     */
 /*********************************************************************/

 void MQENTRY mqSetString (
   MQHBAG   Bag,           /* Bag handle */
   MQLONG   Selector,      /* Item selector */
   MQLONG   ItemIndex,     /* Item index */
   MQLONG   BufferLength,  /* Length of buffer */
   PMQCHAR  pBuffer,       /* Buffer containing item value */
   PMQLONG  pCompCode,     /* Completion code */
   PMQLONG  pReason);      /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqTrim Function -- Replace Trailing Blanks with Null Character   */
 /*********************************************************************/

 void MQENTRY mqTrim (
   MQLONG   BufferLength,  /* Length of buffer */
   PMQCHAR  pBuffer,       /* Buffer containing blank-padded string */
   PMQCHAR  pString,       /* String with blanks discarded */
   PMQLONG  pCompCode,     /* Completion code */
   PMQLONG  pReason);      /* Reason code qualifying CompCode */

 /*********************************************************************/
 /*  mqTruncateBag Function -- Delete Trailing Items in Bag           */
 /*********************************************************************/

 void MQENTRY mqTruncateBag (
   MQHBAG   Bag,        /* Bag handle */
   MQLONG   ItemCount,  /* Number of items to remain in bag */
   PMQLONG  pCompCode,  /* Completion code */
   PMQLONG  pReason);   /* Reason code qualifying CompCode */


 #if defined(__cplusplus)
   }
 #endif

 #endif  /* End of header file */
