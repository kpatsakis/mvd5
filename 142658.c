static void goodG2B() int64_t * data ; data = NULL; data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_63b_goodG2BSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_63b_goodG2BSink(int64_t * * dataPtr) int64_t * data = * dataPtr ; int64_t source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 