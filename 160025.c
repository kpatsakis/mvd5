void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memcpy_16_bad() char * data ; char dataBadBuffer [ 10 ] ; while ( 1 )  data = dataBadBuffer; data [ 0 ] = '\0'; char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 