void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_01_bad() twoIntsStruct * data ; twoIntsStruct dataBadBuffer [ 50 ] ; data = dataBadBuffer; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intOne = 0; memmove ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); 