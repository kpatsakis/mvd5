static void goodB2G() int * data ; data = NULL; data = CWE690_NULL_Deref_From_Return__int_calloc_61b_goodB2GSource ( data ); int * CWE690_NULL_Deref_From_Return__int_calloc_61b_goodB2GSource(int * data) data = ( int * ) calloc ( 1 , sizeof ( int ) ); return data ; if ( data != NULL )  data [ 0 ] = 5; free ( data ); 