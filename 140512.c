static void goodB2G() int * data ; data = NULL; data = NULL; data = ( int * ) realloc ( data , 100 * sizeof ( int ) ); goodB2GSink ( & data ); void goodB2GSink(void * dataVoidPtr) int * * dataPtr = ( int * * ) dataVoidPtr ; int * data = ( * dataPtr ) ; free ( data ); 