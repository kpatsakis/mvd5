static void goodG2B() vector < char * > dataVector ; goodG2BSink ( dataVector ); void goodG2BSink(vector<char *> dataVector) char * data = dataVector [ 2 ] ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memmove ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 