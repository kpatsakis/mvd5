static void goodB2G2() twoIntsStruct * data ; data = ( twoIntsStruct * ) calloc ( 1 , sizeof ( twoIntsStruct ) ); goodB2G2Sink ( data ); static void goodB2G2Sink(twoIntsStruct * data) if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 