void bad() int * data ; data = NULL; data = ( int * ) ALLOCA ( 10 ); CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_82_bad baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_82_bad::action(int * data) int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 