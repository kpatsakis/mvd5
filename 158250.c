void CWE327_Use_Broken_Crypto__w32_DES_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; FILE * pFile ; char toBeDecrypted [ 100 ] ; DWORD toBeDecryptedLen = sizeof ( toBeDecrypted ) - 1 ; toBeDecrypted [ toBeDecryptedLen ] = '\0'; FILE * pFile ; char toBeDecrypted [ 100 ] ; pFile = fopen ( "encrypted.txt" , "rb" ); if ( fread ( toBeDecrypted , sizeof ( char ) , 100 , pFile ) != 100 )  fclose ( pFile ); 