void CWE191_Integer_Underflow__int_fgets_multiply_21_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); badSink ( data ); static void badSink(int data) if ( data < 0 )  int result = data * 2 ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 