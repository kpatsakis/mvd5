void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memcpy_34_bad() wchar_t * data ; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memcpy_34_unionType myUnion ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; wchar_t dest [ 50 ] = L "" memcpy ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 