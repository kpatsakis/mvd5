void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); baseObject -> action ( data ); void CWE23_Relative_Path_Traversal__char_environment_ofstream_82_bad::action(char * data) outputFile . open ( ( char * ) data ); 