void bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; badSource ( data ); void badSource(char * &data) size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); 