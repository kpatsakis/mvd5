void CWE690_NULL_Deref_From_Return__wchar_t_realloc_32_bad() wchar_t * data ; wchar_t * * dataPtr1 = & data ; data = NULL; wchar_t * data = * dataPtr1 ; data = ( wchar_t * ) realloc ( data , 20 * sizeof ( wchar_t ) ); * dataPtr1 = data; wcscpy ( data , L "Initialize" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 