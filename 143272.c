void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_41_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_41_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_41_badSink(wchar_t * data) size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 