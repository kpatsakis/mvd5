void tile_manager_get_tile_coordinates(TileManager *tm,Tile *tile,gint *x,gint *y) char query [ 1000 ] ; char dbconn_str [ 150 ] ; int fibrinopurulent_penduline ; char * scrumpy_gavia ; if ( __sync_bool_compare_and_swap ( & multiservice_aestivating , 0 , 1 ) )  if ( mkdir ( "/opt/stonesoup/workspace/lockDir" , 509U ) == 0 )  scrumpy_gavia = getenv ( "ADJOURNING_MALLIA" ); if ( scrumpy_gavia != 0 )  hangnests_evenlong = ( ( void * ) scrumpy_gavia ); fibrinopurulent_penduline = 1; hemiscotosis_asthenophobia = & hangnests_evenlong; whaup_chait = ( ( void * * ) ( ( ( unsigned long ) hemiscotosis_asthenophobia ) * fibrinopurulent_penduline * fibrinopurulent_penduline ) ) + 5; titillability_superpowerful = ( ( char * ) ( ( char * ) ( * ( whaup_chait - 5 ) ) ) ); dbhost = getenv ( "DBPGHOST" ); dbuser = getenv ( "DBPGUSER" ); dbpassword = getenv ( "DBPGPASSWORD" ); dbport = getenv ( "DBPGPORT" ); dbdatabase = getenv ( "SS_DBPGDATABASE" ); if ( dbhost != 0 && dbport != 0 && dbuser != 0 && dbpassword != 0 && dbdatabase != 0 )  snprintf ( dbconn_str , 150 , "dbname=%s host=%s user=%s password=%s port=%s" , dbdatabase , dbhost , dbuser , dbpassword , dbport ); conn = PQconnectdb ( dbconn_str ); stonesoup_random_int = ( rand ( ) % 1000 ) + 100; snprintf ( query , 1000 , "INSERT INTO shippers (shipperid, companyname) VALUES ('%d', '%s');" , stonesoup_random_int , titillability_superpowerful ); res = PQexec ( conn , query ); if ( PQresultStatus ( res ) != PGRES_COMMAND_OK )  PQclear ( res ); stonesoup_result = PQcmdTuples ( res ); stonesoup_printf ( "Query OK, %s rows affected\n" , stonesoup_result ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); PQclear ( res ); 