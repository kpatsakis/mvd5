void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_67_bad() char * data ; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_67_structType myStruct ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_67b_badSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_67_structType myStruct) char * data = myStruct . structFirst ; char dest [ 50 ] = "" ; strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 