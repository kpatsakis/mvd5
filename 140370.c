void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_12_bad() wchar_t * data ; data = NULL; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = L '\0' free ( data ); 