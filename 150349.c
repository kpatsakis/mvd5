void CWE690_NULL_Deref_From_Return__wchar_t_malloc_12_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 20 * sizeof ( wchar_t ) ); wcscpy ( data , L "Initialize" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); if ( data != NULL )  wcscpy ( data , L "Initialize" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 