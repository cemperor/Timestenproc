 #if !defined(MQCFC_INCLUDED)          /* File not yet included?      */
   #define MQCFC_INCLUDED              /* Show file now included      */
 /*********************************************************************/
 /*                                                                   */
 /*                  WebSphere MQ for Windows                         */
 /*                                                                   */
 /*  FILE NAME:      CMQCFC                                           */
 /*                                                                   */
 /*  DESCRIPTION:    Declarations for PCF and Events                  */
 /*                                                                   */
 /*********************************************************************/
 /*  @START_COPYRIGHT@                                                */
 /*  Licensed Materials - Property of IBM                             */
 /*                                                                   */
 /*  5724-B41                                                         */
 /*                                                                   */
 /*  (C) Copyright IBM Corporation 1995, 2002.                        */
 /*                                                                   */
 /*  Status: Version 5 Release 3                                      */
 /*  @END_COPYRIGHT@                                                  */
 /*********************************************************************/
 /*                                                                   */
 /*  FUNCTION:       This file declares the structures and named      */
 /*                  constants for PCF and event messages.            */
 /*                                                                   */
 /*  PROCESSOR:      C                                                */
 /*                                                                   */
 /*********************************************************************/

 #if defined(__cplusplus)
   extern "C" {
 #endif

 /*********************************************************************/
 /*  Values Related to MQCFH Structure                                */
 /*********************************************************************/

 /* Structure Length */
 #define MQCFH_STRUC_LENGTH 36

 /* Structure Version Number */
 #define MQCFH_VERSION_1       1
 #define MQCFH_CURRENT_VERSION 1

 /* Command Codes */
 #define MQCMD_CHANGE_Q_MGR           1
 #define MQCMD_INQUIRE_Q_MGR          2
 #define MQCMD_CHANGE_PROCESS         3
 #define MQCMD_COPY_PROCESS           4
 #define MQCMD_CREATE_PROCESS         5
 #define MQCMD_DELETE_PROCESS         6
 #define MQCMD_INQUIRE_PROCESS        7
 #define MQCMD_CHANGE_Q               8
 #define MQCMD_CLEAR_Q                9
 #define MQCMD_COPY_Q                 10
 #define MQCMD_CREATE_Q               11
 #define MQCMD_DELETE_Q               12
 #define MQCMD_INQUIRE_Q              13
 #define MQCMD_RESET_Q_STATS          17
 #define MQCMD_INQUIRE_Q_NAMES        18
 #define MQCMD_INQUIRE_PROCESS_NAMES  19
 #define MQCMD_INQUIRE_CHANNEL_NAMES  20
 #define MQCMD_CHANGE_CHANNEL         21
 #define MQCMD_COPY_CHANNEL           22
 #define MQCMD_CREATE_CHANNEL         23
 #define MQCMD_DELETE_CHANNEL         24
 #define MQCMD_INQUIRE_CHANNEL        25
 #define MQCMD_PING_CHANNEL           26
 #define MQCMD_RESET_CHANNEL          27
 #define MQCMD_START_CHANNEL          28
 #define MQCMD_STOP_CHANNEL           29
 #define MQCMD_START_CHANNEL_INIT     30
 #define MQCMD_START_CHANNEL_LISTENER 31
 #define MQCMD_CHANGE_NAMELIST        32
 #define MQCMD_COPY_NAMELIST          33
 #define MQCMD_CREATE_NAMELIST        34
 #define MQCMD_DELETE_NAMELIST        35
 #define MQCMD_INQUIRE_NAMELIST       36
 #define MQCMD_INQUIRE_NAMELIST_NAMES 37
 #define MQCMD_ESCAPE                 38
 #define MQCMD_RESOLVE_CHANNEL        39
 #define MQCMD_PING_Q_MGR             40
 #define MQCMD_INQUIRE_Q_STATUS       41
 #define MQCMD_INQUIRE_CHANNEL_STATUS 42
 #define MQCMD_CONFIG_EVENT           43
 #define MQCMD_Q_MGR_EVENT            44
 #define MQCMD_PERFM_EVENT            45
 #define MQCMD_CHANNEL_EVENT          46
 #define MQCMD_DELETE_PUBLICATION     60
 #define MQCMD_DEREGISTER_PUBLISHER   61
 #define MQCMD_DEREGISTER_SUBSCRIBER  62
 #define MQCMD_PUBLISH                63
 #define MQCMD_REGISTER_PUBLISHER     64
 #define MQCMD_REGISTER_SUBSCRIBER    65
 #define MQCMD_REQUEST_UPDATE         66
 #define MQCMD_BROKER_INTERNAL        67
 #define MQCMD_INQUIRE_CLUSTER_Q_MGR  70
 #define MQCMD_RESUME_Q_MGR_CLUSTER   71
 #define MQCMD_SUSPEND_Q_MGR_CLUSTER  72
 #define MQCMD_REFRESH_CLUSTER        73
 #define MQCMD_RESET_CLUSTER          74
 #define MQCMD_REFRESH_SECURITY       78
 #define MQCMD_CHANGE_AUTH_INFO       79
 #define MQCMD_COPY_AUTH_INFO         80
 #define MQCMD_CREATE_AUTH_INFO       81
 #define MQCMD_DELETE_AUTH_INFO       82
 #define MQCMD_INQUIRE_AUTH_INFO      83
 #define MQCMD_INQUIRE_AUTH_INFO_NAMES 84
 #define MQCMD_NONE                   0

 /* Control Options */
 #define MQCFC_LAST     1
 #define MQCFC_NOT_LAST 0

 /* Reason Codes */
 #define MQRCCF_CFH_TYPE_ERROR          3001
 #define MQRCCF_CFH_LENGTH_ERROR        3002
 #define MQRCCF_CFH_VERSION_ERROR       3003
 #define MQRCCF_CFH_MSG_SEQ_NUMBER_ERR  3004
 #define MQRCCF_CFH_CONTROL_ERROR       3005
 #define MQRCCF_CFH_PARM_COUNT_ERROR    3006
 #define MQRCCF_CFH_COMMAND_ERROR       3007
 #define MQRCCF_COMMAND_FAILED          3008
 #define MQRCCF_CFIN_LENGTH_ERROR       3009
 #define MQRCCF_CFST_LENGTH_ERROR       3010
 #define MQRCCF_CFST_STRING_LENGTH_ERR  3011
 #define MQRCCF_FORCE_VALUE_ERROR       3012
 #define MQRCCF_STRUCTURE_TYPE_ERROR    3013
 #define MQRCCF_CFIN_PARM_ID_ERROR      3014
 #define MQRCCF_CFST_PARM_ID_ERROR      3015
 #define MQRCCF_MSG_LENGTH_ERROR        3016
 #define MQRCCF_CFIN_DUPLICATE_PARM     3017
 #define MQRCCF_CFST_DUPLICATE_PARM     3018
 #define MQRCCF_PARM_COUNT_TOO_SMALL    3019
 #define MQRCCF_PARM_COUNT_TOO_BIG      3020
 #define MQRCCF_Q_ALREADY_IN_CELL       3021
 #define MQRCCF_Q_TYPE_ERROR            3022
 #define MQRCCF_MD_FORMAT_ERROR         3023
 #define MQRCCF_CFSL_LENGTH_ERROR       3024
 #define MQRCCF_REPLACE_VALUE_ERROR     3025
 #define MQRCCF_CFIL_DUPLICATE_VALUE    3026
 #define MQRCCF_CFIL_COUNT_ERROR        3027
 #define MQRCCF_CFIL_LENGTH_ERROR       3028
 #define MQRCCF_QUIESCE_VALUE_ERROR     3029
 #define MQRCCF_MODE_VALUE_ERROR        3029
 #define MQRCCF_MSG_SEQ_NUMBER_ERROR    3030
 #define MQRCCF_PING_DATA_COUNT_ERROR   3031
 #define MQRCCF_PING_DATA_COMPARE_ERROR 3032
 #define MQRCCF_CFSL_PARM_ID_ERROR      3033
 #define MQRCCF_CHANNEL_TYPE_ERROR      3034
 #define MQRCCF_PARM_SEQUENCE_ERROR     3035
 #define MQRCCF_XMIT_PROTOCOL_TYPE_ERR  3036
 #define MQRCCF_BATCH_SIZE_ERROR        3037
 #define MQRCCF_DISC_INT_ERROR          3038
 #define MQRCCF_SHORT_RETRY_ERROR       3039
 #define MQRCCF_SHORT_TIMER_ERROR       3040
 #define MQRCCF_LONG_RETRY_ERROR        3041
 #define MQRCCF_LONG_TIMER_ERROR        3042
 #define MQRCCF_SEQ_NUMBER_WRAP_ERROR   3043
 #define MQRCCF_MAX_MSG_LENGTH_ERROR    3044
 #define MQRCCF_PUT_AUTH_ERROR          3045
 #define MQRCCF_PURGE_VALUE_ERROR       3046
 #define MQRCCF_CFIL_PARM_ID_ERROR      3047
 #define MQRCCF_MSG_TRUNCATED           3048
 #define MQRCCF_CCSID_ERROR             3049
 #define MQRCCF_ENCODING_ERROR          3050
 #define MQRCCF_QUEUES_VALUE_ERROR      3051
 #define MQRCCF_DATA_CONV_VALUE_ERROR   3052
 #define MQRCCF_INDOUBT_VALUE_ERROR     3053
 #define MQRCCF_ESCAPE_TYPE_ERROR       3054
 #define MQRCCF_REPOS_VALUE_ERROR       3055
 #define MQRCCF_CHANNEL_TABLE_ERROR     3062
 #define MQRCCF_MCA_TYPE_ERROR          3063
 #define MQRCCF_CHL_INST_TYPE_ERROR     3064
 #define MQRCCF_CHL_STATUS_NOT_FOUND    3065
 #define MQRCCF_CFSL_DUPLICATE_PARM     3066
 #define MQRCCF_CFSL_TOTAL_LENGTH_ERROR 3067
 #define MQRCCF_CFSL_COUNT_ERROR        3068
 #define MQRCCF_CFSL_STRING_LENGTH_ERR  3069
 #define MQRCCF_BROKER_DELETED          3070
 #define MQRCCF_STREAM_ERROR            3071
 #define MQRCCF_TOPIC_ERROR             3072
 #define MQRCCF_NOT_REGISTERED          3073
 #define MQRCCF_Q_MGR_NAME_ERROR        3074
 #define MQRCCF_INCORRECT_STREAM        3075
 #define MQRCCF_Q_NAME_ERROR            3076
 #define MQRCCF_NO_RETAINED_MSG         3077
 #define MQRCCF_DUPLICATE_IDENTITY      3078
 #define MQRCCF_INCORRECT_Q             3079
 #define MQRCCF_CORREL_ID_ERROR         3080
 #define MQRCCF_NOT_AUTHORIZED          3081
 #define MQRCCF_UNKNOWN_STREAM          3082
 #define MQRCCF_REG_OPTIONS_ERROR       3083
 #define MQRCCF_PUB_OPTIONS_ERROR       3084
 #define MQRCCF_UNKNOWN_BROKER          3085
 #define MQRCCF_Q_MGR_CCSID_ERROR       3086
 #define MQRCCF_DEL_OPTIONS_ERROR       3087
 #define MQRCCF_CLUSTER_NAME_CONFLICT   3088
 #define MQRCCF_REPOS_NAME_CONFLICT     3089
 #define MQRCCF_CLUSTER_Q_USAGE_ERROR   3090
 #define MQRCCF_ACTION_VALUE_ERROR      3091
 #define MQRCCF_COMMS_LIBRARY_ERROR     3092
 #define MQRCCF_NETBIOS_NAME_ERROR      3093
 #define MQRCCF_BROKER_COMMAND_FAILED   3094
 #define MQRCCF_CFST_CONFLICTING_PARM   3095
 #define MQRCCF_PATH_NOT_VALID          3096
 #define MQRCCF_PARM_SYNTAX_ERROR       3097
 #define MQRCCF_PWD_LENGTH_ERROR        3098
 #define MQRCCF_FILTER_ERROR            3150
 #define MQRCCF_WRONG_USER              3151
 #define MQRCCF_DUPLICATE_SUBSCRIPTION  3152
 #define MQRCCF_SUB_NAME_ERROR          3153
 #define MQRCCF_SUB_IDENTITY_ERROR      3154
 #define MQRCCF_SUBSCRIPTION_IN_USE     3155
 #define MQRCCF_SUBSCRIPTION_LOCKED     3156
 #define MQRCCF_ALREADY_JOINED          3157
 #define MQRCCF_OBJECT_ALREADY_EXISTS   4001
 #define MQRCCF_OBJECT_WRONG_TYPE       4002
 #define MQRCCF_LIKE_OBJECT_WRONG_TYPE  4003
 #define MQRCCF_OBJECT_OPEN             4004
 #define MQRCCF_ATTR_VALUE_ERROR        4005
 #define MQRCCF_UNKNOWN_Q_MGR           4006
 #define MQRCCF_Q_WRONG_TYPE            4007
 #define MQRCCF_OBJECT_NAME_ERROR       4008
 #define MQRCCF_ALLOCATE_FAILED         4009
 #define MQRCCF_HOST_NOT_AVAILABLE      4010
 #define MQRCCF_CONFIGURATION_ERROR     4011
 #define MQRCCF_CONNECTION_REFUSED      4012
 #define MQRCCF_ENTRY_ERROR             4013
 #define MQRCCF_SEND_FAILED             4014
 #define MQRCCF_RECEIVED_DATA_ERROR     4015
 #define MQRCCF_RECEIVE_FAILED          4016
 #define MQRCCF_CONNECTION_CLOSED       4017
 #define MQRCCF_NO_STORAGE              4018
 #define MQRCCF_NO_COMMS_MANAGER        4019
 #define MQRCCF_LISTENER_NOT_STARTED    4020
 #define MQRCCF_BIND_FAILED             4024
 #define MQRCCF_CHANNEL_INDOUBT         4025
 #define MQRCCF_MQCONN_FAILED           4026
 #define MQRCCF_MQOPEN_FAILED           4027
 #define MQRCCF_MQGET_FAILED            4028
 #define MQRCCF_MQPUT_FAILED            4029
 #define MQRCCF_PING_ERROR              4030
 #define MQRCCF_CHANNEL_IN_USE          4031
 #define MQRCCF_CHANNEL_NOT_FOUND       4032
 #define MQRCCF_UNKNOWN_REMOTE_CHANNEL  4033
 #define MQRCCF_REMOTE_QM_UNAVAILABLE   4034
 #define MQRCCF_REMOTE_QM_TERMINATING   4035
 #define MQRCCF_MQINQ_FAILED            4036
 #define MQRCCF_NOT_XMIT_Q              4037
 #define MQRCCF_CHANNEL_DISABLED        4038
 #define MQRCCF_USER_EXIT_NOT_AVAILABLE 4039
 #define MQRCCF_COMMIT_FAILED           4040
 #define MQRCCF_WRONG_CHANNEL_TYPE      4041
 #define MQRCCF_CHANNEL_ALREADY_EXISTS  4042
 #define MQRCCF_DATA_TOO_LARGE          4043
 #define MQRCCF_CHANNEL_NAME_ERROR      4044
 #define MQRCCF_XMIT_Q_NAME_ERROR       4045
 #define MQRCCF_MCA_NAME_ERROR          4047
 #define MQRCCF_SEND_EXIT_NAME_ERROR    4048
 #define MQRCCF_SEC_EXIT_NAME_ERROR     4049
 #define MQRCCF_MSG_EXIT_NAME_ERROR     4050
 #define MQRCCF_RCV_EXIT_NAME_ERROR     4051
 #define MQRCCF_XMIT_Q_NAME_WRONG_TYPE  4052
 #define MQRCCF_MCA_NAME_WRONG_TYPE     4053
 #define MQRCCF_DISC_INT_WRONG_TYPE     4054
 #define MQRCCF_SHORT_RETRY_WRONG_TYPE  4055
 #define MQRCCF_SHORT_TIMER_WRONG_TYPE  4056
 #define MQRCCF_LONG_RETRY_WRONG_TYPE   4057
 #define MQRCCF_LONG_TIMER_WRONG_TYPE   4058
 #define MQRCCF_PUT_AUTH_WRONG_TYPE     4059
 #define MQRCCF_KEEP_ALIVE_INT_ERROR    4060
 #define MQRCCF_MISSING_CONN_NAME       4061
 #define MQRCCF_CONN_NAME_ERROR         4062
 #define MQRCCF_MQSET_FAILED            4063
 #define MQRCCF_CHANNEL_NOT_ACTIVE      4064
 #define MQRCCF_TERMINATED_BY_SEC_EXIT  4065
 #define MQRCCF_DYNAMIC_Q_SCOPE_ERROR   4067
 #define MQRCCF_CELL_DIR_NOT_AVAILABLE  4068
 #define MQRCCF_MR_COUNT_ERROR          4069
 #define MQRCCF_MR_COUNT_WRONG_TYPE     4070
 #define MQRCCF_MR_EXIT_NAME_ERROR      4071
 #define MQRCCF_MR_EXIT_NAME_WRONG_TYPE 4072
 #define MQRCCF_MR_INTERVAL_ERROR       4073
 #define MQRCCF_MR_INTERVAL_WRONG_TYPE  4074
 #define MQRCCF_NPM_SPEED_ERROR         4075
 #define MQRCCF_NPM_SPEED_WRONG_TYPE    4076
 #define MQRCCF_HB_INTERVAL_ERROR       4077
 #define MQRCCF_HB_INTERVAL_WRONG_TYPE  4078
 #define MQRCCF_CHAD_ERROR              4079
 #define MQRCCF_CHAD_WRONG_TYPE         4080
 #define MQRCCF_CHAD_EVENT_ERROR        4081
 #define MQRCCF_CHAD_EVENT_WRONG_TYPE   4082
 #define MQRCCF_CHAD_EXIT_ERROR         4083
 #define MQRCCF_CHAD_EXIT_WRONG_TYPE    4084
 #define MQRCCF_SUPPRESSED_BY_EXIT      4085
 #define MQRCCF_BATCH_INT_ERROR         4086
 #define MQRCCF_BATCH_INT_WRONG_TYPE    4087
 #define MQRCCF_NET_PRIORITY_ERROR      4088
 #define MQRCCF_NET_PRIORITY_WRONG_TYPE 4089
 #define MQRCCF_CHANNEL_CLOSED          4090
 #define MQRCCF_Q_STATUS_NOT_FOUND      4091
 #define MQRCCF_SSL_CIPHER_SPEC_ERROR   4092
 #define MQRCCF_SSL_PEER_NAME_ERROR     4093
 #define MQRCCF_SSL_CLIENT_AUTH_ERROR   4094


 /*********************************************************************/
 /*  Values Related to MQCFBS Structure                               */
 /*********************************************************************/

 /* Structure Length (Fixed Part) */
 #define MQCFBS_STRUC_LENGTH_FIXED 16


 /*********************************************************************/
 /*  Values Related to MQCFIL Structure                               */
 /*********************************************************************/

 /* Structure Length (Fixed Part) */
 #define MQCFIL_STRUC_LENGTH_FIXED 16


 /*********************************************************************/
 /*  Values Related to MQCFIN Structure                               */
 /*********************************************************************/

 /* Structure Length */
 #define MQCFIN_STRUC_LENGTH 16


 /*********************************************************************/
 /*  Values Related to MQCFSL Structure                               */
 /*********************************************************************/

 /* Structure Length (Fixed Part) */
 #define MQCFSL_STRUC_LENGTH_FIXED 24


 /*********************************************************************/
 /*  Values Related to MQCFST Structure                               */
 /*********************************************************************/

 /* Structure Length (Fixed Part) */
 #define MQCFST_STRUC_LENGTH_FIXED 20


 /*********************************************************************/
 /*  Values Related to All Structures                                 */
 /*********************************************************************/

 /* Structure Type */
 #define MQCFT_COMMAND      1
 #define MQCFT_RESPONSE     2
 #define MQCFT_INTEGER      3
 #define MQCFT_STRING       4
 #define MQCFT_INTEGER_LIST 5
 #define MQCFT_STRING_LIST  6
 #define MQCFT_EVENT        7
 #define MQCFT_USER         8
 #define MQCFT_BYTE_STRING  9


 /*********************************************************************/
 /*  Values Related to Byte Parameter Structures                      */
 /*********************************************************************/

 /* Byte Parameter Types */
 #define MQBACF_FIRST                  7001
 #define MQBACF_EVENT_ACCOUNTING_TOKEN 7001
 #define MQBACF_EVENT_SECURITY_ID      7002
 #define MQBACF_LAST_USED              7002


 /*********************************************************************/
 /*  Values Related to Integer Parameter Structures                   */
 /*********************************************************************/

 /* Integer Parameter Types */
 #define MQIACF_FIRST                 1001
 #define MQIACF_Q_MGR_ATTRS           1001
 #define MQIACF_Q_ATTRS               1002
 #define MQIACF_PROCESS_ATTRS         1003
 #define MQIACF_NAMELIST_ATTRS        1004
 #define MQIACF_FORCE                 1005
 #define MQIACF_REPLACE               1006
 #define MQIACF_PURGE                 1007
 #define MQIACF_QUIESCE               1008
 #define MQIACF_MODE                  1008
 #define MQIACF_ALL                   1009
 #define MQIACF_EVENT_APPL_TYPE       1010
 #define MQIACF_EVENT_ORIGIN          1011
 #define MQIACF_PARAMETER_ID          1012
 #define MQIACF_ERROR_ID              1013
 #define MQIACF_ERROR_IDENTIFIER      1013
 #define MQIACF_SELECTOR              1014
 #define MQIACF_CHANNEL_ATTRS         1015
 #define MQIACF_OBJECT_TYPE           1016
 #define MQIACF_ESCAPE_TYPE           1017
 #define MQIACF_ERROR_OFFSET          1018
 #define MQIACF_AUTH_INFO_ATTRS       1019
 #define MQIACF_REASON_QUALIFIER      1020
 #define MQIACF_COMMAND               1021
 #define MQIACF_OPEN_OPTIONS          1022
 #define MQIACF_OPEN_TYPE             1023
 #define MQIACF_PROCESS_ID            1024
 #define MQIACF_THREAD_ID             1025
 #define MQIACF_Q_STATUS_ATTRS        1026
 #define MQIACF_UNCOMMITTED_MSGS      1027
 #define MQIACF_AUX_ERROR_DATA_INT_1  1070
 #define MQIACF_AUX_ERROR_DATA_INT_2  1071
 #define MQIACF_CONV_REASON_CODE      1072
 #define MQIACF_BRIDGE_TYPE           1073
 #define MQIACF_INQUIRY               1074
 #define MQIACF_WAIT_INTERVAL         1075
 #define MQIACF_OPTIONS               1076
 #define MQIACF_BROKER_OPTIONS        1077
 #define MQIACF_SEQUENCE_NUMBER       1079
 #define MQIACF_INTEGER_DATA          1080
 #define MQIACF_REGISTRATION_OPTIONS  1081
 #define MQIACF_PUBLICATION_OPTIONS   1082
 #define MQIACF_CLUSTER_INFO          1083
 #define MQIACF_Q_MGR_DEFINITION_TYPE 1084
 #define MQIACF_Q_MGR_TYPE            1085
 #define MQIACF_ACTION                1086
 #define MQIACF_SUSPEND               1087
 #define MQIACF_BROKER_COUNT          1088
 #define MQIACF_APPL_COUNT            1089
 #define MQIACF_ANONYMOUS_COUNT       1090
 #define MQIACF_REG_REG_OPTIONS       1091
 #define MQIACF_DELETE_OPTIONS        1092
 #define MQIACF_CLUSTER_Q_MGR_ATTRS   1093
 #define MQIACF_REFRESH_REPOSITORY    1095
 #define MQIACF_REMOVE_QUEUES         1096
 #define MQIACF_OPEN_INPUT_TYPE       1098
 #define MQIACF_OPEN_OUTPUT           1099
 #define MQIACF_OPEN_SET              1100
 #define MQIACF_OPEN_INQUIRE          1101
 #define MQIACF_OPEN_BROWSE           1102
 #define MQIACF_Q_STATUS_TYPE         1103
 #define MQIACF_Q_HANDLE              1104
 #define MQIACF_Q_STATUS              1105
 #define MQIACF_LAST_USED             1105

 #define MQIACH_FIRST                   1501
 #define MQIACH_XMIT_PROTOCOL_TYPE      1501
 #define MQIACH_BATCH_SIZE              1502
 #define MQIACH_DISC_INTERVAL           1503
 #define MQIACH_SHORT_TIMER             1504
 #define MQIACH_SHORT_RETRY             1505
 #define MQIACH_LONG_TIMER              1506
 #define MQIACH_LONG_RETRY              1507
 #define MQIACH_PUT_AUTHORITY           1508
 #define MQIACH_SEQUENCE_NUMBER_WRAP    1509
 #define MQIACH_MAX_MSG_LENGTH          1510
 #define MQIACH_CHANNEL_TYPE            1511
 #define MQIACH_DATA_COUNT              1512
 #define MQIACH_MSG_SEQUENCE_NUMBER     1514
 #define MQIACH_DATA_CONVERSION         1515
 #define MQIACH_IN_DOUBT                1516
 #define MQIACH_MCA_TYPE                1517
 #define MQIACH_CHANNEL_INSTANCE_TYPE   1523
 #define MQIACH_CHANNEL_INSTANCE_ATTRS  1524
 #define MQIACH_CHANNEL_ERROR_DATA      1525
 #define MQIACH_CHANNEL_TABLE           1526
 #define MQIACH_CHANNEL_STATUS          1527
 #define MQIACH_INDOUBT_STATUS          1528
 #define MQIACH_LAST_SEQ_NUMBER         1529
 #define MQIACH_LAST_SEQUENCE_NUMBER    1529
 #define MQIACH_CURRENT_MSGS            1531
 #define MQIACH_CURRENT_SEQ_NUMBER      1532
 #define MQIACH_CURRENT_SEQUENCE_NUMBER 1532
 #define MQIACH_SSL_RETURN_CODE         1533
 #define MQIACH_MSGS                    1534
 #define MQIACH_BYTES_SENT              1535
 #define MQIACH_BYTES_RCVD              1536
 #define MQIACH_BYTES_RECEIVED          1536
 #define MQIACH_BATCHES                 1537
 #define MQIACH_BUFFERS_SENT            1538
 #define MQIACH_BUFFERS_RCVD            1539
 #define MQIACH_BUFFERS_RECEIVED        1539
 #define MQIACH_LONG_RETRIES_LEFT       1540
 #define MQIACH_SHORT_RETRIES_LEFT      1541
 #define MQIACH_MCA_STATUS              1542
 #define MQIACH_STOP_REQUESTED          1543
 #define MQIACH_MR_COUNT                1544
 #define MQIACH_MR_INTERVAL             1545
 #define MQIACH_NPM_SPEED               1562
 #define MQIACH_HB_INTERVAL             1563
 #define MQIACH_BATCH_INTERVAL          1564
 #define MQIACH_NETWORK_PRIORITY        1565
 #define MQIACH_KEEP_ALIVE_INTERVAL     1566
 #define MQIACH_BATCH_HB                1567
 #define MQIACH_SSL_CLIENT_AUTH         1568 
 #define MQIACH_LAST_USED               1568


 /*********************************************************************/
 /*  Values Related to Character Parameter Structures                 */
 /*********************************************************************/

 /* Character Parameter Types */
 #define MQCACF_FIRST                   3001
 #define MQCACF_FROM_Q_NAME             3001
 #define MQCACF_TO_Q_NAME               3002
 #define MQCACF_FROM_PROCESS_NAME       3003
 #define MQCACF_TO_PROCESS_NAME         3004
 #define MQCACF_FROM_NAMELIST_NAME      3005
 #define MQCACF_TO_NAMELIST_NAME        3006
 #define MQCACF_FROM_CHANNEL_NAME       3007
 #define MQCACF_TO_CHANNEL_NAME         3008
 #define MQCACF_FROM_AUTH_INFO_NAME     3009
 #define MQCACF_TO_AUTH_INFO_NAME       3010
 #define MQCACF_Q_NAMES                 3011
 #define MQCACF_PROCESS_NAMES           3012
 #define MQCACF_NAMELIST_NAMES          3013
 #define MQCACF_ESCAPE_TEXT             3014
 #define MQCACF_LOCAL_Q_NAMES           3015
 #define MQCACF_MODEL_Q_NAMES           3016
 #define MQCACF_ALIAS_Q_NAMES           3017
 #define MQCACF_REMOTE_Q_NAMES          3018
 #define MQCACF_SENDER_CHANNEL_NAMES    3019
 #define MQCACF_SERVER_CHANNEL_NAMES    3020
 #define MQCACF_REQUESTER_CHANNEL_NAMES 3021
 #define MQCACF_RECEIVER_CHANNEL_NAMES  3022
 #define MQCACF_OBJECT_Q_MGR_NAME       3023
 #define MQCACF_APPL_NAME               3024
 #define MQCACF_USER_IDENTIFIER         3025
 #define MQCACF_AUX_ERROR_DATA_STR_1    3026
 #define MQCACF_AUX_ERROR_DATA_STR_2    3027
 #define MQCACF_AUX_ERROR_DATA_STR_3    3028
 #define MQCACF_BRIDGE_NAME             3029
 #define MQCACF_STREAM_NAME             3030
 #define MQCACF_TOPIC                   3031
 #define MQCACF_PARENT_Q_MGR_NAME       3032
 #define MQCACF_CORREL_ID               3033
 #define MQCACF_PUBLISH_TIMESTAMP       3034
 #define MQCACF_STRING_DATA             3035
 #define MQCACF_SUPPORTED_STREAM_NAME   3036
 #define MQCACF_REG_TOPIC               3037
 #define MQCACF_REG_TIME                3038
 #define MQCACF_REG_USER_ID             3039
 #define MQCACF_CHILD_Q_MGR_NAME        3040
 #define MQCACF_REG_STREAM_NAME         3041
 #define MQCACF_REG_Q_MGR_NAME          3042
 #define MQCACF_REG_Q_NAME              3043
 #define MQCACF_REG_CORREL_ID           3044
 #define MQCACF_EVENT_USER_ID           3045
 #define MQCACF_EVENT_Q_MGR             3047
 #define MQCACF_AUTH_INFO_NAMES         3048
 #define MQCACF_EVENT_APPL_IDENTITY     3049
 #define MQCACF_EVENT_APPL_NAME         3050
 #define MQCACF_EVENT_APPL_ORIGIN       3051
 #define MQCACF_SUBSCRIPTION_NAME       3052
 #define MQCACF_REG_SUB_NAME            3053
 #define MQCACF_SUBSCRIPTION_IDENTITY   3054
 #define MQCACF_REG_SUB_IDENTITY        3055
 #define MQCACF_SUBSCRIPTION_USER_DATA  3056
 #define MQCACF_REG_SUB_USER_DATA       3057
 #define MQCACF_APPL_TAG                3058
 #define MQCACF_LAST_USED               3058

 #define MQCACH_FIRST               3501
 #define MQCACH_CHANNEL_NAME        3501
 #define MQCACH_DESC                3502
 #define MQCACH_MODE_NAME           3503
 #define MQCACH_TP_NAME             3504
 #define MQCACH_XMIT_Q_NAME         3505
 #define MQCACH_CONNECTION_NAME     3506
 #define MQCACH_MCA_NAME            3507
 #define MQCACH_SEC_EXIT_NAME       3508
 #define MQCACH_MSG_EXIT_NAME       3509
 #define MQCACH_SEND_EXIT_NAME      3510
 #define MQCACH_RCV_EXIT_NAME       3511
 #define MQCACH_CHANNEL_NAMES       3512
 #define MQCACH_SEC_EXIT_USER_DATA  3513
 #define MQCACH_MSG_EXIT_USER_DATA  3514
 #define MQCACH_SEND_EXIT_USER_DATA 3515
 #define MQCACH_RCV_EXIT_USER_DATA  3516
 #define MQCACH_USER_ID             3517
 #define MQCACH_PASSWORD            3518
 #define MQCACH_LOCAL_ADDRESS       3520
 #define MQCACH_LAST_MSG_TIME       3524
 #define MQCACH_LAST_MSG_DATE       3525
 #define MQCACH_MCA_USER_ID         3527
 #define MQCACH_CHANNEL_START_TIME  3528
 #define MQCACH_CHANNEL_START_DATE  3529
 #define MQCACH_MCA_JOB_NAME        3530
 #define MQCACH_LAST_LUWID          3531
 #define MQCACH_CURRENT_LUWID       3532
 #define MQCACH_FORMAT_NAME         3533
 #define MQCACH_MR_EXIT_NAME        3534
 #define MQCACH_MR_EXIT_USER_DATA   3535
 #define MQCACH_SSL_CIPHER_SPEC     3544
 #define MQCACH_SSL_PEER_NAME       3545
 #define MQCACH_SSL_HANDSHAKE_STAGE 3546
 #define MQCACH_SSL_SHORT_PEER_NAME 3547
 #define MQCACH_LAST_USED           3547


 /*********************************************************************/
 /*  Parameter Values                                                 */
 /*********************************************************************/

 /* Action Option */
 #define MQACT_FORCE_REMOVE 1

 /* Bridge Type */
 #define MQBT_OTMA 1

 /* Refresh Repository Option */
 #define MQCFO_REFRESH_REPOSITORY_YES 1
 #define MQCFO_REFRESH_REPOSITORY_NO  0
                                                                        
 /* Remove Queues Option */
 #define MQCFO_REMOVE_QUEUES_YES 1
 #define MQCFO_REMOVE_QUEUES_NO  0
                                                                        
 /* Indoubt Status */
 #define MQCHIDS_NOT_INDOUBT 0
 #define MQCHIDS_INDOUBT     1

 /* Channel Status */
 #define MQCHS_INACTIVE     0
 #define MQCHS_BINDING      1
 #define MQCHS_STARTING     2
 #define MQCHS_RUNNING      3
 #define MQCHS_STOPPING     4
 #define MQCHS_RETRYING     5
 #define MQCHS_STOPPED      6
 #define MQCHS_REQUESTING   7
 #define MQCHS_PAUSED       8
 #define MQCHS_INITIALIZING 13

 /* Channel Stop Option */
 #define MQCHSR_STOP_NOT_REQUESTED 0
 #define MQCHSR_STOP_REQUESTED     1

 /* Channel Table Type */
 #define MQCHTAB_Q_MGR    1
 #define MQCHTAB_CLNTCONN 2

 /* Coupling Facility Recoverability */
 #define MQCFR_YES 1
 #define MQCFR_NO  0

 /* Escape Type */
 #define MQET_MQSC 1

 /* Event Origin */
 #define MQEVO_OTHER    0
 #define MQEVO_CONSOLE  1
 #define MQEVO_INIT     2
 #define MQEVO_MSG      3
 #define MQEVO_MQSET    4
 #define MQEVO_INTERNAL 5

 /* Event Recording */
 #define MQEVR_DISABLED 0
 #define MQEVR_ENABLED  1

 /* Force Option */
 #define MQFC_YES 1
 #define MQFC_NO  0

 /* Indoubt Option */
 #define MQIDO_COMMIT  1
 #define MQIDO_BACKOUT 2

 /* Message Channel Agent Status */
 #define MQMCAS_STOPPED 0
 #define MQMCAS_RUNNING 3

 /* Mode Option */
 #define MQMODE_FORCE     0
 #define MQMODE_QUIESCE   1
 #define MQMODE_TERMINATE 2

 /* Purge Option */
 #define MQPO_YES 1
 #define MQPO_NO  0

 /* Queue Manager Definition Type */
 #define MQQMDT_EXPLICIT_CLUSTER_SENDER 1
 #define MQQMDT_AUTO_CLUSTER_SENDER     2
 #define MQQMDT_AUTO_EXP_CLUSTER_SENDER 4
 #define MQQMDT_CLUSTER_RECEIVER        3

 /* Queue Manager Type */
 #define MQQMT_NORMAL     0
 #define MQQMT_REPOSITORY 1

 /* Quiesce Option */
 #define MQQO_YES 1
 #define MQQO_NO  0

 /* Queue Service-Interval Events */
 #define MQQSIE_NONE 0
 #define MQQSIE_HIGH 1
 #define MQQSIE_OK   2

 /* Queue Status Open Type */
 #define MQQSOT_ALL    1
 #define MQQSOT_INPUT  2
 #define MQQSOT_OUTPUT 3

 /* Queue Status Open Options e.g. SET, BROWSE, INPUT */
 #define MQQSO_NO         0
 #define MQQSO_YES        1
 #define MQQSO_SHARED     1
 #define MQQSO_EXCLUSIVE  2

 /* Queue Status Uncommitted Messages */
 #define MQQSUM_YES 1
 #define MQQSUM_NO  0

 /* Replace Option */
 #define MQRP_YES 1
 #define MQRP_NO  0

 /* Reason Qualifiers */
 #define MQRQ_CONN_NOT_AUTHORIZED      1
 #define MQRQ_OPEN_NOT_AUTHORIZED      2
 #define MQRQ_CLOSE_NOT_AUTHORIZED     3
 #define MQRQ_CMD_NOT_AUTHORIZED       4
 #define MQRQ_Q_MGR_STOPPING           5
 #define MQRQ_Q_MGR_QUIESCING          6
 #define MQRQ_CHANNEL_STOPPED_OK       7
 #define MQRQ_CHANNEL_STOPPED_ERROR    8
 #define MQRQ_CHANNEL_STOPPED_RETRY    9
 #define MQRQ_CHANNEL_STOPPED_DISABLED 10
 #define MQRQ_BRIDGE_STOPPED_OK        11
 #define MQRQ_BRIDGE_STOPPED_ERROR     12
 #define MQRQ_SSL_HANDSHAKE_ERROR      13
 #define MQRQ_SSL_CIPHER_SPEC_ERROR    14
 #define MQRQ_SSL_CLIENT_AUTH_ERROR    15
 #define MQRQ_SSL_PEER_NAME_ERROR      16

 /* Queue Definition Scope */
 #define MQSCO_Q_MGR 1
 #define MQSCO_CELL  2

 /* Suspend Status */
 #define MQSUS_YES 1
 #define MQSUS_NO  0


 /*********************************************************************/
 /*  Values Related to Publish/Subscribe                              */
 /*********************************************************************/

 /* Delete Options */
 #define MQDELO_NONE  0x00000000
 #define MQDELO_LOCAL 0x00000004

 /* Publication Options */
 #define MQPUBO_NONE                    0x00000000
 #define MQPUBO_CORREL_ID_AS_IDENTITY   0x00000001
 #define MQPUBO_RETAIN_PUBLICATION      0x00000002
 #define MQPUBO_OTHER_SUBSCRIBERS_ONLY  0x00000004
 #define MQPUBO_NO_REGISTRATION         0x00000008
 #define MQPUBO_IS_RETAINED_PUBLICATION 0x00000010

 /* Registration Options */
 #define MQREGO_NONE                    0x00000000
 #define MQREGO_CORREL_ID_AS_IDENTITY   0x00000001
 #define MQREGO_ANONYMOUS               0x00000002
 #define MQREGO_LOCAL                   0x00000004
 #define MQREGO_DIRECT_REQUESTS         0x00000008
 #define MQREGO_NEW_PUBLICATIONS_ONLY   0x00000010
 #define MQREGO_PUBLISH_ON_REQUEST_ONLY 0x00000020
 #define MQREGO_DEREGISTER_ALL          0x00000040
 #define MQREGO_INCLUDE_STREAM_NAME     0x00000080
 #define MQREGO_INFORM_IF_RETAINED      0x00000100
 #define MQREGO_DUPLICATES_OK           0x00000200
 #define MQREGO_NON_PERSISTENT          0x00000400
 #define MQREGO_PERSISTENT              0x00000800
 #define MQREGO_PERSISTENT_AS_PUBLISH   0x00001000
 #define MQREGO_PERSISTENT_AS_Q         0x00002000
 #define MQREGO_ADD_NAME                0x00004000
 #define MQREGO_NO_ALTERATION           0x00008000
 #define MQREGO_FULL_RESPONSE           0x00010000
 #define MQREGO_JOIN_SHARED             0x00020000
 #define MQREGO_JOIN_EXCLUSIVE          0x00040000
 #define MQREGO_LEAVE_ONLY              0x00080000
 #define MQREGO_VARIABLE_USER_ID        0x00100000
 #define MQREGO_LOCKED                  0x00200000

 /* User Attribute Selectors */
 #define MQUA_FIRST 65536
 #define MQUA_LAST  999999999


 /*********************************************************************/
 /*  MQCFH Structure -- PCF Header                                    */
 /*********************************************************************/

 typedef struct tagMQCFH MQCFH;
 typedef MQCFH MQPOINTER PMQCFH;

 struct tagMQCFH {
   MQLONG  Type;            /* Structure type */
   MQLONG  StrucLength;     /* Structure length */
   MQLONG  Version;         /* Structure version number */
   MQLONG  Command;         /* Command identifier */
   MQLONG  MsgSeqNumber;    /* Message sequence number */
   MQLONG  Control;         /* Control options */
   MQLONG  CompCode;        /* Completion code */
   MQLONG  Reason;          /* Reason code qualifying completion code */
   MQLONG  ParameterCount;  /* Count of parameter structures */
 };

 #define MQCFH_DEFAULT MQCFT_COMMAND,\
                       MQCFH_STRUC_LENGTH,\
                       MQCFH_VERSION_1,\
                       MQCMD_NONE,\
                       1,\
                       MQCFC_LAST,\
                       MQCC_OK,\
                       MQRC_NONE,\
                       0


 /*********************************************************************/
 /*  MQCFBS Structure -- PCF Byte String Parameter                    */
 /*********************************************************************/

 typedef struct tagMQCFBS MQCFBS;
 typedef MQCFBS MQPOINTER PMQCFBS;

 struct tagMQCFBS {
   MQLONG  Type;          /* Structure type */
   MQLONG  StrucLength;   /* Structure length */
   MQLONG  Parameter;     /* Parameter identifier */
   MQLONG  StringLength;  /* Length of string */
   MQBYTE  String[1];     /* String value -- first character */
 };

 #define MQCFBS_DEFAULT MQCFT_BYTE_STRING,\
                        MQCFBS_STRUC_LENGTH_FIXED,\
                        0,\
                        0,\
                        {""}


 /*********************************************************************/
 /*  MQCFIL Structure -- PCF Integer-List Parameter                   */
 /*********************************************************************/

 typedef struct tagMQCFIL MQCFIL;
 typedef MQCFIL MQPOINTER PMQCFIL;

 struct tagMQCFIL {
   MQLONG  Type;         /* Structure type */
   MQLONG  StrucLength;  /* Structure length */
   MQLONG  Parameter;    /* Parameter identifier */
   MQLONG  Count;        /* Count of parameter values */
   MQLONG  Values[1];    /* Parameter values -- first element */
 };

 #define MQCFIL_DEFAULT MQCFT_INTEGER_LIST,\
                        MQCFIL_STRUC_LENGTH_FIXED,\
                        0,\
                        0,\
                        {0}


 /*********************************************************************/
 /*  MQCFIN Structure -- PCF Integer Parameter                        */
 /*********************************************************************/

 typedef struct tagMQCFIN MQCFIN;
 typedef MQCFIN MQPOINTER PMQCFIN;

 struct tagMQCFIN {
   MQLONG  Type;         /* Structure type */
   MQLONG  StrucLength;  /* Structure length */
   MQLONG  Parameter;    /* Parameter identifier */
   MQLONG  Value;        /* Parameter value */
 };

 #define MQCFIN_DEFAULT MQCFT_INTEGER,\
                        MQCFIN_STRUC_LENGTH,\
                        0,\
                        0


 /*********************************************************************/
 /*  MQCFSL Structure -- PCF String-List Parameter                    */
 /*********************************************************************/

 typedef struct tagMQCFSL MQCFSL;
 typedef MQCFSL MQPOINTER PMQCFSL;

 struct tagMQCFSL {
   MQLONG  Type;            /* Structure type */
   MQLONG  StrucLength;     /* Structure length */
   MQLONG  Parameter;       /* Parameter identifier */
   MQLONG  CodedCharSetId;  /* Coded character set identifier */
   MQLONG  Count;           /* Count of parameter values */
   MQLONG  StringLength;    /* Length of one string */
   MQCHAR  Strings[1];      /* String values -- first character */
 };

 #define MQCFSL_DEFAULT MQCFT_STRING_LIST,\
                        MQCFSL_STRUC_LENGTH_FIXED,\
                        0,\
                        MQCCSI_DEFAULT,\
                        0,\
                        0,\
                        {""}


 /*********************************************************************/
 /*  MQCFST Structure -- PCF String Parameter                         */
 /*********************************************************************/

 typedef struct tagMQCFST MQCFST;
 typedef MQCFST MQPOINTER PMQCFST;

 struct tagMQCFST {
   MQLONG  Type;            /* Structure type */
   MQLONG  StrucLength;     /* Structure length */
   MQLONG  Parameter;       /* Parameter identifier */
   MQLONG  CodedCharSetId;  /* Coded character set identifier */
   MQLONG  StringLength;    /* Length of string */
   MQCHAR  String[1];       /* String value -- first character */
 };

 #define MQCFST_DEFAULT MQCFT_STRING,\
                        MQCFST_STRUC_LENGTH_FIXED,\
                        0,\
                        MQCCSI_DEFAULT,\
                        0,\
                        {""}


 #if defined(__cplusplus)
   }
 #endif

 /*********************************************************************/
 /*  End of CMQCFC                                                    */
 /*********************************************************************/
 #endif  /* End of header file */

