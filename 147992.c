void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_64_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_64b_badSink ( & data ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_64b_badSink(void * dataVoidPtr) int * dataPtr = ( int * ) dataVoidPtr ; int data = ( * dataPtr ) ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( intPointer ); 