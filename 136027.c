void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_54_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_54b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_54b_badSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_54c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_54c_badSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_54d_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_54d_badSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_54e_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_54e_badSink(char * data) memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 