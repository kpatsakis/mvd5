void CWE590_Free_Memory_Not_on_Heap__free_int64_t_static_67_bad() int64_t * data ; CWE590_Free_Memory_Not_on_Heap__free_int64_t_static_67_structType myStruct ; data = NULL; static int64_t dataBuffer [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L L data = dataBuffer; myStruct . structFirst = data; CWE590_Free_Memory_Not_on_Heap__free_int64_t_static_67b_badSink ( myStruct ); void CWE590_Free_Memory_Not_on_Heap__free_int64_t_static_67b_badSink(CWE590_Free_Memory_Not_on_Heap__free_int64_t_static_67_structType myStruct) int64_t * data = myStruct . structFirst ; free ( data ); 