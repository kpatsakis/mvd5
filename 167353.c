void CWE114_Process_Control__w32_wchar_t_relativePath_06_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( STATIC_CONST_FIVE == 5 )  wcscpy ( data , L "winsrv.dll" ) HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 