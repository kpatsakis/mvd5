static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); myStruct . structFirst = data; CWE134_Uncontrolled_Format_String__char_file_snprintf_67b_goodB2GSink ( myStruct ); void CWE134_Uncontrolled_Format_String__char_file_snprintf_67b_goodB2GSink(CWE134_Uncontrolled_Format_String__char_file_snprintf_67_structType myStruct) char * data = myStruct . structFirst ; SNPRINTF ( dest , 100 - 1 , "%s" , data ); 