static void goodB2G() wchar_t * data ; map < int , wchar_t * > dataMap ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' wcscpy ( data , BAD_SOURCE_FIXED_STRING ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, wchar_t *> dataMap) wchar_t * data = dataMap [ 2 ] ; free ( data ); 