#include "con_header.hpp"
	int main(){
    //si
    con = d->connect(connection_properties);
hostname="kaisersource";
username"postgres";
password="Jobaka31";

try{    
	conProp ["OPT_CONNECT_TIMEOUT"] = 10;
	con.reset(d->connect (hostname, username, password));    // connect to mysql, passing per value si
	con->setClientOption("OPT_RECONNECT", &rec); //true si     
	con->setSchema(db);

}catch(Exception e){
	//cout << "exception "<< e << '\n';
}
delete *res;
delete *stmt;
delete *con;
}
