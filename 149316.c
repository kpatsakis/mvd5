void CWE127_Buffer_Underread__malloc_wchar_t_memmove_52_bad() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer - 8; CWE127_Buffer_Underread__malloc_wchar_t_memmove_52b_badSink ( data ); void CWE127_Buffer_Underread__malloc_wchar_t_memmove_52b_badSink(wchar_t * data) CWE127_Buffer_Underread__malloc_wchar_t_memmove_52c_badSink ( data ); void CWE127_Buffer_Underread__malloc_wchar_t_memmove_52c_badSink(wchar_t * data) memmove ( dest , data , 100 * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 