void CWE690_NULL_Deref_From_Return__int_malloc_31_bad() int * data ; data = ( int * ) malloc ( 1 * sizeof ( int ) ); int * dataCopy = data ; int * data = dataCopy ; data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 