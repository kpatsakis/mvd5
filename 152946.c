int CVE_2015_0833_PATCHED_NS_main(int argc, NS_tchar **argv) if ( argc < 4 )  gInstallDirPath [ MAXPATHLEN - 1 ] = NS_T ( '\0' ); bool noServiceFallback = getenv ( "MOZ_NO_SERVICE_FALLBACK" ) != nullptr ; useService = IsUpdateStatusPendingService ( ); testOnlyFallbackKeyExists = DoesFallbackKeyExist ( ); __int64 pid = 0 ; if ( argc > 4 )  pid = _wtoi64 ( argv [ 4 ] ); if ( pid == - 1 )  sStagedUpdate = true; if ( NS_tstrstr ( argv [ 4 ] , NS_T ( "/replace" ) ) )  sReplaceRequest = true; gWorkingDirPath [ MAXPATHLEN - 1 ] = NS_T ( '\0' ); if ( ! WriteStatusFile ( "applying" ) )  if ( pid > 0 )  HANDLE parent = OpenProcess ( SYNCHRONIZE , false , ( DWORD ) pid ) ; if ( parent )  updateFromMetro = IsUpdateFromMetro ( argc , argv ); DWORD waitTime = updateFromMetro ? IMMERSIVE_PARENT_WAIT : PARENT_WAIT ; DWORD result = WaitForSingleObject ( parent , waitTime ) ; if ( result != WAIT_OBJECT_0 && ! updateFromMetro )  const int callbackIndex = 6 ; sUsingService = getenv ( "MOZ_USING_SERVICE" ) != nullptr; if ( ! sUsingService && ( argc > callbackIndex || sStagedUpdate || sReplaceRequest ) )  NS_tchar updateLockFilePath [ MAXPATHLEN ] ; if ( ! _waccess ( updateLockFilePath , F_OK ) && NS_tremove ( updateLockFilePath ) != 0 )  updateLockFileHandle = CreateFileW ( updateLockFilePath , GENERIC_READ | GENERIC_WRITE , 0 , nullptr , OPEN_ALWAYS , FILE_FLAG_DELETE_ON_CLOSE , nullptr ); if ( updateLockFileHandle == INVALID_HANDLE_VALUE || ( useService && testOnlyFallbackKeyExists && noServiceFallback ) )  GonkAutoMounter mounter ; if ( mounter . GetAccess ( ) != MountAccess :: ReadWrite )  if ( ! sReplaceRequest )  if ( NS_tchdir ( gWorkingDirPath ) != 0 )  int rv = NS_tmkdir ( gWorkingDirPath , 0755 ) ; if ( rv == OK && errno != EEXIST )  if ( NS_tchdir ( gWorkingDirPath ) != 0 )  if ( ! sReplaceRequest )  NS_tchar * destpath = ( NS_tchar * ) malloc ( ( NS_tstrlen ( gWorkingDirPath ) + 2 ) * sizeof ( NS_tchar ) ) ; if ( ! destpath )  NS_tchar * c = destpath ; NS_tstrcpy ( c , gWorkingDirPath ); c += NS_tstrlen ( gWorkingDirPath ); NS_tstrcat ( c , NS_T ( "/" ) ); c += NS_tstrlen ( NS_T ( "/" ) ); * c = NS_T ( '\0' ); c ++; gDestPath = destpath; 