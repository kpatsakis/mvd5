void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncpy_52_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncpy_52b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncpy_52b_badSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncpy_52c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncpy_52c_badSink(char * data) char dest [ 50 ] = "" ; strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 