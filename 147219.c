static void goodB2G() size_t data ; data = rand ( ); baseObject -> action ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_82_goodB2G::action(size_t data) if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 