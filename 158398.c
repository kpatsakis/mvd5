static void good2() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; intPointer = ( int * ) malloc ( sizeof ( int ) ); * intPointer = 5; printIntLine ( * intPointer ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); * intPointer = 10; printIntLine ( * intPointer ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 