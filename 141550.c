void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_63_bad() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_63b_badSink ( & data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_63b_badSink(size_t * dataPtr) size_t data = * dataPtr ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 