void CWE124_Buffer_Underwrite__wchar_t_alloca_memmove_66_bad() wchar_t * data ; wchar_t * dataArray [ 5 ] ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer - 8; dataArray [ 2 ] = data; CWE124_Buffer_Underwrite__wchar_t_alloca_memmove_66b_badSink ( dataArray ); void CWE124_Buffer_Underwrite__wchar_t_alloca_memmove_66b_badSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memmove ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 