static void goodG2B1() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; strcpy ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 