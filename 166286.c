void CWE15_External_Control_of_System_or_Configuration_Setting__w32_44_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; WSADATA wsaData ; struct sockaddr_in service ; int recvResult ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( PF_INET , SOCK_STREAM , 0 ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( LISTEN_PORT ); if ( SOCKET_ERROR == bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) )  if ( SOCKET_ERROR == listen ( listenSocket , LISTEN_BACKLOG ) )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == INVALID_SOCKET )  recvResult = recv ( acceptSocket , data , 100 - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  while ( 0 )  