static void goodG2B2() int data ; data = - 1; data = goodG2B2Source ( data ); static int goodG2B2Source(int data) if ( goodG2B2Static )  data = 20; return data ; size_t i ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; free ( intPointer ); 