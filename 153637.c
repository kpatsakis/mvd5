void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = L "" data = dataBuffer; CWE36_Absolute_Path_Traversal__wchar_t_connect_socket_ifstream_84_bad * badObject = new CWE36_Absolute_Path_Traversal__wchar_t_connect_socket_ifstream_84_bad ( data ) ; CWE36_Absolute_Path_Traversal__wchar_t_connect_socket_ifstream_84_bad::CWE36_Absolute_Path_Traversal__wchar_t_connect_socket_ifstream_84_bad(wchar_t * dataCopy) data = dataCopy; WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; size_t dataLen = wcslen ( data ) ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( FILENAME_MAX - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  while ( 0 )  if ( connectSocket != INVALID_SOCKET )  CLOSE_SOCKET ( connectSocket ); 