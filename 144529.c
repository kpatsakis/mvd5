void CWE78_OS_Command_Injection__char_environment_w32_execvp_22_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = CWE78_OS_Command_Injection__char_environment_w32_execvp_22_badSource ( data ); char * CWE78_OS_Command_Injection__char_environment_w32_execvp_22_badSource(char * data) if ( CWE78_OS_Command_Injection__char_environment_w32_execvp_22_badGlobal )  size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); return data ; 