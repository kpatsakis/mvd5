void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_17_bad() int j ; for(j = 0; j < 1; j++) char data [ 100 ] = "" ; WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; size_t dataLen = strlen ( data ) ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( TCP_PORT ); if ( listen ( listenSocket , LISTEN_BACKLOG ) == SOCKET_ERROR )  if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  recvResult = recv ( acceptSocket , ( char * ) data + dataLen , ( int ) ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  while ( 0 )  