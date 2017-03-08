#ifndef _H_DBCONN_H

#define _H_DBCONN_H



/*连接Oracle数据库*/

int	  oraConnect(char *uid, char *pwd, char *net);

/*断开与Oracle数据库的连接*/

void  oradisConnect();

/*输出Oracle错误详细信息*/

void  sql_err_rpt(char *message);

/*输出Oracle错误详细信息*/

void sql_error(char *routine);



#endif

