static void goodB2G() int count ; count = - 1; CWE400_Resource_Exhaustion__fgets_fwrite_84_goodB2G * goodB2GObject = new CWE400_Resource_Exhaustion__fgets_fwrite_84_goodB2G ( count ) ; CWE400_Resource_Exhaustion__fgets_fwrite_84_goodB2G::CWE400_Resource_Exhaustion__fgets_fwrite_84_goodB2G(int countCopy) count = countCopy; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  count = atoi ( inputBuffer ); printLine ( "fgets() failed." ); delete goodB2GObject CWE400_Resource_Exhaustion__fgets_fwrite_84_goodB2G::~CWE400_Resource_Exhaustion__fgets_fwrite_84_goodB2G() const char * filename = "output_good.txt" ; if ( count > 0 && count <= 20 )  pFile = fopen ( filename , "w+" ); if ( pFile )  fclose ( pFile ); 