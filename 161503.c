void CWE401_Memory_Leak__wchar_t_calloc_63_bad() wchar_t * data ; data = ( wchar_t * ) calloc ( 100 , sizeof ( wchar_t ) ); wcscpy ( data , L "A String" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) CWE401_Memory_Leak__wchar_t_calloc_63b_badSink ( & data ); void CWE401_Memory_Leak__wchar_t_calloc_63b_badSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; 