static void goodG2B() char * dataGoodBuffer = ( char * ) malloc ( 50 * sizeof ( char ) ) ; memset ( dataGoodBuffer , 'A' , 50 - 1 ); dataGoodBuffer [ 50 - 1 ] = '\0'; data = ( void * ) dataGoodBuffer; CWE122_Heap_Based_Buffer_Overflow__CWE135_22_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE135_22_goodG2BSink(void * data) size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); printLine ( ( char * ) dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dest ); 