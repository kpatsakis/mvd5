void CWE690_NULL_Deref_From_Return__long_realloc_64_bad() long * data ; data = NULL; data = ( long * ) realloc ( data , 1 * sizeof ( long ) ); CWE690_NULL_Deref_From_Return__long_realloc_64b_badSink ( & data ); void CWE690_NULL_Deref_From_Return__long_realloc_64b_badSink(void * dataVoidPtr) long * * dataPtr = ( long * * ) dataVoidPtr ; long * data = ( * dataPtr ) ; data [ 0 ] = 5L; printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); free ( data ); 