int main(int argc, char **argv) char msg [ LOG_LINE_LENGTH ] = "Format string test: [<%x %x %x %x>]\n" ; int msglen = strlen ( msg ) ; LogLine ( msg , msglen ); static void LogLine(char *ptr, int len) static char line_buff [ LOG_LINE_LENGTH ] ; static char * line = line_buff ; static enum parse_state_enum parse_state = PARSING_TEXT ; static int space = sizeof ( line_buff ) - 1 ; static char * sym_start ; auto int delta = 0 ; while ( len > 0 )  if ( space == 0 )  * line = 0; if ( debugging )  fprintf ( stderr , "\tLine: %s\n" , line ); line = line_buff; space = sizeof ( line_buff ) - 1; parse_state = PARSING_TEXT; switch ( parse_state )  delta = copyin ( line , space , ptr , len , "\n[%" ); static int copyin( char *line,      int const char *ptr, int const char *delim ) count = len < space ? len : space; for(i=0; i<count && !strchr(delim, *ptr); i++ ) line += delta; ptr += delta; space -= delta; len -= delta; if ( space == 0 || len == 0 )  if ( * ptr == '\n' )  * line ++ = * ptr ++; len -= 1; line = line_buff; space = sizeof ( line_buff ) - 1; if ( * ptr == '[' )  * line ++ = * ptr ++; space -= 1; len -= 1; parse_state = PARSING_SYMSTART; if ( * ptr == '%' )  delta = 0; while ( len && * ptr == '%' )  * line ++ = * ptr ++; space -= 1; len -= 1; delta ++; if ( delta % 2 )  if ( space )  * line ++ = '%'; space -= 1; * line ++ = '\0'; if ( * ptr != '<' )  parse_state = PARSING_TEXT; sym_start = line; * line ++ = * ptr ++; space -= 1; len -= 1; parse_state = PARSING_SYMBOL; delta = copyin ( line , space , ptr , len , ">\n[" ); static int copyin( char *line,      int const char *ptr, int const char *delim ) count = len < space ? len : space; line += delta; ptr += delta; space -= delta; len -= delta; if ( space == 0 || len == 0 )  if ( * ptr != '>' )  parse_state = PARSING_TEXT; * line ++ = * ptr ++; space -= 1; len -= 1; parse_state = PARSING_SYMEND; if ( * ptr != ']' )  parse_state = PARSING_TEXT; auto int sym_space ; auto struct symbol sym auto char * symbol ; * ( line - 1 ) = 0; * ( line - 1 ) = '>'; symbol = "symbolfoo"; if ( ! symbol_lookup || symbol == ( char * ) 0 )  parse_state = PARSING_TEXT; sym_space = space + ( line - sym_start ); if ( sym_space < strlen ( symbol ) + 30 )  parse_state = PARSING_TEXT; delta = sprintf ( sym_start , "%s+%d/%d]" , symbol , sym . offset , sym . size ); space = sym_space + delta; line = sym_start + delta; ptr ++; len --; parse_state = PARSING_TEXT; parse_state = PARSING_TEXT; 