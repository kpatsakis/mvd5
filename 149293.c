void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; if ( staticFive == 5 )  size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); pFile = FOPEN ( data , L "wb+" ) if ( pFile != NULL )  fclose ( pFile ); 