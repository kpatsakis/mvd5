void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_11_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' wchar_t dest [ 50 ] = L "" wcscpy ( dest , data ); 