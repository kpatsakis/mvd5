static void goodG2B1() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 