static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *aconitine_estimated) if ( aconitine_estimated != 0 )  stonesoup_dbhost = getenv ( "DBMYSQLHOST" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_dbhost" , stonesoup_dbhost , "INITIAL-STATE" ); if ( stonesoup_dbhost != 0 && stonesoup_dbport != 0 && ( stonesoup_dbuser != 0 && stonesoup_dbpassword != 0 ) )  if ( mysql_real_connect ( stonesoup_conn , stonesoup_dbhost , stonesoup_dbuser , stonesoup_dbpassword , 0 , stonesoup_dbport , "/var/lib/mysql/mysql.sock" , 65536UL ) != 0 )  