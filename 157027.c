void CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; BYTE payload [ 100 ] ; HCRYPTPROV hCryptProv = ( HCRYPTPROV ) NULL ; HCRYPTHASH hHash = ( HCRYPTHASH ) NULL ; HCRYPTKEY hKey = ( HCRYPTKEY ) NULL ; char hashData [ 100 ] = HASH_INPUT ; if ( ! CryptAcquireContext ( & hCryptProv , NULL , MS_ENH_RSA_AES_PROV , PROV_RSA_AES , 0 ) )  if ( ! CryptCreateHash ( hCryptProv , CALG_SHA_256 , 0 , 0 , & hHash ) )  if ( ! CryptHashData ( hHash , ( BYTE * ) hashData , strlen ( hashData ) , 0 ) )  if ( ! CryptEncrypt ( hKey , 0 , 1 , 0 , payload , & payloadLen , sizeof ( payload ) ) )  while ( 0 )  