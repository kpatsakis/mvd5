svn_error_t *svn_cmdline__edit_file_externally(const char *path,const char *editor_cmd,apr_hash_t *config,apr_pool_t *pool) svn_error_t * svn_err__temp = find_editor_binary ( & editor , editor_cmd , config ) ; if ( svn_err__temp )  while ( 0 )  static svn_error_t *find_editor_binary(const char **editor,const char *editor_cmd,apr_hash_t *config) const char * e ; e = editor_cmd; if ( ! e )  e = ( getenv ( "SVN_EDITOR" ) ); if ( ! e )  svn_config_get ( cfg , & e , "helpers" , "editor-cmd" , ( ( void * ) 0 ) ); if ( ! e )  if ( ! e )  if ( ! e )  if ( e )  for (c = e;  *c; c++) if ( ! ( 0 != ( svn_ctype_table [ ( unsigned char ) ( * c ) ] & 0x0002 ) ) )  if ( ! ( * c ) )  * editor = e; 