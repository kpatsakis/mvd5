static void goodB2G() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); dataArray [ 2 ] = data; CWE126_Buffer_Overread__CWE129_fgets_66b_goodB2GSink ( dataArray ); void CWE126_Buffer_Overread__CWE129_fgets_66b_goodB2GSink(int dataArray[]) int data = dataArray [ 2 ] ; if ( data >= 0 && data < ( 10 ) )  printIntLine ( buffer [ data ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 