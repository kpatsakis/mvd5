static void goodB2G1() char * data ; data = NULL; data = ( char * ) malloc ( 20 * sizeof ( char ) ); CWE690_NULL_Deref_From_Return__char_malloc_22_goodB2G1Sink ( data ); void CWE690_NULL_Deref_From_Return__char_malloc_22_goodB2G1Sink(char * data) if ( CWE690_NULL_Deref_From_Return__char_malloc_22_goodB2G1Global )  if ( data != NULL )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 