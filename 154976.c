static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *ledge_kefti) int glittersome_nonmoveably ; union rollways_exhibitionize ravenousnesses_bag [ 10 ] = { 0 } ; union rollways_exhibitionize adiaphorism_photogeologic ; if ( ledge_kefti != 0 )  adiaphorism_photogeologic . pyorrhoeic_befits = ledge_kefti; glittersome_nonmoveably = 5; unshapen_curin = & glittersome_nonmoveably; apedom_tale = & unshapen_curin; ravenousnesses_bag [ * ( * apedom_tale ) ] = adiaphorism_photogeologic; carageens_saravan = ravenousnesses_bag [ * ( * apedom_tale ) ]; heterokontae_unenviedly = ( ( char * ) carageens_saravan . pyorrhoeic_befits ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( heterokontae_unenviedly ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( heterokontae_unenviedly ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( heterokontae_unenviedly ) + 1 ) ); if ( stonesoupData -> data )  if ( ( sscanf ( heterokontae_unenviedly , "%s %s %s" , stonesoupData -> file1 , stonesoupData -> file2 , stonesoupData -> data ) == 3 ) && ( strlen ( stonesoupData -> data ) != 0 ) && ( strlen ( stonesoupData -> file1 ) != 0 ) && ( strlen ( stonesoupData -> file2 ) != 0 ) )  if ( signal ( SIGUSR1 , stonesoup_sig_handler ) == SIG_ERR )  