static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE606_Unchecked_Loop_Condition__char_environment_52b_goodB2GSink ( data ); void CWE606_Unchecked_Loop_Condition__char_environment_52b_goodB2GSink(char * data) CWE606_Unchecked_Loop_Condition__char_environment_52c_goodB2GSink ( data ); void CWE606_Unchecked_Loop_Condition__char_environment_52c_goodB2GSink(char * data) if ( sscanf ( data , "%d" , & n ) == 1 )  