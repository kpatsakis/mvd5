void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_08_bad() size_t data ; data = 0; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 