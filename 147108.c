static void goodB2G() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); size_t dataLen = wcslen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  replace = wcschr ( data , L '\r' ) if ( replace )  replace = wcschr ( data , L '\n' ) if ( replace )  myStruct . structFirst = data; CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_67b_goodB2GSink ( myStruct ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_67b_goodB2GSink(CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_67_structType myStruct) wchar_t * data = myStruct . structFirst ; for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 