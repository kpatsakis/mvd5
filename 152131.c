void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_loop_14_bad() wchar_t * data ; if ( globalFive == 5 )  data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); data [ i ] = source [ i ]; printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 