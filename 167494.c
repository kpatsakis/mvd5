static void goodG2B() char * data ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_82_goodG2B baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_82_goodG2B::action(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; free ( data ); 