void CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_63_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen ] = '\0'; CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_63b_badSink ( & data ); void CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_63b_badSink(char * * dataPtr) char * data = * dataPtr ; badVaSink ( data , data ); static void badVaSink(char * data, ...) char dest [ 100 ] = "" ; va_list args ; vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 