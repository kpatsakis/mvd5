static void goodG2B1() int64_t * data ; data = NULL; if ( staticFive != 5 )  data = new int64_t [ 100 ]; int64_t source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); delete [ ] data 