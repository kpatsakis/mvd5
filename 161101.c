static void goodB2G() wchar_t * data ; data = NULL; CWE762_Mismatched_Memory_Management_Routines__delete_wchar_t_calloc_84_goodB2G * goodB2GObject = new CWE762_Mismatched_Memory_Management_Routines__delete_wchar_t_calloc_84_goodB2G ( data ) ; CWE762_Mismatched_Memory_Management_Routines__delete_wchar_t_calloc_84_goodB2G::CWE762_Mismatched_Memory_Management_Routines__delete_wchar_t_calloc_84_goodB2G(wchar_t * dataCopy) data = dataCopy; data = ( wchar_t * ) calloc ( 100 , sizeof ( wchar_t ) ); delete goodB2GObject CWE762_Mismatched_Memory_Management_Routines__delete_wchar_t_calloc_84_goodB2G::~CWE762_Mismatched_Memory_Management_Routines__delete_wchar_t_calloc_84_goodB2G() free ( data ); 