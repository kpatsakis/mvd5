static void goodG2B() int h ; int64_t * data ; for(h = 0; h < 1; h++) data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 