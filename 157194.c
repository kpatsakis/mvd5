void CWE690_NULL_Deref_From_Return__w32_wfopen_66_bad() FILE * data ; FILE * dataArray [ 5 ] ; data = NULL; data = _wfopen ( L "file.txt" , L "w+" ) dataArray [ 2 ] = data; CWE690_NULL_Deref_From_Return__w32_wfopen_66b_badSink ( dataArray ); void CWE690_NULL_Deref_From_Return__w32_wfopen_66b_badSink(FILE * dataArray[]) FILE * data = dataArray [ 2 ] ; fclose ( data ); 