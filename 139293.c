static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; size_t dataLen = strlen ( data ) ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; while ( 0 )  if ( connectSocket != INVALID_SOCKET )  CLOSE_SOCKET ( connectSocket ); dataArray [ 2 ] = data; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_connect_socket_66b_goodB2GSink ( dataArray ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_connect_socket_66b_goodB2GSink(char * dataArray[]) char * data = dataArray [ 2 ] ; for (i=0; i < strlen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 