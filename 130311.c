void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_22_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_22_badSource ( data ); char * CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_22_badSource(char * data) if ( CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_22_badGlobal )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; 