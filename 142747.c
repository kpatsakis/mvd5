static void goodG2B() double * data ; double * dataArray [ 5 ] ; data = NULL; data = ( double * ) malloc ( sizeof ( * data ) ); * data = 1.7E300; dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66b_goodG2BSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66b_goodG2BSink(double * dataArray[]) double * data = dataArray [ 2 ] ; free ( data ); 