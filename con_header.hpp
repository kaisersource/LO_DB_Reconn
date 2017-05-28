//The boost solution to implement Shared pointer is quite awful, simply because it has a set of templates that must be compiled.
//Slowing down the compilation.
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <mysql_connection.h>
std::string hostname; 
std::string username; 
std::string password; 
std::string db = "postgres";

bool rec = true; // da key

sql::mysql::MySQL_Driver *d=get_driver_instance();
sql::ConnectOptionsMap connection_properties;

sql::Connection *con;
sql::Statement *stmt;
sql::ResultSet  *res;


//note:shared pointer has his own limited garbage collector, which normal pointers doesn't have. So at the end we have to delete explicitly them


