static void goodG2B1() int * data ; data = NULL; if ( STATIC_CONST_FIVE != 5 )  int * dataBuffer = ( int * ) malloc ( 100 * sizeof ( int ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5; data = dataBuffer; free ( data ); 