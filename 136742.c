void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_loop_15_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; switch ( 6 )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 