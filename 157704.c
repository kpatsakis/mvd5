static void good2() if ( staticTrue )  twoIntsStruct * pointer = ( twoIntsStruct * ) malloc ( sizeof ( twoIntsStruct ) ) ; * pointer = data; twoIntsStruct data = * pointer ; printIntLine ( data . intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); printIntLine ( data . intTwo ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( pointer ); 