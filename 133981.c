void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_11_bad() FILE * data ; data = NULL; data = fopen ( "BadSource_fopen.txt" , "w+" ); if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = fopen ( "BadSink_fopen.txt" , "w+" ); if ( data != NULL )  fclose ( data ); 