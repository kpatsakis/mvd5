void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_52_bad() size_t data ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_52b_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_52b_badSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_52c_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_52c_badSink(size_t data) if ( data > strlen ( HELLO_STRING ) )  