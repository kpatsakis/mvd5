void CWE758_Undefined_Behavior__wchar_t_pointer_malloc_use_17_bad() int j ; for(j = 0; j < 1; j++) wchar_t * * pointer = ( wchar_t * * ) malloc ( sizeof ( wchar_t * ) ) ; wchar_t * data = * pointer ; free ( pointer ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 