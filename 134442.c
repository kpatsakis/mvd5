void CWE123_Write_What_Where_Condition__listen_socket_31_bad() badStruct data ; linkedList head = { & head , & head } ; data . list . next = head . next; data . list . prev = head . prev; WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( TCP_PORT ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  if ( listen ( listenSocket , LISTEN_BACKLOG ) == SOCKET_ERROR )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  recvResult = recv ( acceptSocket , ( char * ) & data , sizeof ( data ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  while ( 0 )  