static void goodG2B() int data ; int dataArray [ 5 ] ; data = - 1; data = 20; dataArray [ 2 ] = data; CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_66b_goodG2BSink ( dataArray ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_66b_goodG2BSink(int dataArray[]) int data = dataArray [ 2 ] ; size_t i ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; free ( intPointer ); 