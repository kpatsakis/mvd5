static void goodB2G() int * data ; data = NULL; data = goodB2GSource ( data ); static int * goodB2GSource(int * data) data = ( int * ) calloc ( 1 , sizeof ( int ) ); return data ; if ( data != NULL )  data [ 0 ] = 5; free ( data ); 