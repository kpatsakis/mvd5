void CWE194_Unexpected_Sign_Extension__rand_memmove_42_bad() short data ; data = 0; data = badSource ( data ); static short badSource(short data) data = ( short ) RAND32 ( ); return data ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 