static void goodG2B1() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data = goodG2B1Source ( data ); static char * goodG2B1Source(char * data) memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; memmove ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 