static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; CWE23_Relative_Path_Traversal__wchar_t_environment_fopen_84_goodG2B * goodG2BObject = new CWE23_Relative_Path_Traversal__wchar_t_environment_fopen_84_goodG2B ( data ) ; CWE23_Relative_Path_Traversal__wchar_t_environment_fopen_84_goodG2B::CWE23_Relative_Path_Traversal__wchar_t_environment_fopen_84_goodG2B(wchar_t * dataCopy) data = dataCopy; wcscat ( data , L "file.txt" ) delete goodG2BObject CWE23_Relative_Path_Traversal__wchar_t_environment_fopen_84_goodG2B::~CWE23_Relative_Path_Traversal__wchar_t_environment_fopen_84_goodG2B() FILE * pFile = NULL ; pFile = FOPEN ( data , L "wb+" ) if ( pFile != NULL )  fclose ( pFile ); 