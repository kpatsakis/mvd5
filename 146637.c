void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_21_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; data = badSource ( data ); static char * badSource(char * data) if ( badStatic )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 