static void goodB2G() wchar_t * data ; wchar_t * dataArray [ 5 ] ; data = NULL; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); dataArray [ 2 ] = data; goodB2GSink ( dataArray ); void goodB2GSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; free ( data ); 