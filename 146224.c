void CWE126_Buffer_Overread__char_declare_memcpy_12_bad() char dataGoodBuffer [ 100 ] ; memset ( dataGoodBuffer , 'A' , 100 - 1 ); dataGoodBuffer [ 100 - 1 ] = '\0'; data = dataGoodBuffer; memcpy ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 