void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_ncat_51_bad() char * data ; char * dataBadBuffer = ( char * ) ALLOCA ( 50 * sizeof ( char ) ) ; data = dataBadBuffer; data [ 0 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_ncat_51b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_ncat_51b_badSink(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncat ( data , source , 100 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 