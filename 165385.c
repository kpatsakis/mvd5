static void goodG2B() int * data ; data = NULL; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_84_goodG2B * goodG2BObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_84_goodG2B ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_84_goodG2B::CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_84_goodG2B(int * dataCopy) data = dataCopy; data = ( int * ) malloc ( 100 * sizeof ( int ) ); delete goodG2BObject CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_84_goodG2B::~CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_84_goodG2B() int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 