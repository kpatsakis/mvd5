void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memcpy_54b_badSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memcpy_54c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memcpy_54c_badSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memcpy_54d_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memcpy_54d_badSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memcpy_54e_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memcpy_54e_badSink(wchar_t * data) wchar_t source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 