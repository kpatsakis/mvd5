void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_54b_goodG2BSink(int * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_54c_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_54c_goodG2BSink(int * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_54d_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_54d_goodG2BSink(int * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_54e_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_54e_goodG2BSink(int * data) int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 