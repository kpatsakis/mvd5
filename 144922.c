void CWE400_Resource_Exhaustion__fscanf_fwrite_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; const char * filename = "output_bad.txt" ; pFile = fopen ( filename , "w+" ); if ( pFile == NULL )  if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  if ( pFile )  fclose ( pFile ); 