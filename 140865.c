static void goodB2G1() int * data ; data = NULL; data = ( int * ) malloc ( 1 * sizeof ( int ) ); CWE690_NULL_Deref_From_Return__int_malloc_22_goodB2G1Sink ( data ); void CWE690_NULL_Deref_From_Return__int_malloc_22_goodB2G1Sink(int * data) if ( CWE690_NULL_Deref_From_Return__int_malloc_22_goodB2G1Global )  if ( data != NULL )  data [ 0 ] = 5; free ( data ); 