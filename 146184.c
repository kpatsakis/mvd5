static void goodB2G() int64_t * data ; int64_t * dataArray [ 5 ] ; data = NULL; data = ( int64_t * ) calloc ( 100 , sizeof ( int64_t ) ); dataArray [ 2 ] = data; goodB2GSink ( dataArray ); void goodB2GSink(int64_t * dataArray[]) int64_t * data = dataArray [ 2 ] ; free ( data ); 