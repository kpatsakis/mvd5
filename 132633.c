static void good1() if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; double * * pointer = ( double * * ) malloc ( sizeof ( double * ) ) ; * pointer = data; double * data = * pointer ; printDoubleLine ( * data ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); free ( pointer ); 