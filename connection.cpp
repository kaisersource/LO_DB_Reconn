driver = get_driver_instance ();    // protected    

con.reset(driver->connect (host_name, user_name, password));    // connect to mysql, passing per valor
con->setClientOption("OPT_RECONNECT", &recon); //reconnecting      
con->setSchema(database_name);
