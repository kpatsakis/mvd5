void bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; CWE114_Process_Control__w32_char_environment_84_bad * badObject = new CWE114_Process_Control__w32_char_environment_84_bad ( data ) ; CWE114_Process_Control__w32_char_environment_84_bad::CWE114_Process_Control__w32_char_environment_84_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); 