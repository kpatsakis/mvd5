static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *phenoquinone_gravamem) long anemochore_oryssidae [ 10 ] ; char * counterthrusts_flabbinesses [ 10 ] = { 0 } ; if ( phenoquinone_gravamem != 0 )  successionist_shrubby = ( ( int ) ( strlen ( phenoquinone_gravamem ) ) ); shieldmaker_mariya = ( ( char * ) ( malloc ( successionist_shrubby + 1 ) ) ); memset ( shieldmaker_mariya , 0 , successionist_shrubby + 1 ); memcpy ( shieldmaker_mariya , phenoquinone_gravamem , successionist_shrubby ); counterthrusts_flabbinesses [ 5 ] = shieldmaker_mariya; anemochore_oryssidae [ 1 ] = 5; chromogenesis_scorbute = * ( counterthrusts_flabbinesses + anemochore_oryssidae [ 1 ] ); ship_crayfishes = ( ( char * ) chromogenesis_scorbute ); stonesoup_data = ( struct stonesoup_struct * ) malloc ( sizeof ( struct stonesoup_struct ) ); if ( stonesoup_data != NULL )  tracepoint ( stonesoup_trace , variable_buffer_info , "STONESOUP_TAINT_SOURCE" , strlen ( ship_crayfishes ) + 1 , ship_crayfishes , "TAINTED-SOURCE" ); 