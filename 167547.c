static void goodB2G1() void * data ; data = NULL; if ( STATIC_CONST_FIVE == 5 )  data = ( void * ) WIDE_STRING; if ( STATIC_CONST_FIVE != 5 )  size_t dataLen = wcslen ( ( wchar_t * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , sizeof ( wchar_t ) ) ; memcpy ( dest , data , ( dataLen + 1 ) * sizeof ( wchar_t ) ); printWLine ( ( wchar_t * ) dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( dest ); 