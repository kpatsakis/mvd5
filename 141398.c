void CWE606_Unchecked_Loop_Condition__char_file_32_bad() char * data ; char * * dataPtr1 = & data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; char * data = * dataPtr1 ; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; * dataPtr1 = data; if ( sscanf ( data , "%d" , & n ) == 1 )  