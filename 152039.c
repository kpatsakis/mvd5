static void goodG2B2() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( STATIC_CONST_FIVE == 5 )  data [ 0 ] = '\0'; size_t sourceLen ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; sourceLen = strlen ( source ); strncat ( data , source , sourceLen ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 