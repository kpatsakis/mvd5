void CWE78_OS_Command_Injection__wchar_t_environment_w32_execv_41_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE78_OS_Command_Injection__wchar_t_environment_w32_execv_41_badSink ( data ); void CWE78_OS_Command_Injection__wchar_t_environment_w32_execv_41_badSink(wchar_t * data) 