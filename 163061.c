void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_64_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_64b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_64b_badSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; free ( data ); 