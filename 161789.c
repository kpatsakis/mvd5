void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; CWE23_Relative_Path_Traversal__wchar_t_file_ofstream_84_bad * badObject = new CWE23_Relative_Path_Traversal__wchar_t_file_ofstream_84_bad ( data ) ; CWE23_Relative_Path_Traversal__wchar_t_file_ofstream_84_bad::CWE23_Relative_Path_Traversal__wchar_t_file_ofstream_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; if ( FILENAME_MAX - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , pFile ) == NULL )  