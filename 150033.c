void CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memcpy_81_goodG2B::action(int data) const char source [ 100 ] ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 