void bad() char * data ; data = NULL; CWE124_Buffer_Underwrite__malloc_char_cpy_84_bad * badObject = new CWE124_Buffer_Underwrite__malloc_char_cpy_84_bad ( data ) ; CWE124_Buffer_Underwrite__malloc_char_cpy_84_bad::CWE124_Buffer_Underwrite__malloc_char_cpy_84_bad(char * dataCopy) data = dataCopy; char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; delete badObject CWE124_Buffer_Underwrite__malloc_char_cpy_84_bad::~CWE124_Buffer_Underwrite__malloc_char_cpy_84_bad() char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 