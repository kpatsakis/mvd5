static void goodB2G() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) calloc ( 100 , sizeof ( twoIntsStruct ) ); goodB2GSink_b ( data ); void goodB2GSink_b(twoIntsStruct * data) goodB2GSink_c ( data ); void goodB2GSink_c(twoIntsStruct * data) goodB2GSink_d ( data ); void goodB2GSink_d(twoIntsStruct * data) free ( data ); 