void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_10_bad() wchar_t * data ; if ( globalTrue )  data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); data [ i ] = source [ i ]; printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 