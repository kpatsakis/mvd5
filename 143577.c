static void goodG2B() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; strcat ( data , "*.*" ); baseObject -> action ( data ); void CWE78_OS_Command_Injection__char_environment_popen_82_goodG2B::action(char * data) pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 