static void goodG2B() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( ( 10 + 1 ) * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_82_goodG2B baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_82_goodG2B::action(wchar_t * data) wchar_t source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); free ( data ); 