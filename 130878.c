void CWE114_Process_Control__w32_wchar_t_environment_02_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( 1 )  size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 