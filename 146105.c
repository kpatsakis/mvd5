static void goodB2G2() char * data ; data = NULL; data = ( char * ) realloc ( data , 20 * sizeof ( char ) ); goodB2G2Sink ( data ); static void goodB2G2Sink(char * data) if ( goodB2G2Static )  if ( data != NULL )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 