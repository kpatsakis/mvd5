static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_52b_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_52b_goodG2BSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_52c_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_52c_goodG2BSink(wchar_t * data) wchar_t dest [ 50 ] = L "" wcscpy ( dest , data ); 