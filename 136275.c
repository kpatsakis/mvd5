void CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_54c_badSink(char * data) CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_54d_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_54d_badSink(char * data) CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_54e_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_54e_badSink(char * data) badVaSink ( data , data ); static void badVaSink(char * data, ...) char dest [ 100 ] = "" ; va_list args ; vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 