static void goodG2B2() int * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_22_goodG2B2Source ( data ); int * CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_22_goodG2B2Source(int * data) if ( CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_22_goodG2B2Global )  data = ( int * ) malloc ( 10 * sizeof ( int ) ); return data ; int source [ 10 ] = { 0 } ; size_t i ; for (i = 0; i < 10; i++) data [ i ] = source [ i ]; free ( data ); 