static void goodG2B2() twoIntsStruct * data ; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); memcpy ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 