static void goodB2G1() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); goodB2G1Sink ( data ); static void goodB2G1Sink(char * data) SNPRINTF ( dest , 100 - 1 , "%s" , data ); 