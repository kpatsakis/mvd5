void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_loop_66_bad() wchar_t * data ; wchar_t * dataArray [ 5 ] ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' dataArray [ 2 ] = data; CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_loop_66b_badSink ( dataArray ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_loop_66b_badSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 