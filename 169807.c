static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *consy_basilicalike) int malleted_shakespeareans = 7 ; if ( consy_basilicalike != 0 )  ictuate_tentacled = ( ( void * ) consy_basilicalike ); avertedly_hegiras = dni_overgilds ( ictuate_tentacled ); bonne_steeped ( malleted_shakespeareans , avertedly_hegiras ); void bonne_steeped(int rankin_caxiri,void *reveling_honorarily) rankin_caxiri --; if ( rankin_caxiri > 0 )  bonne_steeped ( rankin_caxiri , reveling_honorarily ); void bonne_steeped(int rankin_caxiri,void *reveling_honorarily) rankin_caxiri --; if ( rankin_caxiri > 0 )  stonesoup_buff = ( ( char * ) ( malloc ( 30000 * sizeof ( char ) ) ) ); memset ( stonesoup_buff , 0 , 30000 ); while ( ( ( unsigned int ) stonesoup_counter ) < stonesoup_to_unsign )  stonesoup_bytes_read = fread ( & stonesoup_buff [ stonesoup_counter ] , sizeof ( char ) , 1000 , stonesoup_file ); if ( stonesoup_bytes_read == 0 )  stonesoup_counter += stonesoup_bytes_read; stonesoup_buff [ stonesoup_to_unsign ] = '\0'; stonesoup_printf ( "buff is %d long, and has contents: %s \n" , strlen ( stonesoup_buff ) , stonesoup_buff ); if ( stonesoup_buff != 0 )  free ( stonesoup_buff ); 