void CWE416_Use_After_Free__malloc_free_char_04_bad() char * data ; data = NULL; if ( STATIC_CONST_TRUE )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; free ( data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 