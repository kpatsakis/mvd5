void CWE191_Integer_Underflow__int_fgets_sub_63_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE191_Integer_Underflow__int_fgets_sub_63b_badSink ( & data ); void CWE191_Integer_Underflow__int_fgets_sub_63b_badSink(int * dataPtr) int data = * dataPtr ; int result = data - 1 ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 