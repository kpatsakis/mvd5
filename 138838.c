svn_error_t *svn_config_get_bool(svn_config_t *cfg,svn_boolean_t *valuep,const char *section,const char *option,svn_boolean_t default_value) const char * tmp_value ; svn_config_get ( cfg , & tmp_value , section , option , ( ( void * ) 0 ) ); void svn_config_get(svn_config_t *cfg,const char **valuep,const char *section,const char *option,const char *default_value) * valuep = default_value; if ( cfg )  cfg_section_t * sec ; cfg_option_t * opt = find_option ( cfg , section , option , & sec ) ; static cfg_option_t *find_option(svn_config_t *cfg,const char *section,const char *option,cfg_section_t **sectionp) void * sec_ptr ; sec_ptr = apr_hash_get ( cfg -> sections , ( cfg -> tmp_key -> data ) , ( cfg -> tmp_key -> len ) ); if ( sec_ptr != ( ( void * ) 0 ) && option != ( ( void * ) 0 ) )  cfg_section_t * sec = sec_ptr ; cfg_option_t * opt ; opt = ( apr_hash_get ( sec -> options , ( cfg -> tmp_key -> data ) , ( cfg -> tmp_key -> len ) ) ); if ( opt == ( ( void * ) 0 ) && apr_strnatcasecmp ( section , "DEFAULT" ) != 0 )  opt = find_option ( cfg , "DEFAULT" , option , & sec ); static cfg_option_t *find_option(svn_config_t *cfg,const char *section,const char *option,cfg_section_t **sectionp) void * sec_ptr ; sec_ptr = apr_hash_get ( cfg -> sections , ( cfg -> tmp_key -> data ) , ( cfg -> tmp_key -> len ) ); if ( sec_ptr != ( ( void * ) 0 ) && option != ( ( void * ) 0 ) )  cfg_section_t * sec = sec_ptr ; cfg_option_t * opt ; opt = ( apr_hash_get ( sec -> options , ( cfg -> tmp_key -> data ) , ( cfg -> tmp_key -> len ) ) ); if ( opt == ( ( void * ) 0 ) && apr_strnatcasecmp ( section , "DEFAULT" ) != 0 )  opt = find_option ( cfg , "DEFAULT" , option , & sec ); return opt ; return ( ( void * ) 0 ) ; return opt ; return ( ( void * ) 0 ) ; if ( opt != ( ( void * ) 0 ) )  make_string_from_option ( valuep , cfg , sec , opt , ( ( void * ) 0 ) ); static void make_string_from_option(const char **valuep,svn_config_t *cfg,cfg_section_t *section,cfg_option_t *opt,apr_pool_t *x_pool) if ( ! opt -> expanded )  if ( opt -> value && strchr ( opt -> value , 37 ) )  