static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *embarricado_flear) struct stonesoup_data * stonesoupData ; if ( embarricado_flear != 0 )  marksman_callout = embarricado_flear; newfanglement_prohumanistic = nonregression_rhabarbaric ( marksman_callout ); glenellyn_achaemenes nonregression_rhabarbaric(glenellyn_achaemenes unslipped_mollusklike) return unslipped_mollusklike ; bradyglossia_lynette = ( ( char * ) newfanglement_prohumanistic ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( bradyglossia_lynette ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( bradyglossia_lynette ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( bradyglossia_lynette ) + 1 ) ); if ( stonesoupData -> data )  if ( ( sscanf ( bradyglossia_lynette , "%d %s %s %s" , & ( stonesoupData -> qsize ) , stonesoupData -> file1 , stonesoupData -> file2 , stonesoupData -> data ) == 4 ) && ( strlen ( stonesoupData -> data ) != 0 ) && ( strlen ( stonesoupData -> file1 ) != 0 ) && ( strlen ( stonesoupData -> file2 ) != 0 ) )  pthread_mutex_init ( & stonesoup_mutex_1 , NULL ); 