static void goodB2G() int64_t * data ; int64_t * dataArray [ 5 ] ; data = NULL; data = ( int64_t * ) malloc ( 1 * sizeof ( int64_t ) ); dataArray [ 2 ] = data; CWE690_NULL_Deref_From_Return__int64_t_malloc_66b_goodB2GSink ( dataArray ); void CWE690_NULL_Deref_From_Return__int64_t_malloc_66b_goodB2GSink(int64_t * dataArray[]) int64_t * data = dataArray [ 2 ] ; if ( data != NULL )  data [ 0 ] = 5L L free ( data ); 