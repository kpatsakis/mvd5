static void good1() switch ( 5 )  int64_t * data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ) ; int64_t * tmpData ; data [ 0 ] = 5L L tmpData = ( int64_t * ) realloc ( data , ( 130000 ) * sizeof ( int64_t ) ); if ( tmpData != NULL )  data = tmpData; data [ 0 ] = 10L L free ( data ); 