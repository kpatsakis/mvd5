void CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_64_bad() WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  recvResult = recv ( connectSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  inputBuffer [ recvResult ] = '\0'; tempInt = atoi ( inputBuffer ); if ( tempInt > SHRT_MAX || tempInt < SHRT_MIN )  data = tempInt; while ( 0 )  if ( connectSocket != INVALID_SOCKET )  CLOSE_SOCKET ( connectSocket ); CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_64b_badSink ( & data ); void CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_64b_badSink(void * dataVoidPtr) short * dataPtr = ( short * ) dataVoidPtr ; short data = ( * dataPtr ) ; if ( data < 100 )  strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 