void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_67_bad() wchar_t * data ; CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_67_structType myStruct ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' myStruct . structFirst = data; CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_67b_badSink ( myStruct ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_67_structType myStruct) wchar_t * data = myStruct . structFirst ; wchar_t dest [ 50 ] = L "" wcsncpy ( dest , data , wcslen ( data ) ); 