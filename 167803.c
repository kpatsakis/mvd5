void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_bad() twoIntsStruct * data ; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( twoIntsStruct * ) malloc ( sizeof ( data ) ); data -> intOne = 1; data -> intTwo = 2; printStructLine ( data ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 