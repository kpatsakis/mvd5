static void goodG2B() wchar_t * data ; data = NULL; data = goodG2BSource ( data ); static wchar_t * goodG2BSource(wchar_t * data) data = ( wchar_t * ) malloc ( ( 10 + 1 ) * sizeof ( wchar_t ) ); return data ; wchar_t source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); free ( data ); 