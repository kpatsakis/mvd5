void CWE78_OS_Command_Injection__char_connect_socket_w32_spawnv_67_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; myStruct . structFirst = data; CWE78_OS_Command_Injection__char_connect_socket_w32_spawnv_67b_badSink ( myStruct ); void CWE78_OS_Command_Injection__char_connect_socket_w32_spawnv_67b_badSink(CWE78_OS_Command_Injection__char_connect_socket_w32_spawnv_67_structType myStruct) char * data = myStruct . structFirst ; 