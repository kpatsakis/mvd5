void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, char *> dataMap) char * data = dataMap [ 2 ] ; hFile = CreateFileA ( data , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 