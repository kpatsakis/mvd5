static void goodG2B2() size_t data ; data = 0; if ( 1 )  data = 20; if ( 1 )  char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 