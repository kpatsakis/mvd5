static void goodB2G() wchar_t * data ; wchar_t * * dataPtr1 = & data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wchar_t * data = * dataPtr1 ; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); * dataPtr1 = data; goodB2GVaSink ( data , data ); static void goodB2GVaSink(wchar_t * data, ...) va_start ( args , data ); 