static void goodG2B1() char * data ; data = NULL; data = goodG2B1Source ( data ); static char * goodG2B1Source(char * data) if ( goodG2B1Static )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; free ( data ); 