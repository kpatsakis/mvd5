void CWE126_Buffer_Overread__malloc_wchar_t_loop_16_bad() wchar_t * data ; while ( 1 )  wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' size_t i , destLen ; wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' destLen = wcslen ( dest ); for (i = 0; i < destLen; i++) 