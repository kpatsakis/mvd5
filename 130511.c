static void goodG2B1() void * data ; data = NULL; if ( 5 != 5 )  data = ( void * ) CHAR_STRING; if ( 5 == 5 )  size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 