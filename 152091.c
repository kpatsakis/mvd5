static void goodB2G() wchar_t * data ; CWE690_NULL_Deref_From_Return__wchar_t_calloc_34_unionType myUnion ; data = NULL; data = ( wchar_t * ) calloc ( 20 , sizeof ( wchar_t ) ); myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; if ( data != NULL )  wcscpy ( data , L "Initialize" ) free ( data ); 