void bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); baseObject -> action ( data ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_82_bad::action(wchar_t * data) badVaSink ( data , data ); static void badVaSink(wchar_t * data, ...) va_start ( args , data ); vfwprintf ( stdout , data , args ); 