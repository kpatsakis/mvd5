void bad() wchar_t * data ; data = NULL; data = badSource ( data ); static wchar_t * badSource(wchar_t * data) wchar_t * dataBuffer = new wchar_t [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer - 8; return data ; wchar_t dest [ 100 * 2 ] ; wmemset ( dest , L 'C' , 100 * 2 - 1 dest [ 100 * 2 - 1 ] = L '\0' wcscpy ( dest , data ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 