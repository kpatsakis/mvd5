static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memmove_52b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memmove_52b_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memmove_52c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memmove_52c_goodG2BSink(wchar_t * data) wchar_t dest [ 50 ] = L "" memmove ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 