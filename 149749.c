static void goodG2B() twoIntsStruct * data ; data = NULL; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 