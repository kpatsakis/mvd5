void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_bad() double * data ; data = ( double * ) malloc ( sizeof ( data ) ); * data = 1.7E300; CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51b_badSink(double * data) printDoubleLine ( * data ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); free ( data ); 