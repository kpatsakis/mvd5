void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_bad() int i ; double * data ; for(i = 0; i < 1; i++) data = ( double * ) malloc ( sizeof ( data ) ); * data = 1.7E300; printDoubleLine ( * data ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); free ( data ); 