static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE114_Process_Control__w32_wchar_t_environment_84_goodG2B * goodG2BObject = new CWE114_Process_Control__w32_wchar_t_environment_84_goodG2B ( data ) ; CWE114_Process_Control__w32_wchar_t_environment_84_goodG2B::CWE114_Process_Control__w32_wchar_t_environment_84_goodG2B(wchar_t * dataCopy) data = dataCopy; wcscpy ( data , L "C:\\Windows\\System32\\winsrv.dll" ) delete goodG2BObject CWE114_Process_Control__w32_wchar_t_environment_84_goodG2B::~CWE114_Process_Control__w32_wchar_t_environment_84_goodG2B() HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 