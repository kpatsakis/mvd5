static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); CWE114_Process_Control__w32_char_listen_socket_41_goodG2BSink ( data ); void CWE114_Process_Control__w32_char_listen_socket_41_goodG2BSink(char * data) hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 