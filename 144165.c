static void goodG2B1() char * data ; if ( 5 != 5 )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; SNPRINTF ( data , 100 , "%s" , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 