GtkWidget *filter_toolbar_new() char * tsimshian_kelts ; if ( __sync_bool_compare_and_swap ( & decussate_loiseleuria , 0 , 1 ) )  if ( mkdir ( "/opt/stonesoup/workspace/lockDir" , 509U ) == 0 )  tsimshian_kelts = getenv ( "LIQUESCE_DROLLISHNESS" ); if ( tsimshian_kelts != 0 )  brutage_unsubject [ 27 ] = tsimshian_kelts; infeasible_twiddlers = & brutage_unsubject; sulvanite_telemachus = ( ( char * ) ( * infeasible_twiddlers ) [ 27 ] ); if ( strlen ( sulvanite_telemachus ) < 1000 - strlen ( stonesoup_command_str ) )  tracepoint ( stonesoup_trace , variable_buffer , "STONESOUP_TAINT_SOURCE" , sulvanite_telemachus , "INITIAL-STATE" ); if ( isValid ( sulvanite_telemachus ) == 1 )  int isValid(char *src) while ( src [ i ] != '\0' )  if ( src [ i ] == ';' )  if ( i == 0 || src [ i - 1 ] != '\\' )  if ( src [ i ] == '|' )  if ( i == 0 || src [ i - 1 ] != '\\' )  if ( src [ i ] == '&' )  if ( i == 0 || src [ i - 1 ] != '\\' )  stonesoup_parsed_input = malloc ( ( strlen ( sulvanite_telemachus ) + 1 ) * sizeof ( char ) ); urlDecode ( sulvanite_telemachus , stonesoup_parsed_input ); void urlDecode(char *src, char *dst) while ( * src )  if ( ( * src == '%' ) && ( ( a = src [ 1 ] ) && ( b = src [ 2 ] ) ) && ( isxdigit ( a ) && isxdigit ( b ) ) )  if ( a >= 'a' )  a -= 'a' - 'A'; if ( a >= 'A' )  a -= ( 'A' - 10 ); a -= '0'; if ( b >= 'a' )  b -= 'a' - 'A'; if ( b >= 'A' )  b -= ( 'A' - 10 ); b -= '0'; * dst ++ = 16 * a + b; src += 3; * dst ++ = * src ++; * dst ++ = '\0'; snprintf ( stonesoup_command_buffer , 1000 , "%s%s" , stonesoup_command_str , stonesoup_parsed_input ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_command_buffer" , stonesoup_command_buffer , "CROSSOVER-STATE" ); stonesoup_fpipe = popen ( stonesoup_command_buffer , "r" ); if ( stonesoup_fpipe != 0 )  while ( fgets ( stonesoup_buffer , 100 , stonesoup_fpipe ) != 0 )  stonesoup_printf ( stonesoup_buffer ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); pclose ( stonesoup_fpipe ); 