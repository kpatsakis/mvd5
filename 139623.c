static void goodG2B() wchar_t * cryptoKey ; wchar_t cryptoKeyBuffer [ 100 ] = L "" cryptoKey = cryptoKeyBuffer; size_t cryptoKeyLen = wcslen ( cryptoKey ) ; if ( 100 - cryptoKeyLen > 1 )  if ( fgetws ( cryptoKey + cryptoKeyLen , ( int ) ( 100 - cryptoKeyLen ) , stdin ) == NULL )  cryptoKey [ cryptoKeyLen ] = L '\0' cryptoKeyLen = wcslen ( cryptoKey ); if ( cryptoKeyLen > 0 )  cryptoKey [ cryptoKeyLen - 1 ] = L '\0' CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_53b_goodG2BSink ( cryptoKey ); void CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_53b_goodG2BSink(wchar_t * cryptoKey) CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_53c_goodG2BSink ( cryptoKey ); void CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_53c_goodG2BSink(wchar_t * cryptoKey) CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_53d_goodG2BSink ( cryptoKey ); void CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_53d_goodG2BSink(wchar_t * cryptoKey) HCRYPTHASH hHash ; if ( ! CryptHashData ( hHash , ( BYTE * ) cryptoKey , wcslen ( cryptoKey ) * sizeof ( wchar_t ) , 0 ) )  