void CWE590_Free_Memory_Not_on_Heap__free_char_declare_66_bad() char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; dataArray [ 2 ] = data; CWE590_Free_Memory_Not_on_Heap__free_char_declare_66b_badSink ( dataArray ); void CWE590_Free_Memory_Not_on_Heap__free_char_declare_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 