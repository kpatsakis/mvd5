static void goodG2B() int * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61b_goodG2BSource ( data ); int * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61b_goodG2BSource(int * data) data = ( int * ) malloc ( 100 * sizeof ( int ) ); return data ; int source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 