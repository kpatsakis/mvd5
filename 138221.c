void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_10_bad() char * data ; data = NULL; if ( globalTrue )  data = ( char * ) malloc ( 10 * sizeof ( char ) ); char source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 