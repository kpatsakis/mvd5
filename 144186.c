static void goodG2B() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_82_goodG2B::action(char * data) strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 