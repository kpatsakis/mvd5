void CWE134_Uncontrolled_Format_String__wchar_t_environment_vprintf_10_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( globalTrue )  size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); badVaSinkB ( data , data ); static void badVaSinkB(wchar_t * data, ...) va_start ( args , data ); vwprintf ( data , args ); 