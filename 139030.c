static void goodG2B() twoIntsStruct * data ; data = NULL; twoIntsStruct * dataBuffer = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] . intOne = 1; dataBuffer [ i ] . intTwo = 1; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_struct_static_51b_goodG2BSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_struct_static_51b_goodG2BSink(twoIntsStruct * data) free ( data ); 