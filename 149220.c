static void goodG2B() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; if ( dataBuffer == NULL )  data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_wchar_t_alloca_51b_goodG2BSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_alloca_51b_goodG2BSink(wchar_t * data) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 