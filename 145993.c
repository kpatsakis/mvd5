void bad() int64_t * data ; unionType myUnion ; data = NULL; data = new int64_t [ 50 ]; myUnion . unionFirst = data; int64_t * data = myUnion . unionSecond ; int64_t source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); delete [ ] data 