void CWE78_OS_Command_Injection__char_connect_socket_w32spawnl_54_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; CWE78_OS_Command_Injection__char_connect_socket_w32spawnl_54b_badSink ( data ); void CWE78_OS_Command_Injection__char_connect_socket_w32spawnl_54b_badSink(char * data) CWE78_OS_Command_Injection__char_connect_socket_w32spawnl_54c_badSink ( data ); void CWE78_OS_Command_Injection__char_connect_socket_w32spawnl_54c_badSink(char * data) CWE78_OS_Command_Injection__char_connect_socket_w32spawnl_54d_badSink ( data ); void CWE78_OS_Command_Injection__char_connect_socket_w32spawnl_54d_badSink(char * data) CWE78_OS_Command_Injection__char_connect_socket_w32spawnl_54e_badSink ( data ); void CWE78_OS_Command_Injection__char_connect_socket_w32spawnl_54e_badSink(char * data) 