static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "15" ); CWE606_Unchecked_Loop_Condition__char_connect_socket_52b_goodG2BSink ( data ); void CWE606_Unchecked_Loop_Condition__char_connect_socket_52b_goodG2BSink(char * data) CWE606_Unchecked_Loop_Condition__char_connect_socket_52c_goodG2BSink ( data ); void CWE606_Unchecked_Loop_Condition__char_connect_socket_52c_goodG2BSink(char * data) if ( sscanf ( data , "%d" , & n ) == 1 )  