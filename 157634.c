void CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_34_bad() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer - 8; myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; wcsncpy ( data , source , 100 - 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 