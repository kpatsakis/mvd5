static void goodG2B() twoIntsStruct * data ; twoIntsStruct * * dataPtr2 = & data ; data = NULL; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); twoIntsStruct * data = * dataPtr2 ; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memmove ( data , source , 100 * sizeof ( twoIntsStruct ) ); free ( data ); 