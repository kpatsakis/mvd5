void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_14_bad() int * data ; data = NULL; if ( globalFive == 5 )  data = ( int * ) malloc ( 10 ); int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 