void CWE78_OS_Command_Injection__char_connect_socket_system_06_bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; if ( STATIC_CONST_FIVE == 5 )  size_t dataLen = strlen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; if ( SYSTEM ( data ) <= 0 )  