void CWE127_Buffer_Underread__wchar_t_alloca_cpy_67_bad() wchar_t * data ; CWE127_Buffer_Underread__wchar_t_alloca_cpy_67_structType myStruct ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer - 8; myStruct . structFirst = data; CWE127_Buffer_Underread__wchar_t_alloca_cpy_67b_badSink ( myStruct ); void CWE127_Buffer_Underread__wchar_t_alloca_cpy_67b_badSink(CWE127_Buffer_Underread__wchar_t_alloca_cpy_67_structType myStruct) wchar_t * data = myStruct . structFirst ; wchar_t dest [ 100 * 2 ] ; wmemset ( dest , L 'C' , 100 * 2 - 1 dest [ 100 * 2 - 1 ] = L '\0' wcscpy ( dest , data ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 