CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_83_bad::~CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_83_bad() TwoIntsClass source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memmove ( data , source , 100 * sizeof ( TwoIntsClass ) ); printIntLine ( data [ 0 ] . intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 