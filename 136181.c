static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data = goodG2BSource ( data ); static wchar_t * goodG2BSource(wchar_t * data) wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 