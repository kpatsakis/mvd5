static void goodG2B() int * data ; data = NULL; data = ( int * ) malloc ( 10 * sizeof ( int ) ); CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_52b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_52b_goodG2BSink(int * data) CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_52c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_52c_goodG2BSink(int * data) int source [ 10 ] = { 0 } ; memmove ( data , source , 10 * sizeof ( int ) ); free ( data ); 