void CWE194_Unexpected_Sign_Extension__fgets_memmove_06_bad() short data ; data = 0; if ( STATIC_CONST_FIVE == 5 )  char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = ( short ) atoi ( inputBuffer ); char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 