static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; CWE606_Unchecked_Loop_Condition__char_file_84_goodB2G * goodB2GObject = new CWE606_Unchecked_Loop_Condition__char_file_84_goodB2G ( data ) ; CWE606_Unchecked_Loop_Condition__char_file_84_goodB2G::CWE606_Unchecked_Loop_Condition__char_file_84_goodB2G(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; 