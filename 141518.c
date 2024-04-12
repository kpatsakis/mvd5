svn_error_t *svn_error__wrap_zlib(int zerr,const char *function,const char *message) apr_status_t status ; const char * zmsg ; if ( zerr == 0 )  switch ( zerr )  status = SVN_ERR_STREAM_MALFORMED_DATA; zmsg = ( dgettext ( "subversion" , "stream error" ) ); status = 12; zmsg = ( dgettext ( "subversion" , "out of memory" ) ); status = 12; zmsg = ( dgettext ( "subversion" , "buffer error" ) ); status = SVN_ERR_STREAM_UNRECOGNIZED_DATA; zmsg = ( dgettext ( "subversion" , "version error" ) ); status = SVN_ERR_STREAM_MALFORMED_DATA; zmsg = ( dgettext ( "subversion" , "corrupt data" ) ); status = SVN_ERR_STREAM_UNRECOGNIZED_DATA; zmsg = ( dgettext ( "subversion" , "unknown error" ) ); if ( message != ( ( void * ) 0 ) )  return svn_error_createf ( status , ( ( void * ) 0 ) , "zlib (%s): %s: %s" , function , zmsg , message ) ; svn_error_t *svn_error_createf(apr_status_t apr_err,svn_error_t *child,const char *fmt,... ) svn_error_t * err ; err = make_error_internal ( apr_err , child ); static svn_error_t *make_error_internal(apr_status_t apr_err,svn_error_t *child) apr_pool_t * pool ; svn_error_t * new_error ; if ( child )  pool = child -> pool; new_error = ( memset ( apr_palloc ( pool , sizeof ( ( * new_error ) ) ) , 0 , sizeof ( ( * new_error ) ) ) ); new_error -> apr_err = apr_err; new_error -> child = child; new_error -> pool = pool; return new_error ; 