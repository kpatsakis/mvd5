void CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_14_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( globalFive == 5 )  size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; if ( globalFive == 5 )  badVaSinkB ( data , data ); static void badVaSinkB(char * data, ...) char dest [ 100 ] = "" ; va_list args ; vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 