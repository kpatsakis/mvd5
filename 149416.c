static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); goodB2GVaSinkG ( data , data ); static void goodB2GVaSinkG(char * data, ...) va_start ( args , data ); goodB2GVaSinkG ( data , data ); static void goodB2GVaSinkG(char * data, ...) va_start ( args , data ); 