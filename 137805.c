void CWE427_Uncontrolled_Search_Path_Element__char_environment_21_bad() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; data = badSource ( data ); static char * badSource(char * data) if ( badStatic )  size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 250 - dataLen - 1 ); return data ; 