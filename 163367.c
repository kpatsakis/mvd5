static void goodB2G2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; CWE134_Uncontrolled_Format_String__char_listen_socket_printf_22_goodB2G2Sink ( data ); void CWE134_Uncontrolled_Format_String__char_listen_socket_printf_22_goodB2G2Sink(char * data) printf ( "%s\n" , data ); 