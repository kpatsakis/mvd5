static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; free ( stonesoup_tainted_buff ); stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *nonvesicularly_embracer) if ( nonvesicularly_embracer != 0 )  leachable_usucaption = ( ( char * ) nonvesicularly_embracer ); if ( strlen ( leachable_usucaption ) < 1 )  stonesoup_set_function ( leachable_usucaption , & stonesoup_my_foo ); void stonesoup_set_function(char *set_param_str,struct stonesoup_data_struct *set_param_data_struct) if ( strlen ( set_param_str ) > 10U )  set_param_data_struct -> func_member = stonesoup_modulus_function; set_param_data_struct -> str_member = set_param_str; if ( strlen ( set_param_str ) < 10U )  set_param_data_struct -> func_member = stonesoup_modulus_function; set_param_data_struct -> str_member = "default"; if ( nonvesicularly_embracer != 0 )  free ( ( ( char * ) nonvesicularly_embracer ) ); 