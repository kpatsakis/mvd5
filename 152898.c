static void goodG2B() char * data ; char * & dataRef = data ; data = NULL; data = new char [ 10 + 1 ]; char * data = dataRef ; char source [ 10 + 1 ] = SRC_STRING ; strncpy ( data , source , strlen ( source ) + 1 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 