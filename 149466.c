static void goodG2B2() int data ; data = - 1; if ( GLOBAL_CONST_FIVE == 5 )  data = 100 - 1; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 