void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncpy_22_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data = CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncpy_22_badSource ( data ); wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncpy_22_badSource(wchar_t * data) wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' return data ; wcsncpy ( dest , data , wcslen ( data ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 