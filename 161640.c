void CWE690_NULL_Deref_From_Return__struct_malloc_63_bad() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) malloc ( 1 * sizeof ( twoIntsStruct ) ); CWE690_NULL_Deref_From_Return__struct_malloc_63b_badSink ( & data ); void CWE690_NULL_Deref_From_Return__struct_malloc_63b_badSink(twoIntsStruct * * dataPtr) twoIntsStruct * data = * dataPtr ; data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 