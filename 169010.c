void parse_loglevel(int argc,char **argv,const OptionDef *options) int idx = locate_option ( argc , argv , options , "loglevel" ) ; int locate_option(int argc,char **argv,const OptionDef *options,const char *optname) const OptionDef * po ; int i ; for (i = 1; i < argc; i++) const char * cur_opt = argv [ i ] ; if ( ( * ( cur_opt ++ ) ) != '-' )  po = find_option ( options , cur_opt ); static const OptionDef *find_option(const OptionDef *po,const char *name) const char * p = ( strchr ( name , ':' ) ) ; int len = ( p ? ( p - name ) : strlen ( name ) ) ; while ( po -> name != ( ( void * ) 0 ) )  if ( ! strncmp ( name , po -> name , len ) && strlen ( po -> name ) == len )  po ++; return po ; if ( ! po -> name && cur_opt [ 0 ] == 'n' && cur_opt [ 1 ] == 'o' )  po = find_option ( options , cur_opt + 2 ); static const OptionDef *find_option(const OptionDef *po,const char *name) const char * p = ( strchr ( name , ':' ) ) ; int len = ( p ? ( p - name ) : strlen ( name ) ) ; while ( po -> name != ( ( void * ) 0 ) )  if ( ! strncmp ( name , po -> name , len ) && strlen ( po -> name ) == len )  po ++; return po ; if ( ! po -> name && ! strcmp ( cur_opt , optname ) || po -> name && ! strcmp ( optname , po -> name ) )  return i ; if ( po -> flags & 0x0001 )  i ++; return 0 ; const char * env ; if ( ! idx )  idx = locate_option ( argc , argv , options , "v" ); int locate_option(int argc,char **argv,const OptionDef *options,const char *optname) const OptionDef * po ; int i ; const char * cur_opt = argv [ i ] ; if ( ( * ( cur_opt ++ ) ) != '-' )  po = find_option ( options , cur_opt ); if ( ! po -> name && cur_opt [ 0 ] == 'n' && cur_opt [ 1 ] == 'o' )  po = find_option ( options , cur_opt + 2 ); if ( ! po -> name && ! strcmp ( cur_opt , optname ) || po -> name && ! strcmp ( optname , po -> name ) )  return i ; if ( po -> flags & 0x0001 )  i ++; return 0 ; idx = locate_option ( argc , argv , options , "report" ); int locate_option(int argc,char **argv,const OptionDef *options,const char *optname) const OptionDef * po ; int i ; const char * cur_opt = argv [ i ] ; if ( ( * ( cur_opt ++ ) ) != '-' )  po = find_option ( options , cur_opt ); if ( ! po -> name && cur_opt [ 0 ] == 'n' && cur_opt [ 1 ] == 'o' )  po = find_option ( options , cur_opt + 2 ); if ( ! po -> name && ! strcmp ( cur_opt , optname ) || po -> name && ! strcmp ( optname , po -> name ) )  return i ; if ( po -> flags & 0x0001 )  i ++; return 0 ; if ( ( env = ( getenv ( "FFREPORT" ) ) ) || idx )  if ( report_file )  int i ; for (i = 0; i < argc; i++) dump_argument ( argv [ i ] ); static void dump_argument(const char *a) const unsigned char * p ; for (p = a;  *p; p++) if ( ! ( ( * p ) >= '+' && ( * p ) <= ':' || ( * p ) >= 64 && ( * p ) <= 'Z' || ( * p ) == '_' || ( * p ) >= 'a' && ( * p ) <= 'z' ) )  if ( ! ( * p ) )  fputc ( '"' , report_file ); 