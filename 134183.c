static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; data = goodB2GSource ( data ); static char * goodB2GSource(char * data) size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); return data ; 