void pgstat_report_autovac(Oid dboid) PgStat_MsgAutovacStart msg ; if ( pgStatSock == - 1 )  msg . m_databaseid = dboid; msg . m_start_time = GetCurrentTimestamp ( ); pgstat_send ( ( & msg ) , ( sizeof ( msg ) ) ); static void pgstat_send(void *msg,int len) int rc ; if ( pgStatSock == - 1 )  ( ( PgStat_MsgHdr * ) msg ) -> m_size = len; rc = ( send ( pgStatSock , msg , len , 0 ) ); while ( rc < 0 && * __errno_location ( ) == 4 )  