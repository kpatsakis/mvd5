static void goodG2B() wchar_t * data ; data = NULL; data = goodG2BSource ( data ); static wchar_t * goodG2BSource(wchar_t * data) data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' return data ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memcpy ( data , source , 100 * sizeof ( wchar_t ) ); data [ 100 - 1 ] = L '\0' free ( data ); 