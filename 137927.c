static void goodG2B() int * data ; int dataGoodBuffer [ 100 ] ; data = dataGoodBuffer; CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_52b_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_52b_goodG2BSink(int * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_52c_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_52c_goodG2BSink(int * data) int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 