void CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_partial_init_14_bad() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( 10 * sizeof ( twoIntsStruct ) ); data [ i ] . intOne = i; data [ i ] . intTwo = i; for(i=0; i<10; i++) printIntLine ( data [ i ] . intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); printIntLine ( data [ i ] . intTwo ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 