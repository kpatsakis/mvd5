int CVE_2015_0833_VULN_NS_main(int argc, NS_tchar **argv) if ( argc < 4 )  if ( ! WriteStatusFile ( "applying" ) )  const char * prioEnv = getenv ( "MOZ_UPDATER_PRIO" ) ; if ( prioEnv )  if ( sscanf ( prioEnv , "%d/%d/%d/%d" , & prioVal , & oomScoreAdj , & ioprioClass , & ioprioLevel ) == 4 )  LOG ( ( "MOZ_UPDATER_PRIO=%s" , prioEnv ) ); if ( setpriority ( PRIO_PROCESS , 0 , prioVal ) )  LOG ( ( "setpriority(%d) failed, errno = %d" , prioVal , errno ) ); if ( ioprio_set ( IOPRIO_WHO_PROCESS , 0 , IOPRIO_PRIO_VALUE ( ioprioClass , ioprioLevel ) ) )  LOG ( ( "ioprio_set(%d,%d) failed: errno = %d" , ioprioClass , ioprioLevel , errno ) ); fprintf ( fs , "%d" , oomScoreAdj ); fclose ( fs ); 