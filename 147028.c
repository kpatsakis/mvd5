void CWE369_Divide_by_Zero__float_connect_socket_67_bad() WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  recvResult = recv ( connectSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  inputBuffer [ recvResult ] = '\0'; data = ( float ) atof ( inputBuffer ); while ( 0 )  myStruct . structFirst = data; CWE369_Divide_by_Zero__float_connect_socket_67b_badSink ( myStruct ); void CWE369_Divide_by_Zero__float_connect_socket_67b_badSink(CWE369_Divide_by_Zero__float_connect_socket_67_structType myStruct) float data = myStruct . structFirst ; int result = ( int ) ( 100.0 / data ) ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 