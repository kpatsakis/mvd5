void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_66_bad() int * data ; int * dataArray [ 5 ] ; data = NULL; data = ( int * ) malloc ( 10 ); dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_66b_badSink(int * dataArray[]) int * data = dataArray [ 2 ] ; int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); free ( data ); 