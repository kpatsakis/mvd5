void bad() int data ; data = - 1; CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_84_bad * badObject = new CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_84_bad ( data ) ; CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_84_bad::CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_84_bad(int dataCopy) data = dataCopy; data = RAND32 ( ); delete badObject CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_84_bad::~CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_84_bad() int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( intPointer ); 