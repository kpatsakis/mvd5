void bad() void * data ; map < int , void * > dataMap ; data = NULL; data = ( void * ) WIDE_STRING; dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, void *> dataMap) void * data = dataMap [ 2 ] ; size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 