void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_bad() int64_t * data ; data = ( int64_t * ) malloc ( sizeof ( data ) ); dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66b_badSink(int64_t * dataArray[]) int64_t * data = dataArray [ 2 ] ; printLongLongLine ( * data ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 