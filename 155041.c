void CWE78_OS_Command_Injection__char_listen_socket_w32_spawnv_66_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; dataArray [ 2 ] = data; CWE78_OS_Command_Injection__char_listen_socket_w32_spawnv_66b_badSink ( dataArray ); void CWE78_OS_Command_Injection__char_listen_socket_w32_spawnv_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; 