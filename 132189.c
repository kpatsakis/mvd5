void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_67_bad() char * data ; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_67_structType myStruct ; data = NULL; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_67b_badSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_67_structType myStruct) char * data = myStruct . structFirst ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 