static void goodB2G() void * data ; data = NULL; data = ( void * ) WIDE_STRING; void * dataCopy = data ; void * data = dataCopy ; size_t dataLen = wcslen ( ( wchar_t * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , sizeof ( wchar_t ) ) ; memcpy ( dest , data , ( dataLen + 1 ) * sizeof ( wchar_t ) ); printWLine ( ( wchar_t * ) dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( dest ); 