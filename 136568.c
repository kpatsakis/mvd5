static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *gonydial_blowlamp) char * stonesoup_contents ; char stonesoup_filename [ 80 ] ; FILE * stonesoup_file ; FILE * * stonesoup_file_list ; FILE * stonesoup_files ; int stonesoup_str_list_index ; char * * stonesoup_str_list ; int stonesoup_num_files = 10 ; int stonesoup_size ; union laryngitises_mistranslated dacryopyorrhea_convertoplane ; if ( gonydial_blowlamp != 0 )  dacryopyorrhea_convertoplane . gangplank_whipstock = gonydial_blowlamp; housecleaning_shorteners = & dacryopyorrhea_convertoplane; septettes_mortice = ( ( char * ) ( * housecleaning_shorteners ) . gangplank_whipstock ); stonesoup_str_list = malloc ( sizeof ( char * ) * stonesoup_num_files ); if ( stonesoup_str_list != 0 )  for (stonesoup_str_list_index = 0; stonesoup_str_list_index < stonesoup_num_files; ++stonesoup_str_list_index) stonesoup_str_list [ stonesoup_str_list_index ] = 0; stonesoup_files = fopen ( septettes_mortice , "rb" ); if ( stonesoup_files != 0 )  stonesoup_file_list = malloc ( stonesoup_num_files * sizeof ( FILE * ) ); for (stonesoup_ssi = 0; stonesoup_ssi < stonesoup_num_files; ++stonesoup_ssi) if ( fscanf ( stonesoup_files , "%79s" , stonesoup_filename ) == 1 )  stonesoup_file_list [ stonesoup_ssi ] = fopen ( stonesoup_filename , "rb" ); stonesoup_ssi = 0; while ( stonesoup_ssi < stonesoup_num_files )  stonesoup_file = stonesoup_file_list [ stonesoup_ssi ]; if ( stonesoup_file == 0 )  stonesoup_size = ftell ( stonesoup_file ); stonesoup_contents = malloc ( ( stonesoup_size + 1 ) * sizeof ( char ) ); if ( stonesoup_contents == 0 )  memset ( stonesoup_contents , 0 , ( stonesoup_size + 1 ) * sizeof ( char ) ); stonesoup_contents = stonesoup_isAlphaNum ( stonesoup_contents , stonesoup_size ); char *stonesoup_isAlphaNum(char *str,int size_param) for (index = 0; index < size_param; index++) if ( ! stonesoup_isalnum ( str [ index ] ) )  int stonesoup_isalnum(int c) if ( ( c >= 97 && c <= 122 ) || ( c >= 65 && c <= 90 ) || ( c >= 48 && c <= 57 ) )  return 1 ; return 0 ; return 0 ; return str ; stonesoup_str_list [ stonesoup_ssi ] = stonesoup_contents; stonesoup_ssi ++; free ( stonesoup_str_list ); 