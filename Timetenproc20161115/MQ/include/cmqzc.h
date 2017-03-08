 #if !defined(MQZC_INCLUDED)           /* File not yet included?      */
   #define MQZC_INCLUDED               /* Show file now included      */
 /*********************************************************************/
 /*                                                                   */
 /*                  WebSphere MQ for Windows                         */
 /*                                                                   */
 /*  FILE NAME:      CMQZC                                            */
 /*                                                                   */
 /*  DESCRIPTION:    Declarations for Installable Services            */
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
 /*  FUNCTION:       This file declares the functions, structures,    */
 /*                  and named constants for installable services.    */
 /*                                                                   */
 /*  PROCESSOR:      C                                                */
 /*                                                                   */
 /*********************************************************************/

 #if defined(__cplusplus)
   extern "C" {
 #endif

 /*********************************************************************/
 /*  Values Related to MQZAD Structure                                */
 /*********************************************************************/

 /* Structure Identifier */
 #define MQZAD_STRUC_ID "ZAD "

 /* Structure Identifier (array form) */
 #define MQZAD_STRUC_ID_ARRAY 'Z','A','D',' '

 /* Structure Version Number */
 #define MQZAD_VERSION_1       1
 #define MQZAD_CURRENT_VERSION 1


 /*********************************************************************/
 /*  Values Related to MQZED Structure                                */
 /*********************************************************************/

 /* Structure Identifier */
 #define MQZED_STRUC_ID "ZED "

 /* Structure Identifier (array form) */
 #define MQZED_STRUC_ID_ARRAY 'Z','E','D',' '

 /* Structure Version Number */
 #define MQZED_VERSION_1       1
 #define MQZED_CURRENT_VERSION 1


 /*********************************************************************/
 /*  Values Related to MQZEP Function                                 */
 /*********************************************************************/

 /* Function ids common to all services */
 #define MQZID_INIT 0
 #define MQZID_TERM 1

 /* Function ids for Authority service */
 #define MQZID_INIT_AUTHORITY         0
 #define MQZID_TERM_AUTHORITY         1
 #define MQZID_CHECK_AUTHORITY        2
 #define MQZID_COPY_ALL_AUTHORITY     3
 #define MQZID_DELETE_AUTHORITY       4
 #define MQZID_SET_AUTHORITY          5
 #define MQZID_GET_AUTHORITY          6
 #define MQZID_GET_EXPLICIT_AUTHORITY 7
 #define MQZID_REFRESH_CACHE          8
 #define MQZID_ENUMERATE_AUTHORITY_DATA 9

 /* Function ids for Name service */
 #define MQZID_INIT_NAME   0
 #define MQZID_TERM_NAME   1
 #define MQZID_LOOKUP_NAME 2
 #define MQZID_INSERT_NAME 3
 #define MQZID_DELETE_NAME 4

 /* Function ids for Userid service */
 #define MQZID_INIT_USERID 0
 #define MQZID_TERM_USERID 1
 #define MQZID_FIND_USERID 2


 /*********************************************************************/
 /*  Values Related to All Services                                   */
 /*********************************************************************/

 /* Initialization Options */
 #define MQZIO_PRIMARY   0
 #define MQZIO_SECONDARY 1

 /* Termination Options */
 #define MQZTO_PRIMARY   0
 #define MQZTO_SECONDARY 1

 /* Continuation Indicator */
 #define MQZCI_DEFAULT  0
 #define MQZCI_CONTINUE 0
 #define MQZCI_STOP     1


 /*********************************************************************/
 /*  Values Related to Authority Service                              */
 /*********************************************************************/

 /* Service Interface Version */
 #define MQZAS_VERSION_1 1
 #define MQZAS_VERSION_2 2
 #define MQZAS_VERSION_3 3
 #define MQZAS_VERSION_4 4

 /* Authorizations */
 #define MQZAO_CONNECT                  0x00000001
 #define MQZAO_BROWSE                   0x00000002
 #define MQZAO_INPUT                    0x00000004
 #define MQZAO_OUTPUT                   0x00000008
 #define MQZAO_INQUIRE                  0x00000010
 #define MQZAO_SET                      0x00000020
 #define MQZAO_PASS_IDENTITY_CONTEXT    0x00000040
 #define MQZAO_PASS_ALL_CONTEXT         0x00000080
 #define MQZAO_SET_IDENTITY_CONTEXT     0x00000100
 #define MQZAO_SET_ALL_CONTEXT          0x00000200
 #define MQZAO_ALTERNATE_USER_AUTHORITY 0x00000400
 #define MQZAO_ALL_MQI                  0x000007ff
 #define MQZAO_CREATE                   0x00010000
 #define MQZAO_DELETE                   0x00020000
 #define MQZAO_DISPLAY                  0x00040000
 #define MQZAO_CHANGE                   0x00080000
 #define MQZAO_CLEAR                    0x00100000
 #define MQZAO_AUTHORIZE                0x00800000
 #define MQZAO_ALL_ADMIN                0x009e0000
 #define MQZAO_ALL                      0x009e07ff
 #define MQZAO_REMOVE                   0x01000000
 #define MQZAO_NONE                     0x00000000

 /* Entity Types */
 #define MQZAET_NONE      0x00000000
 #define MQZAET_PRINCIPAL 0x00000001
 #define MQZAET_GROUP     0x00000002
 #define MQZAET_UNKNOWN   0x00000003

 /* Start-Enumeration Indicator */
 #define MQZSE_START    1
 #define MQZSE_CONTINUE 0


 /*********************************************************************/
 /*  Values Related to Name Service                                   */
 /*********************************************************************/

 /* Service Interface Version */
 #define MQZNS_VERSION_1 1


 /*********************************************************************/
 /*  Values Related to Userid Service                                 */
 /*********************************************************************/

 /* Service Interface Version */
 #define MQZUS_VERSION_1 1


 /*********************************************************************/
 /*  MQZED Structure -- Entity Data                                   */
 /*********************************************************************/

 typedef struct tagMQZED MQZED;
 typedef MQZED MQPOINTER PMQZED;

 struct tagMQZED {
   MQCHAR4   StrucId;          /* Structure identifier */
   MQLONG    Version;          /* Structure version number */
   PMQCHAR   EntityNamePtr;    /* Address of entity name */
   PMQCHAR   EntityDomainPtr;  /* Address of entity domain name */
   MQBYTE40  SecurityId;       /* Security identifier */
 };

 #define MQZED_DEFAULT {MQZED_STRUC_ID_ARRAY},\
                       MQZED_VERSION_1,\
                       NULL,\
                       NULL,\
                       {MQSID_NONE_ARRAY}


 /*********************************************************************/
 /*  MQZAD Structure -- Authority Data                                */
 /*********************************************************************/
                                                                        
 typedef struct tagMQZAD MQZAD;
 typedef MQZAD MQPOINTER PMQZAD;
 
 struct tagMQZAD {
   MQCHAR4   StrucId;        /* Structure identifier */
   MQLONG    Version;        /* Structure version number */
   MQCHAR48  ProfileName;    /* Profile name */
   MQLONG    ObjectType;     /* Object type */
   MQLONG    Authority;      /* Authority */
   PMQZED    EntityDataPtr;  /* Address of MQZED structure identifying
                                an entity */
   MQLONG    EntityType;     /* Entity type */
 };
 
 #define MQZAD_DEFAULT {MQZAD_STRUC_ID_ARRAY},\
                       MQZAD_VERSION_1,\
                       {""},\
                       MQOT_ALL,\
                       0,\
                       NULL,\
                       0
                                                                        
                                                                        
 /*********************************************************************/
 /*  MQZEP -- Add Component Entry Point                               */
 /*********************************************************************/

 void MQENTRY MQZEP (
   MQHCONFIG  Hconfig,     /* Configuration handle */
   MQLONG     Function,    /* Function identifier */
   PMQFUNC    EntryPoint,  /* Function entry point */
   PMQLONG    pCompCode,   /* Completion code */
   PMQLONG    pReason);    /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  Function Datatypes for Authority Services                        */
 /*********************************************************************/

 /*********************************************************************/
 /*  MQZ_INIT_AUTHORITY -- Initialize Authority-Services              */
 /*********************************************************************/

 typedef void MQENTRY MQZ_INIT_AUTHORITY (
     MQHCONFIG  Hconfig,              /* Configuration handle */
     MQLONG     Options,              /* Initialization options */
     PMQCHAR    pQMgrName,            /* Queue manager name */
     MQLONG     ComponentDataLength,  /* Length of component data */
     PMQBYTE    pComponentData,       /* Component data */
     PMQLONG    pVersion,             /* Version number */
     PMQLONG    pCompCode,            /* Completion code */
     PMQLONG    pReason);             /* Reason code qualifying
                                         CompCode */


 /*********************************************************************/
 /*  MQZ_TERM_AUTHORITY -- Terminate Authority-Services               */
 /*********************************************************************/

 typedef void MQENTRY MQZ_TERM_AUTHORITY (
     MQHCONFIG  Hconfig,         /* Configuration handle */
     MQLONG     Options,         /* Termination options */
     PMQCHAR    pQMgrName,       /* Queue manager name */
     PMQBYTE    pComponentData,  /* Component data */
     PMQLONG    pCompCode,       /* Completion code */
     PMQLONG    pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_DELETE_AUTHORITY -- Delete Authority                         */
 /*********************************************************************/

 typedef void MQENTRY MQZ_DELETE_AUTHORITY (
     PMQCHAR  pQMgrName,       /* Queue manager name */
     PMQCHAR  pObjectName,     /* Object name */
     MQLONG   ObjectType,      /* Object type */
     PMQBYTE  pComponentData,  /* Component data */
     PMQLONG  pContinuation,   /* Continuation indicator set by
                                  component */
     PMQLONG  pCompCode,       /* Completion code */
     PMQLONG  pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_GET_AUTHORITY -- Get Authority                               */
 /*********************************************************************/

 typedef void MQENTRY MQZ_GET_AUTHORITY (
     PMQCHAR  pQMgrName,       /* Queue manager name */
     PMQCHAR  pEntityName,     /* Entity name */
     MQLONG   EntityType,      /* Entity type */
     PMQCHAR  pObjectName,     /* Object name */
     MQLONG   ObjectType,      /* Object type */
     PMQLONG  pAuthority,      /* Authority of entity */
     PMQBYTE  pComponentData,  /* Component data */
     PMQLONG  pContinuation,   /* Continuation indicator set by
                                  component */
     PMQLONG  pCompCode,       /* Completion code */
     PMQLONG  pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_GET_AUTHORITY_2 -- Get Authority Version 2                   */
 /*********************************************************************/

 typedef void MQENTRY MQZ_GET_AUTHORITY_2 (
     PMQCHAR  pQMgrName,       /* Queue manager name */
     PMQZED   pEntityData,     /* Entity data */
     MQLONG   EntityType,      /* Entity type */
     PMQCHAR  pObjectName,     /* Object name */
     MQLONG   ObjectType,      /* Object type */
     PMQLONG  pAuthority,      /* Authority of entity */
     PMQBYTE  pComponentData,  /* Component data */
     PMQLONG  pContinuation,   /* Continuation indicator set by
                                  component */
     PMQLONG  pCompCode,       /* Completion code */
     PMQLONG  pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_GET_EXPLICIT_AUTHORITY -- Get Explicit Authority             */
 /*********************************************************************/

 typedef void MQENTRY MQZ_GET_EXPLICIT_AUTHORITY (
     PMQCHAR  pQMgrName,       /* Queue manager name */
     PMQCHAR  pEntityName,     /* Entity name */
     MQLONG   EntityType,      /* Entity type */
     PMQCHAR  pObjectName,     /* Object name */
     MQLONG   ObjectType,      /* Object type */
     PMQLONG  pAuthority,      /* Authority of entity */
     PMQBYTE  pComponentData,  /* Component data */
     PMQLONG  pContinuation,   /* Continuation indicator set by
                                  component */
     PMQLONG  pCompCode,       /* Completion code */
     PMQLONG  pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_GET_EXPLICIT_AUTHORITY_2 -- Get Explicit Authority Version 2 */
 /*********************************************************************/

 typedef void MQENTRY MQZ_GET_EXPLICIT_AUTHORITY_2 (
     PMQCHAR  pQMgrName,       /* Queue manager name */
     PMQZED   pEntityData,     /* Entity data */
     MQLONG   EntityType,      /* Entity type */
     PMQCHAR  pObjectName,     /* Object name */
     MQLONG   ObjectType,      /* Object type */
     PMQLONG  pAuthority,      /* Authority of entity */
     PMQBYTE  pComponentData,  /* Component data */
     PMQLONG  pContinuation,   /* Continuation indicator set by
                                  component */
     PMQLONG  pCompCode,       /* Completion code */
     PMQLONG  pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_ENUMERATE_AUTHORITY_DATA -- Enumerate Authority Data         */
 /*********************************************************************/

 typedef void MQENTRY MQZ_ENUMERATE_AUTHORITY_DATA (
     PMQCHAR  pQMgrName,             /* Queue manager name */
     MQLONG   StartEnumeration,      /* Flag indicating whether call
                                        should start enumeration */
     PMQZAD   pFilter,               /* Filter */
     MQLONG   AuthorityBufferLength, /* Length of AuthorityBuffer */
     PMQZAD   pAuthorityBuffer,      /* Authority data */
     PMQLONG  pAuthorityDataLength,  /* Length of data returned in
                                        AuthorityBuffer */
     PMQBYTE  pComponentData,        /* Component data */
     PMQLONG  pContinuation,         /* Continuation indicator set by
                                        component */
     PMQLONG  pCompCode,             /* Completion code */
     PMQLONG  pReason);              /* Reason code qualifying
                                        CompCode */


 /*********************************************************************/
 /*  MQZ_SET_AUTHORITY -- Set Authority                               */
 /*********************************************************************/

 typedef void MQENTRY MQZ_SET_AUTHORITY (
     PMQCHAR  pQMgrName,       /* Queue manager name */
     PMQCHAR  pEntityName,     /* Entity name */
     MQLONG   EntityType,      /* Entity type */
     PMQCHAR  pObjectName,     /* Object name */
     MQLONG   ObjectType,      /* Object type */
     MQLONG   Authority,       /* Authority to be checked */
     PMQBYTE  pComponentData,  /* Component data */
     PMQLONG  pContinuation,   /* Continuation indicator set by
                                  component */
     PMQLONG  pCompCode,       /* Completion code */
     PMQLONG  pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_SET_AUTHORITY_2 -- Set Authority Version 2                   */
 /*********************************************************************/

 typedef void MQENTRY MQZ_SET_AUTHORITY_2 (
     PMQCHAR  pQMgrName,       /* Queue manager name */
     PMQZED   pEntityData,     /* Entity data */
     MQLONG   EntityType,      /* Entity type */
     PMQCHAR  pObjectName,     /* Object name */
     MQLONG   ObjectType,      /* Object type */
     MQLONG   Authority,       /* Authority to be checked */
     PMQBYTE  pComponentData,  /* Component data */
     PMQLONG  pContinuation,   /* Continuation indicator set by
                                  component */
     PMQLONG  pCompCode,       /* Completion code */
     PMQLONG  pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_COPY_ALL_AUTHORITY -- Copy All Authority                     */
 /*********************************************************************/

 typedef void MQENTRY MQZ_COPY_ALL_AUTHORITY (
     PMQCHAR  pQMgrName,       /* Queue manager name */
     PMQCHAR  pRefObjectName,  /* Reference object name */
     PMQCHAR  pObjectName,     /* Object name */
     MQLONG   ObjectType,      /* Object type */
     PMQBYTE  pComponentData,  /* Component data */
     PMQLONG  pContinuation,   /* Continuation indicator set by
                                  component */
     PMQLONG  pCompCode,       /* Completion code */
     PMQLONG  pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_CHECK_AUTHORITY -- Check Authority                           */
 /*********************************************************************/

 typedef void MQENTRY MQZ_CHECK_AUTHORITY (
     PMQCHAR  pQMgrName,       /* Queue manager name */
     PMQCHAR  pEntityName,     /* Entity name */
     MQLONG   EntityType,      /* Entity type */
     PMQCHAR  pObjectName,     /* Object name */
     MQLONG   ObjectType,      /* Object type */
     MQLONG   Authority,       /* Authority to be checked */
     PMQBYTE  pComponentData,  /* Component data */
     PMQLONG  pContinuation,   /* Continuation indicator set by
                                  component */
     PMQLONG  pCompCode,       /* Completion code */
     PMQLONG  pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_CHECK_AUTHORITY_2 -- Check Authority Version 2               */
 /*********************************************************************/

 typedef void MQENTRY MQZ_CHECK_AUTHORITY_2 (
     PMQCHAR  pQMgrName,       /* Queue manager name */
     PMQZED   pEntityData,     /* Entity data */
     MQLONG   EntityType,      /* Entity type */
     PMQCHAR  pObjectName,     /* Object name */
     MQLONG   ObjectType,      /* Object type */
     MQLONG   Authority,       /* Authority to be checked */
     PMQBYTE  pComponentData,  /* Component data */
     PMQLONG  pContinuation,   /* Continuation indicator set by
                                  component */
     PMQLONG  pCompCode,       /* Completion code */
     PMQLONG  pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_REFRESH_CACHE -- Refresh Cache                               */
 /*********************************************************************/

 typedef void MQENTRY MQZ_REFRESH_CACHE (
     PMQCHAR  pQMgrName,       /* Queue manager name */
     PMQBYTE  pComponentData,  /* Component data */
     PMQLONG  pContinuation,   /* Continuation indicator set by
                                  component */
     PMQLONG  pCompCode,       /* Completion code */
     PMQLONG  pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  Function Datatypes for Name Services                             */
 /*********************************************************************/

 /*********************************************************************/
 /*  MQZ_INIT_NAME -- Initialize Name-Services                        */
 /*********************************************************************/

 typedef void MQENTRY MQZ_INIT_NAME (
     MQHCONFIG  Hconfig,              /* Configuration handle */
     MQLONG     Options,              /* Initialization options */
     PMQCHAR    pQMgrName,            /* Queue manager name */
     MQLONG     ComponentDataLength,  /* Length of component data */
     PMQBYTE    pComponentData,       /* Component data */
     PMQLONG    pVersion,             /* Version number */
     PMQLONG    pCompCode,            /* Completion code */
     PMQLONG    pReason);             /* Reason code qualifying
                                         CompCode */


 /*********************************************************************/
 /*  MQZ_TERM_NAME -- Terminate Name-Services                         */
 /*********************************************************************/

 typedef void MQENTRY MQZ_TERM_NAME (
     MQHCONFIG  Hconfig,         /* Configuration handle */
     MQLONG     Options,         /* Termination options */
     PMQCHAR    pQMgrName,       /* Queue manager name */
     PMQBYTE    pComponentData,  /* Component data */
     PMQLONG    pCompCode,       /* Completion code */
     PMQLONG    pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_LOOKUP_NAME -- Look-Up Name                                  */
 /*********************************************************************/

 typedef void MQENTRY MQZ_LOOKUP_NAME (
     PMQCHAR  pQMgrName,          /* Queue manager name */
     PMQCHAR  pQName,             /* Queue name */
     PMQCHAR  pResolvedQMgrName,  /* Resolved queue manager name */
     PMQBYTE  pComponentData,     /* Component data */
     PMQLONG  pContinuation,      /* Continuation indicator set by
                                     component */
     PMQLONG  pCompCode,          /* Completion code */
     PMQLONG  pReason);           /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_INSERT_NAME -- Insert Name                                   */
 /*********************************************************************/

 typedef void MQENTRY MQZ_INSERT_NAME (
     PMQCHAR  pQMgrName,          /* Queue manager name */
     PMQCHAR  pQName,             /* Queue name */
     PMQCHAR  pResolvedQMgrName,  /* Resolved queue manager name */
     PMQBYTE  pComponentData,     /* Component data */
     PMQLONG  pContinuation,      /* Continuation indicator set by
                                     component */
     PMQLONG  pCompCode,          /* Completion code */
     PMQLONG  pReason);           /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_DELETE_NAME -- Delete Name                                   */
 /*********************************************************************/

 typedef void MQENTRY MQZ_DELETE_NAME (
     PMQCHAR  pQMgrName,       /* Queue manager name */
     PMQCHAR  pQName,          /* Queue name */
     PMQBYTE  pComponentData,  /* Component data */
     PMQLONG  pContinuation,   /* Continuation indicator set by
                                  component */
     PMQLONG  pCompCode,       /* Completion code */
     PMQLONG  pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  Function Datatypes for Userid Services                           */
 /*********************************************************************/

 /*********************************************************************/
 /*  MQZ_INIT_USERID -- Initialize Userid-Services                    */
 /*********************************************************************/

 typedef void MQENTRY MQZ_INIT_USERID (
     MQHCONFIG  Hconfig,              /* Configuration handle */
     MQLONG     Options,              /* Initialization options */
     PMQCHAR    pQMgrName,            /* Queue manager name */
     MQLONG     ComponentDataLength,  /* Length of component data */
     PMQBYTE    pComponentData,       /* Component data */
     PMQLONG    pVersion,             /* Version number */
     PMQLONG    pCompCode,            /* Completion code */
     PMQLONG    pReason);             /* Reason code qualifying
                                         CompCode */


 /*********************************************************************/
 /*  MQZ_TERM_USERID -- Terminate Userid-Services                     */
 /*********************************************************************/

 typedef void MQENTRY MQZ_TERM_USERID (
     MQHCONFIG  Hconfig,         /* Configuration handle */
     MQLONG     Options,         /* Termination options */
     PMQCHAR    pQMgrName,       /* Queue manager name */
     PMQBYTE    pComponentData,  /* Component data */
     PMQLONG    pCompCode,       /* Completion code */
     PMQLONG    pReason);        /* Reason code qualifying CompCode */


 /*********************************************************************/
 /*  MQZ_FIND_USERID -- Find Userid                                   */
 /*********************************************************************/

 typedef void MQENTRY MQZ_FIND_USERID (
     PMQCHAR  pQMgrName,       /* Queue manager name */
     PMQCHAR  pUserId,         /* User identifier */
     PMQCHAR  pPassword,       /* Password */
     PMQBYTE  pComponentData,  /* Component data */
     PMQLONG  pContinuation,   /* Continuation indicator set by
                                  component */
     PMQLONG  pCompCode,       /* Completion code */
     PMQLONG  pReason);        /* Reason code qualifying CompCode */


 #if defined(__cplusplus)
   }
 #endif

 /*********************************************************************/
 /*  End of CMQZC                                                     */
 /*********************************************************************/
 #endif  /* End of header file */

