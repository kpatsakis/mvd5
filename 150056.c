void CWE416_Use_After_Free__malloc_free_int64_t_17_bad() int i , j ; int64_t * data ; for(i = 0; i < 1; i++) data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); size_t i ; for(i = 0; i < 100; i++) free ( data ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); 