void bad() int count ; count = - 1; CWE400_Resource_Exhaustion__rand_fwrite_84_bad * badObject = new CWE400_Resource_Exhaustion__rand_fwrite_84_bad ( count ) ; CWE400_Resource_Exhaustion__rand_fwrite_84_bad::CWE400_Resource_Exhaustion__rand_fwrite_84_bad(int countCopy) count = countCopy; count = RAND32 ( ); delete badObject CWE400_Resource_Exhaustion__rand_fwrite_84_bad::~CWE400_Resource_Exhaustion__rand_fwrite_84_bad() const char * filename = "output_bad.txt" ; pFile = fopen ( filename , "w+" ); if ( pFile == NULL )  if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  if ( pFile )  fclose ( pFile ); 