void clique_sadly(char *hymnic_eclosions) dbpassword = getenv ( "DBPGPASSWORD" ); tracepoint ( stonesoup_trace , variable_buffer , "dbpassword" , dbpassword , "INITIAL-STATE" ); if ( dbhost != 0 && dbport != 0 && dbuser != 0 && dbpassword != 0 && dbdatabase != 0 )  snprintf ( dbconn_str , 150 , "dbname=%s host=%s user=%s password=%s port=%s" , dbdatabase , dbhost , dbuser , dbpassword , dbport ); conn = PQconnectdb ( dbconn_str ); if ( PQstatus ( conn ) != 0 )  stonesoup_printf ( "%s: %s\n" , "Connection to database failed" , PQerrorMessage ( conn ) ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); PQfinish ( conn ); res = PQexec ( conn , query ); if ( PQresultStatus ( res ) != 2 )  stonesoup_printf ( "%s: %s\n" , "SELECT failed" , PQerrorMessage ( conn ) ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); PQclear ( res ); PQfinish ( conn ); stonesoup_nFields = PQnfields ( res ); for (stonesoup_i = 0; stonesoup_i < stonesoup_nFields; stonesoup_i++) stonesoup_printf ( "%-15s" , PQfname ( res , stonesoup_i ) ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); for (stonesoup_i = 0; stonesoup_i < PQntuples(res); stonesoup_i++) for (stonesoup_j = 0; stonesoup_j < stonesoup_nFields; stonesoup_j++) stonesoup_printf ( "%-15s" , PQgetvalue ( res , stonesoup_i , stonesoup_j ) ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); PQclear ( res ); PQfinish ( conn ); 