void bad() int * data ; map < int , int * > dataMap ; data = NULL; static int dataBuffer [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5; data = dataBuffer; dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, int *> dataMap) int * data = dataMap [ 2 ] ; free ( data ); 