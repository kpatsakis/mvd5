void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; if ( staticTrue )  size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); hFile = CreateFileW ( data , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 