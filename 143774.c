static void goodG2B2() wchar_t * data ; data = NULL; data = goodG2B2Source ( data ); static wchar_t * goodG2B2Source(wchar_t * data) if ( goodG2B2Static )  data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' return data ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memcpy ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 