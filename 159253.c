void CWE401_Memory_Leak__malloc_realloc_twoIntsStruct_02_bad() if ( 1 )  twoIntsStruct * data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ) ; data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); data = ( twoIntsStruct * ) realloc ( data , ( 130000 ) * sizeof ( twoIntsStruct ) ); if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 