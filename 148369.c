void CWE134_Uncontrolled_Format_String__char_connect_socket_w32_vsnprintf_12_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; strcpy ( data , "fixedstringtest" ); if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; badVaSinkB ( data , data ); static void badVaSinkB(char * data, ...) char dest [ 100 ] = "" ; va_list args ; vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 