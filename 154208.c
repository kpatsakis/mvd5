void CWE401_Memory_Leak__malloc_realloc_wchar_t_11_bad() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; wchar_t * data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; wcscpy ( data , L "A String" ) data = ( wchar_t * ) realloc ( data , ( 130000 ) * sizeof ( wchar_t ) ); if ( data != NULL )  wcscpy ( data , L "New String" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 