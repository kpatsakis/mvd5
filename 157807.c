void CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnv_64_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnv_64b_badSink ( & data ); void CWE78_OS_Command_Injection__wchar_t_environment_w32_spawnv_64b_badSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; 