#ifndef _H_DBCONN_H

#define _H_DBCONN_H



/*����Oracle���ݿ�*/

int	  oraConnect(char *uid, char *pwd, char *net);

/*�Ͽ���Oracle���ݿ������*/

void  oradisConnect();

/*���Oracle������ϸ��Ϣ*/

void  sql_err_rpt(char *message);

/*���Oracle������ϸ��Ϣ*/

void sql_error(char *routine);



#endif

