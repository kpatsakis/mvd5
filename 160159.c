void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); myUnion . unionFirst = data; char * data = myUnion . unionSecond ; hFile = CreateFileA ( data , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 