void CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_42_bad() wchar_t * cryptoKey ; wchar_t cryptoKeyBuffer [ 100 ] = L "" cryptoKey = cryptoKeyBuffer; cryptoKey = badSource ( cryptoKey ); static wchar_t * badSource(wchar_t * cryptoKey) wcscpy ( cryptoKey , CRYPTO_KEY ); return cryptoKey ; HCRYPTHASH hHash ; if ( ! CryptHashData ( hHash , ( BYTE * ) cryptoKey , wcslen ( cryptoKey ) * sizeof ( wchar_t ) , 0 ) )  