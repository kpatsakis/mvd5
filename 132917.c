static void goodG2B2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 