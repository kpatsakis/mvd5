static void goodB2G1() char * data ; data = NULL; data = ( char * ) realloc ( data , 20 * sizeof ( char ) ); goodB2G1Sink ( data ); static void goodB2G1Sink(char * data) if ( goodB2G1Static )  if ( data != NULL )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 