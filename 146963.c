void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( FILENAME_MAX - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; badSink_b ( data ); void badSink_b(char * data) badSink_c ( data ); void badSink_c(char * data) badSink_d ( data ); void badSink_d(char * data) badSink_e ( data ); void badSink_e(char * data) fileDesc = OPEN ( data , O_RDWR | O_CREAT , S_IREAD | S_IWRITE ); if ( fileDesc != - 1 )  CLOSE ( fileDesc ); 