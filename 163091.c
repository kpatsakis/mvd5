static void goodG2B2() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data = CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_22_goodG2B2Source ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_22_goodG2B2Source(char * data) memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; memmove ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 