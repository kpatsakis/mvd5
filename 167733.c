int split_commandline(OptionParseContext *octx,int argc,char *argv[],const OptionDef *options,const OptionGroupDef *groups,int nb_groups) int optindex = 1 ; int dashdash = - 2 ; while ( optindex < argc )  const char * opt = argv [ optindex ++ ] ; const char * arg ; const OptionDef * po ; int ret ; if ( opt [ 0 ] == '-' && opt [ 1 ] == '-' && ! opt [ 2 ] )  dashdash = optindex; if ( opt [ 0 ] != '-' || ! opt [ 1 ] || dashdash + 1 == optindex )  opt ++; while ( 0 )  if ( ( ret = match_group_separator ( groups , nb_groups , opt ) ) >= 0 )  arg = argv [ optindex ++ ]; if ( ! arg )  while ( 0 )  po = find_option ( options , opt ); if ( po -> name )  if ( po -> flags & 0x0800 )  arg = argv [ optindex ++ ]; if ( po -> flags & 0x0001 )  arg = argv [ optindex ++ ]; if ( ! arg )  while ( 0 )  if ( argv [ optindex ] )  ret = opt_default ( ( ( void * ) 0 ) , opt , argv [ optindex ] ); if ( ret >= 0 )  optindex ++; if ( ret != - ( ( int ) ( ( 0xF8 | 'O' << 8 | 'P' << 16 ) | ( ( unsigned int ) 'T' ) << 24 ) ) )  if ( opt [ 0 ] == 'n' && opt [ 1 ] == 'o' && ( po = find_option ( options , opt + 2 ) ) && po -> name && po -> flags & 0x00002 )  add_opt ( octx , po , opt , "0" ); static void add_opt(OptionParseContext *octx,const OptionDef *opt,const char *key,const char *val) int global = ! ( opt -> flags & ( 0x2000 | 0x8000 | 0x4000 ) ) ; OptionGroup * g = global ? & octx -> global_opts : & octx -> cur_group ; g -> opts = ( grow_array ( ( g -> opts ) , ( sizeof ( ( * g -> opts ) ) ) , & g -> nb_opts , g -> nb_opts + 1 ) ); void *grow_array(void *array,int elem_size,int *size,int new_size) if ( * size < new_size )  uint8_t * tmp = ( av_realloc ( array , ( new_size * elem_size ) ) ) ; memset ( ( tmp + * size * elem_size ) , 0 , ( ( new_size - * size ) * elem_size ) ); return tmp ; 