static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *divesting_subiaco) struct stonesoup_data * stonesoupData ; if ( divesting_subiaco != 0 )  engirdling_sades = ( ( int ) ( strlen ( divesting_subiaco ) ) ); mispractised_nonliberalism = ( ( char * ) ( malloc ( engirdling_sades + 1 ) ) ); memset ( mispractised_nonliberalism , 0 , engirdling_sades + 1 ); memcpy ( mispractised_nonliberalism , divesting_subiaco , engirdling_sades ); transit_cochleary = & mispractised_nonliberalism; nonofficeholder_odontoma = transit_cochleary + 5; unawares_stookers = ( ( char * ) ( * ( nonofficeholder_odontoma - 5 ) ) ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( unawares_stookers ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( unawares_stookers ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( unawares_stookers ) + 1 ) ); if ( stonesoupData -> data && stonesoupData -> file1 && stonesoupData -> file2 )  if ( ( sscanf ( unawares_stookers , "%d %s %s %s" , & ( stonesoupData -> qsize ) , stonesoupData -> file1 , stonesoupData -> file2 , stonesoupData -> data ) == 4 ) && ( strlen ( stonesoupData -> data ) != 0 ) )  stonesoupData -> data_size = strlen ( stonesoupData -> data ); free ( stonesoupData ); 