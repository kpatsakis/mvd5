void CWE506_Embedded_Malicious_Code__file_transfer_listen_socket_17_bad() int j ; for(j = 0; j < 1; j++) char contents [ 65536 ] ; FILE * pFile ; pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( contents , ( int ) ( 65535 ) , pFile ) == NULL )  contents [ 0 ] = '\0'; if ( send ( acceptSocket , contents , strlen ( contents ) , 0 ) != strlen ( contents ) )  