void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cpy_41_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cpy_41_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cpy_41_badSink(wchar_t * data) wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 