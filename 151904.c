static void goodB2G() int * data ; data = NULL; data = ( int * ) realloc ( data , 1 * sizeof ( int ) ); myStruct . structFirst = data; CWE690_NULL_Deref_From_Return__int_realloc_67b_goodB2GSink ( myStruct ); void CWE690_NULL_Deref_From_Return__int_realloc_67b_goodB2GSink(CWE690_NULL_Deref_From_Return__int_realloc_67_structType myStruct) int * data = myStruct . structFirst ; if ( data != NULL )  data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 