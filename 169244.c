static void goodB2G2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); if ( sscanf ( data , "%d" , & n ) == 1 )  