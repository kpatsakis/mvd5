void CWE126_Buffer_Overread__malloc_char_loop_64_bad() char * data ; data = ( char * ) malloc ( 50 * sizeof ( char ) ); memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; CWE126_Buffer_Overread__malloc_char_loop_64b_badSink ( & data ); void CWE126_Buffer_Overread__malloc_char_loop_64b_badSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; dest [ i ] = data [ i ]; dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 