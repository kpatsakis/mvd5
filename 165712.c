static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; free ( stonesoup_tainted_buff ); stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *rhinthonica_unpropitiating) if ( rhinthonica_unpropitiating != 0 )  sexier_lysins . rarotonga_surpassingly = rhinthonica_unpropitiating; nonviscid_balistraria = & sexier_lysins; piltock_inocular = ( ( union cardon_shrieval * ) ( ( ( unsigned long ) nonviscid_balistraria ) * undeterminedly_proctorical * undeterminedly_proctorical ) ) + 5; enheritance_imbricated = ( ( char * ) ( * ( piltock_inocular - 5 ) ) . rarotonga_surpassingly ); for (stonesoup_ss_i = 0; stonesoup_ss_i < strlen(enheritance_imbricated); ++stonesoup_ss_i) tracepoint ( stonesoup_trace , variable_signed_integral , "((int)STONESOUP_TAINT_SOURCE[stonesoup_ss_i])" , ( ( int ) enheritance_imbricated [ stonesoup_ss_i ] ) , & ( enheritance_imbricated [ stonesoup_ss_i ] ) , "TRIGGER-STATE" ); stonesoup_printf ( "value %c appears: %d times\n" , enheritance_imbricated [ stonesoup_ss_i ] , stonesoup_stack_buff [ ( int ) enheritance_imbricated [ stonesoup_ss_i ] ] ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); if ( ( * ( piltock_inocular - 5 ) ) . rarotonga_surpassingly != 0 )  free ( ( ( char * ) ( * ( piltock_inocular - 5 ) ) . rarotonga_surpassingly ) ); 