void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_08_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; strcpy ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 