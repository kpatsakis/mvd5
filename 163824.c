void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54b_goodG2BSink(int64_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54c_goodG2BSink(int64_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54d_goodG2BSink(int64_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54e_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54e_goodG2BSink(int64_t * data) int64_t source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int64_t ) ); free ( data ); 