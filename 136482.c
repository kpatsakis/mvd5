void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_31_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' wchar_t * dataCopy = data ; wchar_t * data = dataCopy ; wchar_t dest [ 50 ] = L "" wcscpy ( dest , data ); 