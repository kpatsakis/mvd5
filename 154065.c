static void goodB2G2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( GLOBAL_CONST_FIVE == 5 )  size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); if ( sscanf ( data , "%d" , & n ) == 1 )  