void CWE401_Memory_Leak__strdup_char_31_bad() char * data ; char myString [ ] = "myString" ; data = strdup ( myString ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); char * dataCopy = data ; char * data = dataCopy ; 