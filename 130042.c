static void goodG2B() char * data ; data = NULL; data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; goodG2BSink ( & data ); void goodG2BSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 