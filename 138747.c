static void goodG2B2() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; data = CWE114_Process_Control__w32_wchar_t_connect_socket_22_goodG2B2Source ( data ); wchar_t * CWE114_Process_Control__w32_wchar_t_connect_socket_22_goodG2B2Source(wchar_t * data) if ( CWE114_Process_Control__w32_wchar_t_connect_socket_22_goodG2B2Global )  wcscpy ( data , L "C:\\Windows\\System32\\winsrv.dll" ) return data ; HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 