void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_32_bad() char * data ; char * * dataPtr2 = & data ; char dataBadBuffer [ 10 ] ; data = dataBadBuffer; data [ 0 ] = '\0'; char * data = * dataPtr2 ; char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 