void CWE114_Process_Control__w32_char_environment_12_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 