void bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE606_Unchecked_Loop_Condition__wchar_t_connect_socket_84_bad * badObject = new CWE606_Unchecked_Loop_Condition__wchar_t_connect_socket_84_bad ( data ) ; CWE606_Unchecked_Loop_Condition__wchar_t_connect_socket_84_bad::CWE606_Unchecked_Loop_Condition__wchar_t_connect_socket_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  