void CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_54b_goodG2BSink(int * data) CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_54c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_54c_goodG2BSink(int * data) CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_54d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_54d_goodG2BSink(int * data) CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_54e_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_54e_goodG2BSink(int * data) int source [ 10 ] = { 0 } ; memmove ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 