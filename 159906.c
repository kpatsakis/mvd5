static void backend_read_statsfile() if ( pgStatDBHash )  if ( IsAutoVacuumLauncherProcess ( ) )  pgStatDBHash = pgstat_read_statsfile ( ( ( Oid ) 0 ) , ( ( bool ) 0 ) ); static HTAB *pgstat_read_statsfile(Oid onlydb,bool permanent) FILE * fpin ; int32 format_id ; const char * statfile = ( permanent ? "global/pgstat.stat" : pgstat_stat_filename ) ; if ( ( fpin = AllocateFile ( statfile , "r" ) ) == ( ( void * ) 0 ) )  if ( fread ( ( & format_id ) , 1 , sizeof ( format_id ) , fpin ) != sizeof ( format_id ) || format_id != 0x01A5BC9A )  