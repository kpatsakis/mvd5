void CWE416_Use_After_Free__malloc_free_int_12_bad() int * data ; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = ( int * ) malloc ( 100 * sizeof ( int ) ); data [ i ] = 5; free ( data ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 