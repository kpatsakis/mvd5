void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_21_bad() wchar_t * data ; data = NULL; data = badSource ( data ); static wchar_t * badSource(wchar_t * data) if ( badStatic )  data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); return data ; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); free ( data ); 