void bad() FILE * data ; data = NULL; CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_84_bad * badObject = new CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_84_bad ( data ) ; CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_84_bad::CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_84_bad(FILE * dataCopy) data = dataCopy; data = fopen ( "BadSource_fopen.txt" , "w+" ); delete badObject CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_84_bad::~CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_84_bad() data = fopen ( "BadSink_fopen.txt" , "w+" ); if ( data != NULL )  fclose ( data ); 