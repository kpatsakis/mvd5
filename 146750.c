static void goodG2B() wchar_t * data ; wchar_t * dataGoodBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataGoodBuffer; data [ 0 ] = L '\0' CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cpy_52b_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cpy_52b_goodG2BSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cpy_52c_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cpy_52c_goodG2BSink(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 