void CWE506_Embedded_Malicious_Code__file_transfer_listen_socket_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; FILE * pFile ; pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( contents , ( int ) ( 65535 ) , pFile ) == NULL )  contents [ 0 ] = '\0'; fclose ( pFile ); if ( send ( acceptSocket , contents , strlen ( contents ) , 0 ) != strlen ( contents ) )  