void CWE78_OS_Command_Injection__wchar_t_connect_socket_execl_21_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; data = badSource ( data ); static wchar_t * badSource(wchar_t * data) if ( badStatic )  size_t dataLen = wcslen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  