static void goodG2B1() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data = CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_snprintf_22_goodG2B1Source ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_snprintf_22_goodG2B1Source(char * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_snprintf_22_goodG2B1Global )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); 