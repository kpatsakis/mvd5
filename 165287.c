void CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnv_61_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; data = CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnv_61b_badSource ( data ); wchar_t * CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnv_61b_badSource(wchar_t * data) size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); return data ; 