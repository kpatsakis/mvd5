void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61_bad() int * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61b_badSource ( data ); int * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61b_badSource(int * data) data = ( int * ) malloc ( 50 * sizeof ( int ) ); return data ; int source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 