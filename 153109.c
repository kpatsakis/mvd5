static void good2() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; twoIntsStruct * data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ) ; twoIntsStruct * tmpData ; data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; tmpData = ( twoIntsStruct * ) realloc ( data , ( 130000 ) * sizeof ( twoIntsStruct ) ); if ( tmpData != NULL )  data = tmpData; data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 