void CWE78_OS_Command_Injection__char_file_execlp_52_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; CWE78_OS_Command_Injection__char_file_execlp_52b_badSink ( data ); void CWE78_OS_Command_Injection__char_file_execlp_52b_badSink(char * data) CWE78_OS_Command_Injection__char_file_execlp_52c_badSink ( data ); void CWE78_OS_Command_Injection__char_file_execlp_52c_badSink(char * data) 