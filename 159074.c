void CWE401_Memory_Leak__malloc_realloc_int64_t_10_bad() if ( globalTrue )  int64_t * data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ) ; printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); data = ( int64_t * ) realloc ( data , ( 130000 ) * sizeof ( int64_t ) ); if ( data != NULL )  printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 