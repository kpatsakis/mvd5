void CWE321_Hard_Coded_Cryptographic_Key__w32_char_65b_goodG2BSink(char * cryptoKey) char toBeEncrypted [ ] = "String to be encrypted" ; DWORD encryptedLen = strlen ( toBeEncrypted ) * sizeof ( char ) ; BYTE encrypted [ 200 ] ; memcpy ( encrypted , toBeEncrypted , encryptedLen ); if ( ! CryptEncrypt ( hKey , ( HCRYPTHASH ) NULL , 1 , 0 , encrypted , & encryptedLen , sizeof ( encrypted ) ) )  printBytesLine ( encrypted , encryptedLen ); void printBytesLine(const unsigned char * bytes, size_t numBytes) for (i = 0; i < numBytes; ++i) printf ( "%02x" , bytes [ i ] ); 