void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_31_bad() int64_t * data ; data = ( int64_t * ) malloc ( 50 * sizeof ( int64_t ) ); int64_t * dataCopy = data ; int64_t * data = dataCopy ; data [ i ] = source [ i ]; printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 