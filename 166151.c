static void goodG2B2() char * data ; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 