static void goodG2B() int64_t * dataBuffer = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ) ; if ( dataBuffer == NULL )  data = dataBuffer; myUnion . unionFirst = data; int64_t * data = myUnion . unionSecond ; printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 