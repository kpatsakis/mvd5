void svn_dirent_split(const char **dirpath,const char **base_name,const char *dirent,apr_pool_t *pool) if ( dirpath )  * dirpath = ( svn_dirent_dirname ( dirent , pool ) ); char *svn_dirent_dirname(const char *dirent,apr_pool_t *pool) apr_size_t len = strlen ( dirent ) ; if ( len == dirent_root_length ( dirent , len ) )  static apr_size_t dirent_root_length(const char *dirent,apr_size_t len) if ( len >= 1 && dirent [ 0 ] == 47 )  return apr_pstrmemdup ( pool , dirent , len ) ; return apr_pstrmemdup ( pool , dirent , dirent_previous_segment ( dirent , len ) ) ; static apr_size_t dirent_previous_segment(const char *dirent,apr_size_t len) if ( len == 0 )  while ( len > 0 && dirent [ len ] != 47 )  if ( dirent_root_length ( dirent , len + 1 ) == len + 1 )  static apr_size_t dirent_root_length(const char *dirent,apr_size_t len) if ( len >= 1 && dirent [ 0 ] == 47 )  return len + 1 ; return len ; 