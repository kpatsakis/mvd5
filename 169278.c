void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53_bad() char * data ; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53b_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53c_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53d_badSink(char * data) SNPRINTF ( data , 100 , "%s" , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 