void CWE415_Double_Free__malloc_free_long_11_bad() long * data ; data = NULL; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( long * ) malloc ( 100 * sizeof ( long ) ); if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; free ( data ); 