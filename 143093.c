static void good2() if ( STATIC_CONST_TRUE )  int * data ; data = ( int * ) malloc ( sizeof ( int ) ); * data = 5; * pointer = data; int * data = * pointer ; printIntLine ( * data ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( pointer ); 