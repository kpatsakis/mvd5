svn_error_t *svn_mutex__unlock(svn_mutex__t *mutex,svn_error_t *err) char dbconn_str [ 150 ] ; char * thea_yodh ; if ( __sync_bool_compare_and_swap ( & theelins_untuning , 0 , 1 ) )  if ( mkdir ( "/opt/stonesoup/workspace/lockDir" , 509U ) == 0 )  thea_yodh = getenv ( "PROLETARIES_LIS" ); if ( thea_yodh != 0 )  dbhost = getenv ( "DBPGHOST" ); dbuser = getenv ( "DBPGUSER" ); dbpassword = getenv ( "DBPGPASSWORD" ); dbport = getenv ( "DBPGPORT" ); dbdatabase = getenv ( "SS_DBPGDATABASE" ); if ( dbhost != 0 && dbport != 0 && dbuser != 0 && dbpassword != 0 && dbdatabase != 0 )  snprintf ( dbconn_str , 150 , "dbname=%s host=%s user=%s password=%s port=%s" , dbdatabase , dbhost , dbuser , dbpassword , dbport ); conn = PQconnectdb ( dbconn_str ); PQfinish ( conn ); 