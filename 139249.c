void bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_listen_socket_84_bad * badObject = new CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_listen_socket_84_bad ( data ) ; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_listen_socket_84_bad::CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_listen_socket_84_bad(char * dataCopy) data = dataCopy; WSADATA wsaData ; int wsaDataInit = 0 ; int recvResult ; struct sockaddr_in service ; char * replace ; SOCKET listenSocket = INVALID_SOCKET ; SOCKET acceptSocket = INVALID_SOCKET ; size_t dataLen = strlen ( data ) ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  break ; wsaDataInit = 1; listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  break ; memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( TCP_PORT ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  break ; if ( listen ( listenSocket , LISTEN_BACKLOG ) == SOCKET_ERROR )  break ; acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  break ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  break ; data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; while ( 0 )  if ( listenSocket != INVALID_SOCKET )  CLOSE_SOCKET ( listenSocket ); if ( acceptSocket != INVALID_SOCKET )  CLOSE_SOCKET ( acceptSocket ); if ( wsaDataInit )  WSACleanup ( ); delete badObject CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_listen_socket_84_bad::~CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_listen_socket_84_bad() for (; *data != '\0'; data++) if ( * data == SEARCH_CHAR )  printLine ( "We have a match!" ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); break ; free ( data ); 