static void goodG2B() char * data ; char * * dataPtr2 = & data ; char dataGoodBuffer [ 100 ] ; data = dataGoodBuffer; data [ 0 ] = '\0'; char * data = * dataPtr2 ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 