static void goodG2B1() double * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_goodG2B1Source ( data ); double * CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_goodG2B1Source(double * data) if ( CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_goodG2B1Global )  data = ( double * ) malloc ( sizeof ( * data ) ); * data = 1.7E300; return data ; free ( data ); 