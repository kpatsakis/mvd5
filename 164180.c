static CVE_2013_1705_VULN_cryptojs_interpret_key_gen_type(char *keyAlg) char * end ; if ( keyAlg == nullptr )  while ( isspace ( keyAlg [ 0 ] ) )  keyAlg ++; end = strchr ( keyAlg , '\0' ); if ( end == nullptr )  if ( strcmp ( keyAlg , "rsa-ex" ) == 0 )  if ( strcmp ( keyAlg , "rsa-dual-use" ) == 0 )  if ( strcmp ( keyAlg , "rsa-sign" ) == 0 )  if ( strcmp ( keyAlg , "rsa-sign-nonrepudiation" ) == 0 )  if ( strcmp ( keyAlg , "rsa-nonrepudiation" ) == 0 )  if ( strcmp ( keyAlg , "ec-ex" ) == 0 )  if ( strcmp ( keyAlg , "ec-dual-use" ) == 0 )  if ( strcmp ( keyAlg , "ec-sign" ) == 0 )  if ( strcmp ( keyAlg , "ec-sign-nonrepudiation" ) == 0 )  if ( strcmp ( keyAlg , "ec-nonrepudiation" ) == 0 )  if ( strcmp ( keyAlg , "dsa-sign-nonrepudiation" ) == 0 )  if ( strcmp ( keyAlg , "dsa-sign" ) == 0 )  if ( strcmp ( keyAlg , "dsa-nonrepudiation" ) == 0 )  