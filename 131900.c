static void goodG2B() vector < twoIntsStruct * > dataVector ; goodG2BSink ( dataVector ); void goodG2BSink(vector<twoIntsStruct *> dataVector) twoIntsStruct * data = dataVector [ 2 ] ; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memmove ( data , source , 100 * sizeof ( twoIntsStruct ) ); free ( data ); 