static void goodG2B() vector < size_t > dataVector ; goodG2BSink ( dataVector ); void goodG2BSink(vector<size_t> dataVector) size_t data = dataVector [ 2 ] ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 