void CWE606_Unchecked_Loop_Condition__char_console_05_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( staticTrue )  size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; if ( sscanf ( data , "%d" , & n ) == 1 )  