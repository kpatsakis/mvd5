void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = L "" data = dataBuffer; CWE36_Absolute_Path_Traversal__wchar_t_environment_open_84_bad * badObject = new CWE36_Absolute_Path_Traversal__wchar_t_environment_open_84_bad ( data ) ; CWE36_Absolute_Path_Traversal__wchar_t_environment_open_84_bad::CWE36_Absolute_Path_Traversal__wchar_t_environment_open_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); 