![alt text](https://github.com/kaisersource/LO_DB_Reconn/blob/master/ico/logo_unipg.png)
<h1>Enhancement - Mysql native connector extension</h2>
<h1>Add automatic reconnect to server capability in connector code after idle timeout</h2>

<h2>BASIC IDEA & MY SOLUTION</h2>
=====================================

<h3>- After the connection, if is not extablished,then an exception is thrown.</h3>
<h3>- Detect that exception.</h3>
<h3>- Create a function that implements a timeouf ot reconnection.</h3>
<h3>- The trigger of this function is the exception itself. </h3>

