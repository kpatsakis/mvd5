void CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_51_bad() int data ; data = - 1; data = - 1; CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_51b_badSink ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_51b_badSink(int data) char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 