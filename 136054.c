void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_03_bad() if ( 5 == 5 )  int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; buffer [ i ] = 0; buffer [ data ] = 1; for(i = 0; i < 10; i++) printIntLine ( buffer [ i ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( buffer ); 