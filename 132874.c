static void good2() if ( GLOBAL_CONST_FIVE == 5 )  double * data ; data = ( double * ) malloc ( sizeof ( double ) ); * data = 5.0; * pointer = data; double * data = * pointer ; printDoubleLine ( * data ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); free ( pointer ); 