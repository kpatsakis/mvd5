static void goodG2B() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; dataArray [ 2 ] = data; CWE127_Buffer_Underread__malloc_wchar_t_loop_66b_goodG2BSink ( dataArray ); void CWE127_Buffer_Underread__malloc_wchar_t_loop_66b_goodG2BSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; dest [ i ] = data [ i ]; printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 