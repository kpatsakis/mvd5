void CWE690_NULL_Deref_From_Return__char_realloc_64_bad() char * data ; data = NULL; data = ( char * ) realloc ( data , 20 * sizeof ( char ) ); CWE690_NULL_Deref_From_Return__char_realloc_64b_badSink ( & data ); void CWE690_NULL_Deref_From_Return__char_realloc_64b_badSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; strcpy ( data , "Initialize" ); free ( data ); 