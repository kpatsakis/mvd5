static void goodB2G() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_84_goodB2G * goodB2GObject = new CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_84_goodB2G ( data ) ; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_84_goodB2G::CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_84_goodB2G(size_t dataCopy) data = dataCopy; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); printLine ( "fgets() failed." ); delete goodB2GObject CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_84_goodB2G::~CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_84_goodB2G() char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 