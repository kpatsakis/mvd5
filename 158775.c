void CWE114_Process_Control__w32_char_relativePath_53_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "winsrv.dll" ); CWE114_Process_Control__w32_char_relativePath_53b_badSink ( data ); void CWE114_Process_Control__w32_char_relativePath_53b_badSink(char * data) CWE114_Process_Control__w32_char_relativePath_53c_badSink ( data ); void CWE114_Process_Control__w32_char_relativePath_53c_badSink(char * data) CWE114_Process_Control__w32_char_relativePath_53d_badSink ( data ); void CWE114_Process_Control__w32_char_relativePath_53d_badSink(char * data) HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 