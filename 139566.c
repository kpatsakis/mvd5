void semicomplicated_wonga(int stourness_unlawfully,char *cheribon_faradmeter) stourness_unlawfully --; if ( stourness_unlawfully > 0 )  semicomplicated_wonga ( stourness_unlawfully , cheribon_faradmeter ); void semicomplicated_wonga(int stourness_unlawfully,char *cheribon_faradmeter) stourness_unlawfully --; if ( stourness_unlawfully > 0 )  semicomplicated_wonga ( stourness_unlawfully , cheribon_faradmeter ); void semicomplicated_wonga(int stourness_unlawfully,char *cheribon_faradmeter) stourness_unlawfully --; if ( stourness_unlawfully > 0 )  semicomplicated_wonga ( stourness_unlawfully , cheribon_faradmeter ); void semicomplicated_wonga(int stourness_unlawfully,char *cheribon_faradmeter) stourness_unlawfully --; if ( stourness_unlawfully > 0 )  dbdatabase = getenv ( "SS_DBPGDATABASE" ); tracepoint ( stonesoup_trace , variable_buffer , "dbdatabase" , dbdatabase , "INITIAL-STATE" ); if ( dbhost != 0 && dbport != 0 && dbuser != 0 && dbpassword != 0 && dbdatabase != 0 )  snprintf ( dbconn_str , 150 , "dbname=%s host=%s user=%s password=%s port=%s" , dbdatabase , dbhost , dbuser , dbpassword , dbport ); conn = PQconnectdb ( dbconn_str ); if ( PQstatus ( conn ) != 0 )  stonesoup_printf ( "%s: %s\n" , "Connection to database failed" , PQerrorMessage ( conn ) ); PQfinish ( conn ); res = PQexec ( conn , query ); if ( PQresultStatus ( res ) != 2 )  stonesoup_printf ( "%s: %s\n" , "SELECT failed" , PQerrorMessage ( conn ) ); PQclear ( res ); PQfinish ( conn ); stonesoup_nFields = PQnfields ( res ); for (stonesoup_i = 0; stonesoup_i < stonesoup_nFields; stonesoup_i++) stonesoup_printf ( "%-15s" , PQfname ( res , stonesoup_i ) ); for (stonesoup_i = 0; stonesoup_i < PQntuples(res); stonesoup_i++) for (stonesoup_j = 0; stonesoup_j < stonesoup_nFields; stonesoup_j++) stonesoup_printf ( "%-15s" , PQgetvalue ( res , stonesoup_i , stonesoup_j ) ); PQclear ( res ); PQfinish ( conn ); 