void bad() char * data ; unionType myUnion ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); myUnion . unionFirst = data; char * data = myUnion . unionSecond ; pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 