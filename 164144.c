void CWE78_OS_Command_Injection__char_environment_popen_53_bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE78_OS_Command_Injection__char_environment_popen_53b_badSink ( data ); void CWE78_OS_Command_Injection__char_environment_popen_53b_badSink(char * data) CWE78_OS_Command_Injection__char_environment_popen_53c_badSink ( data ); void CWE78_OS_Command_Injection__char_environment_popen_53c_badSink(char * data) CWE78_OS_Command_Injection__char_environment_popen_53d_badSink ( data ); void CWE78_OS_Command_Injection__char_environment_popen_53d_badSink(char * data) pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 