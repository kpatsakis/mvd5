static void goodB2G1() int * data ; data = NULL; if ( staticFive == 5 )  data = ( int * ) realloc ( data , 100 * sizeof ( int ) ); data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 