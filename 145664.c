void bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); badSource ( data ); static void badSource(char * &data) memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 