static void goodG2B() int * data ; data = NULL; data = ( int * ) malloc ( 100 * sizeof ( int ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_82_goodG2B baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_82_goodG2B::action(int * data) int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); free ( data ); 