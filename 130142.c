void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_loop_64_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_loop_64b_badSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_loop_64b_badSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) dest [ i ] = data [ i ]; dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 