static void goodG2B() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_54b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_54b_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_54c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_54c_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_54d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_54d_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_54e_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_54e_goodG2BSink(char * data) strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 