void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_11_bad() wchar_t * data ; data = NULL; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); free ( data ); 