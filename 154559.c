void CWE590_Free_Memory_Not_on_Heap__free_int64_t_static_34_bad() int64_t * data ; CWE590_Free_Memory_Not_on_Heap__free_int64_t_static_34_unionType myUnion ; data = NULL; static int64_t dataBuffer [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L L data = dataBuffer; myUnion . unionFirst = data; int64_t * data = myUnion . unionSecond ; free ( data ); 