static void goodB2G() int count ; count = - 1; CWE400_Resource_Exhaustion__fscanf_fwrite_64b_goodB2GSink ( & count ); void CWE400_Resource_Exhaustion__fscanf_fwrite_64b_goodB2GSink(void * countVoidPtr) int * countPtr = ( int * ) countVoidPtr ; int count = ( * countPtr ) ; const char * filename = "output_good.txt" ; if ( count > 0 && count <= 20 )  pFile = fopen ( filename , "w+" ); if ( pFile == NULL )  if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  if ( pFile )  fclose ( pFile ); 