static void goodB2G() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); CWE401_Memory_Leak__twoIntsStruct_malloc_54b_goodB2GSink ( data ); void CWE401_Memory_Leak__twoIntsStruct_malloc_54b_goodB2GSink(twoIntsStruct * data) CWE401_Memory_Leak__twoIntsStruct_malloc_54c_goodB2GSink ( data ); void CWE401_Memory_Leak__twoIntsStruct_malloc_54c_goodB2GSink(twoIntsStruct * data) CWE401_Memory_Leak__twoIntsStruct_malloc_54d_goodB2GSink ( data ); void CWE401_Memory_Leak__twoIntsStruct_malloc_54d_goodB2GSink(twoIntsStruct * data) CWE401_Memory_Leak__twoIntsStruct_malloc_54e_goodB2GSink ( data ); void CWE401_Memory_Leak__twoIntsStruct_malloc_54e_goodB2GSink(twoIntsStruct * data) free ( data ); 