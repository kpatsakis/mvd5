void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_09_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( GLOBAL_CONST_TRUE )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 