void CWE457_Use_of_Uninitialized_Variable__double_array_malloc_no_init_64_bad() double * data ; data = ( double * ) malloc ( 10 * sizeof ( double ) ); CWE457_Use_of_Uninitialized_Variable__double_array_malloc_no_init_64b_badSink ( & data ); void CWE457_Use_of_Uninitialized_Variable__double_array_malloc_no_init_64b_badSink(void * dataVoidPtr) double * * dataPtr = ( double * * ) dataVoidPtr ; double * data = ( * dataPtr ) ; printDoubleLine ( data [ i ] ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); 