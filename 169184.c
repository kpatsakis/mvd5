static void goodG2B1() twoIntsStruct * data ; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; data = ( twoIntsStruct * ) malloc ( sizeof ( twoIntsStruct ) ); data -> intOne = 5; data -> intTwo = 6; printIntLine ( data -> intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); printIntLine ( data -> intTwo ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 