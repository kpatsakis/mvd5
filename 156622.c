void CWE590_Free_Memory_Not_on_Heap__free_long_static_17_bad() int i ; long * data ; data = NULL; for(i = 0; i < 1; i++) static long dataBuffer [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L; data = dataBuffer; free ( data ); 