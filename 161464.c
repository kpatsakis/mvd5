void CWE126_Buffer_Overread__malloc_wchar_t_memmove_18_bad() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memmove ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 