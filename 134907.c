static void goodG2B2() int * data ; data = NULL; if ( 5 == 5 )  data = ( int * ) ALLOCA ( 10 * sizeof ( int ) ); int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 