static void goodB2G1() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = ( float ) atof ( inputBuffer ); if ( fabs ( data ) > 0.000001 )  int result = ( int ) ( 100.0 / data ) ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 