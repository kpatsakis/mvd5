static void goodB2G() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( 1 * sizeof ( twoIntsStruct ) ); dataArray [ 2 ] = data; CWE690_NULL_Deref_From_Return__struct_malloc_66b_goodB2GSink ( dataArray ); void CWE690_NULL_Deref_From_Return__struct_malloc_66b_goodB2GSink(twoIntsStruct * dataArray[]) twoIntsStruct * data = dataArray [ 2 ] ; if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 