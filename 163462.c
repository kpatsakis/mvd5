void CWE114_Process_Control__w32_char_console_32_bad() char * data ; char * * dataPtr1 = & data ; char * * dataPtr2 = & data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; char * data = * dataPtr1 ; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen ] = '\0'; char * data = * dataPtr2 ; HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 