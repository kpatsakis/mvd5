void CWE401_Memory_Leak__int_realloc_61_bad() int * data ; data = NULL; data = CWE401_Memory_Leak__int_realloc_61b_badSource ( data ); int * CWE401_Memory_Leak__int_realloc_61b_badSource(int * data) data = ( int * ) realloc ( data , 100 * sizeof ( int ) ); data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); return data ; 