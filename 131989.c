static void goodB2G() char * data ; data = NULL; CWE762_Mismatched_Memory_Management_Routines__delete_char_calloc_84_goodB2G * goodB2GObject = new CWE762_Mismatched_Memory_Management_Routines__delete_char_calloc_84_goodB2G ( data ) ; CWE762_Mismatched_Memory_Management_Routines__delete_char_calloc_84_goodB2G::CWE762_Mismatched_Memory_Management_Routines__delete_char_calloc_84_goodB2G(char * dataCopy) data = dataCopy; data = ( char * ) calloc ( 100 , sizeof ( char ) ); delete goodB2GObject CWE762_Mismatched_Memory_Management_Routines__delete_char_calloc_84_goodB2G::~CWE762_Mismatched_Memory_Management_Routines__delete_char_calloc_84_goodB2G() free ( data ); 