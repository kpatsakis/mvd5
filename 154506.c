void CWE114_Process_Control__w32_char_environment_22_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = CWE114_Process_Control__w32_char_environment_22_badSource ( data ); char * CWE114_Process_Control__w32_char_environment_22_badSource(char * data) if ( CWE114_Process_Control__w32_char_environment_22_badGlobal )  size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); return data ; 