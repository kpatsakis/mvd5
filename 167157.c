static void goodG2B() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) malloc ( sizeof ( * data ) ); data -> intOne = 1; data -> intTwo = 2; CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63b_goodG2BSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63b_goodG2BSink(twoIntsStruct * * dataPtr) twoIntsStruct * data = * dataPtr ; printStructLine ( data ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 