void CWE506_Embedded_Malicious_Code__w32_file_attrib_created_10_bad() if ( globalTrue )  FILETIME ftCreate ; hFile = CreateFile ( TEXT ( "badFile.txt" ) , GENERIC_READ | GENERIC_WRITE , 0 , NULL , CREATE_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile == INVALID_HANDLE_VALUE )  if ( GetFileTime ( hFile , & ftCreate , NULL , NULL ) == 0 )  SetFileTime ( hFile , & ftCreate , ( LPFILETIME ) NULL , ( LPFILETIME ) NULL ); while ( 0 )  if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 