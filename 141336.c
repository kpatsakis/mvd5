void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_bad() char * data ; char * dataBadBuffer = ( char * ) ALLOCA ( ( 10 ) * sizeof ( char ) ) ; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = dataBadBuffer; data [ 0 ] = '\0'; char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 