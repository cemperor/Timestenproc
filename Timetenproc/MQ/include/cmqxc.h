 #if !defined(MQXC_INCLUDED)           /* File not yet included?      */
   #define MQXC_INCLUDED               /* Show file now included      */
 /*********************************************************************/
 /*                                                                   */
 /*                  WebSphere MQ for Windows                         */
 /*                                                                   */
 /*  FILE NAME:      CMQXC                                            */
 /*                                                                   */
 /*  DESCRIPTION:    Declarations for Exits and MQCD                  */
 /*                                                                   */
 /*********************************************************************/
 /*  @START_COPYRIGHT@                                                */
 /*  Licensed Materials - Property of IBM                             */
 /*                                                                   */
 /*  5724-B41                                                         */
 /*                                                                   */
 /*  (C) Copyright IBM Corporation 1993, 2002.                        */
 /*                                                                   */
 /*  Status: Version 5 Release 3                                      */
 /*  @END_COPYRIGHT@                                                  */
 /*********************************************************************/
 /*                                                                   */
 /*  FUNCTION:       This file declares the functions, structures,    */
 /*                  and named constants for exits and MQCD.          */
 /*                                                                   */
 /*  PROCESSOR:      C                                                */
 /*                                                                   */
 /*********************************************************************/

 #if defined(__cplusplus)
   extern "C" {
 #endif


 /*********************************************************************/
 /*  Values Related to MQACH Structure                                */
 /*********************************************************************/

 /* Structure Identifier */
 #define MQACH_STRUC_ID             "ACH "

 /* Structure Identifier (array form) */
 #define MQACH_STRUC_ID_ARRAY       'A','C','H',' '

 /* Structure Version Number */
 #define MQACH_VERSION_1       1
 #define MQACH_CURRENT_VERSION 1

 /* Structure Length */
#if defined(MQ_64_BIT)
 #define MQACH_LENGTH_1                  72
 #define MQACH_CURRENT_LENGTH            72
#else
 #define MQACH_LENGTH_1                  68
 #define MQACH_CURRENT_LENGTH            68
#endif


 /*********************************************************************/
 /*  Values Related to MQAXC Structure                                */
 /*********************************************************************/

 /* Structure Identifier */
 #define MQAXC_STRUC_ID "AXC "

 /* Structure Identifier (array form) */
 #define MQAXC_STRUC_ID_ARRAY 'A','X','C',' '

 /* Structure Version Number */
 #define MQAXC_VERSION_1       1
 #define MQAXC_CURRENT_VERSION 1

 /* Environment */
 #define MQXE_OTHER                      0
 #define MQXE_MCA                        1
 #define MQXE_MCA_SVRCONN                2
 #define MQXE_COMMAND_SERVER             3
 #define MQXE_MQSC                       4


 /*********************************************************************/
 /*  Values Related to MQAXP Structure                                */
 /*********************************************************************/

 /* Structure Identifier */
 #define MQAXP_STRUC_ID             "AXP "

 /* Structure Identifier (array form) */
 #define MQAXP_STRUC_ID_ARRAY       'A','X','P',' '

 /* Structure Version Number */
 #define MQAXP_VERSION_1       1
 #define MQAXP_CURRENT_VERSION 1

 /* API Caller Type */
 #define MQXACT_EXTERNAL 1
 #define MQXACT_INTERNAL 2
                                                                        
 /* Problem Determination Area */
 #define MQXPDA_NONE "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"\
                     "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"\
                     "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
                                                                        
 /* Problem Determination Area (array form) */
 #define MQXPDA_NONE_ARRAY '\0','\0','\0','\0','\0','\0','\0','\0',\
                           '\0','\0','\0','\0','\0','\0','\0','\0',\
                           '\0','\0','\0','\0','\0','\0','\0','\0',\
                           '\0','\0','\0','\0','\0','\0','\0','\0',\
                           '\0','\0','\0','\0','\0','\0','\0','\0',\
                           '\0','\0','\0','\0','\0','\0','\0','\0'
                                                                        
 /* API Function Identifier */
 #define MQXF_INIT             1
 #define MQXF_TERM             2
 #define MQXF_CONN             3
 #define MQXF_CONNX            4
 #define MQXF_DISC             5
 #define MQXF_OPEN             6
 #define MQXF_CLOSE            7
 #define MQXF_PUT1             8
 #define MQXF_PUT              9
 #define MQXF_GET              10
 #define MQXF_DATA_CONV_ON_GET 11
 #define MQXF_INQ              12
 #define MQXF_SET              13
 #define MQXF_BEGIN            14
 #define MQXF_CMIT             15
 #define MQXF_BACK             16
                                                                        
                                                                        
 /*********************************************************************/
 /*  Values Related to MQCD Structure                                 */
 /*********************************************************************/

 /* Structure Version Number */
 #define MQCD_VERSION_1       1
 #define MQCD_VERSION_2       2
 #define MQCD_VERSION_3       3
 #define MQCD_VERSION_4       4
 #define MQCD_VERSION_5       5
 #define MQCD_VERSION_6       6
 #define MQCD_VERSION_7       7
 #define MQCD_CURRENT_VERSION 7

 /* Channel Type */
 #define MQCHT_SENDER    1
 #define MQCHT_SERVER    2
 #define MQCHT_RECEIVER  3
 #define MQCHT_REQUESTER 4
 #define MQCHT_ALL       5
 #define MQCHT_CLNTCONN  6
 #define MQCHT_SVRCONN   7
 #define MQCHT_CLUSRCVR  8
 #define MQCHT_CLUSSDR   9

 /* Transport Type */
 #define MQXPT_LOCAL   0
 #define MQXPT_LU62    1
 #define MQXPT_TCP     2
 #define MQXPT_NETBIOS 3
 #define MQXPT_SPX     4
 #define MQXPT_DECNET  5
 #define MQXPT_UDP     6

 /* Put Authority */
 #define MQPA_DEFAULT          1
 #define MQPA_CONTEXT          2
 #define MQPA_ONLY_MCA         3
 #define MQPA_ALTERNATE_OR_MCA 4

 /* Channel Data Conversion */
 #define MQCDC_SENDER_CONVERSION    1
 #define MQCDC_NO_SENDER_CONVERSION 0

 /* MCA Type */
 #define MQMCAT_PROCESS 1
 #define MQMCAT_THREAD  2

 /* NonPersistent-Message Speed */
 #define MQNPMS_NORMAL 1
 #define MQNPMS_FAST   2

 /* Structure Length */
#if defined(MQ_64_BIT)
 #define MQCD_LENGTH_4       1568
 #define MQCD_LENGTH_5       1584
 #define MQCD_LENGTH_6       1688
 #define MQCD_LENGTH_7       1792
 #define MQCD_CURRENT_LENGTH 1792
#else
 #define MQCD_LENGTH_4       1540
 #define MQCD_LENGTH_5       1552
 #define MQCD_LENGTH_6       1648
 #define MQCD_LENGTH_7       1748
 #define MQCD_CURRENT_LENGTH 1748
#endif

 /* SSL Client Authentication */
 #define MQSCA_REQUIRED   0
 #define MQSCA_OPTIONAL   1

 /* KeepAlive Interval */
 #define MQKAI_AUTO (-1)


 /*********************************************************************/
 /*  Values Related to MQCXP Structure                                */
 /*********************************************************************/

 /* Structure Identifier */
 #define MQCXP_STRUC_ID "CXP "

 /* Structure Identifier (array form) */
 #define MQCXP_STRUC_ID_ARRAY 'C','X','P',' '

 /* Structure Version Number */
 #define MQCXP_VERSION_1       1
 #define MQCXP_VERSION_2       2
 #define MQCXP_VERSION_3       3
 #define MQCXP_VERSION_4       4
 #define MQCXP_VERSION_5       5
 #define MQCXP_CURRENT_VERSION 5

 /* Exit Response 2 */
 #define MQXR2_PUT_WITH_DEF_ACTION  0
 #define MQXR2_PUT_WITH_DEF_USERID  1
 #define MQXR2_PUT_WITH_MSG_USERID  2
 #define MQXR2_USE_AGENT_BUFFER     0
 #define MQXR2_USE_EXIT_BUFFER      4
 #define MQXR2_DEFAULT_CONTINUATION 0
 #define MQXR2_CONTINUE_CHAIN       8
 #define MQXR2_SUPPRESS_CHAIN       16
 #define MQXR2_STATIC_CACHE         0
 #define MQXR2_DYNAMIC_CACHE        32

 /* Capability Flags */
 #define MQCF_NONE       0x00000000
 #define MQCF_DIST_LISTS 0x00000001


 /*********************************************************************/
 /*  Values Related to MQDXP Structure                                */
 /*********************************************************************/

 /* Structure Identifier */
 #define MQDXP_STRUC_ID "DXP "

 /* Structure Identifier (array form) */
 #define MQDXP_STRUC_ID_ARRAY 'D','X','P',' '

 /* Structure Version Number */
 #define MQDXP_VERSION_1       1
 #define MQDXP_CURRENT_VERSION 1

 /* Exit Response */
 #define MQXDR_OK                0
 #define MQXDR_CONVERSION_FAILED 1


 /*********************************************************************/
 /*  Values Related to MQPXP Structure                                */
 /*********************************************************************/

 /* Structure Identifier */
 #define MQPXP_STRUC_ID "PXP "

 /* Structure Identifier (array form) */
 #define MQPXP_STRUC_ID_ARRAY 'P','X','P',' '

 /* Structure Version Number */
 #define MQPXP_VERSION_1       1
 #define MQPXP_CURRENT_VERSION 1

 /* Destination Type */
 #define MQDT_APPL   1
 #define MQDT_BROKER 2


 /*********************************************************************/
 /*  Values Related to MQWDR Structure                                */
 /*********************************************************************/

 /* Structure Identifier */
 #define MQWDR_STRUC_ID "WDR "

 /* Structure Identifier (array form) */
 #define MQWDR_STRUC_ID_ARRAY 'W','D','R',' '

 /* Structure Version Number */
 #define MQWDR_VERSION_1       1
 #define MQWDR_CURRENT_VERSION 1

 /* Structure Length */
 #define MQWDR_LENGTH_1       124
 #define MQWDR_CURRENT_LENGTH 124

 /* Queue Manager Flags */
 #define MQQMF_REPOSITORY_Q_MGR     0x00000002
 #define MQQMF_CLUSSDR_USER_DEFINED 0x00000008
 #define MQQMF_CLUSSDR_AUTO_DEFINED 0x00000010
 #define MQQMF_AVAILABLE            0x00000020


 /*********************************************************************/
 /*  Values Related to MQWQR Structure                                */
 /*********************************************************************/

 /* Structure Identifier */
 #define MQWQR_STRUC_ID "WQR "

 /* Structure Identifier (array form) */
 #define MQWQR_STRUC_ID_ARRAY 'W','Q','R',' '

 /* Structure Version Number */
 #define MQWQR_VERSION_1       1
 #define MQWQR_CURRENT_VERSION 1

 /* Structure Length */
 #define MQWQR_LENGTH_1       200
 #define MQWQR_CURRENT_LENGTH 200

 /* Queue Flags */
 #define MQQF_LOCAL_Q 0x00000001


 /*********************************************************************/
 /*  Values Related to MQWXP Structure                                */
 /*********************************************************************/

 /* Structure Identifier */
 #define MQWXP_STRUC_ID "WXP "

 /* Structure Identifier (array form) */
 #define MQWXP_STRUC_ID_ARRAY 'W','X','P',' '

 /* Structure Version Number */
 #define MQWXP_VERSION_1       1
 #define MQWXP_VERSION_2       2
 #define MQWXP_CURRENT_VERSION 2

  /* Cluster Cache Type */
 #define MQCLCT_STATIC     0
 #define MQCLCT_DYNAMIC    1


 /*********************************************************************/
 /*  General Values Related to Exits                                  */
 /*********************************************************************/

 /* Exit Identifier */
 #define MQXT_API_EXIT                2
 #define MQXT_CHANNEL_SEC_EXIT       11
 #define MQXT_CHANNEL_MSG_EXIT       12
 #define MQXT_CHANNEL_SEND_EXIT      13
 #define MQXT_CHANNEL_RCV_EXIT       14
 #define MQXT_CHANNEL_MSG_RETRY_EXIT 15
 #define MQXT_CHANNEL_AUTO_DEF_EXIT  16
 #define MQXT_CLUSTER_WORKLOAD_EXIT  20
 #define MQXT_PUBSUB_ROUTING_EXIT    21

 /* Exit Reason */
 #define MQXR_BEFORE           1
 #define MQXR_AFTER            2
 #define MQXR_CONNECTION       3
 #define MQXR_INIT            11
 #define MQXR_TERM            12
 #define MQXR_MSG             13
 #define MQXR_XMIT            14
 #define MQXR_SEC_MSG         15
 #define MQXR_INIT_SEC        16
 #define MQXR_RETRY           17
 #define MQXR_AUTO_CLUSSDR    18
 #define MQXR_AUTO_RECEIVER   19
 #define MQXR_CLWL_OPEN       20
 #define MQXR_CLWL_PUT        21
 #define MQXR_CLWL_MOVE       22
 #define MQXR_CLWL_REPOS      23
 #define MQXR_CLWL_REPOS_MOVE 24
 #define MQXR_AUTO_SVRCONN    27
 #define MQXR_AUTO_CLUSRCVR   28

 /* Exit Response */
 #define MQXCC_OK                       0
 #define MQXCC_SUPPRESS_FUNCTION        (-1)
 #define MQXCC_SKIP_FUNCTION            (-2)
 #define MQXCC_SEND_AND_REQUEST_SEC_MSG (-3)
 #define MQXCC_SEND_SEC_MSG             (-4)
 #define MQXCC_SUPPRESS_EXIT            (-5)
 #define MQXCC_CLOSE_CHANNEL            (-6)
 #define MQXCC_FAILED                   (-8)

 /* Exit User Area Value */
 #define MQXUA_NONE "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"

 /* Exit User Area Value (array form) */
 #define MQXUA_NONE_ARRAY '\0','\0','\0','\0','\0','\0','\0','\0',\
                          '\0','\0','\0','\0','\0','\0','\0','\0'


 /*********************************************************************/
 /*  Values Related to MQXCNVC Function                               */
 /*********************************************************************/

 /* Conversion Options */
 #define MQDCC_DEFAULT_CONVERSION     0x00000001
 #define MQDCC_FILL_TARGET_BUFFER     0x00000002
 #define MQDCC_INT_DEFAULT_CONVERSION 0x00000004
 #define MQDCC_SOURCE_ENC_NATIVE      0x00000020
 #define MQDCC_SOURCE_ENC_NORMAL      0x00000010
 #define MQDCC_SOURCE_ENC_REVERSED    0x00000020
 #define MQDCC_SOURCE_ENC_UNDEFINED   0x00000000
 #define MQDCC_TARGET_ENC_NATIVE      0x00000200
 #define MQDCC_TARGET_ENC_NORMAL      0x00000100
 #define MQDCC_TARGET_ENC_REVERSED    0x00000200
 #define MQDCC_TARGET_ENC_UNDEFINED   0x00000000
 #define MQDCC_NONE                   0x00000000

 /* Conversion Options Masks and Factors */
 #define MQDCC_SOURCE_ENC_MASK   0x000000f0
 #define MQDCC_TARGET_ENC_MASK   0x00000f00
 #define MQDCC_SOURCE_ENC_FACTOR 16
 #define MQDCC_TARGET_ENC_FACTOR 256


 /*********************************************************************/
 /*  MQACH Structure -- API Exit Chain Area Header                    */
 /*********************************************************************/

 typedef struct tagMQACH MQACH;
 typedef MQACH MQPOINTER PMQACH;

 struct tagMQACH {
   MQCHAR4   StrucId;             /* Structure identifier */
   MQLONG    Version;             /* Structure version number */
   MQLONG    StrucLength;         /* Length of MQACH structure */
   MQLONG    ChainAreaLength;     /* Total length of chain area */
   MQCHAR48  ExitInfoName;        /* Exit information name */
   PMQACH    NextChainAreaPtr;    /* Address of next MQACH structure in
                                     chain */
 };

 #define MQACH_DEFAULT {MQACH_STRUC_ID_ARRAY},\
                       MQACH_CURRENT_VERSION,\
                       MQACH_CURRENT_LENGTH,\
                       0,\
                       {""},\
                       NULL


 /*********************************************************************/
 /*  MQAXC Structure -- API Exit Context                              */
 /*********************************************************************/
                                                                        
 typedef struct tagMQAXC MQAXC;
 typedef MQAXC MQPOINTER PMQAXC;
 
 struct tagMQAXC {
   MQCHAR4    StrucId;                 /* Structure identifier */
   MQLONG     Version;                 /* Structure version number */
   MQLONG     Environment;             /* Environment */
   MQCHAR12   UserId;                  /* User identifier */
   MQBYTE40   SecurityId;              /* Security identifier */
   MQCHAR264  ConnectionName;          /* Connection name */
   MQLONG     LongMCAUserIdLength;     /* Length of long MCA user
                                          identifier */
   MQLONG     LongRemoteUserIdLength;  /* Length of long remote user
                                          identifier */
   MQPTR      LongMCAUserIdPtr;        /* Address of long MCA user
                                          identifier */
   MQPTR      LongRemoteUserIdPtr;     /* Address of long remote user
                                          identifier */
   MQCHAR28   ApplName;                /* Application name */
   MQLONG     ApplType;                /* Application type */
   MQPID      ProcessId;               /* Process identifier */
   MQTID      ThreadId;                /* Thread identifier */
 };

 #define MQAXC_DEFAULT {MQAXC_STRUC_ID_ARRAY},\
                       MQAXC_CURRENT_VERSION,\
                       MQXE_OTHER,\
                       {""},\
                       {MQSID_NONE_ARRAY},\
                       {""},\
                       0,\
                       0,\
                       NULL,\
                       NULL,\
                       {""},\
                       MQAT_DEFAULT,\
                       0,\
                       0


 /*********************************************************************/
 /*  MQAXP Structure -- API Exit Parameter                            */
 /*********************************************************************/

 typedef struct tagMQAXP MQAXP;
 typedef MQAXP MQPOINTER PMQAXP;

 struct tagMQAXP {
   MQCHAR4    StrucId;           /* Structure identifier */
   MQLONG     Version;           /* Structure version number */
   MQLONG     ExitId;            /* Type of exit */
   MQLONG     ExitReason;        /* Reason for invoking exit */
   MQLONG     ExitResponse;      /* Response from exit */
   MQLONG     ExitResponse2;     /* Secondary response from exit */
   MQLONG     Feedback;          /* Feedback */
   MQLONG     APICallerType;     /* API caller type */
   MQBYTE16   ExitUserArea;      /* Exit user area */
   MQCHAR32   ExitData;          /* Exit data */
   MQCHAR48   ExitInfoName;      /* Exit information name */
   MQBYTE48   ExitPDArea;        /* Problem determination area */
   MQCHAR48   QMgrName;          /* Name of local queue manager */
   PMQACH     ExitChainAreaPtr;  /* Address of first MQACH structure in
                                    chain */
   MQHCONFIG  Hconfig;           /* Configuration handle */
   MQLONG     Function;          /* API function identifier */
 };

 #define MQAXP_DEFAULT {MQAXP_STRUC_ID_ARRAY},\
                       MQAXP_CURRENT_VERSION,\
                       MQXT_API_EXIT,\
                       0,\
                       MQXCC_OK,\
                       MQXR2_DEFAULT_CONTINUATION,\
                       MQFB_NONE,\
                       MQXACT_EXTERNAL,\
                       {MQXUA_NONE_ARRAY},\
                       {""},\
                       {""},\
                       {MQXPDA_NONE_ARRAY},\
                       {""},\
                       NULL,\
                       NULL,\
                       0


 /*********************************************************************/
 /*  MQCD Structure -- Channel Definition                             */
 /*********************************************************************/

 typedef struct tagMQCD MQCD;
 typedef MQCD MQPOINTER PMQCD;

 struct tagMQCD {
   MQCHAR    ChannelName[20];           /* Channel definition name */
   MQLONG    Version;                   /* Structure version number */
   MQLONG    ChannelType;               /* Channel type */
   MQLONG    TransportType;             /* Transport type */
   MQCHAR    Desc[64];                  /* Channel description */
   MQCHAR    QMgrName[48];              /* Queue-manager name */
   MQCHAR    XmitQName[48];             /* Transmission queue name */
   MQCHAR    ShortConnectionName[20];   /* First 20 bytes of connection
                                           name */
   MQCHAR    MCAName[20];               /* Reserved */
   MQCHAR    ModeName[8];               /* LU 6.2 Mode name */
   MQCHAR    TpName[64];                /* LU 6.2 transaction program
                                           name */
   MQLONG    BatchSize;                 /* Batch size */
   MQLONG    DiscInterval;              /* Disconnect interval */
   MQLONG    ShortRetryCount;           /* Short retry count */
   MQLONG    ShortRetryInterval;        /* Short retry wait interval */
   MQLONG    LongRetryCount;            /* Long retry count */
   MQLONG    LongRetryInterval;         /* Long retry wait interval */
   MQCHAR    SecurityExit[128];         /* Channel security exit name */
   MQCHAR    MsgExit[128];              /* Channel message exit name */
   MQCHAR    SendExit[128];             /* Channel send exit name */
   MQCHAR    ReceiveExit[128];          /* Channel receive exit name */
   MQLONG    SeqNumberWrap;             /* Highest allowable message
                                           sequence number */
   MQLONG    MaxMsgLength;              /* Maximum message length */
   MQLONG    PutAuthority;              /* Put authority */
   MQLONG    DataConversion;            /* Data conversion */
   MQCHAR    SecurityUserData[32];      /* Channel security exit user
                                           data */
   MQCHAR    MsgUserData[32];           /* Channel message exit user
                                           data */
   MQCHAR    SendUserData[32];          /* Channel send exit user
                                           data */
   MQCHAR    ReceiveUserData[32];       /* Channel receive exit user
                                           data */
   MQCHAR    UserIdentifier[12];        /* User identifier */
   MQCHAR    Password[12];              /* Password */
   MQCHAR    MCAUserIdentifier[12];     /* First 12 bytes of MCA user
                                           identifier */
   MQLONG    MCAType;                   /* Message channel agent type */
   MQCHAR    ConnectionName[264];       /* Connection name */
   MQCHAR    RemoteUserIdentifier[12];  /* First 12 bytes of user
                                           identifier from partner */
   MQCHAR    RemotePassword[12];        /* Password from partner */
   MQCHAR    MsgRetryExit[128];         /* Channel message retry exit
                                           name */
   MQCHAR    MsgRetryUserData[32];      /* Channel message retry exit
                                           user data */
   MQLONG    MsgRetryCount;             /* Number of times MCA will try
                                           to put the message, after the
                                           first attempt has failed */
   MQLONG    MsgRetryInterval;          /* Minimum interval in
                                           milliseconds after which the
                                           open or put operation will be
                                           retried */
   MQLONG    HeartbeatInterval;         /* Time in seconds between
                                           heartbeat flows */
   MQLONG    BatchInterval;             /* Batch duration */
   MQLONG    NonPersistentMsgSpeed;     /* Speed at which nonpersistent
                                           messages are sent */
   MQLONG    StrucLength;               /* Length of MQCD structure */
   MQLONG    ExitNameLength;            /* Length of exit name */
   MQLONG    ExitDataLength;            /* Length of exit user data */
   MQLONG    MsgExitsDefined;           /* Number of message exits
                                           defined */
   MQLONG    SendExitsDefined;          /* Number of send exits
                                           defined */
   MQLONG    ReceiveExitsDefined;       /* Number of receive exits
                                           defined */
   MQPTR     MsgExitPtr;                /* Address of first MsgExit
                                           field */
   MQPTR     MsgUserDataPtr;            /* Address of first MsgUserData
                                           field */
   MQPTR     SendExitPtr;               /* Address of first SendExit
                                           field */
   MQPTR     SendUserDataPtr;           /* Address of first SendUserData
                                           field */
   MQPTR     ReceiveExitPtr;            /* Address of first ReceiveExit
                                           field */
   MQPTR     ReceiveUserDataPtr;        /* Address of first
                                           ReceiveUserData field */
   MQPTR     ClusterPtr;                /* Address of a list of cluster
                                           names */
   MQLONG    ClustersDefined;           /* Number of clusters to which
                                           the channel belongs */
   MQLONG    NetworkPriority;           /* Network priority */
   MQLONG    LongMCAUserIdLength;       /* Length of long MCA user
                                           identifier */
   MQLONG    LongRemoteUserIdLength;    /* Length of long remote user
                                           identifier */
   MQPTR     LongMCAUserIdPtr;          /* Address of long MCA user
                                           identifier */
   MQPTR     LongRemoteUserIdPtr;       /* Address of long remote user
                                           identifier */
   MQBYTE40  MCASecurityId;             /* MCA security identifier */
   MQBYTE40  RemoteSecurityId;          /* Remote security identifier */
   MQCHAR    SSLCipherSpec[32];         /* SSL CipherSpec */
   MQPTR     SSLPeerNamePtr;            /* Address of SSL peer name */
   MQLONG    SSLPeerNameLength;         /* Length of SSL peer name */
   MQLONG    SSLClientAuth;   /* Whether SSL client
                                           authentication is required */
   MQLONG    KeepAliveInterval;         /* Keepalive interval */
   MQCHAR    LocalAddress[48];          /* Local communications
                                           address */
   MQLONG    BatchHeartbeat;            /* Batch heartbeat interval */
 };

 #define MQCD_DEFAULT {""},\
                      MQCD_CURRENT_VERSION,\
                      MQCHT_SENDER,\
                      MQXPT_LU62,\
                      {""},\
                      {""},\
                      {""},\
                      {""},\
                      {""},\
                      {""},\
                      {""},\
                      50,\
                      6000,\
                      10,\
                      60,\
                      999999999,\
                      1200,\
                      {""},\
                      {""},\
                      {""},\
                      {""},\
                      999999999,\
                      4194304,\
                      MQPA_DEFAULT,\
                      MQCDC_NO_SENDER_CONVERSION,\
                      {""},\
                      {""},\
                      {""},\
                      {""},\
                      {""},\
                      {""},\
                      {""},\
                      MQMCAT_PROCESS,\
                      {""},\
                      {""},\
                      {""},\
                      {""},\
                      {""},\
                      10,\
                      1000,\
                      300,\
                      0,\
                      MQNPMS_FAST,\
                      MQCD_CURRENT_LENGTH,\
                      MQ_EXIT_NAME_LENGTH,\
                      MQ_EXIT_DATA_LENGTH,\
                      0,\
                      0,\
                      0,\
                      NULL,\
                      NULL,\
                      NULL,\
                      NULL,\
                      NULL,\
                      NULL,\
                      NULL,\
                      0,\
                      0,\
                      0,\
                      0,\
                      NULL,\
                      NULL,\
                      {MQSID_NONE_ARRAY},\
                      {MQSID_NONE_ARRAY},\
                      {""},\
                      NULL,\
                      0,\
                      MQSCA_REQUIRED,\
                      MQKAI_AUTO,\
                      {""},\
                      0

 /* Initial values for MQCD when passed on MQCONNX function */
 #define MQCD_CLIENT_CONN_DEFAULT {""},\
                                  MQCD_CURRENT_VERSION,\
                                  MQCHT_CLNTCONN,\
                                  MQXPT_TCP,\
                                  {""},\
                                  {""},\
                                  {""},\
                                  {""},\
                                  {""},\
                                  {""},\
                                  {""},\
                                  50,\
                                  6000,\
                                  10,\
                                  60,\
                                  999999999,\
                                  1200,\
                                  {""},\
                                  {""},\
                                  {""},\
                                  {""},\
                                  999999999,\
                                  4194304,\
                                  MQPA_DEFAULT,\
                                  MQCDC_NO_SENDER_CONVERSION,\
                                  {""},\
                                  {""},\
                                  {""},\
                                  {""},\
                                  {""},\
                                  {""},\
                                  {""},\
                                  MQMCAT_PROCESS,\
                                  {""},\
                                  {""},\
                                  {""},\
                                  {""},\
                                  {""},\
                                  10,\
                                  1000,\
                                  1,\
                                  0,\
                                  MQNPMS_FAST,\
                                  MQCD_CURRENT_LENGTH,\
                                  MQ_EXIT_NAME_LENGTH,\
                                  MQ_EXIT_DATA_LENGTH,\
                                  0,\
                                  0,\
                                  0,\
                                  NULL,\
                                  NULL,\
                                  NULL,\
                                  NULL,\
                                  NULL,\
                                  NULL,\
                                  NULL,\
                                  0,\
                                  0,\
                                  0,\
                                  0,\
                                  NULL,\
                                  NULL,\
                                  {MQSID_NONE_ARRAY},\
                                  {MQSID_NONE_ARRAY},\
                                  {""},\
                                  NULL,\
                                  0,\
                                  MQSCA_REQUIRED,\
                                  (-1),\
                                  {""},\
                                  0


 /*********************************************************************/
 /*  MQCXP Structure -- Channel Exit Parameter                        */
 /*********************************************************************/

 typedef struct tagMQCXP MQCXP;
 typedef MQCXP MQPOINTER PMQCXP;

 struct tagMQCXP {
   MQCHAR4   StrucId;           /* Structure identifier */
   MQLONG    Version;           /* Structure version number */
   MQLONG    ExitId;            /* Type of exit */
   MQLONG    ExitReason;        /* Reason for invoking exit */
   MQLONG    ExitResponse;      /* Response from exit */
   MQLONG    ExitResponse2;     /* Secondary response from exit */
   MQLONG    Feedback;          /* Feedback code */
   MQLONG    MaxSegmentLength;  /* Maximum segment length */
   MQBYTE16  ExitUserArea;      /* Exit user area */
   MQCHAR32  ExitData;          /* Exit data */
   MQLONG    MsgRetryCount;     /* Number of times the message has been
                                   retried */
   MQLONG    MsgRetryInterval;  /* Minimum interval in milliseconds
                                   after which the put operation should
                                   be retried */
   MQLONG    MsgRetryReason;    /* Reason code from previous attempt to
                                   put the message */
   MQLONG    HeaderLength;      /* Length of header information */
   MQCHAR48  PartnerName;       /* Partner Name */
   MQLONG    FAPLevel;          /* Negotiated Formats and Protocols
                                   level */
   MQLONG    CapabilityFlags;   /* Capability flags */
   MQLONG    ExitNumber;        /* Exit number */
   MQLONG    ExitSpace;         /* Number of bytes in transmission
                                   buffer reserved for exit to use */
 };

 #define MQCXP_DEFAULT {MQCXP_STRUC_ID_ARRAY},\
                       MQCXP_CURRENT_VERSION,\
                       0,\
                       0,\
                       MQXCC_OK,\
                       MQXR2_PUT_WITH_DEF_ACTION,\
                       0,\
                       0,\
                       {MQXUA_NONE_ARRAY},\
                       {""},\
                       0,\
                       0,\
                       0,\
                       0,\
                       {""},\
                       0,\
                       MQCF_NONE,\
                       1,\
                       0


 /*********************************************************************/
 /*  MQDXP Structure -- Data Conversion Exit Parameter                */
 /*********************************************************************/

 typedef struct tagMQDXP MQDXP;
 typedef MQDXP MQPOINTER PMQDXP;

 struct tagMQDXP {
   MQCHAR4  StrucId;         /* Structure identifier */
   MQLONG   Version;         /* Structure version number */
   MQLONG   ExitOptions;     /* Reserved */
   MQLONG   AppOptions;      /* Application options */
   MQLONG   Encoding;        /* Numeric encoding required by
                                application */
   MQLONG   CodedCharSetId;  /* Character set required by application */
   MQLONG   DataLength;      /* Length in bytes of message data */
   MQLONG   CompCode;        /* Completion code */
   MQLONG   Reason;          /* Reason code qualifying CompCode */
   MQLONG   ExitResponse;    /* Response from exit */
   MQHCONN  Hconn;           /* Connection handle */
 };

 #define MQDXP_DEFAULT {MQDXP_STRUC_ID_ARRAY},\
                       MQDXP_CURRENT_VERSION,\
                       0,\
                       0,\
                       0,\
                       0,\
                       0,\
                       MQCC_OK,\
                       MQRC_NONE,\
                       MQXDR_CONVERSION_FAILED,\
                       0


 /*********************************************************************/
 /*  MQPXP Structure -- Publish/Subscribe Routing Exit Parameter      */
 /*********************************************************************/

 typedef struct tagMQPXP MQPXP;
 typedef MQPXP MQPOINTER PMQPXP;

 struct tagMQPXP {
   MQCHAR4   StrucId;              /* Structure identifier */
   MQLONG    Version;              /* Structure version number */
   MQLONG    ExitId;               /* Type of exit */
   MQLONG    ExitReason;           /* Reason for invoking exit */
   MQLONG    ExitResponse;         /* Response from exit */
   MQLONG    ExitResponse2;        /* Reserved */
   MQLONG    Feedback;             /* Feedback code */
   MQLONG    ExitNumber;           /* Exit number */
   MQBYTE16  ExitUserArea;         /* Exit user area */
   MQCHAR32  ExitData;             /* Exit data */
   MQLONG    HeaderLength;         /* Reserved */
   MQLONG    MsgInLength;          /* Length of input message data */
   MQLONG    MsgOutLength;         /* Length of output message data */
   MQLONG    DestinationType;      /* Type of destination for message */
   PMQMD     MsgDescPtr;           /* Address of message descriptor */
   PMQVOID   MsgInPtr;             /* Address of input message data */
   PMQVOID   MsgOutPtr;            /* Address of output message data */
   MQCHAR48  StreamName;           /* Name of stream */
   MQCHAR48  QMgrName;             /* Name of local queue manager */
   MQCHAR48  DestinationQName;     /* Name of destination queue */
   MQCHAR48  DestinationQMgrName;  /* Name of destination queue
                                      manager */
  };

 #define MQPXP_DEFAULT {MQPXP_STRUC_ID_ARRAY},\
                       MQPXP_CURRENT_VERSION,\
                       MQXT_PUBSUB_ROUTING_EXIT,\
                       0,\
                       MQXCC_OK,\
                       0,\
                       MQFB_NONE,\
                       1,\
                       {MQXUA_NONE_ARRAY},\
                       {""},\
                       0,\
                       0,\
                       0,\
                       MQDT_APPL,\
                       NULL,\
                       NULL,\
                       NULL,\
                       {""},\
                       {""},\
                       {""},\
                       {""}


 /*********************************************************************/
 /*  MQWCR Structure -- Cluster Workload Exit Cluster Record          */
 /*********************************************************************/

 typedef struct tagMQWCR MQWCR;
 typedef MQWCR MQPOINTER PMQWCR;

 struct tagMQWCR {
   MQCHAR48  ClusterName;       /* Cluster name */
   MQLONG    ClusterRecOffset;  /* Offset of next cluster record */
   MQLONG    ClusterFlags;      /* Cluster flags */
 };

 #define MQWCR_DEFAULT {""},\
                       0,\
                       0


 /*********************************************************************/
 /*  MQWDR Structure -- Cluster Workload Exit Destination Record      */
 /*********************************************************************/

 typedef struct tagMQWDR MQWDR;
 typedef MQWDR MQPOINTER PMQWDR;
 typedef PMQWDR MQPOINTER PPMQWDR;

 struct tagMQWDR {
   MQCHAR4   StrucId;           /* Structure identifier */
   MQLONG    Version;           /* Structure version number */
   MQLONG    StrucLength;       /* Length of MQWDR structure */
   MQLONG    QMgrFlags;         /* Queue-manager flags */
   MQCHAR48  QMgrIdentifier;    /* Queue-manager identifier */
   MQCHAR48  QMgrName;          /* Queue-manager name */
   MQLONG    ClusterRecOffset;  /* Offset of first cluster record */
   MQLONG    ChannelState;      /* Channel state */
   MQLONG    ChannelDefOffset;  /* Offset of channel definition
                                   structure */
 };

 #define MQWDR_DEFAULT {MQWDR_STRUC_ID_ARRAY},\
                       MQWDR_CURRENT_VERSION,\
                       MQWDR_CURRENT_LENGTH,\
                       0,\
                       {""},\
                       {""},\
                       0,\
                       0,\
                       0


 /*********************************************************************/
 /*  MQWQR Structure -- Cluster Workload Exit Queue Record            */
 /*********************************************************************/

 typedef struct tagMQWQR MQWQR;
 typedef MQWQR MQPOINTER PMQWQR;
 typedef PMQWQR MQPOINTER PPMQWQR;

 struct tagMQWQR {
   MQCHAR4   StrucId;           /* Structure identifier */
   MQLONG    Version;           /* Structure version number */
   MQLONG    StrucLength;       /* Length of MQWQR structure */
   MQLONG    QFlags;            /* Queue flags */
   MQCHAR48  QName;             /* Queue name */
   MQCHAR48  QMgrIdentifier;    /* Queue-manager identifier */
   MQLONG    ClusterRecOffset;  /* Offset of first cluster record */
   MQLONG    QType;             /* Queue type */
   MQCHAR64  QDesc;             /* Queue description */
   MQLONG    DefBind;           /* Default binding */
   MQLONG    DefPersistence;    /* Default message persistence */
   MQLONG    DefPriority;       /* Default message priority */
   MQLONG    InhibitPut;        /* Whether put operations on the queue
                                   are allowed */
 };

 #define MQWQR_DEFAULT {MQWQR_STRUC_ID_ARRAY},\
                       MQWQR_CURRENT_VERSION,\
                       MQWQR_CURRENT_LENGTH,\
                       0,\
                       {""},\
                       {""},\
                       0,\
                       0,\
                       {""},\
                       0,\
                       0,\
                       0,\
                       0


 /*********************************************************************/
 /*  MQWXP Structure -- Cluster Workload Exit Parameter               */
 /*********************************************************************/

 typedef struct tagMQWXP MQWXP;
 typedef MQWXP MQPOINTER PMQWXP;

 struct tagMQWXP{
   MQCHAR4   StrucId;              /* Structure identifier */
   MQLONG    Version;              /* Structure version number */
   MQLONG    ExitId;               /* Type of exit */
   MQLONG    ExitReason;           /* Reason for invoking exit */
   MQLONG    ExitResponse;         /* Response from exit */
   MQLONG    ExitResponse2;        /* Secondary response from exit */
   MQLONG    Feedback;             /* Reserved */
   MQLONG    Reserved;             /* Reserved */
   MQBYTE16  ExitUserArea;         /* Exit user area */
   MQCHAR32  ExitData;             /* Exit data */
   PMQMD     MsgDescPtr;           /* Address of message descriptor */
   PMQVOID   MsgBufferPtr;         /* Address of buffer containing some
                                      or all of the message data */
   MQLONG    MsgBufferLength;      /* Length of buffer containing
                                      message data */
   MQLONG    MsgLength;            /* Length of complete message */
   MQCHAR48  QName;                /* Queue name */
   MQCHAR48  QMgrName;             /* Name of local queue manager */
   MQLONG    DestinationCount;     /* Number of possible destinations */
   MQLONG    DestinationChosen;    /* Destination chosen */
   PPMQWDR   DestinationArrayPtr;  /* Address of an array of pointers to
                                      destination records */
   PPMQWQR   QArrayPtr;            /* Address of an array of pointers to
                                      queue records */
   MQPTR     CacheContext;         /* Context information */
   MQLONG    CacheType;            /* Type of cluster cache */
 };

 #define MQWXP_DEFAULT {MQWXP_STRUC_ID_ARRAY},\
                       MQWXP_CURRENT_VERSION,\
                       0,\
                       0,\
                       MQXCC_OK,\
                       0,\
                       0,\
                       0,\
                       {MQXUA_NONE_ARRAY},\
                       {""},\
                       NULL,\
                       NULL,\
                       0,\
                       0,\
                       {""},\
                       {""},\
                       0,\
                       0,\
                       NULL,\
                       NULL,\
                       NULL,\
                       MQCLCT_DYNAMIC


 /*********************************************************************/
 /*  API Exit Functions                                               */
 /*********************************************************************/
                                                                        
 /*********************************************************************/
 /*  MQXEP Function -- Register Entry Point                           */
 /*********************************************************************/

 void MQENTRY MQXEP (
   MQHCONFIG Hconfig,        /* Configuration handle */
   MQLONG    ExitReason,     /* Exit reason */
   MQLONG    Function,       /* Function identifier */
   PMQFUNC   EntryPoint,     /* Exit function entry point */
   MQPTR     Reserved,       /* Reserved */
   PMQLONG   pCompCode,      /* Completion code */
   PMQLONG   pReason);       /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQ_BACK_EXIT -- Back Out Changes Exit                            */
 /*********************************************************************/

 typedef void MQENTRY MQ_BACK_EXIT (
     PMQAXP    pExitParms,      /* Exit parameter structure */
     PMQAXC    pExitContext,    /* Exit context structure */
     PMQHCONN  pHconn,          /* Connection handle */
     PMQLONG   pCompCode,       /* Completion code */
     PMQLONG   pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQ_BEGIN_EXIT -- Begin Unit of Work Exit                         */
 /*********************************************************************/

 typedef void MQENTRY MQ_BEGIN_EXIT (
     PMQAXP    pExitParms,      /* Exit parameter structure */
     PMQAXC    pExitContext,    /* Exit context structure */
     PMQHCONN  pHconn,          /* Connection handle */
     PPMQBO    ppBeginOptions,  /* Options that control the action of
                                   MQBEGIN */
     PMQLONG   pCompCode,       /* Completion code */
     PMQLONG   pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQ_CLOSE_EXIT -- Close Object Exit                               */
 /*********************************************************************/

 typedef void MQENTRY MQ_CLOSE_EXIT (
     PMQAXP    pExitParms,      /* Exit parameter structure */
     PMQAXC    pExitContext,    /* Exit context structure */
     PMQHCONN  pHconn,          /* Connection handle */
     PPMQHOBJ  ppHobj,          /* Object handle */
     PMQLONG   pOptions,        /* Options that control the action of
                                   MQCLOSE */
     PMQLONG   pCompCode,       /* Completion code */
     PMQLONG   pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQ_CMIT_EXIT -- Commit Changes Exit                              */
 /*********************************************************************/

 typedef void MQENTRY MQ_CMIT_EXIT (
     PMQAXP    pExitParms,      /* Exit parameter structure */
     PMQAXC    pExitContext,    /* Exit context structure */
     PMQHCONN  pHconn,          /* Connection handle */
     PMQLONG   pCompCode,       /* Completion code */
     PMQLONG   pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQ_CONNX_EXIT -- Connect Queue Manager Exit                      */
 /*********************************************************************/

 typedef void MQENTRY MQ_CONNX_EXIT (
     PMQAXP    pExitParms,      /* Exit parameter structure */
     PMQAXC    pExitContext,    /* Exit context structure */
     PMQCHAR   pQMgrName,       /* Name of queue manager */
     PPMQCNO   ppConnectOpts,   /* Options that control the action of
                                   MQCONNX */
     PPMQHCONN ppHconn,         /* Connection handle */
     PMQLONG   pCompCode,       /* Completion code */
     PMQLONG   pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQ_DISC_EXIT -- Disconnect Queue Manager Exit                    */
 /*********************************************************************/

 typedef void MQENTRY MQ_DISC_EXIT (
     PMQAXP    pExitParms,      /* Exit parameter structure */
     PMQAXC    pExitContext,    /* Exit context structure */
     PPMQHCONN ppHconn,         /* Connection handle */
     PMQLONG   pCompCode,       /* Completion code */
     PMQLONG   pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQ_GET_EXIT -- Get Message Exit                                  */
 /*********************************************************************/

 typedef void MQENTRY MQ_GET_EXIT (
     PMQAXP    pExitParms,      /* Exit parameter structure */
     PMQAXC    pExitContext,    /* Exit context structure */
     PMQHCONN  pHconn,          /* Connection handle */
     PMQHOBJ   pHobj,           /* Object handle */
     PPMQMD    ppMsgDesc,       /* Message descriptor */
     PPMQGMO   ppGetMsgOpts,    /* Options that control the action of
                                   MQGET */
     PMQLONG   pBufferLength,   /* Length in bytes of the pBuffer area */
     PPMQVOID  ppBuffer,        /* Area to contain the message data */
     PPMQLONG  ppDataLength,    /* Length of the message */
     PMQLONG   pCompCode,       /* Completion code */
     PMQLONG   pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQ_INIT_EXIT -- Initialization Exit                              */
 /*********************************************************************/
                                                                        
 typedef void MQENTRY MQ_INIT_EXIT (
   PMQAXP   pExitParms,    /* Exit parameter structure */
   PMQAXC   pExitContext,  /* Exit context structure */
   PMQLONG  pCompCode,     /* Completion code */
   PMQLONG  pReason);      /* Reason code qualifying CompCode */
                                                                        
                                                                        
 /*********************************************************************/
 /*  MQ_INQ_EXIT -- Inquire Object Attributes Exit                    */
 /*********************************************************************/

 typedef void MQENTRY MQ_INQ_EXIT (
     PMQAXP    pExitParms,      /* Exit parameter structure */
     PMQAXC    pExitContext,    /* Exit context structure */
     PMQHCONN  pHconn,          /* Connection handle */
     PMQHOBJ   pHobj,           /* Object handle */
     PMQLONG   pSelectorCount,  /* Count of selectors */
     PPMQLONG  ppSelectors,     /* Array of attribute selectors */
     PMQLONG   pIntAttrCount,   /* Count of integer attributes */
     PPMQLONG  ppIntAttrs,      /* Array of integer attributes */
     PMQLONG   pCharAttrLength, /* Length of character attributes
                                   buffer */
     PPMQCHAR  ppCharAttrs,     /* Character attributes */
     PMQLONG   pCompCode,       /* Completion code */
     PMQLONG   pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQ_OPEN_EXIT -- Open Object Exit                                 */
 /*********************************************************************/

 typedef void MQENTRY MQ_OPEN_EXIT (
     PMQAXP    pExitParms,      /* Exit parameter structure */
     PMQAXC    pExitContext,    /* Exit context structure */
     PMQHCONN  pHconn,          /* Connection handle */
     PPMQOD    ppObjDesc,       /* Object descriptor */
     PMQLONG   pOptions,        /* Options that control the action of
                                   MQ_OPEN_EXIT */
     PPMQHOBJ  ppHobj,          /* Object handle */
     PMQLONG   pCompCode,       /* Completion code */
     PMQLONG   pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQ_PUT_EXIT -- Put Message Exit                                  */
 /*********************************************************************/

 typedef void MQENTRY MQ_PUT_EXIT (
     PMQAXP    pExitParms,      /* Exit parameter structure */
     PMQAXC    pExitContext,    /* Exit context structure */
     PMQHCONN  pHconn,          /* Connection handle */
     PMQHOBJ   pHobj,           /* Object handle */
     PPMQMD    ppMsgDesc,       /* Message descriptor */
     PPMQPMO   ppPutMsgOpts,    /* Options that control the action of
                                   MQPUT */
     PMQLONG   pBufferLength,   /* Length of the message in pBuffer */     
     PPMQVOID  ppBuffer,        /* Message data */
     PMQLONG   pCompCode,       /* Completion code */
     PMQLONG   pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQ_PUT1_EXIT -- Put One Message Exit                             */
 /*********************************************************************/

 typedef void MQENTRY MQ_PUT1_EXIT (
     PMQAXP    pExitParms,      /* Exit parameter structure */
     PMQAXC    pExitContext,    /* Exit context structure */
     PMQHCONN  pHconn,          /* Connection handle */
     PPMQOD    ppObjDesc,       /* Object descriptor */
     PPMQMD    ppMsgDesc,       /* Message descriptor */
     PPMQPMO   ppPutMsgOpts,    /* Options that control the action of
                                   MQPUT1 */
     PMQLONG   pBufferLength,   /* Length of the message in pBuffer */
     PPMQVOID  ppBuffer,        /* Message data */
     PMQLONG   pCompCode,       /* Completion code */
     PMQLONG   pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQ_SET_EXIT -- Set Object Attributes Exit                        */
 /*********************************************************************/

 typedef void MQENTRY MQ_SET_EXIT (
     PMQAXP    pExitParms,      /* Exit parameter structure */
     PMQAXC    pExitContext,    /* Exit context structure */
     PMQHCONN  pHconn,          /* Connection handle */
     PMQHOBJ   pHobj,           /* Object handle */
     PMQLONG   pSelectorCount,  /* Count of selectors */
     PPMQLONG  ppSelectors,     /* Array of attribute selectors */
     PMQLONG   pIntAttrCount,   /* Count of integer attributes */
     PPMQLONG  ppIntAttrs,      /* Array of integer attributes */
     PMQLONG   pCharAttrLength, /* Length of character attributes
                                   buffer */
     PPMQCHAR  ppCharAttrs,     /* Character attributes */
     PMQLONG   pCompCode,       /* Completion code */
     PMQLONG   pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQ_TERM_EXIT -- Termination Exit                                 */
 /*********************************************************************/
                                                                        
 typedef void MQENTRY MQ_TERM_EXIT (
   PMQAXP   pExitParms,    /* Exit parameter structure */
   PMQAXC   pExitContext,  /* Exit context structure */
   PMQLONG  pCompCode,     /* Completion code */
   PMQLONG  pReason);      /* Reason code qualifying CompCode */
                                                                        
                                                                        
 /*********************************************************************/
 /*  Other Exit Functions                                             */
 /*********************************************************************/
                                                                        
 /*********************************************************************/
 /*  MQ_CHANNEL_EXIT -- Channel Exit                                  */
 /*********************************************************************/
                                                                        
 #define MQCHANNELEXIT MQ_CHANNEL_EXIT
                                                                        
 typedef void MQENTRY MQ_CHANNEL_EXIT (
   PMQVOID  pChannelExitParms,   /* Channel exit parameter block */
   PMQVOID  pChannelDefinition,  /* Channel definition */
   PMQLONG  pDataLength,         /* Length of data */
   PMQLONG  pAgentBufferLength,  /* Length of agent buffer */
   PMQVOID  pAgentBuffer,        /* Agent buffer */
   PMQLONG  pExitBufferLength,   /* Length of exit buffer */
   PMQPTR   pExitBufferAddr);    /* Address of exit buffer */
                                                                        
                                                                        
 /*********************************************************************/
 /*  MQ_CHANNEL_AUTO_DEF_EXIT -- Channel Auto Definition Exit         */
 /*********************************************************************/
                                                                        
 #define MQCHANNELAUTODEFEXIT MQ_CHANNEL_AUTO_DEF_EXIT
                                                                        
 typedef void MQENTRY MQ_CHANNEL_AUTO_DEF_EXIT (
   PMQVOID  pChannelExitParms,   /* Channel exit parameter block */
   PMQVOID  pChannelDefinition); /* Channel definition */
                                                                        
                                                                        
 /*********************************************************************/
 /*  MQ_CLUSTER_WORKLOAD_EXIT -- Cluster Workload Exit                */
 /*********************************************************************/
                                                                        
 typedef void MQENTRY MQ_CLUSTER_WORKLOAD_EXIT (
   PMQWXP  pExitParms); /* Exit parameter block */
                                                                        
                                                                        
 /*********************************************************************/
 /*  MQ_DATA_CONV_EXIT -- Data Conversion Exit                        */
 /*********************************************************************/
                                                                        
 #define MQDATACONVEXIT MQ_DATA_CONV_EXIT
                                                                        
 typedef void MQENTRY MQ_DATA_CONV_EXIT (
   PMQDXP   pDataConvExitParms,  /* Data-conversion exit parameter
                                    block */
   PMQMD    pMsgDesc,            /* Message descriptor */
   MQLONG   InBufferLength,      /* Length in bytes of InBuffer */
   PMQVOID  pInBuffer,           /* Buffer containing the unconverted
                                    message */
   MQLONG   OutBufferLength,     /* Length in bytes of OutBuffer */
   PMQVOID  pOutBuffer);         /* Buffer containing the converted
                                    message */
                                                                        

 /*********************************************************************/
 /*  MQ_PUBSUB_ROUTING_EXIT -- Publish/Subscribe Routing Exit         */
 /*********************************************************************/
                                                                        
 typedef void MQENTRY MQ_PUBSUB_ROUTING_EXIT (
   PMQPXP  pExitParms); /* Exit parameter block */
                                                                        
                                                                        
 /*********************************************************************/
 /*  MQ_TRANSPORT_EXIT -- Transport Retry Exit                        */
 /*********************************************************************/
                                                                        
 #define MQTRANSPORTEXIT MQ_TRANSPORT_EXIT
                                                                        
 typedef void MQENTRY MQ_TRANSPORT_EXIT (
   PMQVOID  pExitParms,         /* Exit parameter block */
   MQLONG   DestAddressLength,  /* Length in bytes of destination IP
                                   address */
   PMQCHAR  pDestAddress);      /* Destination IP address */
                                                                        

 /*********************************************************************/
 /*  MQXCLWLN Function -- Cluster Workload Navigate Records           */
 /*********************************************************************/
                                                                        
 void MQENTRY MQXCLWLN (
   PMQWXP   pExitParms,     /* Exit parameter structure */
   MQPTR    CurrentRecord,  /* Address of current record */
   MQLONG   NextOffset,     /* Offset of next record */
   PMQPTR   pNextRecord,    /* Address of next record or structure */
   PMQLONG  pCompCode,      /* Completion code */
   PMQLONG  pReason);       /* Reason code qualifying CompCode */
                                                                        
                                                                        
 /*********************************************************************/
 /*  MQXCNVC Function -- Convert Characters                           */
 /*********************************************************************/
                                                                        
 void MQENTRY MQXCNVC (
   MQHCONN  Hconn,          /* Connection handle */
   MQLONG   Options,        /* Options that control the action of
                               MQXCNVC */
   MQLONG   SourceCCSID,    /* Coded character set identifier of string
                               before conversion */
   MQLONG   SourceLength,   /* Length of string before conversion */
   PMQCHAR  pSourceBuffer,  /* String to be converted */
   MQLONG   TargetCCSID,    /* Coded character set identifier of string
                               after conversion */
   MQLONG   TargetLength,   /* Length of output buffer */
   PMQCHAR  pTargetBuffer,  /* String after conversion */
   PMQLONG  pDataLength,    /* Length of output string */
   PMQLONG  pCompCode,      /* Completion code */
   PMQLONG  pReason);       /* Reason code qualifying CompCode */
                                                                        

 #if defined(__cplusplus)
   }
 #endif

 /*********************************************************************/
 /*  End of CMQXC                                                     */
 /*********************************************************************/
 #endif  /* End of header file */

