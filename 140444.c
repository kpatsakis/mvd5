static void goodB2G2() char * data ; data = NULL; data = ( char * ) malloc ( 20 * sizeof ( char ) ); if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; if ( data != NULL )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 