void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_08_bad() twoIntsStruct * data ; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( twoIntsStruct * ) malloc ( 50 * sizeof ( twoIntsStruct ) ); data [ i ] = source [ i ]; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 