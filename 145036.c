void bad() int count ; count = - 1; CWE400_Resource_Exhaustion__connect_socket_fwrite_84_bad * badObject = new CWE400_Resource_Exhaustion__connect_socket_fwrite_84_bad ( count ) ; CWE400_Resource_Exhaustion__connect_socket_fwrite_84_bad::CWE400_Resource_Exhaustion__connect_socket_fwrite_84_bad(int countCopy) WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  recvResult = recv ( connectSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  inputBuffer [ recvResult ] = '\0'; count = atoi ( inputBuffer ); while ( 0 )  if ( connectSocket != INVALID_SOCKET )  CLOSE_SOCKET ( connectSocket ); 