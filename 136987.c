void bad() char * cryptoKey ; char cryptoKeyBuffer [ 100 ] = "" ; cryptoKey = cryptoKeyBuffer; CWE321_Hard_Coded_Cryptographic_Key__w32_char_84_bad * badObject = new CWE321_Hard_Coded_Cryptographic_Key__w32_char_84_bad ( cryptoKey ) ; CWE321_Hard_Coded_Cryptographic_Key__w32_char_84_bad::CWE321_Hard_Coded_Cryptographic_Key__w32_char_84_bad(char * cryptoKeyCopy) cryptoKey = cryptoKeyCopy; strcpy ( cryptoKey , CRYPTO_KEY ); delete badObject CWE321_Hard_Coded_Cryptographic_Key__w32_char_84_bad::~CWE321_Hard_Coded_Cryptographic_Key__w32_char_84_bad() char toBeEncrypted [ ] = "String to be encrypted" ; DWORD encryptedLen = strlen ( toBeEncrypted ) * sizeof ( char ) ; memcpy ( encrypted , toBeEncrypted , encryptedLen ); if ( ! CryptEncrypt ( hKey , ( HCRYPTHASH ) NULL , 1 , 0 , encrypted , & encryptedLen , sizeof ( encrypted ) ) )  printBytesLine ( encrypted , encryptedLen ); void printBytesLine(const unsigned char * bytes, size_t numBytes) for (i = 0; i < numBytes; ++i) printf ( "%02x" , bytes [ i ] ); 