void CWE114_Process_Control__w32_char_relativePath_64_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "winsrv.dll" ); CWE114_Process_Control__w32_char_relativePath_64b_badSink ( & data ); void CWE114_Process_Control__w32_char_relativePath_64b_badSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 