void CWE197_Numeric_Truncation_Error__int_fgets_to_short_41_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE197_Numeric_Truncation_Error__int_fgets_to_short_41_badSink ( data ); void CWE197_Numeric_Truncation_Error__int_fgets_to_short_41_badSink(int data) short shortData = ( short ) data ; printShortLine ( shortData ); void printShortLine (short shortNumber) printf ( "%hd\n" , shortNumber ); 