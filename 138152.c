void CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_partial_init_64_bad() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( 10 * sizeof ( twoIntsStruct ) ); data [ i ] . intOne = i; data [ i ] . intTwo = i; CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_partial_init_64b_badSink ( & data ); void CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_partial_init_64b_badSink(void * dataVoidPtr) twoIntsStruct * * dataPtr = ( twoIntsStruct * * ) dataVoidPtr ; twoIntsStruct * data = ( * dataPtr ) ; printIntLine ( data [ i ] . intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); printIntLine ( data [ i ] . intTwo ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 