void CWE758_Undefined_Behavior__int_malloc_use_11_bad() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; int * pointer = ( int * ) malloc ( sizeof ( int ) ) ; int data = * pointer ; free ( pointer ); printIntLine ( data ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 