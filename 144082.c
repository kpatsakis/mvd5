void CWE467_Use_of_sizeof_on_Pointer_Type__char_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; char * goodChar = NULL ; goodChar = ( char * ) malloc ( sizeof ( * goodChar ) ); * goodChar = 'G'; printHexCharLine ( * goodChar ); void printHexCharLine (char charHex) printf ( "%02x\n" , charHex ); free ( goodChar ); 