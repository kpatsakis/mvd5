static void goodB2G() int64_t * data ; data = NULL; CWE690_NULL_Deref_From_Return__int64_t_calloc_84_goodB2G * goodB2GObject = new CWE690_NULL_Deref_From_Return__int64_t_calloc_84_goodB2G ( data ) ; CWE690_NULL_Deref_From_Return__int64_t_calloc_84_goodB2G::CWE690_NULL_Deref_From_Return__int64_t_calloc_84_goodB2G(int64_t * dataCopy) data = dataCopy; data = ( int64_t * ) calloc ( 1 , sizeof ( int64_t ) ); delete goodB2GObject CWE690_NULL_Deref_From_Return__int64_t_calloc_84_goodB2G::~CWE690_NULL_Deref_From_Return__int64_t_calloc_84_goodB2G() if ( data != NULL )  data [ 0 ] = 5L L free ( data ); 