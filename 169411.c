static void goodB2G() struct _twoIntsStruct * data ; data = ( struct _twoIntsStruct * ) calloc ( 100 , sizeof ( struct _twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( ( twoIntsStruct * ) & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53b_goodB2GSink ( data ); void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53b_goodB2GSink(struct _twoIntsStruct * data) CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53c_goodB2GSink ( data ); void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53c_goodB2GSink(struct _twoIntsStruct * data) CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53d_goodB2GSink ( data ); void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53d_goodB2GSink(struct _twoIntsStruct * data) free ( data ); 