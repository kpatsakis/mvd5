void CWE416_Use_After_Free__malloc_free_struct_06_bad() twoIntsStruct * data ; if ( STATIC_CONST_FIVE == 5 )  data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); data [ i ] . intOne = 1; data [ i ] . intTwo = 2; free ( data ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); 