void CWE127_Buffer_Underread__malloc_char_cpy_17_bad() int i ; for(i = 0; i < 1; i++) char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; strcpy ( dest , data ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 