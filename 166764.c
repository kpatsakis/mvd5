void CWE467_Use_of_sizeof_on_Pointer_Type__char_02_bad() if ( 1 )  badChar = ( char * ) malloc ( sizeof ( badChar ) ); * badChar = 'B'; printHexCharLine ( * badChar ); void printHexCharLine (char charHex) printf ( "%02x\n" , charHex ); free ( badChar ); 