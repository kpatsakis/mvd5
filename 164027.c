static void goodB2G() long * data ; data = ( long * ) calloc ( 1 , sizeof ( long ) ); long * dataCopy = data ; long * data = dataCopy ; if ( data != NULL )  data [ 0 ] = 5L; printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); free ( data ); 