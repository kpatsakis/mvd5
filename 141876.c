void CWE415_Double_Free__malloc_free_long_67_bad() long * data ; CWE415_Double_Free__malloc_free_long_67_structType myStruct ; data = NULL; data = ( long * ) malloc ( 100 * sizeof ( long ) ); myStruct . structFirst = data; CWE415_Double_Free__malloc_free_long_67b_badSink ( myStruct ); void CWE415_Double_Free__malloc_free_long_67b_badSink(CWE415_Double_Free__malloc_free_long_67_structType myStruct) long * data = myStruct . structFirst ; free ( data ); 