static void goodG2B() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodG2BSink ( dataMap ); void goodG2BSink(map<int, char *> dataMap) char * data = dataMap [ 2 ] ; free ( data ); 