static void goodG2B() twoIntsStruct * data ; twoIntsStruct * dataArray [ 5 ] ; data = NULL; data = ( twoIntsStruct * ) malloc ( sizeof ( * data ) ); data -> intOne = 1; data -> intTwo = 2; dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66b_goodG2BSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66b_goodG2BSink(twoIntsStruct * dataArray[]) twoIntsStruct * data = dataArray [ 2 ] ; free ( data ); 