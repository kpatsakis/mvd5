static void goodB2G() void * data ; data = NULL; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = ( void * ) WIDE_STRING; data = ( void * ) WIDE_STRING; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; size_t dataLen = wcslen ( ( wchar_t * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , sizeof ( wchar_t ) ) ; memcpy ( dest , data , ( dataLen + 1 ) * sizeof ( wchar_t ) ); free ( dest ); 