static void goodB2G1() size_t data ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_22_goodB2G1Sink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_22_goodB2G1Sink(size_t data) if ( CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_22_goodB2G1Global )  wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( myString ); 