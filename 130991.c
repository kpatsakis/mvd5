static void goodG2B2() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; if ( GLOBAL_CONST_TRUE )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) dest [ i ] = data [ i ]; dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 