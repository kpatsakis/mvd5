void bad() char * data ; data = NULL; CWE690_NULL_Deref_From_Return__char_malloc_84_bad * badObject = new CWE690_NULL_Deref_From_Return__char_malloc_84_bad ( data ) ; CWE690_NULL_Deref_From_Return__char_malloc_84_bad::CWE690_NULL_Deref_From_Return__char_malloc_84_bad(char * dataCopy) data = dataCopy; data = ( char * ) malloc ( 20 * sizeof ( char ) ); delete badObject CWE690_NULL_Deref_From_Return__char_malloc_84_bad::~CWE690_NULL_Deref_From_Return__char_malloc_84_bad() strcpy ( data , "Initialize" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 