void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53b_badSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53c_badSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53d_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53d_badSink(char * data) SNPRINTF ( dest , strlen ( data ) , "%s" , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 