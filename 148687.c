void CWE78_OS_Command_Injection__char_listen_socket_system_61_bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; data = CWE78_OS_Command_Injection__char_listen_socket_system_61b_badSource ( data ); char * CWE78_OS_Command_Injection__char_listen_socket_system_61b_badSource(char * data) size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; return data ; 