static void goodB2G() FILE * data ; data = NULL; data = CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61b_goodB2GSource ( data ); FILE * CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61b_goodB2GSource(FILE * data) data = fopen ( "BadSource_fopen.txt" , "w+" ); return data ; data = fopen ( "GoodSink_fopen.txt" , "w+" ); if ( data != NULL )  fclose ( data ); 