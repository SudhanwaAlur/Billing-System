#include <iostream>
#include "sqlite3.h"
#include "Items.h"
using namespace std;
Items:: Items()
{

}
Items:: ~Items()
{

}
/*int sqlite3_prepare(
  sqlite3 *db,            // Database handle 
  const char *zSql,       // SQL statement, UTF-8 encoded 
  int nByte,              // Maximum length of zSql in bytes. 
  sqlite3_stmt **ppStmt,  // OUT: Statement handle 
  const char **pzTail     // OUT: Pointer to unused portion of zSql
  
);*/
static int callback(void *data, int argc, char **argv, char **azColName){
   int i;
   cout<<(const char*)data<<endl;
   
   for(i = 0; i<argc; i++){
      cout<<azColName[i]<<" ";
      cout<<argv[i]<<endl ? argv[i] : "NULL";
   }
   
   cout<<"\n";
   return 0;
}
int Items:: query_database(char* sql)
{
   sqlite3 *db;
   char *zErrMsg = 0;
   int status;
   const char* data = "Callback function called";

   /* Open database */
   status = sqlite3_open("D:/Hobby Projects/C++/GIT Repos/Billing-System/Sources/Database/Items.db", &db);
   
   if( status ) {
      cout<<stderr<<"Can't open database:"<< sqlite3_errmsg(db);
      return(0);
   } else {
      cout<<(stderr, "Opened database successfully\n");
   }

   /* Execute SQL statement */
   status = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
   
   if( status != SQLITE_OK ) {
      cout<<(stderr, "SQL error:\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      cout<<(stdout, "Operation done successfully\n");
   }
   sqlite3_close(db);
   return 0;
}


