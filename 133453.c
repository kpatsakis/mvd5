static void goodG2B() short data ; data = 0; data = CWE194_Unexpected_Sign_Extension__fgets_malloc_61b_goodG2BSource ( data ); short CWE194_Unexpected_Sign_Extension__fgets_malloc_61b_goodG2BSource(short data) data = 100 - 1; return data ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 