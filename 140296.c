void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_17_bad() int i ; char * data ; data = NULL; for(i = 0; i < 1; i++) data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 