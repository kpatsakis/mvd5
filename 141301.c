void CWE758_Undefined_Behavior__struct_malloc_use_15_bad() switch ( 6 )  twoIntsStruct * pointer = ( twoIntsStruct * ) malloc ( sizeof ( twoIntsStruct ) ) ; twoIntsStruct data = * pointer ; free ( pointer ); printIntLine ( data . intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); printIntLine ( data . intTwo ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 