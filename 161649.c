void CWE134_Uncontrolled_Format_String__char_file_snprintf_53_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; CWE134_Uncontrolled_Format_String__char_file_snprintf_53b_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_snprintf_53b_badSink(char * data) CWE134_Uncontrolled_Format_String__char_file_snprintf_53c_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_snprintf_53c_badSink(char * data) CWE134_Uncontrolled_Format_String__char_file_snprintf_53d_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_snprintf_53d_badSink(char * data) SNPRINTF ( dest , 100 - 1 , data ); 