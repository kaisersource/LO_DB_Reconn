#include "con_header.hpp"

    connection_properties ["OPT_CONNECT_TIMEOUT"] = 10;
    con = d->connect(connection_properties);
hostname="kaisersource";
username"postgres";
password="Jobaka31";

try{    

	con.reset(d->connect (hostname, username, password));    // connect to mysql, passing per value
	con->setClientOption("OPT_RECONNECT", &rec); //true      
	con->setSchema(database_name);

}catch(Exception e){
	//cout << "exception "<< e << '\n';
}
delete *res;
delete *stmt;
delete *con
