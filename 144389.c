static void goodG2B() long * data ; data = NULL; long * dataBuffer = ( long * ) malloc ( 100 * sizeof ( long ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_long_alloca_64b_goodG2BSink ( & data ); void CWE590_Free_Memory_Not_on_Heap__free_long_alloca_64b_goodG2BSink(void * dataVoidPtr) long * * dataPtr = ( long * * ) dataVoidPtr ; long * data = ( * dataPtr ) ; free ( data ); 