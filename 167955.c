static void goodB2G1() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); CWE401_Memory_Leak__char_malloc_22_goodB2G1Sink ( data ); void CWE401_Memory_Leak__char_malloc_22_goodB2G1Sink(char * data) free ( data ); 