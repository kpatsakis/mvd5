void CWE510_Trapdoor__ip_based_logic_11_bad() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; WSADATA wsaData ; struct sockaddr_in service , acceptService ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( 20000 ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  if ( listen ( listenSocket , 5 ) == SOCKET_ERROR )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  if ( getsockname ( acceptSocket , ( struct sockaddr * ) & acceptService , & acceptServiceLen ) == - 1 )  if ( strcmp ( "192.168.30.123" , inet_ntoa ( acceptService . sin_addr ) ) == 0 )  if ( send ( acceptSocket , ADMIN_MESSAGE , strlen ( ADMIN_MESSAGE ) , 0 ) == SOCKET_ERROR )  if ( send ( acceptSocket , DEFAULT_MESSAGE , strlen ( DEFAULT_MESSAGE ) , 0 ) == SOCKET_ERROR )  while ( 0 )  if ( listenSocket != INVALID_SOCKET )  CLOSE_SOCKET ( listenSocket ); if ( acceptSocket != INVALID_SOCKET )  CLOSE_SOCKET ( acceptSocket ); 