static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wcscpy ( data , L "C:\\Windows\\System32\\winsrv.dll" ) CWE114_Process_Control__w32_wchar_t_file_52b_goodG2BSink ( data ); void CWE114_Process_Control__w32_wchar_t_file_52b_goodG2BSink(wchar_t * data) CWE114_Process_Control__w32_wchar_t_file_52c_goodG2BSink ( data ); void CWE114_Process_Control__w32_wchar_t_file_52c_goodG2BSink(wchar_t * data) HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 