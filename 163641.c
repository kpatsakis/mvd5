void bad() char * data ; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = new char [ 50 ]; data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memmove ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 