static void goodB2G() char * data ; data = NULL; data = goodB2GSource ( data ); static char * goodB2GSource(char * data) data = ( char * ) realloc ( data , 20 * sizeof ( char ) ); return data ; if ( data != NULL )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 