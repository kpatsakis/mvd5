void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); fileDesc = OPEN ( data , O_RDWR | O_CREAT , S_IREAD | S_IWRITE ); if ( fileDesc != - 1 )  CLOSE ( fileDesc ); 