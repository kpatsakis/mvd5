void CWE114_Process_Control__w32_char_connect_socket_53_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; CWE114_Process_Control__w32_char_connect_socket_53b_badSink ( data ); void CWE114_Process_Control__w32_char_connect_socket_53b_badSink(char * data) CWE114_Process_Control__w32_char_connect_socket_53c_badSink ( data ); void CWE114_Process_Control__w32_char_connect_socket_53c_badSink(char * data) CWE114_Process_Control__w32_char_connect_socket_53d_badSink ( data ); void CWE114_Process_Control__w32_char_connect_socket_53d_badSink(char * data) hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 