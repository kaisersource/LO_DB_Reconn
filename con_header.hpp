//The boost solution to implement Shared pointer is quite awful, simply because it has a set of templates that must be compiled.
//Slowing down the compilation.
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <mysql_connection.h>
std::string hostname = "kaisersource";
std::string username = "postgres";
std::string password = "Jobaka31";
std::string db = "postgres";
bool recon = true; // da key

sql::ConnectOptionsMap propcon;
sql::Driver *d;
//boost::shared_ptr <sql::Connection> con; 
//boost::shared_ptr <sql::Statement> stmt; 
//boost:: <sql::ResultSet> res; //To grab files and 
//boost::shared_ptr <sql::PreparedStatement> pstmt; //to avoid sql Injections
//so these lines aren't necessary
sql::Connection *con;
sql::Statement *stmt;
sql::ResultSet  *res;


//note:shared pointer has his own limited garbage collector, which normal pointers doesn't have. So at the end we have to delete explicitly them
delete res;
delete stmt;
delete con;

