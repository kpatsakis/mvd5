void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_53_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_53b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_53b_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_53c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_53c_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_53d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_53d_badSink(char * data) char dest [ 50 ] = "" ; strcpy ( dest , data ); 