void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_connect_socket_07_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); size_t dataLen = wcslen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  replace = wcschr ( data , L '\r' ) if ( replace )  replace = wcschr ( data , L '\n' ) if ( replace )  for (  * data != L '\0' data ++ ) if ( * data == SEARCH_CHAR )  free ( data ); 