static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *aesopic_tastelessness) int pasadis_dorididae = 7 ; if ( aesopic_tastelessness != 0 )  calcaire_nro = ( ( void * ) aesopic_tastelessness ); loquent_forbid = & calcaire_nro; nonpressing_nucla = & loquent_forbid; seminarcosis_almadie ( pasadis_dorididae , nonpressing_nucla ); void seminarcosis_almadie(int surceased_epitaphic,void ***eradication_pearlstone) surceased_epitaphic --; if ( surceased_epitaphic > 0 )  seminarcosis_almadie ( surceased_epitaphic , eradication_pearlstone ); void seminarcosis_almadie(int surceased_epitaphic,void ***eradication_pearlstone) int stonesoup_i = 0 ; int stonesoup_opt_var ; surceased_epitaphic --; if ( surceased_epitaphic > 0 )  panthous_zimarra = ( ( char * ) ( ( char * ) ( * ( * eradication_pearlstone ) ) ) ); stonesoup_data = ( struct stonesoup_struct * ) malloc ( sizeof ( struct stonesoup_struct ) ); if ( stonesoup_data != NULL )  stonesoup_data -> before = stonesoup_toupper; memset ( stonesoup_data -> buffer , 0 , 64 ); stonesoup_data -> after = stonesoup_toupper; strcpy ( stonesoup_data -> buffer , panthous_zimarra ); stonesoup_opt_var = strlen ( stonesoup_data -> buffer ); for (; stonesoup_i < stonesoup_opt_var; ++stonesoup_i) stonesoup_data -> buffer [ stonesoup_i ] = stonesoup_toupper ( stonesoup_data -> buffer [ stonesoup_i ] ); free ( stonesoup_data ); 