void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_ncat_52_bad() wchar_t * data ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_ncat_52b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_ncat_52b_badSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_ncat_52c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_ncat_52c_badSink(wchar_t * data) wchar_t dest [ 50 ] = L "" wcsncat ( dest , data , wcslen ( data ) ); 