static void goodG2B() TwoIntsClass * data ; data = NULL; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_84_goodG2B * goodG2BObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_84_goodG2B ( data ) ; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_84_goodG2B::CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_84_goodG2B(TwoIntsClass * dataCopy) data = dataCopy; data = new TwoIntsClass [ 100 ]; delete goodG2BObject CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_84_goodG2B::~CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_84_goodG2B() TwoIntsClass source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memmove ( data , source , 100 * sizeof ( TwoIntsClass ) ); printIntLine ( data [ 0 ] . intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 