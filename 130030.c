void CWE690_NULL_Deref_From_Return__long_realloc_21_bad() long * data ; data = NULL; data = ( long * ) realloc ( data , 1 * sizeof ( long ) ); badSink ( data ); static void badSink(long * data) data [ 0 ] = 5L; printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); free ( data ); 