void bad() long * data ; data = NULL; CWE762_Mismatched_Memory_Management_Routines__new_free_long_84_bad * badObject = new CWE762_Mismatched_Memory_Management_Routines__new_free_long_84_bad ( data ) ; CWE762_Mismatched_Memory_Management_Routines__new_free_long_84_bad::CWE762_Mismatched_Memory_Management_Routines__new_free_long_84_bad(long * dataCopy) data = dataCopy; data = new long delete badObject CWE762_Mismatched_Memory_Management_Routines__new_free_long_84_bad::~CWE762_Mismatched_Memory_Management_Routines__new_free_long_84_bad() free ( data ); 