static void good1() if ( STATIC_CONST_FIVE != 5 )  intPointer = ( int * ) malloc ( sizeof ( int ) ); * intPointer = 5; printIntLine ( * intPointer ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); * intPointer = 10; printIntLine ( * intPointer ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 