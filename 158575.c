void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_45_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); size_t dataLen = wcslen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  replace = wcschr ( data , L '\r' ) if ( replace )  replace = wcschr ( data , L '\n' ) if ( replace )  CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_45_badData = data; 