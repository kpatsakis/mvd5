static void goodG2B() TwoIntsClass * data ; data = NULL; data = new TwoIntsClass [ 100 ]; goodG2BSink_b ( data ); void goodG2BSink_b(TwoIntsClass * data) goodG2BSink_c ( data ); void goodG2BSink_c(TwoIntsClass * data) TwoIntsClass source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memmove ( data , source , 100 * sizeof ( TwoIntsClass ) ); printIntLine ( data [ 0 ] . intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 