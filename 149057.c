void CWE401_Memory_Leak__char_realloc_52_bad() char * data ; data = NULL; data = ( char * ) realloc ( data , 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); CWE401_Memory_Leak__char_realloc_52b_badSink ( data ); void CWE401_Memory_Leak__char_realloc_52b_badSink(char * data) CWE401_Memory_Leak__char_realloc_52c_badSink ( data ); void CWE401_Memory_Leak__char_realloc_52c_badSink(char * data) 