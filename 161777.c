void CWE690_NULL_Deref_From_Return__char_calloc_16_bad() char * data ; data = NULL; data = ( char * ) calloc ( 20 , sizeof ( char ) ); while ( 1 )  strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 