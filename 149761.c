void CWE195_Signed_to_Unsigned_Conversion_Error__rand_memmove_67b_badSink(CWE195_Signed_to_Unsigned_Conversion_Error__rand_memmove_67_structType myStruct) char source [ 100 ] ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 