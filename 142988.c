void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_51_bad() int * data ; int * dataBadBuffer = ( int * ) ALLOCA ( 50 * sizeof ( int ) ) ; data = dataBadBuffer; CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_51b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_51b_badSink(int * data) int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 