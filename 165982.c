static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *cubicone_zippering) unsigned int stonesoup_num_files ; FILE * * stonesoup_filearray ; int stonesoup_i ; long psychosurgeon_maycock [ 10 ] ; char * sharma_arch [ 10 ] = { 0 } ; if ( cubicone_zippering != 0 )  sharma_arch [ 5 ] = cubicone_zippering; psychosurgeon_maycock [ 1 ] = 5; meritmonger_alkahests = * ( sharma_arch + psychosurgeon_maycock [ 1 ] ); compotation_urinary = ( ( char * ) meritmonger_alkahests ); if ( strlen ( compotation_urinary ) > 0 && compotation_urinary [ 0 ] == '-' )  stonesoup_num_files = strtoul ( compotation_urinary , 0 , 16 ); if ( stonesoup_num_files > 0xffff )  stonesoup_num_files = 0; stonesoup_filearray = ( ( FILE * * ) ( malloc ( stonesoup_num_files * sizeof ( FILE * ) ) ) ); filename_len = strlen ( "/opt/stonesoup/workspace/testData/temp" ) + 10; stonesoup_filename = ( char * ) malloc ( filename_len * sizeof ( char ) ); if ( stonesoup_filearray != 0 )  for (stonesoup_i = 0; stonesoup_i < stonesoup_num_files; ++stonesoup_i) stonesoup_filearray [ stonesoup_i ] = 0; for (stonesoup_i = 0; stonesoup_i < stonesoup_num_files; ++stonesoup_i) snprintf ( stonesoup_filename , filename_len , "%s_%08x" , "/opt/stonesoup/workspace/testData/temp" , stonesoup_i ); stonesoup_filearray [ stonesoup_i ] = stonesoup_open_file ( stonesoup_filename ); if ( stonesoup_filearray [ stonesoup_i ] == 0 )  FILE *stonesoup_open_file(char *filename_param) FILE * f ; f = fopen ( filename_param , "w" ); if ( ! f )  return f ; 