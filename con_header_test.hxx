#include <boost/thread.hpp>
#include <boost/shared_ptr.hpp>

#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

std::string host_name;
std::string user_name;
std::string password;
std::string database_name;
bool rec = true;    


sql::ConnectOptionsMap connection_properties;
sql::Driver *driver;
boost::shared_ptr <sql::Connection> con;
boost::shared_ptr <sql::Statement> stmt;
boost::shared_ptr <sql::ResultSet> res;
boost::shared_ptr <sql::PreparedStatement> pstmt;


