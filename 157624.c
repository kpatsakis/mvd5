static void goodG2B() wchar_t * data ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memmove_84_goodG2B * goodG2BObject = new CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memmove_84_goodG2B ( data ) ; CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memmove_84_goodG2B::CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memmove_84_goodG2B(wchar_t * dataCopy) data = dataCopy; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' delete goodG2BObject CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memmove_84_goodG2B::~CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memmove_84_goodG2B() wchar_t dest [ 50 ] = L "" memmove ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 