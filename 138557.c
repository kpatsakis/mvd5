static void goodG2B() int * data ; data = NULL; data = new int [ 100 ]; goodG2BSink_b ( data ); void goodG2BSink_b(int * data) goodG2BSink_c ( data ); void goodG2BSink_c(int * data) int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 