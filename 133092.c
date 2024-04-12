svn_error_t *svn_uri_condense_targets(const char **pcommon,apr_array_header_t **pcondensed_targets,const apr_array_header_t *targets,svn_boolean_t remove_redundancies,apr_pool_t *result_pool,apr_pool_t *scratch_pool) int i ; apr_array_header_t * uri_targets ; svn_boolean_t * removed ; if ( targets -> nelts <= 0 )  if ( targets -> nelts == 1 )  removed = ( memset ( apr_palloc ( scratch_pool , ( targets -> nelts ) * sizeof ( svn_boolean_t ) ) , 0 , ( targets -> nelts ) * sizeof ( svn_boolean_t ) ) ); uri_targets = apr_array_make ( scratch_pool , targets -> nelts , ( sizeof ( const char * ) ) ); if ( pcondensed_targets != ( ( void * ) 0 ) )  if ( remove_redundancies )  for (i = 0; i < uri_targets -> nelts; ++i) int j ; if ( removed [ i ] )  for (j = i + 1; j < uri_targets -> nelts; ++j) const char * uri_i ; const char * uri_j ; const char * ancestor ; if ( removed [ j ] )  uri_i = ( ( const char * * ) ( uri_targets -> elts ) ) [ i ]; uri_j = ( ( const char * * ) ( uri_targets -> elts ) ) [ j ]; ancestor = ( svn_uri_get_longest_ancestor ( uri_i , uri_j , scratch_pool ) ); if ( ( * ancestor ) == '\0' )  if ( strcmp ( ancestor , uri_i ) == 0 )  removed [ j ] = ! 0; if ( strcmp ( ancestor , uri_j ) == 0 )  removed [ i ] = ! 0; char *svn_uri_get_longest_ancestor(const char *uri1,const char *uri2,apr_pool_t *pool) apr_size_t uri_ancestor_len ; apr_size_t i = 0 ; while ( 1 )  if ( uri1 [ i ] != uri2 [ i ] )  if ( uri1 [ i ] == ':' )  i ++; i += 3; uri_ancestor_len = get_longest_ancestor_length ( type_uri , uri1 + i , uri2 + i , pool ); static apr_size_t get_longest_ancestor_length(path_type_t types,const char *path1,const char *path2,apr_pool_t *pool) apr_size_t path2_len ; path2_len = strlen ( path2 ); if ( i == path1_len || i == path2_len )  if ( i == path1_len && path2 [ i ] == 47 || i == path2_len && path1 [ i ] == 47 || i == path1_len && i == path2_len )  