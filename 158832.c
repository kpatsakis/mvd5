void CWE126_Buffer_Overread__CWE129_fgets_31_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); int dataCopy = data ; int data = dataCopy ; if ( data >= 0 )  printIntLine ( buffer [ data ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 