static void goodG2B() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_53b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_53b_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_53c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_53c_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_53d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_53d_goodG2BSink(char * data) strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 