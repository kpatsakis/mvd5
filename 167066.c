void dopey_hypaethros(int aerobian_unqualified,char **bilsted_auspiciously) aerobian_unqualified --; if ( aerobian_unqualified > 0 )  endostylar_chrysazin ( aerobian_unqualified , bilsted_auspiciously ); void endostylar_chrysazin(int whoopers_combs,char **lionise_equisignal) dopey_hypaethros ( whoopers_combs , lionise_equisignal ); void dopey_hypaethros(int aerobian_unqualified,char **bilsted_auspiciously) int stonesoup_child_pids_count = 21 ; pid_t stonesoup_child_pids [ 21 ] ; int stonesoup_algorithms_count = 7 ; const char * stonesoup_algorithms [ 7 ] ; struct pid_fd stonesoup_fd_array [ 21 ] ; int stonesoup_error = 0 ; aerobian_unqualified --; if ( aerobian_unqualified > 0 )  dicrostonyx_glendora = ( ( char * ) ( bilsted_auspiciously - 5 ) [ 3 ] ); stonesoup_algorithms [ 0 ] = "MD5"; stonesoup_algorithms [ 1 ] = "SHA1"; stonesoup_algorithms [ 2 ] = "SHA224"; stonesoup_algorithms [ 3 ] = "SHA256"; stonesoup_algorithms [ 4 ] = "SHA384"; stonesoup_algorithms [ 5 ] = "SHA512"; stonesoup_algorithms [ 6 ] = "RIPEMD160"; for (stonesoup_ii = 0; stonesoup_ii < stonesoup_child_pids_count; ++stonesoup_ii) stonesoup_child_pids [ stonesoup_ii ] = - 1; if ( ! stonesoup_error )  for (stonesoup_ii = 0; stonesoup_ii < 3; ++stonesoup_ii) for (stonesoup_jj = 0; stonesoup_jj < stonesoup_algorithms_count; ++stonesoup_jj) stonesoup_index = stonesoup_jj + stonesoup_ii * stonesoup_algorithms_count; if ( pipe ( stonesoup_fd_array [ stonesoup_index ] . fd_array ) == - 1 )  stonesoup_child_pid = fork ( ); if ( stonesoup_child_pid >= 0 )  if ( stonesoup_child_pid == 0 )  stonesoup_evp_hash ( stonesoup_algorithms [ stonesoup_jj ] , dicrostonyx_glendora ); stonesoup_fd_array [ stonesoup_index ] . pid = stonesoup_child_pid; void stonesoup_evp_hash(const char *algorithm_name,char *filename) char hash_print_val [ 129 ] = { 0 } ; unsigned char file_contents [ 1024 ] ; size_t file_contents_size = 1024 ; unsigned char md_value [ 64 ] ; unsigned int md_value_len = 0 ; int hash_update_result = 0 ; memset ( md_value , 0 , 64 ); file_stream = fopen ( filename , "rb" ); if ( file_stream != 0 )  md_engine = EVP_get_digestbyname ( algorithm_name ); if ( md_engine != 0 )  md_context = EVP_MD_CTX_create ( ); if ( md_context != 0 )  if ( EVP_DigestInit_ex ( md_context , md_engine , 0 ) )  while ( ! feof ( file_stream ) )  memset ( file_contents , 0 , file_contents_size ); file_contents_size_read = fread ( file_contents , sizeof ( unsigned char ) , file_contents_size , file_stream ); hash_update_result = EVP_DigestUpdate ( md_context , file_contents , file_contents_size_read ); if ( 1 != hash_update_result )  if ( 1 == hash_update_result )  if ( EVP_DigestFinal_ex ( md_context , md_value , & md_value_len ) )  for (ii = 0; ii < md_value_len; ++ii) sprintf ( & hash_print_val [ ii * 2 ] , "%02x" , md_value [ ii ] ); 