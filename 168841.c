static void goodB2G() long * data ; data = NULL; CWE690_NULL_Deref_From_Return__long_calloc_84_goodB2G * goodB2GObject = new CWE690_NULL_Deref_From_Return__long_calloc_84_goodB2G ( data ) ; CWE690_NULL_Deref_From_Return__long_calloc_84_goodB2G::CWE690_NULL_Deref_From_Return__long_calloc_84_goodB2G(long * dataCopy) data = dataCopy; data = ( long * ) calloc ( 1 , sizeof ( long ) ); delete goodB2GObject CWE690_NULL_Deref_From_Return__long_calloc_84_goodB2G::~CWE690_NULL_Deref_From_Return__long_calloc_84_goodB2G() if ( data != NULL )  data [ 0 ] = 5L; free ( data ); 