void CWE114_Process_Control__w32_char_environment_02_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( 1 )  size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 