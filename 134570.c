void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_bad() int data ; int dataArray [ 5 ] ; data = - 1; dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66b_badSink(int dataArray[]) int data = dataArray [ 2 ] ; int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 )  buffer [ data ] = 1; free ( buffer ); 