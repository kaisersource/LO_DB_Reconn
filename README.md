
###Enhancement - Mysql native connector extension
#Add automatic reconnect to server capability in connector code after idle timeout

BASIC IDEA & MY SOLUTION

-After the connection, if is not extablished,then an exception is thrown.
-Detect that exception.
-Create a function that implements a timeouf ot reconnection.
-The trigger of this function is the exception itself. 

