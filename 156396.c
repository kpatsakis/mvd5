static void goodB2G2() int * data ; data = NULL; data = ( int * ) calloc ( 1 , sizeof ( int ) ); goodB2G2Sink ( data ); static void goodB2G2Sink(int * data) if ( goodB2G2Static )  if ( data != NULL )  data [ 0 ] = 5; free ( data ); 