void bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); badSink_b ( data ); void badSink_b(size_t data) badSink_c ( data ); void badSink_c(size_t data) badSink_d ( data ); void badSink_d(size_t data) badSink_e ( data ); void badSink_e(size_t data) if ( data > strlen ( HELLO_STRING ) )  myString = new char [ data ]; strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] myString 