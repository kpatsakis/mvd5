void CWE134_Uncontrolled_Format_String__char_environment_vfprintf_34_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); char * dataCopy = data ; char * data = dataCopy ; badVaSink ( data , data ); static void badVaSink(char * data, ...) va_start ( args , data ); vfprintf ( stdout , data , args ); 