void bad() long * data ; data = NULL; CWE690_NULL_Deref_From_Return__long_malloc_84_bad * badObject = new CWE690_NULL_Deref_From_Return__long_malloc_84_bad ( data ) ; CWE690_NULL_Deref_From_Return__long_malloc_84_bad::CWE690_NULL_Deref_From_Return__long_malloc_84_bad(long * dataCopy) data = dataCopy; data = ( long * ) malloc ( 1 * sizeof ( long ) ); delete badObject CWE690_NULL_Deref_From_Return__long_malloc_84_bad::~CWE690_NULL_Deref_From_Return__long_malloc_84_bad() data [ 0 ] = 5L; free ( data ); 