void bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); dataVector . insert ( dataVector . end ( ) , 1 , data ); dataVector . insert ( dataVector . end ( ) , 1 , data ); dataVector . insert ( dataVector . end ( ) , 1 , data ); 