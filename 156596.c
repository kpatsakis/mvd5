static void goodB2G() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE190_Integer_Overflow__int_fgets_multiply_64b_goodB2GSink ( & data ); void CWE190_Integer_Overflow__int_fgets_multiply_64b_goodB2GSink(void * dataVoidPtr) int * dataPtr = ( int * ) dataVoidPtr ; int data = ( * dataPtr ) ; if ( data > 0 )  if ( data < ( INT_MAX / 2 ) )  int result = data * 2 ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 