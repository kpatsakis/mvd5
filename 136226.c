void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad() double * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_badSource ( data ); double * CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_badSource(double * data) if ( CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_badGlobal )  data = ( double * ) malloc ( sizeof ( data ) ); * data = 1.7E300; return data ; free ( data ); 