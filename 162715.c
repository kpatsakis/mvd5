void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncpy_08_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' wchar_t dest [ 50 ] = L "" wcsncpy ( dest , data , wcslen ( data ) ); 