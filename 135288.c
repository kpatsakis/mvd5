static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE606_Unchecked_Loop_Condition__char_environment_54b_goodB2GSink ( data ); void CWE606_Unchecked_Loop_Condition__char_environment_54b_goodB2GSink(char * data) CWE606_Unchecked_Loop_Condition__char_environment_54c_goodB2GSink ( data ); void CWE606_Unchecked_Loop_Condition__char_environment_54c_goodB2GSink(char * data) CWE606_Unchecked_Loop_Condition__char_environment_54d_goodB2GSink ( data ); void CWE606_Unchecked_Loop_Condition__char_environment_54d_goodB2GSink(char * data) CWE606_Unchecked_Loop_Condition__char_environment_54e_goodB2GSink ( data ); void CWE606_Unchecked_Loop_Condition__char_environment_54e_goodB2GSink(char * data) if ( sscanf ( data , "%d" , & n ) == 1 )  