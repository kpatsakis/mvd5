void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_54b_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_54c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_54c_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_54d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_54d_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_54e_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_54e_goodG2BSink(wchar_t * data) wchar_t source [ 10 + 1 ] = SRC_STRING ; size_t i , sourceLen ; sourceLen = wcslen ( source ); for (i = 0; i < sourceLen + 1; i++) data [ i ] = source [ i ]; free ( data ); 