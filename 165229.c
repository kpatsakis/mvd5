static void goodG2B() int * data ; int * * dataPtr2 = & data ; data = NULL; data = ( int * ) malloc ( 100 * sizeof ( int ) ); int * data = * dataPtr2 ; int source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 