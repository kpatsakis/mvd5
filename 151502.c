void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_51_bad() int data ; data = - 1; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_51b_badSink ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_51b_badSink(int data) char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 