void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_22_bad() char * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_22_badSource ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_22_badSource(char * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_22_badGlobal )  data = ( char * ) malloc ( 10 * sizeof ( char ) ); return data ; char source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 