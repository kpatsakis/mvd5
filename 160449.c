void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_snprintf_21_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data = badSource ( data ); static wchar_t * badSource(wchar_t * data) if ( badStatic )  wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' return data ; free ( data ); 