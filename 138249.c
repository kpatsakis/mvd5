void CWE126_Buffer_Overread__malloc_wchar_t_loop_16_bad() wchar_t * data ; while ( 1 )  data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); dest [ i ] = data [ i ]; printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 