void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_12_bad() char * data ; char dataBadBuffer [ 10 ] ; char dataGoodBuffer [ 10 + 1 ] ; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = dataBadBuffer; data = dataGoodBuffer; data [ 0 ] = '\0'; char source [ 10 + 1 ] = SRC_STRING ; strncpy ( data , source , strlen ( source ) + 1 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 