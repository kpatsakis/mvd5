static void goodB2G2() void * data ; data = NULL; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( void * ) WIDE_STRING; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; size_t dataLen = wcslen ( ( wchar_t * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , sizeof ( wchar_t ) ) ; memcpy ( dest , data , ( dataLen + 1 ) * sizeof ( wchar_t ) ); printWLine ( ( wchar_t * ) dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( dest ); 