static void goodG2B() int data ; CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_malloc_34_unionType myUnion ; data = - 1; data = 100 - 1; myUnion . unionFirst = data; int data = myUnion . unionSecond ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 