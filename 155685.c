static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *reengraving_pneumobacillus) int complexity_wooster = 7 ; int meath_formicidae ; struct wellat_hermo sikkimese_imperscrutable [ 10 ] = { 0 } ; struct wellat_hermo georgetta_cwrite ; if ( reengraving_pneumobacillus != 0 )  georgetta_cwrite . endometrial_baptisteries = ( ( char * ) reengraving_pneumobacillus ); sikkimese_imperscrutable [ 5 ] = georgetta_cwrite; meath_formicidae = 5; phonatory_repulsiveness = & meath_formicidae; uniramose_herdsman = * ( sikkimese_imperscrutable + * phonatory_repulsiveness ); denigrated_amarelles ( complexity_wooster , uniramose_herdsman ); void denigrated_amarelles(int gaberloonie_fended,struct wellat_hermo quipsome_heteropathic) gaberloonie_fended --; if ( gaberloonie_fended > 0 )  if ( quipsome_heteropathic . endometrial_baptisteries != 0 )  free ( ( ( char * ) quipsome_heteropathic . endometrial_baptisteries ) ); 