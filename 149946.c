void CWE401_Memory_Leak__wchar_t_malloc_67_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wcscpy ( data , L "A String" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) myStruct . structFirst = data; CWE401_Memory_Leak__wchar_t_malloc_67b_badSink ( myStruct ); void CWE401_Memory_Leak__wchar_t_malloc_67b_badSink(CWE401_Memory_Leak__wchar_t_malloc_67_structType myStruct) wchar_t * data = myStruct . structFirst ; 