static void good2() if ( STATIC_CONST_TRUE )  int * data = ( int * ) malloc ( 100 * sizeof ( int ) ) ; int * tmpData ; data [ 0 ] = 5; tmpData = ( int * ) realloc ( data , ( 130000 ) * sizeof ( int ) ); if ( tmpData != NULL )  data = tmpData; data [ 0 ] = 10; free ( data ); 