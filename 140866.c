static void goodG2B() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; strcat ( data , "*.*" ); myStruct . structFirst = data; CWE78_OS_Command_Injection__char_environment_system_67b_goodG2BSink ( myStruct ); void CWE78_OS_Command_Injection__char_environment_system_67b_goodG2BSink(CWE78_OS_Command_Injection__char_environment_system_67_structType myStruct) char * data = myStruct . structFirst ; if ( SYSTEM ( data ) <= 0 )  