static void goodG2B() twoIntsStruct * data ; map < int , twoIntsStruct * > dataMap ; data = NULL; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodG2BSink ( dataMap ); void goodG2BSink(map<int, twoIntsStruct *> dataMap) twoIntsStruct * data = dataMap [ 2 ] ; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 