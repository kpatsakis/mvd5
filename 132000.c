void pgstat_ping() PgStat_MsgDummy msg ; if ( pgStatSock == - 1 )  pgstat_send ( ( & msg ) , ( sizeof ( msg ) ) ); static void pgstat_send(void *msg,int len) int rc ; if ( pgStatSock == - 1 )  ( ( PgStat_MsgHdr * ) msg ) -> m_size = len; rc = ( send ( pgStatSock , msg , len , 0 ) ); while ( rc < 0 && * __errno_location ( ) == 4 )  