void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_67_bad() char * data ; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_67_structType myStruct ; data = NULL; data = ( char * ) malloc ( 10 * sizeof ( char ) ); myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_67b_badSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_67_structType myStruct) char * data = myStruct . structFirst ; char source [ 10 + 1 ] = SRC_STRING ; strncpy ( data , source , strlen ( source ) + 1 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 