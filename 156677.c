void CWE510_Trapdoor__network_listen_04_bad() if ( STATIC_CONST_TRUE )  WSADATA wsaData ; struct sockaddr_in service ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( 30000 ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  if ( listen ( listenSocket , 5 ) == SOCKET_ERROR )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  while ( 0 )  if ( listenSocket != INVALID_SOCKET )  CLOSE_SOCKET ( listenSocket ); if ( acceptSocket != INVALID_SOCKET )  CLOSE_SOCKET ( acceptSocket ); 