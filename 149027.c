static void goodG2B() char * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_61b_goodG2BSource ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_61b_goodG2BSource(char * data) data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; return data ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); free ( data ); 