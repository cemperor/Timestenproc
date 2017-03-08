 #if !defined(MQPSC_INCLUDED)          /* File not yet included?      */
   #define MQPSC_INCLUDED              /* Show file now included      */
 /*********************************************************************/
 /*                                                                   */
 /*                  WebSphere MQ for Windows                         */
 /*                                                                   */
 /*  FILE NAME:      CMQPSC                                           */
 /*                                                                   */
 /*  DESCRIPTION:    Declarations for Publish/Subscribe               */
 /*                                                                   */
 /*********************************************************************/
 /*  @START_COPYRIGHT@                                                */
 /*  Licensed Materials - Property of IBM                             */
 /*                                                                   */
 /*  5724-B41                                                         */
 /*                                                                   */
 /*  (C) Copyright IBM Corporation 1998, 2002.                        */
 /*                                                                   */
 /*  Status: Version 5 Release 3                                      */
 /*  @END_COPYRIGHT@                                                  */
 /*********************************************************************/
 /*                                                                   */
 /*  FUNCTION:       This file declares the named constants for       */
 /*                  publish/subscribe.                               */
 /*                                                                   */
 /*  PROCESSOR:      C                                                */
 /*                                                                   */
 /*********************************************************************/

 #if defined(__cplusplus)
   extern "C" {
 #endif

 /*********************************************************************/
 /*  Publish/Subscribe Tags                                           */
 /*********************************************************************/

 /* Tags as strings */
 #define MQPS_COMMAND              "MQPSCommand"
 #define MQPS_COMP_CODE            "MQPSCompCode"
 #define MQPS_CORREL_ID              "MQPSCorrelId"
 #define MQPS_DELETE_OPTIONS       "MQPSDelOpts"
 #define MQPS_ERROR_ID             "MQPSErrorId"
 #define MQPS_ERROR_POS            "MQPSErrorPos"
 #define MQPS_INTEGER_DATA         "MQPSIntData"
 #define MQPS_PARAMETER_ID         "MQPSParmId"
 #define MQPS_PUBLICATION_OPTIONS  "MQPSPubOpts"
 #define MQPS_PUBLISH_TIMESTAMP    "MQPSPubTime"
 #define MQPS_Q_MGR_NAME           "MQPSQMgrName"
 #define MQPS_Q_NAME               "MQPSQName"
 #define MQPS_REASON               "MQPSReason"
 #define MQPS_REASON_TEXT          "MQPSReasonText"
 #define MQPS_REGISTRATION_OPTIONS "MQPSRegOpts"
 #define MQPS_SEQUENCE_NUMBER      "MQPSSeqNum"
 #define MQPS_STREAM_NAME          "MQPSStreamName"
 #define MQPS_STRING_DATA          "MQPSStringData"
 #define MQPS_SUBSCRIPTION_IDENTITY "MQPSSubIdentity"
 #define MQPS_SUBSCRIPTION_NAME    "MQPSSubName"
 #define MQPS_SUBSCRIPTION_USER_DATA "MQPSSubUserData"
 #define MQPS_TOPIC                "MQPSTopic"
 #define MQPS_USER_ID              "MQPSUserId"

 /* Tags as blank-enclosed strings */
 #define MQPS_COMMAND_B              " MQPSCommand "
 #define MQPS_COMP_CODE_B            " MQPSCompCode "
 #define MQPS_CORREL_ID_B            " MQPSCorrelId "
 #define MQPS_DELETE_OPTIONS_B       " MQPSDelOpts "
 #define MQPS_ERROR_ID_B             " MQPSErrorId "
 #define MQPS_ERROR_POS_B            " MQPSErrorPos "
 #define MQPS_INTEGER_DATA_B         " MQPSIntData "
 #define MQPS_PARAMETER_ID_B         " MQPSParmId "
 #define MQPS_PUBLICATION_OPTIONS_B  " MQPSPubOpts "
 #define MQPS_PUBLISH_TIMESTAMP_B    " MQPSPubTime "
 #define MQPS_Q_MGR_NAME_B           " MQPSQMgrName "
 #define MQPS_Q_NAME_B               " MQPSQName "
 #define MQPS_REASON_B               " MQPSReason "
 #define MQPS_REASON_TEXT_B          " MQPSReasonText "
 #define MQPS_REGISTRATION_OPTIONS_B " MQPSRegOpts "
 #define MQPS_SEQUENCE_NUMBER_B      " MQPSSeqNum "
 #define MQPS_STREAM_NAME_B          " MQPSStreamName "
 #define MQPS_STRING_DATA_B          " MQPSStringData "
 #define MQPS_SUBSCRIPTION_IDENTITY_B " MQPSSubIdentity "
 #define MQPS_SUBSCRIPTION_NAME_B    " MQPSSubName "
 #define MQPS_SUBSCRIPTION_USER_DATA_B " MQPSSubUserData "
 #define MQPS_TOPIC_B                " MQPSTopic "
 #define MQPS_USER_ID_B              " MQPSUserId "

 /* Tags as blank-enclosed arrays */
 #define MQPS_COMMAND_A              ' ','M','Q','P','S',\
                                     'C','o','m','m','a','n','d',' '
 #define MQPS_COMP_CODE_A            ' ','M','Q','P','S',\
                                     'C','o','m','p',\
                                     'C','o','d','e',' '
 #define MQPS_CORREL_ID_A            ' ','M','Q','P','S',\
                                     'C','o','r','r','e','l',\
                                     'I','d',' '
 #define MQPS_DELETE_OPTIONS_A       ' ','M','Q','P','S',\
                                     'D','e','l','O','p','t','s',' '
 #define MQPS_ERROR_ID_A             ' ','M','Q','P','S',\
                                     'E','r','r','o','r','I','d',' '
 #define MQPS_ERROR_POS_A            ' ','M','Q','P','S',\
                                     'E','r','r','o','r',\
                                     'P','o','s',' '
 #define MQPS_INTEGER_DATA_A         ' ','M','Q','P','S',\
                                     'I','n','t','D','a','t','a',' '
 #define MQPS_PARAMETER_ID_A         ' ','M','Q','P','S',\
                                     'P','a','r','m','I','d',' '
 #define MQPS_PUBLICATION_OPTIONS_A  ' ','M','Q','P','S',\
                                     'P','u','b','O','p','t','s',' '
 #define MQPS_PUBLISH_TIMESTAMP_A    ' ','M','Q','P','S',\
                                     'P','u','b','T','i','m','e',' '
 #define MQPS_Q_MGR_NAME_A           ' ','M','Q','P','S',\
                                     'Q','M','g','r',\
                                     'N','a','m','e',' '
 #define MQPS_Q_NAME_A               ' ','M','Q','P','S',\
                                     'Q','N','a','m','e',' '
 #define MQPS_REASON_A               ' ','M','Q','P','S',\
                                     'R','e','a','s','o','n',' '
 #define MQPS_REASON_TEXT_A          ' ','M','Q','P','S',\
                                     'R','e','a','s','o','n',\
                                     'T','e','x','t',' '
 #define MQPS_REGISTRATION_OPTIONS_A ' ','M','Q','P','S',\
                                     'R','e','g','O','p','t','s',' '
 #define MQPS_SEQUENCE_NUMBER_A      ' ','M','Q','P','S',\
                                     'S','e','q','N','u','m',' '
 #define MQPS_STREAM_NAME_A          ' ','M','Q','P','S',\
                                     'S','t','r','e','a','m',\
                                     'N','a','m','e',' '
 #define MQPS_STRING_DATA_A          ' ','M','Q','P','S',\
                                     'S','t','r','i','n','g',\
                                     'D','a','t','a',' '
 #define MQPS_SUBSCRIPTION_IDENTITY_A  ' ','M','Q','P','S',\
                                     'S','u','b',\
                                     'I','d','e','n',\
                                     't','i','t','y',' '
 #define MQPS_SUBSCRIPTION_NAME_A    ' ','M','Q','P','S',\
                                     'S','u','b','N','a','m','e',' '
#define MQPS_SUBSCRIPTION_USER_DATA_A ' ','M','Q','P','S',\
                                     'S','u','b','U','s','e','r',\
                                     'D','a','t','a',' '
 #define MQPS_TOPIC_A                ' ','M','Q','P','S',\
                                     'T','o','p','i','c',' '
 #define MQPS_USER_ID_A              ' ','M','Q','P','S',\
                                     'U','s','e','r','I','d',' '


 /*********************************************************************/
 /*  Values for MQPS_COMMAND Tag                                      */
 /*********************************************************************/

 /* Values as strings */
 #define MQPS_DELETE_PUBLICATION    "DeletePub"
 #define MQPS_DEREGISTER_PUBLISHER  "DeregPub"
 #define MQPS_DEREGISTER_SUBSCRIBER "DeregSub"
 #define MQPS_PUBLISH               "Publish"
 #define MQPS_REGISTER_PUBLISHER    "RegPub"
 #define MQPS_REGISTER_SUBSCRIBER   "RegSub"
 #define MQPS_REQUEST_UPDATE        "ReqUpdate"

 /* Values as blank-enclosed strings */
 #define MQPS_DELETE_PUBLICATION_B    " DeletePub "
 #define MQPS_DEREGISTER_PUBLISHER_B  " DeregPub "
 #define MQPS_DEREGISTER_SUBSCRIBER_B " DeregSub "
 #define MQPS_PUBLISH_B               " Publish "
 #define MQPS_REGISTER_PUBLISHER_B    " RegPub "
 #define MQPS_REGISTER_SUBSCRIBER_B   " RegSub "
 #define MQPS_REQUEST_UPDATE_B        " ReqUpdate "

 /* Values as blank-enclosed arrays */
 #define MQPS_DELETE_PUBLICATION_A    ' ','D','e','l','e','t','e',\
                                      'P','u','b',' '
 #define MQPS_DEREGISTER_PUBLISHER_A  ' ','D','e','r','e','g',\
                                      'P','u','b',' '
 #define MQPS_DEREGISTER_SUBSCRIBER_A ' ','D','e','r','e','g',\
                                      'S','u','b',' '
 #define MQPS_PUBLISH_A               ' ','P','u','b',\
                                      'l','i','s','h',' '
 #define MQPS_REGISTER_PUBLISHER_A    ' ','R','e','g','P','u','b',' '
 #define MQPS_REGISTER_SUBSCRIBER_A   ' ','R','e','g','S','u','b',' '
 #define MQPS_REQUEST_UPDATE_A        ' ','R','e','q',\
                                      'U','p','d','a','t','e',' '


 /*********************************************************************/
 /*  Values for following tags:                                       */
 /*    MQPS_DELETE_OPTIONS                                            */
 /*    MQPS_PUBLICATION_OPTIONS                                       */
 /*    MQPS_REGISTRATION_OPTIONS                                      */
 /*********************************************************************/

 /* Values as strings */
 #define MQPS_ADD_NAME                "AddName"
 #define MQPS_ANONYMOUS               "Anon"
 #define MQPS_CORREL_ID_AS_IDENTITY   "CorrelAsId"
 #define MQPS_DEREGISTER_ALL          "DeregAll"
 #define MQPS_DIRECT_REQUESTS         "DirectReq"
 #define MQPS_DUPLICATES_OK           "DupsOK"
 #define MQPS_FULL_RESPONSE           "FullResp"
 #define MQPS_INCLUDE_STREAM_NAME     "InclStreamName"
 #define MQPS_INFORM_IF_RETAINED      "InformIfRet"
 #define MQPS_IS_RETAINED_PUBLICATION "IsRetainedPub"
 #define MQPS_JOIN_EXCLUSIVE          "JoinExcl"
 #define MQPS_JOIN_SHARED             "JoinShared"
 #define MQPS_LEAVE_ONLY              "LeaveOnly"
 #define MQPS_LOCAL                   "Local"
 #define MQPS_LOCKED                  "Locked"
 #define MQPS_NEW_PUBLICATIONS_ONLY   "NewPubsOnly"
 #define MQPS_NO_ALTERATION           "NoAlter"
 #define MQPS_NO_REGISTRATION         "NoReg"
 #define MQPS_NON_PERSISTENT          "NonPers"
 #define MQPS_NONE                    "None"
 #define MQPS_OTHER_SUBSCRIBERS_ONLY  "OtherSubsOnly"
 #define MQPS_PERSISTENT              "Pers"
 #define MQPS_PERSISTENT_AS_PUBLISH   "PersAsPub"
 #define MQPS_PERSISTENT_AS_Q         "PersAsQueue"
 #define MQPS_PUBLISH_ON_REQUEST_ONLY "PubOnReqOnly"
 #define MQPS_RETAIN_PUBLICATION      "RetainPub"
 #define MQPS_VARIABLE_USER_ID        "VariableUserId"

 /* Values as blank-enclosed strings */
 #define MQPS_ADD_NAME_B                " AddName "
 #define MQPS_ANONYMOUS_B               " Anon "
 #define MQPS_CORREL_ID_AS_IDENTITY_B   " CorrelAsId "
 #define MQPS_DEREGISTER_ALL_B          " DeregAll "
 #define MQPS_DIRECT_REQUESTS_B         " DirectReq "
 #define MQPS_DUPLICATES_OK_B           " DupsOK "
 #define MQPS_FULL_RESPONSE_B           " FullResp "
 #define MQPS_INCLUDE_STREAM_NAME_B     " InclStreamName "
 #define MQPS_INFORM_IF_RETAINED_B      " InformIfRet "
 #define MQPS_IS_RETAINED_PUBLICATION_B " IsRetainedPub "
 #define MQPS_JOIN_EXCLUSIVE_B          " JoinExcl "
 #define MQPS_JOIN_SHARED_B             " JoinShared "
 #define MQPS_LEAVE_ONLY_B              " LeaveOnly "
 #define MQPS_LOCAL_B                   " Local "
 #define MQPS_LOCKED_B                  " Locked "
 #define MQPS_NEW_PUBLICATIONS_ONLY_B   " NewPubsOnly "
 #define MQPS_NO_ALTERATION_B           " NoAlter "
 #define MQPS_NO_REGISTRATION_B         " NoReg "
 #define MQPS_NON_PERSISTENT_B          " NonPers "
 #define MQPS_NONE_B                    " None "
 #define MQPS_OTHER_SUBSCRIBERS_ONLY_B  " OtherSubsOnly "
 #define MQPS_PERSISTENT_B              " Pers "
 #define MQPS_PERSISTENT_AS_PUBLISH_B   " PersAsPub "
 #define MQPS_PERSISTENT_AS_Q_B         " PersAsQueue "
 #define MQPS_PUBLISH_ON_REQUEST_ONLY_B " PubOnReqOnly "
 #define MQPS_RETAIN_PUBLICATION_B      " RetainPub "
 #define MQPS_VARIABLE_USER_ID_B        " VariableUserId "

 /* Values as blank-enclosed arrays */
 #define MQPS_ADD_NAME_A                ' ','A','d','d',\
                                        'N','a','m','e',' '
 #define MQPS_ANONYMOUS_A               ' ','A','n','o','n',' '
 #define MQPS_CORREL_ID_AS_IDENTITY_A   ' ','C','o','r','r','e','l',\
                                        'A','s','I','d',' '
 #define MQPS_DEREGISTER_ALL_A          ' ','D','e','r','e','g',\
                                        'A','l','l',' '
 #define MQPS_DIRECT_REQUESTS_A         ' ','D','i','r','e','c','t',\
                                        'R','e','q',' '
 #define MQPS_DUPLICATES_OK_A           ' ','D','u','p','s','O','K',' '
 #define MQPS_FULL_RESPONSE_A           ' ','F','u','l','l',\
                                        'R','e','s','p',' '
 #define MQPS_INCLUDE_STREAM_NAME_A     ' ','I','n','c','l',\
                                        'S','t','r','e','a','m',\
                                        'N','a','m','e',' '
 #define MQPS_INFORM_IF_RETAINED_A      ' ','I','n','f','o','r','m',\
                                        'I','f','R','e','t',' '
 #define MQPS_IS_RETAINED_PUBLICATION_A ' ','I','s','R','e',\
                                        't','a','i','n','e','d',\
                                        'P','u','b',' '
 #define MQPS_JOIN_EXCLUSIVE_A          ' ','J','o','i','n',\
                                        'E','x','c','l',' '
 #define MQPS_JOIN_SHARED_A             ' ','J','o','i','n',\
                                        'S','h','a','r','e','d',' '
 #define MQPS_LEAVE_ONLY_A              ' ','L','e','a','v','e',\
                                        'O','n','l','y',' '
 #define MQPS_LOCAL_A                   ' ','L','o','c','a','l',' '
 #define MQPS_LOCKED_A                  ' ','L','o','c','k','e','d',' '
 #define MQPS_NEW_PUBLICATIONS_ONLY_A   ' ','N','e','w',\
                                        'P','u','b','s',\
                                        'O','n','l','y',' '
 #define MQPS_NO_ALTERATION_A           ' ','N','o',\
                                        'A','l','t','e','r',' '
 #define MQPS_NO_REGISTRATION_A         ' ','N','o','R','e','g',' '
 #define MQPS_NONE_A                    ' ','N','o','n','e',' '
 #define MQPS_NON_PERSISTENT_A          ' ','N','o','n',\
                                        'P','e','r','s',' '
 #define MQPS_OTHER_SUBSCRIBERS_ONLY_A  ' ','O','t','h','e','r',\
                                        'S','u','b','s',\
                                        'O','n','l','y',' '
 #define MQPS_PERSISTENT_A              ' ','P','e','r','s',' '
 #define MQPS_PERSISTENT_AS_PUBLISH_A   ' ','P','e','r','s',\
                                        'A','s','P','u','b',' '
 #define MQPS_PERSISTENT_AS_Q_A         ' ','P','e','r','s',\
                                        'A','s','Q','u','e','u','e',' '
 #define MQPS_PUBLISH_ON_REQUEST_ONLY_A ' ','P','u','b','O','n',\
                                        'R','e','q','O','n','l','y',' '
 #define MQPS_RETAIN_PUBLICATION_A      ' ','R','e','t','a','i','n',\
                                        'P','u','b',' '
 #define MQPS_VARIABLE_USER_ID_A        ' ','V','a','r','i',\
                                        'a','b','l','e',\
                                        'U','s','e','r','I','d',' '


 #if defined(__cplusplus)
   }
 #endif

 /*********************************************************************/
 /*  End of CMQPSC                                                    */
 /*********************************************************************/
 #endif  /* End of header file */

