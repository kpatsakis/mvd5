void CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_61_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; data = CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_61b_badSource ( data ); wchar_t * CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_61b_badSource(wchar_t * data) size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); return data ; 