void CWE427_Uncontrolled_Search_Path_Element__wchar_t_listen_socket_22_bad() wchar_t * data ; wchar_t dataBuffer [ 250 ] = L "PATH=" data = dataBuffer; data = CWE427_Uncontrolled_Search_Path_Element__wchar_t_listen_socket_22_badSource ( data ); wchar_t * CWE427_Uncontrolled_Search_Path_Element__wchar_t_listen_socket_22_badSource(wchar_t * data) if ( CWE427_Uncontrolled_Search_Path_Element__wchar_t_listen_socket_22_badGlobal )  size_t dataLen = wcslen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 250 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  