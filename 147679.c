void CWE90_LDAP_Injection__w32_char_console_05_bad() char * data ; char dataBuffer [ 256 ] = "" ; data = dataBuffer; if ( staticTrue )  size_t dataLen = strlen ( data ) ; if ( 256 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 256 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; 