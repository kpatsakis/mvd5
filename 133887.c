void CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_53_bad() int64_t * data ; data = NULL; int64_t * dataBuffer = ( int64_t * ) ALLOCA ( 100 * sizeof ( int64_t ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L L data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_53b_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_53b_badSink(int64_t * data) CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_53c_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_53c_badSink(int64_t * data) CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_53d_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_53d_badSink(int64_t * data) free ( data ); 