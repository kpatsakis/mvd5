void bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer - 8; CWE124_Buffer_Underwrite__wchar_t_declare_memcpy_82_base * baseObject = new CWE124_Buffer_Underwrite__wchar_t_declare_memcpy_82_bad baseObject -> action ( data ); void CWE124_Buffer_Underwrite__wchar_t_declare_memcpy_82_bad::action(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memcpy ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 