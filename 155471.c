static void goodG2B() int64_t * data ; data = NULL; data = ( int64_t * ) malloc ( sizeof ( * data ) ); CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53b_goodG2BSink(int64_t * data) CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53c_goodG2BSink(int64_t * data) CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53d_goodG2BSink(int64_t * data) printLongLongLine ( * data ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 