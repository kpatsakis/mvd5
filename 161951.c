void CWE194_Unexpected_Sign_Extension__listen_socket_malloc_54_bad() WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( TCP_PORT ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  if ( listen ( listenSocket , LISTEN_BACKLOG ) == SOCKET_ERROR )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  recvResult = recv ( acceptSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  inputBuffer [ recvResult ] = '\0'; tempInt = atoi ( inputBuffer ); if ( tempInt > SHRT_MAX || tempInt < SHRT_MIN )  data = tempInt; while ( 0 )  if ( listenSocket != INVALID_SOCKET )  CLOSE_SOCKET ( listenSocket ); if ( acceptSocket != INVALID_SOCKET )  CLOSE_SOCKET ( acceptSocket ); CWE194_Unexpected_Sign_Extension__listen_socket_malloc_54b_badSink ( data ); void CWE194_Unexpected_Sign_Extension__listen_socket_malloc_54b_badSink(short data) CWE194_Unexpected_Sign_Extension__listen_socket_malloc_54c_badSink ( data ); void CWE194_Unexpected_Sign_Extension__listen_socket_malloc_54c_badSink(short data) CWE194_Unexpected_Sign_Extension__listen_socket_malloc_54d_badSink ( data ); void CWE194_Unexpected_Sign_Extension__listen_socket_malloc_54d_badSink(short data) CWE194_Unexpected_Sign_Extension__listen_socket_malloc_54e_badSink ( data ); void CWE194_Unexpected_Sign_Extension__listen_socket_malloc_54e_badSink(short data) if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 