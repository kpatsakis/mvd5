void CWE126_Buffer_Overread__malloc_char_loop_61_bad() char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; destLen = strlen ( dest ); for (i = 0; i < destLen; i++) dest [ i ] = data [ i ]; dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 