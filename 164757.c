static void goodG2B2() char * data ; if ( globalFive == 5 )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; memmove ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 