void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_loop_63_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_loop_63b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_loop_63b_badSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; data [ i ] = source [ i ]; printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 