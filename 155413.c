void CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_81_goodG2B::action(char * data) const goodG2BVaSink ( data , data ); static void goodG2BVaSink(char * data, ...) char dest [ 100 ] = "" ; va_list args ; vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 