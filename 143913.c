static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *maylike_nacs) struct stonesoup_data * stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ) ; struct spancel_nielled achimenes_roisterly ; if ( maylike_nacs != 0 )  achimenes_roisterly . yard_theorizies = ( ( char * ) maylike_nacs ); lorella_soignee = & achimenes_roisterly; redirecting_cirripedia = ( ( char * ) ( * lorella_soignee ) . yard_theorizies ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( redirecting_cirripedia ) + 1 ) ); if ( stonesoupData -> data && ( sscanf ( redirecting_cirripedia , "%d %s" , & stonesoupData -> qsize , stonesoupData -> data ) == 2 ) && ( strlen ( stonesoupData -> data ) != 0 ) )  stonesoupData -> data_size = strlen ( stonesoupData -> data ); free ( stonesoupData -> data ); 