static void goodG2B2() void * data ; data = NULL; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; char * dataGoodBuffer = ( char * ) malloc ( 50 * sizeof ( char ) ) ; memset ( dataGoodBuffer , 'A' , 50 - 1 ); dataGoodBuffer [ 50 - 1 ] = '\0'; data = ( void * ) dataGoodBuffer; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 