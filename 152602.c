void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_53_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_53b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_53b_badSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_53c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_53c_badSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_53d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_53d_badSink(wchar_t * data) wcscat ( dest , data ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 