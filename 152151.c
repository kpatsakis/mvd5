void CWE427_Uncontrolled_Search_Path_Element__char_environment_22_bad() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; data = CWE427_Uncontrolled_Search_Path_Element__char_environment_22_badSource ( data ); char * CWE427_Uncontrolled_Search_Path_Element__char_environment_22_badSource(char * data) if ( CWE427_Uncontrolled_Search_Path_Element__char_environment_22_badGlobal )  size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 250 - dataLen - 1 ); return data ; 