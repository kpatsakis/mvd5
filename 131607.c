void bad() char * data ; data = new char [ 100 ]; if ( globalFive == 5 )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 