void CWE681_Incorrect_Conversion_Between_Numeric_Types__double2int_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  doubleNumber = atof ( inputBuffer ); printIntLine ( ( int ) doubleNumber ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 