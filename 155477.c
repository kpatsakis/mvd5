static void goodG2B() int h ; char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; for(h = 0; h < 1; h++) strcat ( data , "c:\\temp\\file.txt" ); hFile = CreateFileA ( data , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 