void CWE780_Use_of_RSA_Algorithm_Without_OAEP__w32_10_bad() if ( globalTrue )  BYTE payload [ 200 ] ; DWORD payloadLen = strlen ( PAYLOAD ) ; memcpy ( payload , PAYLOAD , payloadLen ); if ( ! CryptEncrypt ( hKey , ( HCRYPTHASH ) NULL , 1 , 0 , ( BYTE * ) payload , & payloadLen , sizeof ( payload ) ) )  while ( 0 )  printBytesLine ( ( BYTE * ) payload , payloadLen ); void printBytesLine(const unsigned char * bytes, size_t numBytes) for (i = 0; i < numBytes; ++i) printf ( "%02x" , bytes [ i ] ); 