static void goodB2G() int64_t * data ; CWE401_Memory_Leak__int64_t_realloc_67_structType myStruct ; data = NULL; data = ( int64_t * ) realloc ( data , 100 * sizeof ( int64_t ) ); data [ 0 ] = 5L L myStruct . structFirst = data; CWE401_Memory_Leak__int64_t_realloc_67b_goodB2GSink ( myStruct ); void CWE401_Memory_Leak__int64_t_realloc_67b_goodB2GSink(CWE401_Memory_Leak__int64_t_realloc_67_structType myStruct) int64_t * data = myStruct . structFirst ; free ( data ); 