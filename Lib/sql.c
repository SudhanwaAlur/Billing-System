#include "C:/Program Files/MySQL/MySQL Connector C 6.1/include/mysql.h"

static char *opt_host_name = "host"; /* HOST */
static char *opt_user_name = "user"; /* USERNAME */
static char *opt_password = "pass"; /* PASSWORD */
static unsigned int opt_port_num = 3306; /* PORT */
static char *opt_socket_name = NULL; /* SOCKET NAME, DO NOT CHANGE */
static char *opt_db_name = "database name"; /* DATABASE NAME */
static unsigned int opt_flags = 0; /* CONNECTION FLAGS, DO NOT CHANGE */
MYSQL *conn; /* pointer to connection handler */
    MYSQL_RES *res; /* holds the result set */
    MYSQL_ROW row;

int main()
{
    /* INITIALIZE CONNECTION HANDLER, DO NOT CHANGE */
    conn = mysql_init (NULL);

    /* THIS CONNECTS TO SERVER, DO NOT CHANGE ANYTHING HERE */
    mysql_real_connect (conn, opt_host_name, opt_user_name, opt_password,
    opt_db_name, opt_port_num, opt_socket_name, opt_flags);
    /* show tables in the database (test for errors also) */
    mysql_query(conn, "SELECT Password FROM Users WHERE Name = 'MY_NICKNAME'");
    res = mysql_store_result(conn);
}