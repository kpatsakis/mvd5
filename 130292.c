void CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cpy_66_bad() wchar_t * data ; wchar_t * dataArray [ 5 ] ; wchar_t dataBadBuffer [ 50 ] ; data = dataBadBuffer; data [ 0 ] = L '\0' dataArray [ 2 ] = data; CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cpy_66b_badSink ( dataArray ); void CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cpy_66b_badSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 