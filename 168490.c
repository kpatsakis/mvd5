static void goodG2B() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_52b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_52b_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_52c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_52c_goodG2BSink(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncpy ( data , source , 100 - 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 