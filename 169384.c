void bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; CWE134_Uncontrolled_Format_String__char_listen_socket_w32_vsnprintf_84_bad * badObject = new CWE134_Uncontrolled_Format_String__char_listen_socket_w32_vsnprintf_84_bad ( data ) ; CWE134_Uncontrolled_Format_String__char_listen_socket_w32_vsnprintf_84_bad::CWE134_Uncontrolled_Format_String__char_listen_socket_w32_vsnprintf_84_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; 