void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_54_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_54b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_54b_badSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_54c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_54c_badSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_54d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_54d_badSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_54e_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_54e_badSink(wchar_t * data) wcscat ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 