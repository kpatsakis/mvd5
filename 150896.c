void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_53_bad() char * data ; data = NULL; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_53b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_53b_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_53c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_53c_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_53d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_53d_badSink(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memmove ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; free ( data ); 