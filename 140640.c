void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_53_bad() char * data ; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_53b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_53b_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_53c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_53c_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_53d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_53d_badSink(char * data) data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 