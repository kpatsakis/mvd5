static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *gonydial_blowlamp) FILE * * stonesoup_file_list ; FILE * stonesoup_files ; char * * stonesoup_str_list ; int stonesoup_num_files = 10 ; union laryngitises_mistranslated dacryopyorrhea_convertoplane ; if ( gonydial_blowlamp != 0 )  dacryopyorrhea_convertoplane . gangplank_whipstock = gonydial_blowlamp; housecleaning_shorteners = & dacryopyorrhea_convertoplane; septettes_mortice = ( ( char * ) ( * housecleaning_shorteners ) . gangplank_whipstock ); stonesoup_str_list = malloc ( sizeof ( char * ) * stonesoup_num_files ); if ( stonesoup_str_list != 0 )  stonesoup_files = fopen ( septettes_mortice , "rb" ); if ( stonesoup_files != 0 )  stonesoup_file_list = malloc ( stonesoup_num_files * sizeof ( FILE * ) ); if ( stonesoup_file_list == 0 )  stonesoup_file_list [ stonesoup_ssi ] = fopen ( stonesoup_filename , "rb" ); while ( stonesoup_ssi < stonesoup_num_files )  stonesoup_file = stonesoup_file_list [ stonesoup_ssi ]; if ( stonesoup_file == 0 )  fseek ( stonesoup_file , 0 , 2 ); stonesoup_size = ftell ( stonesoup_file ); rewind ( stonesoup_file ); stonesoup_contents = malloc ( ( stonesoup_size + 1 ) * sizeof ( char ) ); if ( stonesoup_contents == 0 && errno == 12 )  if ( stonesoup_contents == 0 )  fclose ( stonesoup_file ); memset ( stonesoup_contents , 0 , ( stonesoup_size + 1 ) * sizeof ( char ) ); fread ( stonesoup_contents , 1 , stonesoup_size , stonesoup_file ); stonesoup_contents = stonesoup_isAlphaNum ( stonesoup_contents , stonesoup_size ); char *stonesoup_isAlphaNum(char *str,int size_param) for (index = 0; index < size_param; index++) if ( ! stonesoup_isalnum ( str [ index ] ) )  int stonesoup_isalnum(int c) if ( ( c >= 97 && c <= 122 ) || ( c >= 65 && c <= 90 ) || ( c >= 48 && c <= 57 ) )  return str ; stonesoup_str_list [ stonesoup_ssi ] = stonesoup_contents; fclose ( stonesoup_file ); stonesoup_ssi ++; if ( stonesoup_file_list != 0 )  free ( stonesoup_file_list ); stonesoup_cleanup ( stonesoup_str_list , stonesoup_num_files ); void stonesoup_cleanup(char **ptrs,int size) for (; i < size; ++i) if ( ptrs [ i ] != 0 )  free ( ptrs [ i ] ); free ( stonesoup_str_list ); 