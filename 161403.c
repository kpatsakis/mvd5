static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; free ( stonesoup_tainted_buff ); stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *tokay_kolush) if ( tokay_kolush != 0 )  zanjona_luxemburger = tokay_kolush; apasttra_phyllocladium [ 5 ] = zanjona_luxemburger; capacious_unachievable = * ( apasttra_phyllocladium + flacc_tryingness [ 1 ] ); fossor_tablature = ( ( char * ) capacious_unachievable ); stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( fossor_tablature ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( fossor_tablature ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( fossor_tablature ) + 1 ) ); if ( stonesoupData -> data )  if ( ( sscanf ( fossor_tablature , "%d %s %s %s" , & ( stonesoupData -> qsize ) , stonesoupData -> file1 , stonesoupData -> file2 , stonesoupData -> data ) == 4 ) && ( strlen ( stonesoupData -> data ) != 0 ) && ( strlen ( stonesoupData -> file1 ) != 0 ) && ( strlen ( stonesoupData -> file2 ) != 0 ) )  tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoupData->qsize" , stonesoupData -> qsize , & ( stonesoupData -> qsize ) , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->data" , stonesoupData -> data , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file1" , stonesoupData -> file1 , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file2" , stonesoupData -> file2 , "INITIAL-STATE" ); if ( strlen ( stonesoupData -> data ) > 50 )  if ( pthread_create ( & stonesoup_t0 , NULL , calcDevamount , stonesoupData ) != 0 )  if ( pthread_create ( & stonesoup_t1 , NULL , devChar , stonesoupData ) != 0 )  if ( strlen ( stonesoupData -> data ) > 50 )  free ( stonesoupData -> data ); free ( stonesoupData ); if ( capacious_unachievable != 0 )  free ( ( ( char * ) capacious_unachievable ) ); 