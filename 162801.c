static void goodB2G() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_84_goodB2G * goodB2GObject = new CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_84_goodB2G ( data ) ; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_84_goodB2G::CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_84_goodB2G(size_t dataCopy) data = dataCopy; WSADATA wsaData ; int wsaDataInit = 0 ; int recvResult ; struct sockaddr_in service ; SOCKET listenSocket = INVALID_SOCKET ; SOCKET acceptSocket = INVALID_SOCKET ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  break ; wsaDataInit = 1; listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  break ; memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( TCP_PORT ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  break ; if ( listen ( listenSocket , LISTEN_BACKLOG ) == SOCKET_ERROR )  break ; acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  break ; recvResult = recv ( acceptSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  break ; inputBuffer [ recvResult ] = '\0'; data = strtoul ( inputBuffer , NULL , 0 ); while ( 0 )  if ( listenSocket != INVALID_SOCKET )  CLOSE_SOCKET ( listenSocket ); if ( acceptSocket != INVALID_SOCKET )  CLOSE_SOCKET ( acceptSocket ); if ( wsaDataInit )  WSACleanup ( ); delete goodB2GObject CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_84_goodB2G::~CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_84_goodB2G() wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( myString ); 