static void goodG2B2() int data ; data = - 1; if ( GLOBAL_CONST_TRUE )  data = 7; if ( GLOBAL_CONST_TRUE )  int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 )  buffer [ data ] = 1; free ( buffer ); 