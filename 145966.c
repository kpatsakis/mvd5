void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_53_bad() int * data ; data = NULL; data = ( int * ) malloc ( 10 ); CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_53b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_53b_badSink(int * data) CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_53c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_53c_badSink(int * data) CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_53d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_53d_badSink(int * data) int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); free ( data ); 