void CWE416_Use_After_Free__malloc_free_long_11_bad() long * data ; data = NULL; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( long * ) malloc ( 100 * sizeof ( long ) ); size_t i ; for(i = 0; i < 100; i++) data [ i ] = 5L; free ( data ); 