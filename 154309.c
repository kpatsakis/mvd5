static void goodG2B() int * data ; data = ( int * ) malloc ( 10 * sizeof ( int ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodG2BSink ( dataMap ); void goodG2BSink(map<int, int *> dataMap) int * data = dataMap [ 2 ] ; data [ i ] = source [ i ]; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 