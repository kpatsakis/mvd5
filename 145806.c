static void goodG2B() char * data ; CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_67_structType myStruct ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_67b_goodG2BSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_67b_goodG2BSink(CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_67_structType myStruct) char * data = myStruct . structFirst ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); free ( data ); 