static void goodG2B() int data ; CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_67_structType myStruct ; data = - 1; data = 100 - 1; myStruct . structFirst = data; CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_67b_goodG2BSink ( myStruct ); void CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_67b_goodG2BSink(CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_67_structType myStruct) int data = myStruct . structFirst ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 