void CWE401_Memory_Leak__char_calloc_31_bad() char * data ; data = NULL; data = ( char * ) calloc ( 100 , sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); char * dataCopy = data ; char * data = dataCopy ; 