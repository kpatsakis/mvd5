void CWE690_NULL_Deref_From_Return__struct_realloc_54_bad() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 1 * sizeof ( twoIntsStruct ) ); CWE690_NULL_Deref_From_Return__struct_realloc_54b_badSink ( data ); void CWE690_NULL_Deref_From_Return__struct_realloc_54b_badSink(twoIntsStruct * data) CWE690_NULL_Deref_From_Return__struct_realloc_54c_badSink ( data ); void CWE690_NULL_Deref_From_Return__struct_realloc_54c_badSink(twoIntsStruct * data) CWE690_NULL_Deref_From_Return__struct_realloc_54d_badSink ( data ); void CWE690_NULL_Deref_From_Return__struct_realloc_54d_badSink(twoIntsStruct * data) CWE690_NULL_Deref_From_Return__struct_realloc_54e_badSink ( data ); void CWE690_NULL_Deref_From_Return__struct_realloc_54e_badSink(twoIntsStruct * data) data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 