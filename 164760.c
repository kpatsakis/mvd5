void CWE78_OS_Command_Injection__char_environment_w32_spawnlp_31_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); char * dataCopy = data ; char * data = dataCopy ; 