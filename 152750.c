static void goodG2B() char * data ; unionType myUnion ; data = NULL; data = new char [ 100 ]; data [ 0 ] = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 