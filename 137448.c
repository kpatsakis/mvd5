void bad() int data ; data = - 1; data = RAND32 ( ); CWE195_Signed_to_Unsigned_Conversion_Error__rand_memmove_82_base * baseObject = new CWE195_Signed_to_Unsigned_Conversion_Error__rand_memmove_82_bad baseObject -> action ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__rand_memmove_82_bad::action(int data) char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 