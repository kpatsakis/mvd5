static void good2() if ( STATIC_CONST_FIVE == 5 )  char dataBuffer [ 100 ] = "" ; char * data = dataBuffer ; strcpy ( data , "abcdefghijklmnopqrstuvwxyz" ); memmove ( data + 6 , data + 4 , 10 * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 