void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_66_bad() int * data ; data = ( int * ) malloc ( 10 ); dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_66b_badSink(int * dataArray[]) int * data = dataArray [ 2 ] ; data [ i ] = source [ i ]; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 