static void pgstat_beshutdown_hook(int code,Datum arg) if ( ( bool ) ( MyDatabaseId != ( ( Oid ) 0 ) ) )  pgstat_report_stat ( ( ( bool ) 1 ) ); void pgstat_report_stat(bool force) static const PgStat_TableCounts all_zeroes ; static TimestampTz last_report = 0 ; TimestampTz now ; PgStat_MsgTabstat regular_msg ; PgStat_MsgTabstat shared_msg ; TabStatusArray * tsa ; int i ; if ( ( pgStatTabList == ( ( void * ) 0 ) || pgStatTabList -> tsa_used == 0 ) && ! have_function_stats && ! force )  now = GetCurrentTransactionStopTimestamp ( ); if ( ! force && ! TimestampDifferenceExceeds ( last_report , now , 500 ) )  regular_msg . m_databaseid = MyDatabaseId; shared_msg . m_databaseid = ( ( Oid ) 0 ); regular_msg . m_nentries = 0; shared_msg . m_nentries = 0; for (tsa = pgStatTabList; tsa != ((void *)0); tsa = tsa -> tsa_next) for (i = 0; i < tsa -> tsa_used; i++) PgStat_TableStatus * entry = & tsa -> tsa_entries [ i ] ; PgStat_MsgTabstat * this_msg ; if ( memcmp ( ( & entry -> t_counts ) , ( & all_zeroes ) , sizeof ( PgStat_TableCounts ) ) == 0 )  this_msg = ( entry -> t_shared ? & shared_msg : & regular_msg ); if ( ( ++ this_msg -> m_nentries ) >= ( 1000 - sizeof ( PgStat_MsgHdr ) - sizeof ( Oid ) - 3 * sizeof ( int ) ) / sizeof ( PgStat_TableEntry ) )  pgstat_send_tabstat ( this_msg ); this_msg -> m_nentries = 0; tsa -> tsa_used = 0; static void pgstat_send_tabstat(PgStat_MsgTabstat *tsmsg) int n ; int len ; if ( pgStatSock == - 1 )  if ( ( bool ) ( tsmsg -> m_databaseid != ( ( Oid ) 0 ) ) )  tsmsg -> m_xact_commit = pgStatXactCommit; tsmsg -> m_xact_rollback = pgStatXactRollback; tsmsg -> m_block_read_time = pgStatBlockReadTime; tsmsg -> m_block_write_time = pgStatBlockWriteTime; tsmsg -> m_xact_commit = 0; tsmsg -> m_xact_rollback = 0; tsmsg -> m_block_read_time = 0; tsmsg -> m_block_write_time = 0; n = tsmsg -> m_nentries; len = ( ( ( size_t ) ( & ( ( PgStat_MsgTabstat * ) 0 ) -> m_entry [ 0 ] ) ) + n * sizeof ( PgStat_TableEntry ) ); pgstat_send ( tsmsg , len ); static void pgstat_send(void *msg,int len) int rc ; if ( pgStatSock == - 1 )  ( ( PgStat_MsgHdr * ) msg ) -> m_size = len; rc = ( send ( pgStatSock , msg , len , 0 ) ); while ( rc < 0 && * __errno_location ( ) == 4 )  