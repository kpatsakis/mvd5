static void goodG2B1() char * data ; switch ( 5 )  data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 