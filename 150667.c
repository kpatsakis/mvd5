static void goodG2B2() int data ; data = - 1; data = CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_22_goodG2B2Source ( data ); int CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_22_goodG2B2Source(int data) if ( CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_22_goodG2B2Global )  data = 100 - 1; return data ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 