void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_bad() int data ; int * dataPtr2 = & data ; data = - 1; data = RAND32 ( ); int data = * dataPtr2 ; int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 )  buffer [ data ] = 1; free ( buffer ); 