void CWE124_Buffer_Underwrite__CWE839_fgets_51_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE124_Buffer_Underwrite__CWE839_fgets_51b_badSink ( data ); void CWE124_Buffer_Underwrite__CWE839_fgets_51b_badSink(int data) if ( data < 10 )  buffer [ data ] = 1; printIntLine ( buffer [ i ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 