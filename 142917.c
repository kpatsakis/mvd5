static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, char *> dataMap) char * data = dataMap [ 2 ] ; printf ( "%s\n" , data ); 