static void good1() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; double * data ; data = ( double * ) malloc ( sizeof ( double ) ); * data = 5.0; * pointer = data; double * data = * pointer ; printDoubleLine ( * data ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); free ( pointer ); * data = 5.0; * pointer = data; double * data = * pointer ; printDoubleLine ( * data ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); free ( pointer ); 