void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_34_bad() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 250 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; PUTENV ( data ); 