void CWE124_Buffer_Underwrite__CWE839_fgets_67_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); myStruct . structFirst = data; CWE124_Buffer_Underwrite__CWE839_fgets_67b_badSink ( myStruct ); void CWE124_Buffer_Underwrite__CWE839_fgets_67b_badSink(CWE124_Buffer_Underwrite__CWE839_fgets_67_structType myStruct) int data = myStruct . structFirst ; if ( data < 10 )  buffer [ data ] = 1; printIntLine ( buffer [ i ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 