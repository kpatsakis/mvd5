void bad() char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; baseObject -> action ( data ); void CWE590_Free_Memory_Not_on_Heap__delete_array_char_declare_82_bad::action(char * data) printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 