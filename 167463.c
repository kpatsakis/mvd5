void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_41_bad() int * data ; data = ( int * ) malloc ( 50 * sizeof ( int ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_41_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_41_badSink(int * data) data [ i ] = source [ i ]; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 