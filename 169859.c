static void goodG2B() char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; CWE127_Buffer_Underread__malloc_char_cpy_41_goodG2BSink ( data ); void CWE127_Buffer_Underread__malloc_char_cpy_41_goodG2BSink(char * data) strcpy ( dest , data ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 