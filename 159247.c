static void goodG2B() wchar_t * data ; wchar_t * dataArray [ 5 ] ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' dataArray [ 2 ] = data; CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cpy_66b_goodG2BSink ( dataArray ); void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cpy_66b_goodG2BSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; wchar_t dest [ 50 ] = L "" wcscpy ( dest , data ); 