static void goodB2G2() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) calloc ( 1 , sizeof ( twoIntsStruct ) ); goodB2G2Sink ( data ); static void goodB2G2Sink(twoIntsStruct * data) if ( goodB2G2Static )  if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 