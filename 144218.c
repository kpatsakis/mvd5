static void goodG2B() char * data ; data = NULL; data = ( char * ) ALLOCA ( 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); CWE401_Memory_Leak__char_realloc_64b_goodG2BSink ( & data ); void CWE401_Memory_Leak__char_realloc_64b_goodG2BSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; 