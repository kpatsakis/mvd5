void bad() wchar_t * data ; wchar_t * dataBadBuffer = ( wchar_t * ) ALLOCA ( ( 10 ) * sizeof ( wchar_t ) ) ; data = dataBadBuffer; data [ 0 ] = L CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_cpy_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_cpy_82_bad baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_cpy_82_bad::action(wchar_t * data) wchar_t source [ 10 + 1 ] = SRC_STRING ; wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 