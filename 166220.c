static void goodG2B() twoIntsStruct * data ; data = NULL; CWE762_Mismatched_Memory_Management_Routines__new_array_free_struct_84_goodG2B * goodG2BObject = new CWE762_Mismatched_Memory_Management_Routines__new_array_free_struct_84_goodG2B ( data ) ; CWE762_Mismatched_Memory_Management_Routines__new_array_free_struct_84_goodG2B::CWE762_Mismatched_Memory_Management_Routines__new_array_free_struct_84_goodG2B(twoIntsStruct * dataCopy) data = dataCopy; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); delete goodG2BObject CWE762_Mismatched_Memory_Management_Routines__new_array_free_struct_84_goodG2B::~CWE762_Mismatched_Memory_Management_Routines__new_array_free_struct_84_goodG2B() free ( data ); 