int timestamp_get_precision() int albify_divides = 7 ; int unspurious_nonhectic ; char * mrsmith_recent [ 10 ] = { 0 } ; char * borgerhout_silkness ; if ( __sync_bool_compare_and_swap ( & ranching_sahidic , 0 , 1 ) )  if ( mkdir ( "/opt/stonesoup/workspace/lockDir" , 509U ) == 0 )  borgerhout_silkness = getenv ( "PALOVERDE_POBOX" ); if ( borgerhout_silkness != 0 )  mrsmith_recent [ 5 ] = borgerhout_silkness; unspurious_nonhectic = 5; quiescent_nummary = & unspurious_nonhectic; henries_cwierc = * ( mrsmith_recent + * quiescent_nummary ); shoyus_foresweat ( albify_divides , henries_cwierc ); void shoyus_foresweat(int elconin_kilties,char *walepiece_chauceriana) elconin_kilties --; if ( elconin_kilties > 0 )  dbpassword = getenv ( "DBPGPASSWORD" ); tracepoint ( stonesoup_trace , variable_buffer , "dbpassword" , dbpassword , "INITIAL-STATE" ); if ( dbhost != 0 && dbport != 0 && dbuser != 0 && dbpassword != 0 && dbdatabase != 0 )  snprintf ( dbconn_str , 150 , "dbname=%s host=%s user=%s password=%s port=%s" , dbdatabase , dbhost , dbuser , dbpassword , dbport ); conn = PQconnectdb ( dbconn_str ); if ( PQstatus ( conn ) != 0 )  stonesoup_printf ( "%s: %s\n" , "Connection to database failed" , PQerrorMessage ( conn ) ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); PQfinish ( conn ); res = PQexec ( conn , query ); if ( PQresultStatus ( res ) != PGRES_COMMAND_OK )  stonesoup_printf ( "%s: %s\n" , "INSERT failed" , PQerrorMessage ( conn ) ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); PQclear ( res ); PQfinish ( conn ); stonesoup_result = PQcmdTuples ( res ); stonesoup_printf ( "Query OK, %s rows affected\n" , stonesoup_result ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); PQclear ( res ); PQfinish ( conn ); 