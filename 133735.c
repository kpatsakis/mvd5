void CWE124_Buffer_Underwrite__malloc_wchar_t_cpy_22_bad() wchar_t * data ; data = NULL; data = CWE124_Buffer_Underwrite__malloc_wchar_t_cpy_22_badSource ( data ); wchar_t * CWE124_Buffer_Underwrite__malloc_wchar_t_cpy_22_badSource(wchar_t * data) if ( CWE124_Buffer_Underwrite__malloc_wchar_t_cpy_22_badGlobal )  wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer - 8; return data ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 