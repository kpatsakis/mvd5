void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_34_bad() size_t data ; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_34_unionType myUnion ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); myUnion . unionFirst = data; size_t data = myUnion . unionSecond ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 