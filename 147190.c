void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_31_bad() char * data ; data = ( char * ) malloc ( 10 * sizeof ( char ) ); char * dataCopy = data ; char * data = dataCopy ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 