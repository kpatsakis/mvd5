static void goodG2B() int64_t * data ; data = NULL; data = goodG2BSource ( data ); static int64_t * goodG2BSource(int64_t * data) data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); return data ; int64_t source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 