void bad() char * data ; data = ( char * ) malloc ( 10 * sizeof ( char ) ); baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_82_bad::action(char * data) data [ i ] = source [ i ]; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 