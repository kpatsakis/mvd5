void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_07_bad() char * data ; if ( staticFive == 5 )  data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 