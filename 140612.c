void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memmove_31_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); int dataCopy = data ; int data = dataCopy ; if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 