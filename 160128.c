void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_64_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_64b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_64b_badSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; memcpy ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 