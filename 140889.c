void CWE127_Buffer_Underread__malloc_wchar_t_cpy_16_bad() wchar_t * data ; data = NULL; while ( 1 )  wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer - 8; wchar_t dest [ 100 * 2 ] ; wmemset ( dest , L 'C' , 100 * 2 - 1 dest [ 100 * 2 - 1 ] = L '\0' wcscpy ( dest , data ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 