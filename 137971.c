void bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memmove_84_bad * badObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memmove_84_bad ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memmove_84_bad::CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memmove_84_bad(wchar_t * dataCopy) data = dataCopy; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' delete badObject CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memmove_84_bad::~CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memmove_84_bad() free ( data ); 