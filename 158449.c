static void goodB2G() int k ; char * data ; data = NULL; data = ( char * ) malloc ( 20 * sizeof ( char ) ); for(k = 0; k < 1; k++) if ( data != NULL )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 