void CWE78_OS_Command_Injection__char_environment_w32_execvp_67_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); myStruct . structFirst = data; CWE78_OS_Command_Injection__char_environment_w32_execvp_67b_badSink ( myStruct ); void CWE78_OS_Command_Injection__char_environment_w32_execvp_67b_badSink(CWE78_OS_Command_Injection__char_environment_w32_execvp_67_structType myStruct) char * data = myStruct . structFirst ; 