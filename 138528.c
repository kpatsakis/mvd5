static void goodG2B() char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; CWE124_Buffer_Underwrite__malloc_char_cpy_52b_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__malloc_char_cpy_52b_goodG2BSink(char * data) CWE124_Buffer_Underwrite__malloc_char_cpy_52c_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__malloc_char_cpy_52c_goodG2BSink(char * data) strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 