void bad() list < twoIntsStruct * > dataList ; badSink ( dataList ); void badSink(list<twoIntsStruct *> dataList) twoIntsStruct * data = dataList . back ( ) ; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memcpy ( data , source , 100 * sizeof ( twoIntsStruct ) ); free ( data ); 