static void goodB2G() char * data ; char * & dataRef = data ; data = NULL; data = ( char * ) realloc ( data , 20 * sizeof ( char ) ); char * data = dataRef ; if ( data != NULL )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 