static void goodG2B() int count ; count = - 1; count = 20; CWE400_Resource_Exhaustion__fgets_fwrite_82_base * baseObject = new CWE400_Resource_Exhaustion__fgets_fwrite_82_goodG2B baseObject -> action ( count ); void CWE400_Resource_Exhaustion__fgets_fwrite_82_goodG2B::action(int count) const char * filename = "output_bad.txt" ; pFile = fopen ( filename , "w+" ); if ( pFile == NULL )  if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  if ( pFile )  fclose ( pFile ); 