void CWE416_Use_After_Free__malloc_free_int64_t_08_bad() int64_t * data ; data = NULL; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); size_t i ; for(i = 0; i < 100; i++) data [ i ] = 5L L free ( data ); 