static void goodG2B() char * data ; CWE114_Process_Control__w32_char_listen_socket_34_unionType myUnion ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); myUnion . unionFirst = data; char * data = myUnion . unionSecond ; HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 