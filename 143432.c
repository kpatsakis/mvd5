static void goodG2B() char * dataBuffer = new char [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; goodG2BSink_b ( data ); void goodG2BSink_b(char * data) goodG2BSink_c ( data ); void goodG2BSink_c(char * data) goodG2BSink_d ( data ); void goodG2BSink_d(char * data) goodG2BSink_e ( data ); void goodG2BSink_e(char * data) strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 