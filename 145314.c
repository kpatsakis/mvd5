void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_loop_61_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_loop_61b_badSource ( data ); wchar_t * CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_loop_61b_badSource(wchar_t * data) wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' return data ; size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 