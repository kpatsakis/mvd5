static void goodB2G() int64_t * data ; data = ( int64_t * ) malloc ( 1 * sizeof ( int64_t ) ); CWE690_NULL_Deref_From_Return__int64_t_malloc_54b_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__int64_t_malloc_54b_goodB2GSink(int64_t * data) CWE690_NULL_Deref_From_Return__int64_t_malloc_54c_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__int64_t_malloc_54c_goodB2GSink(int64_t * data) CWE690_NULL_Deref_From_Return__int64_t_malloc_54d_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__int64_t_malloc_54d_goodB2GSink(int64_t * data) CWE690_NULL_Deref_From_Return__int64_t_malloc_54e_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__int64_t_malloc_54e_goodB2GSink(int64_t * data) if ( data != NULL )  data [ 0 ] = 5L L printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 