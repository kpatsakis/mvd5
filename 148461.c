static void goodG2B1() char * data ; if ( GLOBAL_CONST_FIVE != 5 )  data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); strncpy ( data , source , strlen ( source ) + 1 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 