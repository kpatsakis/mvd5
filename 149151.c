static void goodG2B2() int * data ; int dataGoodBuffer [ 100 ] ; switch ( 6 )  data = dataGoodBuffer; int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 