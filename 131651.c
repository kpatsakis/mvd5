void CWE124_Buffer_Underwrite__malloc_char_ncpy_63_bad() char * data ; data = NULL; char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE124_Buffer_Underwrite__malloc_char_ncpy_63b_badSink ( & data ); void CWE124_Buffer_Underwrite__malloc_char_ncpy_63b_badSink(char * * dataPtr) char * data = * dataPtr ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 