#include "con_header.hpp"
	int main(){
    //conn param
    con = d->connect(connection_properties);
hostname="kaisersource";
username"postgres";
password="ax331eh";

try{    
	
	conProp ["OPT_CONNECT_TIMEOUT"] = 40;
	con.reset(d->connect (hostname, username, password));
	con->setClientOption("OPT_RECONNECT", &rec);     
	con->setSchema(db);

}catch(Exception e){
	//cout << "exception "<< e << '\n';
}
delete *res;
delete *stmt;
delete *con;
}
