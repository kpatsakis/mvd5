static void goodG2B1() wchar_t * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_22_goodG2B1Source ( data ); wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_22_goodG2B1Source(wchar_t * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_22_goodG2B1Global )  data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' return data ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncpy ( data , source , 100 - 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 