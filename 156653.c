void CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_66_bad() int data ; int dataArray [ 5 ] ; data = - 1; data = - 1; dataArray [ 2 ] = data; CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_66b_badSink ( dataArray ); void CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_66b_badSink(int dataArray[]) int data = dataArray [ 2 ] ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 