static void goodB2G1() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( STATIC_CONST_TRUE )  size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); goodB2G1VaSinkG ( data , data ); static void goodB2G1VaSinkG(wchar_t * data, ...) va_start ( args , data ); 