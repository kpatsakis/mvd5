static void goodG2B() int h , j ; char * data ; data = NULL; for(h = 0; h < 1; h++) data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 