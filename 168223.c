static void goodG2B() wchar_t * data ; wchar_t dataGoodBuffer [ 100 ] ; data = dataGoodBuffer; data [ 0 ] = L '\0' CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cpy_64b_goodG2BSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cpy_64b_goodG2BSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 