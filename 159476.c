static void goodG2B() long * data ; long * dataArray [ 5 ] ; data = NULL; long * dataBuffer = ( long * ) malloc ( 100 * sizeof ( long ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L; data = dataBuffer; dataArray [ 2 ] = data; CWE590_Free_Memory_Not_on_Heap__free_long_static_66b_goodG2BSink ( dataArray ); void CWE590_Free_Memory_Not_on_Heap__free_long_static_66b_goodG2BSink(long * dataArray[]) long * data = dataArray [ 2 ] ; free ( data ); 