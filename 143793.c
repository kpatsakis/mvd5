static void goodG2B1() twoIntsStruct * data ; twoIntsStruct * dataGoodBuffer = ( twoIntsStruct * ) ALLOCA ( 100 * sizeof ( twoIntsStruct ) ) ; if ( GLOBAL_CONST_FALSE )  data = dataGoodBuffer; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intOne = 0; memcpy ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); 