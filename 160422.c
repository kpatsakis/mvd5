void CWE690_NULL_Deref_From_Return__long_malloc_12_bad() long * data ; data = ( long * ) malloc ( 1 * sizeof ( long ) ); data [ 0 ] = 5L; printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); free ( data ); if ( data != NULL )  data [ 0 ] = 5L; printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); free ( data ); 