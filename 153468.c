void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_ncat_08_bad() char * data ; char dataBadBuffer [ 50 ] ; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = dataBadBuffer; data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncat ( data , source , 100 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 