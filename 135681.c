static void goodG2B2() char * data ; data = NULL; data = CWE127_Buffer_Underread__malloc_char_cpy_22_goodG2B2Source ( data ); char * CWE127_Buffer_Underread__malloc_char_cpy_22_goodG2B2Source(char * data) if ( CWE127_Buffer_Underread__malloc_char_cpy_22_goodG2B2Global )  char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; return data ; char dest [ 100 * 2 ] ; memset ( dest , 'C' , 100 * 2 - 1 ); dest [ 100 * 2 - 1 ] = '\0'; strcpy ( dest , data ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 