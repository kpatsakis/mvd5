static void goodB2G() wchar_t * data ; data = NULL; data = ( wchar_t * ) calloc ( 20 , sizeof ( wchar_t ) ); CWE690_NULL_Deref_From_Return__wchar_t_calloc_63b_goodB2GSink ( & data ); void CWE690_NULL_Deref_From_Return__wchar_t_calloc_63b_goodB2GSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; if ( data != NULL )  wcscpy ( data , L "Initialize" ) free ( data ); 