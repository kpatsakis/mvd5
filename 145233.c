void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_63_bad() int * data ; data = NULL; data = ( int * ) malloc ( 10 ); CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_63b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_63b_badSink(int * * dataPtr) int * data = * dataPtr ; int source [ 10 ] = { 0 } ; size_t i ; for (i = 0; i < 10; i++) data [ i ] = source [ i ]; free ( data ); 