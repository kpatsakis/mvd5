static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; CWE134_Uncontrolled_Format_String__char_file_fprintf_54b_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_fprintf_54b_goodB2GSink(char * data) CWE134_Uncontrolled_Format_String__char_file_fprintf_54c_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_fprintf_54c_goodB2GSink(char * data) CWE134_Uncontrolled_Format_String__char_file_fprintf_54d_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_fprintf_54d_goodB2GSink(char * data) CWE134_Uncontrolled_Format_String__char_file_fprintf_54e_goodB2GSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_fprintf_54e_goodB2GSink(char * data) fprintf ( stdout , "%s\n" , data ); 