void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_68b_goodG2BSink() char * data = CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_68_goodG2BData ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 