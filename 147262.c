void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_54b_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_54c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_54c_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_54d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_54d_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_54e_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_54e_goodG2BSink(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; free ( data ); 