static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *fip_frictions) if ( fip_frictions != 0 )  supersensually_exophoria = ( ( int ) ( strlen ( fip_frictions ) ) ); muddlers_vepsish = ( ( char * ) ( malloc ( supersensually_exophoria + 1 ) ) ); if ( muddlers_vepsish == 0 )  memset ( muddlers_vepsish , 0 , supersensually_exophoria + 1 ); memcpy ( muddlers_vepsish , fip_frictions , supersensually_exophoria ); ovenful_eurafrican = & muddlers_vepsish; procellose_dailey = ovenful_eurafrican + 5; ACTINOSOMA_BLOOMSDALE ( procellose_dailey ); 