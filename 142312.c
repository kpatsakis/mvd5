void CWE590_Free_Memory_Not_on_Heap__free_int_alloca_53_bad() int * data ; data = NULL; int * dataBuffer = ( int * ) ALLOCA ( 100 * sizeof ( int ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_int_alloca_53b_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_int_alloca_53b_badSink(int * data) CWE590_Free_Memory_Not_on_Heap__free_int_alloca_53c_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_int_alloca_53c_badSink(int * data) CWE590_Free_Memory_Not_on_Heap__free_int_alloca_53d_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_int_alloca_53d_badSink(int * data) free ( data ); 