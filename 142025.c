static void goodG2B2() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; if ( staticTrue )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; strcpy ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 