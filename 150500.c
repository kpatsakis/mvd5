static void goodG2B1() char * data ; data = NULL; data = goodG2B1Source ( data ); static char * goodG2B1Source(char * data) if ( goodG2B1Static )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; return data ; free ( data ); 