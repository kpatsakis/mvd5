static void goodB2G() size_t data ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); CWE789_Uncontrolled_Mem_Alloc__new_char_fgets_82_base * baseObject = new CWE789_Uncontrolled_Mem_Alloc__new_char_fgets_82_goodB2G baseObject -> action ( data ); void CWE789_Uncontrolled_Mem_Alloc__new_char_fgets_82_goodB2G::action(size_t data) if ( data > strlen ( HELLO_STRING ) && data < 100 )  