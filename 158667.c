static void goodG2B() int64_t * data ; data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_41_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_41_goodG2BSink(int64_t * data) memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 